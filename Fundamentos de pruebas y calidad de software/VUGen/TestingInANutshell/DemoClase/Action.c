//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'https://app.platica.mx/login/register'", "snapshot=Action_1.inf");
	truclient_step("2", "Registrarme", "snapshot=Action_2.inf");
	{
		truclient_step("2.1", "Click on Correo electrónico emailbox", "snapshot=Action_2.1.inf");
		truclient_step("2.2", "Type LR.getParam('My_email'); in Correo electrónico emailbox", "snapshot=Action_2.2.inf");
		truclient_step("2.3", "Type ********** in Contraseña passwordbox", "snapshot=Action_2.3.inf");
		truclient_step("2.4", "Type ********** in Confirmar contraseña passwordbox", "snapshot=Action_2.4.inf");
		truclient_step("2.5", "Click on Registrarme button", "snapshot=Action_2.5.inf");
	}
	truclient_step("3", "Click on Código de acceso textbox", "snapshot=Action_3.inf");
	truclient_step("4", "Type platicamx-beta in Código de acceso textbox", "snapshot=Action_4.inf");
	truclient_step("5", "Click on Siguiente button", "snapshot=Action_5.inf");
	truclient_step("6", "Crear workspace", "snapshot=Action_6.inf");
	{
		truclient_step("6.1", "Click on Nombre textbox", "snapshot=Action_6.1.inf");
		truclient_step("6.2", "Type Luis in Nombre textbox", "snapshot=Action_6.2.inf");
		truclient_step("6.3", "Type Robles in Apellidos textbox", "snapshot=Action_6.3.inf");
		truclient_step("6.4", "Type 4499040225 in Teléfono textbox", "snapshot=Action_6.4.inf");
		truclient_step("6.5", "Type UPA in Nombre de la empresa textbox", "snapshot=Action_6.5.inf");
		truclient_step("6.6", "Click on Crear workspace button", "snapshot=Action_6.6.inf");
	}
	truclient_step("7", "Click on element (1)", "snapshot=Action_7.inf");
	truclient_step("8", "Click on Cerrar sesión", "snapshot=Action_8.inf");
	truclient_step("9", "Click on Cerrar sesión", "snapshot=Action_9.inf");

	return 0;
}
