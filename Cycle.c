Cycle()
{
	srand(time(NULL));
  	randomT = rand() % 10;
	lr_output_message("Number of tickets= %d",randomT);
	for(i;i<randomT;i++){
		Action();
	}
	
	lr_output_message("Total Number of tickets= %d",atoi(lr_eval_string("{NumberOfTickets}")));
	return 0;
}