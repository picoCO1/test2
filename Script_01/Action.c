//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Call Function MainLibrary.Google-BR.Simple.Search", "snapshot=Action_1.inf");
	truclient_step("2", "Call Function SecondLibrary.NavegateMenus", "snapshot=Action_2.inf");
	truclient_step("3", "Call Function MainLibrary.Google-AU.Simple.Search", "snapshot=Action_3.inf");
	truclient_step("4", "Call Function SecondLibrary.NavegateMenus", "snapshot=Action_4.inf");
	truclient_step("5", "Call Function MainLibrary.Google-US.Simple.Search", "snapshot=Action_5.inf");
	truclient_step("6", "Call Function SecondLibrary.NavegateMenus", "snapshot=Action_6.inf");
	truclient_step("7", "Call Function MainLibrary.Google-US.Simple.Search", "snapshot=Action_7.inf");
	truclient_step("8", "Call Function SecondLibrary.NavegateMenus", "snapshot=Action_8.inf");

	return 0;
}
