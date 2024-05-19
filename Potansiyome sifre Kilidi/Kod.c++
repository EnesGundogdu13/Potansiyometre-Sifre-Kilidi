int pot[5];
int sifre[5]={1,0,0,0,0};
int i;
bool kontrol = false;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  pot[0] = analogRead(A0);
  pot[1] = analogRead(A1);
  pot[2] = analogRead(A2);
  pot[3] = analogRead(A3);
  pot[4] = analogRead(A4);
  for (i=0;i<=4;i++)
  {
  	pot[i]= map(pot[i],0,1023,0,6);
  	Serial.print(pot[i]);
  }
  for(i=0; i<=4;i++)
  {
  	if(sifre[i]==pot[i])
    {
      kontrol = true;
    }
    else
    {
      kontrol = false;
      break;
    }
  }  
    if (kontrol==false)
    {
      Serial.println(" Giris basarisiz");
    }
    else if (kontrol==true)
    {
      Serial.println(" Giris basarili");
    }
  delay(3000);
}