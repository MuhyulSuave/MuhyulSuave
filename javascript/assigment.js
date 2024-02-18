function CalculatePartnerShare(){
    const partnerSharePercent = 20;
    const profit = 5000; 
   const partnerShare = (profit * partnerSharePercent) / 100;

   return partnerShare;
}
const partnerShare = CalculatePartnerShare(); 

console.log(` my partner's share is $${partnerShare}`);