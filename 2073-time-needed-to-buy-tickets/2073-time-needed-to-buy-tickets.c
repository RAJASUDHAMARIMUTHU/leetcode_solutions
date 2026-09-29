int timeRequiredToBuy(int* tickets, int ticketsSize, int k)
{
    int sum = 0;
    
    for(int i = 0; i < ticketsSize; i++)
    {
        if(i <= k)
        {
            sum += (tickets[i] < tickets[k]) ? tickets[i] : tickets[k];
        }
        else
        {
            int limit = tickets[k] - 1;
            
            sum += (tickets[i] < limit) ? tickets[i] : limit;
        }
    }
    
    return sum;
}