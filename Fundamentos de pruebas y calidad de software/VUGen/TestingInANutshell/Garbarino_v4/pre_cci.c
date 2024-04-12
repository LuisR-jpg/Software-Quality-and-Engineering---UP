# 1 "c:\\users\\lalor\\documents\\git\\software-quality-and-engineering---up\\fundamentos de pruebas y calidad de software\\vugen\\testinginanutshell\\garbarino_v4\\\\combined_Garbarino_v4.c"
# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 







int   lr_cyberark_get_vault(char * first_param, ...);
int   lr_cyberark_get_vault_no_ellipsis(const char* first_param, char** arguments, int argCount);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\users\\lalor\\documents\\git\\software-quality-and-engineering---up\\fundamentos de pruebas y calidad de software\\vugen\\testinginanutshell\\garbarino_v4\\\\combined_Garbarino_v4.c" 2

# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\users\\lalor\\documents\\git\\software-quality-and-engineering---up\\fundamentos de pruebas y calidad de software\\vugen\\testinginanutshell\\garbarino_v4\\\\combined_Garbarino_v4.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);

  int					 
web_util_set_request_header(
	  const char *		aRequestHeaderNameStr,
	  const char *		aRequestHeaderValueStr);

 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrw_custom_body.h" 1
 





# 8 "globals.h" 2





 
 





# 3 "c:\\users\\lalor\\documents\\git\\software-quality-and-engineering---up\\fundamentos de pruebas y calidad de software\\vugen\\testinginanutshell\\garbarino_v4\\\\combined_Garbarino_v4.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\lalor\\documents\\git\\software-quality-and-engineering---up\\fundamentos de pruebas y calidad de software\\vugen\\testinginanutshell\\garbarino_v4\\\\combined_Garbarino_v4.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");
	web_cache_cleanup();
	web_cleanup_cookies();


	web_url("www.garbarino.com", 
		"URL=https://www.garbarino.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t107.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("collect", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712891581829&gcd=13l3l3l3l1&npa=0&dma=0&cid=147003939.1712891588&ul=es-419&are=1&pscdl=noapi&_geo=1&_rdi=1&_s=1&dt=Garbarino&dl=https%3A%2F%2Fwww.garbarino.com%2F&sid=1712891587&sct=1&seg=0&en=page_view&_fv=1&_nsi=1&_ss=1&_ee=1&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&tfd=11607", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("collect_2", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712891581829&gcd=13l3l3l3l1&npa=0&dma=0&cid=147003939.1712891588&ul=es-419&are=1&pscdl=noapi&_geo=1&_rdi=1&cu=ARS&sid=1712891587&sct=1&seg=0&dl=https%3A%2F%2Fwww.garbarino.com%2F&dt=Garbarino&_s=2&tfd=12093", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t109.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=en=view_item_list&_ee=1&pr1=afDrubbit~idSASMS711BLGLAR~nmSamsung%20Galaxy%20S23%20FE%205G%20Fan%20Edition%20128%20GB%2F8%20GB%20RAM%20Menta~pr1001900~ds163099~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%201001900.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp0&pr2=afDrubbit~idSASMG990EZWAR~nmSamsung%20Galaxy%20S21%20FE%205G%20128%20GB%20%2F%206%20GB%20RAM%20White%20Fan%20Edition~"
		"pr827090~ds305909~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20827090.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp1&pr3=afDrubbit~idSASMF731BZAKAR~nmSamsung%20Galaxy%20Z%20Flip5%205G%20Dual-SIM%20512%20GB%20%2F%208%20GB%20RAM%20Graphit~pr1489200~ds700799~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~"
		"v0ARS~c5ARS%201489200.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp2&pr4=afDrubbit~idSASMS918BZGMAR~nmSamsung%20Galaxy%20S23%20Ultra%20256%20GB%20Green%20SM-S918BZGM~pr1742400~ds677599~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%201742400.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp3&pr5=afDrubbit~id907_185_ME-S518-AR-V-TDF~"
		"nmCelular%20Quantum%20Q-Test%205%2C45%22%20Octa-Core%2032%2F1GB%20Android%2011%20Violeta~pr71999~ds99000~qt1~breNOVA~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%2071999.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp4&pr6=afDrubbit~id907_185_S509N-AR-TDF-NEG~nmCelular%20Quantum%20YOLO%203G%205%22%2032GB%20Android%20Go%20Negro~pr118449~ds84050~qt1~brQuantum~"
		"caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20118449.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp5&pr7=afDrubbit~id112_001_CEL003~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Azul~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~"
		"li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp6&pr8=afDrubbit~id112_001_CEL008~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Blanco~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp7&pr9=afDrubbit~id114_001_CEL008~"
		"nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Blanco~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp8&pr10=afDrubbit~id112_001_CEL005~nmCelular%20Quantum%20Q03%206.22%22%20octa-core%202%2B64%20GB%208%2B5MP%20Android%0A13%20Gris~pr199000~ds0~qt1~brQuantum~"
		"caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20199000.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp9&pr11=afDrubbit~id112_001_CEL007~nmCelular%20Quantum%20Q30%206%2C5%22%204G%20Octa-Core%206%2F128%20GB%2048%2B5%2B2%2F8%0AMP%20Android%2012%20Negro~pr257499~ds0~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~"
		"c5ARS%20257499.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp10&pr12=afDrubbit~idSASMA346MZSBAR~nmSamsung%20Galaxy%20A34%205G%20128%20GB%20%2F%206%20GB%20RAM%2048MP%20SM-A346MZSBARO~pr695999~ds0~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20695999.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp11&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&epn.value=7022028"
		"&_et=8\r\nen=view_item_list&_ee=1&pr1=afDrubbit~idSASMS711BLGLAR~nmSamsung%20Galaxy%20S23%20FE%205G%20Fan%20Edition%20128%20GB%2F8%20GB%20RAM%20Menta~pr1001900~ds163099~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%201001900.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp0&pr2=afDrubbit~idSASMG990EZWAR~nmSamsung%20Galaxy%20S21%20FE%205G%20128%20GB%20%2F%206%20GB%20RAM%20White%20Fan%20Edition"
		"~pr827090~ds305909~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20827090.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp1&pr3=afDrubbit~idSASMF731BZAKAR~nmSamsung%20Galaxy%20Z%20Flip5%205G%20Dual-SIM%20512%20GB%20%2F%208%20GB%20RAM%20Graphit~pr1489200~ds700799~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~"
		"v0ARS~c5ARS%201489200.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp2&pr4=afDrubbit~idSASMS918BZGMAR~nmSamsung%20Galaxy%20S23%20Ultra%20256%20GB%20Green%20SM-S918BZGM~pr1742400~ds677599~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%201742400.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp3&pr5=afDrubbit~id907_185_ME-S518-AR-V-TDF~"
		"nmCelular%20Quantum%20Q-Test%205%2C45%22%20Octa-Core%2032%2F1GB%20Android%2011%20Violeta~pr71999~ds99000~qt1~breNOVA~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%2071999.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp4&pr6=afDrubbit~id907_185_S509N-AR-TDF-NEG~nmCelular%20Quantum%20YOLO%203G%205%22%2032GB%20Android%20Go%20Negro~pr118449~ds84050~qt1~brQuantum~"
		"caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20118449.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp5&pr7=afDrubbit~id112_001_CEL003~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Azul~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~"
		"li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp6&pr8=afDrubbit~id112_001_CEL008~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Blanco~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp7&pr9=afDrubbit~id114_001_CEL008~"
		"nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Blanco~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp8&pr10=afDrubbit~id112_001_CEL005~nmCelular%20Quantum%20Q03%206.22%22%20octa-core%202%2B64%20GB%208%2B5MP%20Android%0A13%20Gris~pr199000~ds0~qt1~brQuantum~"
		"caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20199000.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp9&pr11=afDrubbit~id112_001_CEL007~nmCelular%20Quantum%20Q30%206%2C5%22%204G%20Octa-Core%206%2F128%20GB%2048%2B5%2B2%2F8%0AMP%20Android%2012%20Negro~pr257499~ds0~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~"
		"c5ARS%20257499.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp10&pr12=afDrubbit~idSASMA346MZSBAR~nmSamsung%20Galaxy%20A34%205G%20128%20GB%20%2F%206%20GB%20RAM%2048MP%20SM-A346MZSBARO~pr695999~ds0~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20695999.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp11&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&epn.value=7022028"
		"&_et=6\r\nen=view_item_list&_ee=1&pr1=afDrubbit~id114_001_TV012~nmSmart%20TV%20Skyworth%2065%22%20LED%204K%20UHD%20Frameless%20Android%20TV~pr710062~ds602437~qt1~brSkyworth~caSmart%20Tv%2C%20Audio%20Y%20Video~c2Televisi%C3%B3n~c3Smart%20Tv~k0currencyIso~v0ARS~c5ARS%20710062.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp0&pr2=afDrubbit~id112_001_LAVA012~nmLavarropas%20Carga%20Frontal%206%20Kg%20Blanco%20Drean~pr599999~ds44399~qt1~brDrean~caElectrodom%C3%A9sticos~c2Lavado~"
		"c3Lavarropas%20Autom%C3%A1ticos~k0currencyIso~v0ARS~c5ARS%20599999.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp1&pr3=afDrubbit~id114_001_MIX000~nmMixer%20Philips%20HR2530%2F50%20400%20W%20Varilla%20Pl%C3%A1stico~pr52002~ds2997~qt1~brPhilips~caElectrodom%C3%A9sticos~c2Peque%C3%B1os%20Electrodom%C3%A9sticos~c3Mixers~k0currencyIso~v0ARS~c5ARS%2052002.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp2&pr4=afDrubbit~id114_001_AUR021~"
		"nmAuriculares%20Motorola%20Buds%20In%20Ear%20085%20Blanco~pr51999~ds24000~qt1~brMotorola~caSmart%20Tv%2C%20Audio%20Y%20Video~c2Audio~c3Auriculares~k0currencyIso~v0ARS~c5ARS%2051999.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp3&pr5=afDrubbit~id114_001_TAB000~nmTablet%20eNova%208%22%20WIFI%202GB%2032GB%20Android%2012%20Negro~pr104704~ds5591.99~qt1~breNOVA~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Inform%C3%A1tica~c3Tablets~k0currencyIso~v0ARS~c5ARS%20104704.00~"
		"li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp4&pr6=afDrubbit~id112_001_CEL003~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Azul~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp5&pr7=afDrubbit~id114_001_TV018~"
		"nmSmart%20Tv%20Motorola%2091MT50G22%2050%20Led%204k%20Uhd%20Android%20Tv%20Google~pr600021~ds25978~qt1~brMotorola~caSmart%20Tv%2C%20Audio%20Y%20Video~c2Televisi%C3%B3n~c3Smart%20Tv~k0currencyIso~v0ARS~c5ARS%20600021.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp6&pr8=afDrubbit~id112_001_CEL008~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Blanco~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~"
		"c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp7&pr9=afDrubbit~id114_001_LAVA008~nmLavarropas%20Enova%20carga%20vertical%205%20Kg%20blanco~pr509999~ds0~qt1~breNOVA~caElectrodom%C3%A9sticos~c2Lavado~c3Lavarropas%20Autom%C3%A1ticos~k0currencyIso~v0ARS~c5ARS%20509999.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp8&pr10=afDrubbit~id114_001_CAF008~"
		"nmCafetera%20el%C3%A9ctrica%20Black%20and%20Decker%20CM0941B-AR%2012%20Pocillos~pr49302~ds598~qt1~brBlack%20%26%20Decker~caElectrodom%C3%A9sticos~c2Peque%C3%B1os%20Electrodom%C3%A9sticos~c3Cafeteras~k0currencyIso~v0ARS~c5ARS%2049302.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp9&pr11=afDrubbit~id114_001_CEL008~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Blanco~pr206164~ds34625~qt1~brQuantum~"
		"caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp10&pr12=afDrubbit~id112_001_LAVA013~nmLavarropas%20Carga%20Frontal%208%20Kg%20Blanco%20Drean~pr736999~ds0~qt1~brDrean~caElectrodom%C3%A9sticos~c2Lavado~c3Lavarropas%20Autom%C3%A1ticos~k0currencyIso~v0ARS~c5ARS%20736999.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp11&ep.device_type="
		"desktop&ep.site_context=Contexto%20predeterminado&epn.value=4033579&_et=6\r\nen=view_item_list&_ee=1&pr1=afDrubbit~id907_185_ETRDI53TC~nmAire%20Acondicionado%20Electra%20Inverter%20FC%20ETRDI53TC%205200W%204558%20FR~pr1261000~ds667259~qt1~brELECTRA~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Aires%20Acondicionado%20Split~k0currencyIso~v0ARS~c5ARS%201261000.00~liundefined-ProductsCarouselUnified~lp0&pr2=afDrubbit~id911_275_VP20P~nmVentilador%20De%20Pie%20Liliana%2020%22%20%20VP20P%2090W%20Negro"
		"~pr84499~ds54167~qt1~brLiliana~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Calefacci%C3%B3n%20A%20Le%C3%B1a~k0currencyIso~v0ARS~c5ARS%2084499.00~liundefined-ProductsCarouselUnified~lp1&pr3=afDrubbit~id910_1_23249~nmVENTILADOR%20DE%20TECHO%20LAFTDREN%20361A%203%20VELOCIDADES%20LED%2024W%20BLANCO~pr835749~ds0~qt1~brLAFTDREN~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Ventiladores~c4De%20Techo~k0currencyIso~v0ARS~c5ARS%20835749.00~liundefined-ProductsCarouselUnified~lp2&pr4=afDrubbit~"
		"id238104031~nmVentilador%20Turbo%20Yelmo%20Tornado%2020%20Pulgadas%205%20Aspas%203vel%20100w~pr119999~ds0~qt1~brYELMO~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Ventiladores~c4De%20Mesa~k0currencyIso~v0ARS~c5ARS%20119999.00~liundefined-ProductsCarouselUnified~lp3&pr5=afDrubbit~id907_185_323572~nmEstufa%20Sin%20Salida%20Coventry%20MINI%207500%20COV%20Gas%20Natural%20Gris~pr257500~ds117499~qt1~brCoventry~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Calefacci%C3%B3n%20El%C3%A9ctrica~"
		"k0currencyIso~v0ARS~c5ARS%20257500.00~liundefined-ProductsCarouselUnified~lp4&pr6=afDrubbit~id907_185_ME-551IDQ1201F~nmAire%20Acondicionado%20Portatil%20Surrey%20551IDQ1201F%20F%2FC%203000F~pr669499~ds275500~qt1~brSurrey~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Aires%20Acondicionado%20Ventana%20Y%20Portatil~k0currencyIso~v0ARS~c5ARS%20669499.00~liundefined-ProductsCarouselUnified~lp5&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&epn.value=3228246&_et=8\r\nen="
		"view_item_list&_ee=1&pr1=afDrubbit~id907_185_ETRDI53TC~nmAire%20Acondicionado%20Electra%20Inverter%20FC%20ETRDI53TC%205200W%204558%20FR~pr1261000~ds667259~qt1~brELECTRA~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Aires%20Acondicionado%20Split~k0currencyIso~v0ARS~c5ARS%201261000.00~liundefined-ProductsCarouselUnified~lp0&pr2=afDrubbit~id911_275_VP20P~nmVentilador%20De%20Pie%20Liliana%2020%22%20%20VP20P%2090W%20Negro~pr84499~ds54167~qt1~brLiliana~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~"
		"c3Calefacci%C3%B3n%20A%20Le%C3%B1a~k0currencyIso~v0ARS~c5ARS%2084499.00~liundefined-ProductsCarouselUnified~lp1&pr3=afDrubbit~id910_1_23249~nmVENTILADOR%20DE%20TECHO%20LAFTDREN%20361A%203%20VELOCIDADES%20LED%2024W%20BLANCO~pr835749~ds0~qt1~brLAFTDREN~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Ventiladores~c4De%20Techo~k0currencyIso~v0ARS~c5ARS%20835749.00~liundefined-ProductsCarouselUnified~lp2&pr4=afDrubbit~id238104031~"
		"nmVentilador%20Turbo%20Yelmo%20Tornado%2020%20Pulgadas%205%20Aspas%203vel%20100w~pr119999~ds0~qt1~brYELMO~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Ventiladores~c4De%20Mesa~k0currencyIso~v0ARS~c5ARS%20119999.00~liundefined-ProductsCarouselUnified~lp3&pr5=afDrubbit~id907_185_323572~nmEstufa%20Sin%20Salida%20Coventry%20MINI%207500%20COV%20Gas%20Natural%20Gris~pr257500~ds117499~qt1~brCoventry~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Calefacci%C3%B3n%20El%C3%A9ctrica~k0currencyIso~v0ARS~"
		"c5ARS%20257500.00~liundefined-ProductsCarouselUnified~lp4&pr6=afDrubbit~id907_185_ME-551IDQ1201F~nmAire%20Acondicionado%20Portatil%20Surrey%20551IDQ1201F%20F%2FC%203000F~pr669499~ds275500~qt1~brSurrey~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Aires%20Acondicionado%20Ventana%20Y%20Portatil~k0currencyIso~v0ARS~c5ARS%20669499.00~liundefined-ProductsCarouselUnified~lp5&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&epn.value=3228246&_et=4", 
		"LAST");

	lr_think_time(9);

	web_url("11059668143", 
		"URL=https://td.doubleclick.net/td/rul/11059668143?random=1712891587728&cv=11&fst=1712891587728&fmt=3&bg=ffffff&guid=ON&async=1&gtm=45je44a0v9138474532za200&gcd=13l3l3l3l1&dma=0&u_w=1536&u_h=864&url=https%3A%2F%2Fwww.garbarino.com%2F&hn=www.googleadservices.com&frm=0&tiba=Garbarino&value=7022028&currency_code=ARS&npa=0&pscdl=noapi&auid=1498693455.1712891588&uaa=x86&uab=64&uafvl=Google%2520Chrome%3B123.0.6312.107%7CNot%253AA-Brand%3B8.0.0.0%7CChromium%3B123.0.6312.107&uamb=0&uam=&uap=Windows&uapv="
		"15.0.0&uaw=0&fledge=1&data=event%3Dview_item_list", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("11059668143_2", 
		"URL=https://td.doubleclick.net/td/rul/11059668143?random=1712891587677&cv=11&fst=1712891587677&fmt=3&bg=ffffff&guid=ON&async=1&gtm=45je44a0v9138474532za200&gcd=13l3l3l3l1&dma=0&u_w=1536&u_h=864&url=https%3A%2F%2Fwww.garbarino.com%2F&hn=www.googleadservices.com&frm=0&tiba=Garbarino&value=7022028&currency_code=ARS&npa=0&pscdl=noapi&auid=1498693455.1712891588&uaa=x86&uab=64&uafvl=Google%2520Chrome%3B123.0.6312.107%7CNot%253AA-Brand%3B8.0.0.0%7CChromium%3B123.0.6312.107&uamb=0&uam=&uap=Windows&uapv="
		"15.0.0&uaw=0&fledge=1&data=event%3Dview_item_list", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t111.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("11059668143_3", 
		"URL=https://td.doubleclick.net/td/rul/11059668143?random=1712891587669&cv=11&fst=1712891587669&fmt=3&bg=ffffff&guid=ON&async=1&gtm=45je44a0v9138474532za200&gcd=13l3l3l3l1&dma=0&u_w=1536&u_h=864&url=https%3A%2F%2Fwww.garbarino.com%2F&tiba=Garbarino&hn=www.googleadservices.com&frm=0&npa=0&pscdl=noapi&auid=1498693455.1712891588&uaa=x86&uab=64&uafvl=Google%2520Chrome%3B123.0.6312.107%7CNot%253AA-Brand%3B8.0.0.0%7CChromium%3B123.0.6312.107&uamb=0&uam=&uap=Windows&uapv=15.0.0&uaw=0&fledge=1&data="
		"event%3Dpage_view", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("11059668143_4", 
		"URL=https://td.doubleclick.net/td/rul/11059668143?random=1712891588033&cv=11&fst=1712891588033&fmt=3&bg=ffffff&guid=ON&async=1&gtm=45je44a0v9138474532za200&gcd=13l3l3l3l1&dma=0&u_w=1536&u_h=864&url=https%3A%2F%2Fwww.garbarino.com%2F&hn=www.googleadservices.com&frm=0&tiba=Garbarino&value=4033579&currency_code=ARS&npa=0&pscdl=noapi&auid=1498693455.1712891588&uaa=x86&uab=64&uafvl=Google%2520Chrome%3B123.0.6312.107%7CNot%253AA-Brand%3B8.0.0.0%7CChromium%3B123.0.6312.107&uamb=0&uam=&uap=Windows&uapv="
		"15.0.0&uaw=0&fledge=1&data=event%3Dview_item_list", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t113.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("collect_3", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712891581829&gcd=13l3l3l3l1&npa=0&dma=0&cid=147003939.1712891588&ul=es-419&are=1&pscdl=noapi&_geo=1&_rdi=1&_s=3&cu=ARS&sid=1712891587&sct=1&seg=0&dl=https%3A%2F%2Fwww.garbarino.com%2F&dt=Garbarino&tfd=17094", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=en=view_item_list&_ee=1&pr1=afDrubbit~id200250080~nmLavarropas%20Digital%206.5kg%20Samsung%20Ww65a40000s%201000rpm%20Frontal~pr899999~ds300000~qt1~brSamsung~caElectrodom%C3%A9sticos~c2Lavado~c3Lavarropas%20Autom%C3%A1ticos~k0currencyIso~v0ARS~c5ARS%20899999.00~lirelated-products~lp0&pr2=afDrubbit~id112_001_LAVA012~nmLavarropas%20Carga%20Frontal%206%20Kg%20Blanco%20Drean~pr599999~ds44399~qt1~brDrean~caElectrodom%C3%A9sticos~c2Lavado~c3Lavarropas%20Autom%C3%A1ticos~k0currencyIso~v0ARS~"
		"c5ARS%20599999.00~lirelated-products~lp1&pr3=afDrubbit~idSAWD95A4453BXUBG~nmLavasecarropas%20Samsung%209%2C5kg%20con%20Ecobubble%20WD4000T%20Inox~pr1511999~ds0~qt1~brSamsung~caElectrodom%C3%A9sticos~c2Lavado~c3Lavasecarropas~k0currencyIso~v0ARS~c5ARS%201511999.00~lirelated-products~lp2&pr4=afDrubbit~idSAWD95A4453BWUBG~nmLavasecarropas%20Samsung%209%2C5kg%20con%20Ecobubble%20WD4000T%20White~pr1443999~ds0~qt1~brSamsung~caElectrodom%C3%A9sticos~c2Lavado~c3Lavasecarropas~k0currencyIso~v0ARS~"
		"c5ARS%201443999.00~lirelated-products~lp3&pr5=afDrubbit~id114_001_LAVA008~nmLavarropas%20Enova%20carga%20vertical%205%20Kg%20blanco~pr509999~ds0~qt1~breNOVA~caElectrodom%C3%A9sticos~c2Lavado~c3Lavarropas%20Autom%C3%A1ticos~k0currencyIso~v0ARS~c5ARS%20509999.00~lirelated-products~lp4&pr6=afDrubbit~id112_001_LAVA013~nmLavarropas%20Carga%20Frontal%208%20Kg%20Blanco%20Drean~pr736999~ds0~qt1~brDrean~caElectrodom%C3%A9sticos~c2Lavado~c3Lavarropas%20Autom%C3%A1ticos~k0currencyIso~v0ARS~c5ARS%20736999.00~"
		"lirelated-products~lp5&pr7=afDrubbit~id104065009~nmLavarropas%20Bgh%20Bwfa07w21ar%20Automatica%207%20Kg%201000%20Rpm%20Digital~pr780000~ds219999~qt1~brBgh~caElectrodom%C3%A9sticos~c2Lavado~c3Lavarropas%20Autom%C3%A1ticos~k0currencyIso~v0ARS~c5ARS%20780000.00~lirelated-products~lp6&pr8=afDrubbit~id104065010~nmLavarropas%20Automatico%208kg%20Bgh%20Bwfa08w%201200rpm%20Frontal%20Dg%20A%2B%2B~pr800000~ds299999~qt1~brBgh~caElectrodom%C3%A9sticos~c2Lavado~c3Lavarropas%20Autom%C3%A1ticos~k0currencyIso~"
		"v0ARS~c5ARS%20800000.00~lirelated-products~lp7&pr9=afDrubbit~id948_30_41088~nmLavarropas%20Samsung%20Superior%208%20Kg%20Silver%20700Rpm~pr797070~ds88558.86~qt1~brSamsung~caElectrodom%C3%A9sticos~c2Lavado~c3Lavarropas%20Autom%C3%A1ticos~k0currencyIso~v0ARS~c5ARS%20797070.00~lirelated-products~lp8&pr10=afDrubbit~id948_30_43822~nmLAVARROPAS%20SAMSUNG%20WW65A40000S%20-%20SILVER%20INVERTER%20FRONTAL%2065KG%201000RPM~pr910070~ds101118.55~qt1~brSamsung~caElectrodom%C3%A9sticos~c2Lavado~"
		"c3Lavarropas%20Autom%C3%A1ticos~k0currencyIso~v0ARS~c5ARS%20910070.00~lirelated-products~lp9&pr11=afDrubbit~id948_30_43826~nmLAVARROPAS%20SAMSUNG%20WW70AA46BW%20-%20BLANCO%20INVERTER%20FRONTAL%207KG%201400RPM~pr861670~ds95738.81~qt1~brSamsung~caElectrodom%C3%A9sticos~c2Lavado~c3Lavarropas%20Autom%C3%A1ticos~k0currencyIso~v0ARS~c5ARS%20861670.00~lirelated-products~lp10&pr12=afDrubbit~id104065008~nmLavarropas%20Automatico%206kg%20Bgh%20Bwfa06w%20900rpm%20Digital%2015p%20A%2B~pr730000~ds269999~qt1~"
		"brBgh~caElectrodom%C3%A9sticos~c2Lavado~c3Lavarropas%20Autom%C3%A1ticos~k0currencyIso~v0ARS~c5ARS%20730000.00~lirelated-products~lp11&pr13=afDrubbit~id948_30_45541~nmLAVARROPAS%20LG%20WM85WVC5S6P%20FRONTAL%20-%20BLANCO%2089KG%201400RPM%20INVERTER~pr1280100~ds142228.91~qt1~brLG~caElectrodom%C3%A9sticos~c2Lavado~c3Lavarropas%20Autom%C3%A1ticos~k0currencyIso~v0ARS~c5ARS%201280100.00~lirelated-products~lp12&pr14=afDrubbit~id948_30_31475~"
		"nmLavarropas%20Samsung%20Wa70F5S4Udw%20-%20Superior%207%20Kg%20Blanco~pr798070~ds88668.75~qt1~brSamsung~caElectrodom%C3%A9sticos~c2Lavado~c3Lavarropas%20Autom%C3%A1ticos~k0currencyIso~v0ARS~c5ARS%20798070.00~lirelated-products~lp13&pr15=afDrubbit~id948_30_45539~nmLAVARROPAS%20LG%20WM85VVC5S6P%20FRONTAL%20-%20SILVER%2085KG%201400RPM%20INVERTER~pr1286099~ds142899.19~qt1~brLG~caElectrodom%C3%A9sticos~c2Lavado~c3Lavarropas%20Autom%C3%A1ticos~k0currencyIso~v0ARS~c5ARS%201286099.00~lirelated-products~"
		"lp14&pr16=afDrubbit~id948_30_43827~nmLAVARROPAS%20SAMSUNG%20WW70AA46BX%20-%20SILVER%20INVERTER%20FRONTAL%207KG%201400RPM~pr999089~ds110999.99~qt1~brSamsung~caElectrodom%C3%A9sticos~c2Lavado~c3Lavarropas%20Autom%C3%A1ticos~k0currencyIso~v0ARS~c5ARS%20999089.00~lirelated-products~lp15&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&epn.value=14945162&_et=5", 
		"LAST");

	web_url("11059668143_5", 
		"URL=https://td.doubleclick.net/td/rul/11059668143?random=1712891594621&cv=11&fst=1712891594621&fmt=3&bg=ffffff&guid=ON&async=1&gtm=45je44a0v9138474532za200&gcd=13l3l3l3l1&dma=0&u_w=1536&u_h=864&url=https%3A%2F%2Fwww.garbarino.com%2F&hn=www.googleadservices.com&frm=0&tiba=Garbarino&npa=0&pscdl=noapi&auid=1498693455.1712891588&uaa=x86&uab=64&uafvl=Google%2520Chrome%3B123.0.6312.107%7CNot%253AA-Brand%3B8.0.0.0%7CChromium%3B123.0.6312.107&uamb=0&uam=&uap=Windows&uapv=15.0.0&uaw=0&fledge=1&data="
		"event%3Dform_start", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("11059668143_6", 
		"URL=https://td.doubleclick.net/td/rul/11059668143?random=1712891588155&cv=11&fst=1712891588155&fmt=3&bg=ffffff&guid=ON&async=1&gtm=45je44a0v9138474532za200&gcd=13l3l3l3l1&dma=0&u_w=1536&u_h=864&url=https%3A%2F%2Fwww.garbarino.com%2F&hn=www.googleadservices.com&frm=0&tiba=Garbarino&value=14945162&currency_code=ARS&npa=0&pscdl=noapi&auid=1498693455.1712891588&uaa=x86&uab=64&uafvl=Google%2520Chrome%3B123.0.6312.107%7CNot%253AA-Brand%3B8.0.0.0%7CChromium%3B123.0.6312.107&uamb=0&uam=&uap=Windows&uapv="
		"15.0.0&uaw=0&fledge=1&data=event%3Dview_item_list", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("get_info", 
		"URL=https://bot.webpushr.com/prompt/get_info", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t117.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"site_id\":\"BBlgrWPYiRhXLIFaE6w3-ZsHkB6_UWrsUOngFopOURf1z0DOwITornwz-DO_UpqaOB5_7nnMdmLK3DlIwxMzoBk\",\"browser\":\"Chrome\"}", 
		"LAST");

	web_custom_request("session", 
		"URL=https://analytics.webpushr.com/impression/session", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"status\":\"session_new_to_push\",\"site_id\":\"BBlgrWPYiRhXLIFaE6w3-ZsHkB6_UWrsUOngFopOURf1z0DOwITornwz-DO_UpqaOB5_7nnMdmLK3DlIwxMzoBk\"}", 
		"LAST");

	web_custom_request("prompt", 
		"URL=https://analytics.webpushr.com/impression/prompt", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t119.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"status\":\"custom_prompt\",\"site_id\":\"BBlgrWPYiRhXLIFaE6w3-ZsHkB6_UWrsUOngFopOURf1z0DOwITornwz-DO_UpqaOB5_7nnMdmLK3DlIwxMzoBk\"}", 
		"LAST");

	web_url("button", 
		"URL=https://accounts.google.com/gsi/button?theme=filled_blue&text=signin_with&type=standard&shape=pill&size=large&logo_alignment=left&client_id=984956663741-htkkerhb30eaffrqhuvj5ufm8ed44bo7.apps.googleusercontent.com&iframe_id=gsi_588223_626472&as=aR7EmwnWASPMbNR65H5YBA", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t120.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("fedcm.json", 
		"URL=https://accounts.google.com/gsi/fedcm.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("_ga=GA1.1.147003939.1712891588; DOMAIN=www.garbarino.com");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.0.1712891588.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1498693455.1712891588.1531208777.1712891595.1712891594; DOMAIN=www.garbarino.com");

	web_submit_data("signin", 
		"Action=https://www.garbarino.com/api/user/signin", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"email\":\"nalado4430@kravify.com\",\"password\":\"nalado4430\"}", "ENDITEM", 
		"LAST");

	web_add_cookie("_gcl_au=1.1.1498693455.1712891588.1531208777.1712891595.1712891601; DOMAIN=www.garbarino.com");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891604.0.0.0; DOMAIN=www.garbarino.com");

	web_url("products-ids", 
		"URL=https://www.garbarino.com/api/catalog/wishlist/products-ids", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("prompt_2", 
		"URL=https://analytics.webpushr.com/impression/prompt", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"status\":\"Dismiss\",\"site_id\":\"BBlgrWPYiRhXLIFaE6w3-ZsHkB6_UWrsUOngFopOURf1z0DOwITornwz-DO_UpqaOB5_7nnMdmLK3DlIwxMzoBk\"}", 
		"LAST");

	web_add_cookie("_gcl_au=1.1.1498693455.1712891588.1531208777.1712891595.1712891604; DOMAIN=www.garbarino.com");

	web_submit_data("shop", 
		"Action=https://www.garbarino.com/api/catalog/shop", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"filters\":[\"celulares-notebooks-y-tecnologia\",\"celulares-y-telefonos\",\"celulares-libres\"],\"page\":1}", "ENDITEM", 
		"LAST");

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("collect_4", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712891581829&gcd=13l3l3l3l1&npa=0&dma=0&cid=147003939.1712891588&ul=es-419&are=1&pscdl=noapi&_geo=1&_rdi=1&_s=4&uid=47128&sid=1712891587&sct=1&seg=1&dl=https%3A%2F%2Fwww.garbarino.com%2F&dt=Garbarino&en=login&_ee=1&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&ep.method=email&_et=16205&tfd=33300", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("log", 
		"URL=https://play.google.com/log?format=json&hasfast=true&authuser=0", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891613.0.0.0; DOMAIN=www.garbarino.com");

	web_url("8d410290-2116-4244-b917-2523ca7b0585", 
		"URL=https://www.garbarino.com/api/catalog/product/8d410290-2116-4244-b917-2523ca7b0585", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/celulares-notebooks-y-tecnologia/celulares-y-telefonos/celulares-libres", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("collect_5", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712891581829&gcd=13l3l3l3l1&npa=0&dma=0&cid=147003939.1712891588&ul=es-419&are=1&pscdl=noapi&_geo=1&_rdi=1&dt=Samsung%20Galaxy%20S23%20Ultra%20256%20GB%20Green%20SM-S918BZGM%20%7C%20Garbarino&dl=https%3A%2F%2Fwww.garbarino.com%2Fp%2Fsamsung-galaxy-s23-ultra-256-gb-green-sm-s918bzgm%2F8d410290-2116-4244-b917-2523ca7b0585&sid=1712891587&sct=1&seg=1&uid=47128&_s=5&tfd=42250", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=en=page_view&_ee=1&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&_et=8945&dt=Celulares%20Libres%20%7C%20Garbarino&dl=https%3A%2F%2Fwww.garbarino.com%2Fcelulares-notebooks-y-tecnologia%2Fcelulares-y-telefonos%2Fcelulares-libres\r\nen=view_item_list&_ee=1&pr1=afDrubbit~idSASMG990EZWAR~nmSamsung%20Galaxy%20S21%20FE%205G%20128%20GB%20%2F%206%20GB%20RAM%20White%20Fan%20Edition~pr827090~ds305909~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~"
		"c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20827090.00~li%2Fcelulares-notebooks-y-tecnologia%2Fcelulares-y-telefonos%2Fcelulares-libres~lp0&pr2=afDrubbit~idSASMS711BLGLAR~nmSamsung%20Galaxy%20S23%20FE%205G%20Fan%20Edition%20128%20GB%2F8%20GB%20RAM%20Menta~pr1001900~ds163099~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%201001900.00~"
		"li%2Fcelulares-notebooks-y-tecnologia%2Fcelulares-y-telefonos%2Fcelulares-libres~lp1&pr3=afDrubbit~idSASMS918BZGMAR~nmSamsung%20Galaxy%20S23%20Ultra%20256%20GB%20Green%20SM-S918BZGM~pr1742400~ds677599~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%201742400.00~li%2Fcelulares-notebooks-y-tecnologia%2Fcelulares-y-telefonos%2Fcelulares-libres~lp2&pr4=afDrubbit~idSASMF731BZAKAR~"
		"nmSamsung%20Galaxy%20Z%20Flip5%205G%20Dual-SIM%20512%20GB%20%2F%208%20GB%20RAM%20Graphit~pr1489200~ds700799~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%201489200.00~li%2Fcelulares-notebooks-y-tecnologia%2Fcelulares-y-telefonos%2Fcelulares-libres~lp3&pr5=afDrubbit~id907_185_ME-S518-AR-V-TDF~nmCelular%20Quantum%20Q-Test%205%2C45%22%20Octa-Core%2032%2F1GB%20Android%2011%20Violeta~pr71999~ds99000~qt1~"
		"breNOVA~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%2071999.00~li%2Fcelulares-notebooks-y-tecnologia%2Fcelulares-y-telefonos%2Fcelulares-libres~lp4&pr6=afDrubbit~id907_185_S509N-AR-TDF-NEG~nmCelular%20Quantum%20YOLO%203G%205%22%2032GB%20Android%20Go%20Negro~pr118449~ds84050~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~"
		"c5ARS%20118449.00~li%2Fcelulares-notebooks-y-tecnologia%2Fcelulares-y-telefonos%2Fcelulares-libres~lp5&pr7=afDrubbit~id112_001_CEL003~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Azul~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~li%2Fcelulares-notebooks-y-tecnologia%2Fcelulares-y-telefonos%2Fcelulares-libres~lp6&pr8="
		"afDrubbit~id112_001_CEL008~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Blanco~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~li%2Fcelulares-notebooks-y-tecnologia%2Fcelulares-y-telefonos%2Fcelulares-libres~lp7&pr9=afDrubbit~id114_001_CEL008~"
		"nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Blanco~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~li%2Fcelulares-notebooks-y-tecnologia%2Fcelulares-y-telefonos%2Fcelulares-libres~lp8&pr10=afDrubbit~id112_001_CEL005~nmCelular%20Quantum%20Q03%206.22%22%20octa-core%202%2B64%20GB%208%2B5MP%20Android%0A13%20Gris~pr199000~ds0~qt1~"
		"brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20199000.00~li%2Fcelulares-notebooks-y-tecnologia%2Fcelulares-y-telefonos%2Fcelulares-libres~lp9&pr11=afDrubbit~id112_001_CEL007~nmCelular%20Quantum%20Q30%206%2C5%22%204G%20Octa-Core%206%2F128%20GB%2048%2B5%2B2%2F8%0AMP%20Android%2012%20Negro~pr257499~ds0~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~"
		"c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20257499.00~li%2Fcelulares-notebooks-y-tecnologia%2Fcelulares-y-telefonos%2Fcelulares-libres~lp10&pr12=afDrubbit~idSASMA346MZSBAR~nmSamsung%20Galaxy%20A34%205G%20128%20GB%20%2F%206%20GB%20RAM%2048MP%20SM-A346MZSBARO~pr695999~ds0~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20695999.00~"
		"li%2Fcelulares-notebooks-y-tecnologia%2Fcelulares-y-telefonos%2Fcelulares-libres~lp11&pr13=afDrubbit~idSASMA145MLGEAR~nmSamsung%20Galaxy%20A14%20128GB%20%2F%204GB%20RAM%206.6%20%20%2050MP%20SM-A145MLGEARO~pr359999~ds0~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20359999.00~li%2Fcelulares-notebooks-y-tecnologia%2Fcelulares-y-telefonos%2Fcelulares-libres~lp12&pr14=afDrubbit~idSASMA045MZKFAR~"
		"nmSamsung%20Galaxy%20A04%20128%20GB%20%2F%204%20GB%20RAM%20Black%20SM-A045MZKF~pr284999~ds0~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20284999.00~li%2Fcelulares-notebooks-y-tecnologia%2Fcelulares-y-telefonos%2Fcelulares-libres~lp13&pr15=afDrubbit~id907_185_S905-AR-W-TDF~nmCelular%20Quantum%20Q20%20Dual%20SIM%20128%20GB%204GB%20RAM%206%2C1%22%20Blanco~pr216300~ds144881~qt1~brQuantum~"
		"caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20216300.00~li%2Fcelulares-notebooks-y-tecnologia%2Fcelulares-y-telefonos%2Fcelulares-libres~lp14&pr16=afDrubbit~id911_275_LNV-S514_4G-AR-R-TDF~nmCelular%20Quantum%20UP32%205%22%20Rojo%2032GB%20Android%2010~pr149400~ds87932~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~"
		"c5ARS%20149400.00~li%2Fcelulares-notebooks-y-tecnologia%2Fcelulares-y-telefonos%2Fcelulares-libres~lp15&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&epn.value=8032726&_et=12&cu=ARS&dl=https%3A%2F%2Fwww.garbarino.com%2Fcelulares-notebooks-y-tecnologia%2Fcelulares-y-telefonos%2Fcelulares-libres&dt=Celulares%20Libres%20%7C%20Garbarino\r\nen=select_item&_ee=1&pr1=afDrubbit~idSASMS918BZGMAR~nmSamsung%20Galaxy%20S23%20Ultra%20256%20GB%20Green%20SM-S918BZGM~pr1742400~ds677599~qt1~"
		"brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%201742400.00~li%2Fcelulares-notebooks-y-tecnologia%2Fcelulares-y-telefonos%2Fcelulares-libres~lp2&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&epn.value=1742400&_et=3111&cu=ARS&dl=https%3A%2F%2Fwww.garbarino.com%2Fcelulares-notebooks-y-tecnologia%2Fcelulares-y-telefonos%2Fcelulares-libres&dt=Celulares%20Libres%20%7C%20Garbarino\r\nen="
		"page_view&_ee=1&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&_et=448\r\nen=view_item&_ee=1&pr1=afDrubbit~idSASMS918BZGMAR~nmSamsung%20Galaxy%20S23%20Ultra%20256%20GB%20Green%20SM-S918BZGM~pr1742400~ds677599~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%201742400.00&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&epn.value=1742400&_et=8&cu=ARS\r\nen=view_item_list&"
		"_ee=1&pr1=afDrubbit~idSASMF731BZAKAR~nmSamsung%20Galaxy%20Z%20Flip5%205G%20Dual-SIM%20512%20GB%20%2F%208%20GB%20RAM%20Graphit~pr1489200~ds700799~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%201489200.00~lirelated-products~lp0&pr2=afDrubbit~idSASMS711BLGLAR~nmSamsung%20Galaxy%20S23%20FE%205G%20Fan%20Edition%20128%20GB%2F8%20GB%20RAM%20Menta~pr1001900~ds163099~qt1~brSamsung~"
		"caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%201001900.00~lirelated-products~lp1&pr3=afDrubbit~idSASMG990EZWAR~nmSamsung%20Galaxy%20S21%20FE%205G%20128%20GB%20%2F%206%20GB%20RAM%20White%20Fan%20Edition~pr827090~ds305909~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20827090.00~lirelated-products~lp2&pr4=afDrubbit~"
		"id907_185_ME-S518-AR-V-TDF~nmCelular%20Quantum%20Q-Test%205%2C45%22%20Octa-Core%2032%2F1GB%20Android%2011%20Violeta~pr71999~ds99000~qt1~breNOVA~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%2071999.00~lirelated-products~lp3&pr5=afDrubbit~id907_185_S509N-AR-TDF-NEG~nmCelular%20Quantum%20YOLO%203G%205%22%2032GB%20Android%20Go%20Negro~pr118449~ds84050~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~"
		"c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20118449.00~lirelated-products~lp4&pr6=afDrubbit~id112_001_CEL003~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Azul~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~lirelated-products~lp5&pr7=afDrubbit~id112_001_CEL008~"
		"nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Blanco~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~lirelated-products~lp6&pr8=afDrubbit~id114_001_CEL008~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Blanco~pr206164~ds34625~qt1~brQuantum~"
		"caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~lirelated-products~lp7&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&epn.value=4127130&_et=42&cu=ARS", 
		"LAST");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891616.0.0.0; DOMAIN=www.garbarino.com");

	web_submit_data("item", 
		"Action=https://www.garbarino.com/api/cart/item", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/p/samsung-galaxy-s23-ultra-256-gb-green-sm-s918bzgm/8d410290-2116-4244-b917-2523ca7b0585", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"qty\":1,\"refType\":\"product\",\"refId\":\"e455a7d9-00e0-4aaf-8d52-1cdabd443bcb\",\"customization\":{},\"sum\":true}", "ENDITEM", 
		"LAST");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891619.0.0.0; DOMAIN=www.garbarino.com");

	web_url("8d410290-2116-4244-b917-2523ca7b0585_2", 
		"URL=https://www.garbarino.com/api/catalog/product-upsells/8d410290-2116-4244-b917-2523ca7b0585", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/p/samsung-galaxy-s23-ultra-256-gb-green-sm-s918bzgm/8d410290-2116-4244-b917-2523ca7b0585", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("collect_6", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712891581829&gcd=13l3l3l3l1&npa=0&dma=0&cid=147003939.1712891588&ul=es-419&are=1&pscdl=noapi&_geo=1&_rdi=1&_s=6&cu=ARS&sid=1712891587&sct=1&seg=1&dl=https%3A%2F%2Fwww.garbarino.com%2Fp%2Fsamsung-galaxy-s23-ultra-256-gb-green-sm-s918bzgm%2F8d410290-2116-4244-b917-2523ca7b0585&dt=Samsung%20Galaxy%20S23%20Ultra%20256%20GB%20Green%20SM-S918BZGM%20%7C%20Garbarino&uid=47128&en=add_to_cart&_ee=1&pr1="
		"afDrubbit~idSASMS918BZGMAR~nmSamsung%20Galaxy%20S23%20Ultra%20256%20GB%20Green%20SM-S918BZGM~pr1742400~ds677599~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%201742400.00&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&epn.value=1742400&_et=2833&tfd=46229", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t132.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("collect_7", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712891581829&gcd=13l3l3l3l1&npa=0&dma=0&cid=147003939.1712891588&ul=es-419&are=1&pscdl=noapi&_eu=AEA&_geo=1&_rdi=1&_s=7&sid=1712891587&sct=1&seg=1&dl=https%3A%2F%2Fwww.garbarino.com%2Fcheckout%2Finit&dt=Garbarino&uid=47128&en=scroll&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&epn.percent_scrolled=90&_et=2515&tfd=51234", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	lr_think_time(10);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=14:lgNijA9V-jDopJcUR89gLwhhIAML8PNky32covcxt8g&cup2hreq=36874ce99fb0fb1be99c251fae5c3956f39be4a70923546ca20a91221e8b211f", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"accept_locale\":\"ES419500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:2anf@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"ping\":{\"ping_freshness\":\"{3300c599-e9e7-4a60-bce3-f17816fee070}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":"
		"\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{aa54c924-d501-44ad-917c-57fa5ebe7143}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\""
		":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.0312d42f5f3877a12e6f5da85001549cd9dd435debf72aee5652d1f6a550d351\"}]},\"ping\":{\"ping_freshness\":\"{b682fde8-48b9-4ec8-8f22-b180e0b9b810}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"442\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"4.10.2710.0 to Windows (x86/x64)\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"ping\":{\"ping_freshness\":\""
		"{83ad82fc-346c-4fc6-b082-fa41ca907845}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{a015376e-1a7e-4ac9-8f24-902d9b654e61}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\""
		"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{4f5977b5-060a-41ba-a038-468ad6d7bfcb}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\""
		":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6153,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.317672878e66fe3117c5c27c1c7b2bacc00f60863e1a6bebf0a7ffe43353b08b\"}]},\"ping\":{\"ping_freshness\":\"{ed5c0cfc-cd1d-4ae3-b126-2ec048298003}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2024.4.10.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\""
		"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{07673b3e-63b8-4af3-ab2a-b9834490e2f1}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\""
		"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{f8b6fc7b-882b-40dd-8acd-9d99330da333}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\""
		"{5d92dfc0-e1f9-4d3b-af74-44cd61688c5c}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"ping\":{\"ping_freshness\":\"{ecd1f0fe-348f-48a7-93c1-9d84c91bafdf}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f"
		":23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{de0cb083-313b-422b-a031-ebf4a00dc049}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,"
		"\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.0bd20c0ed22291b160114420a22e8ae9fd79a002cff2efdff99285f35a15f629\"}]},\"ping\":{\"ping_freshness\":\"{e319de60-991f-466d-b754-96177b0efb09}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"3026\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{ffa21085-ddf5-4c7d-85fb-ea54cadd5973}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\""
		"ping_freshness\":\"{378250c2-50a4-4a2d-98f3-9aae0d3879a4}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.bd890442b581ed9e10f8f1357de6b3ba6225fd80ba5402ea4e54a1619302c0ed\"}]},\"ping\":{\"ping_freshness\":\"{73c242d8-83b0-49df-8b36-0621425743b1}\",\"rd\":6310},\""
		"updatecheck\":{},\"version\":\"921\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{c2d1219a-f175-4a50-ac70-18ce0daf58f0}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand"
		"\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6153,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.90b91aaa463ef666bf030c7f14b7046738dee86d64321b28cb834d04bbfea4b3\"}]},\"ping\":{\"ping_freshness\":\"{b6f69eb1-391d-4de2-a690-5019a6870516}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2024.3.25.1\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true"
		",\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.e2bd8b511e50117f23382fd6d3ffed78acc500ea28df373bd0e01e24dc286a73\"}]},\"ping\":{\"ping_freshness\":\"{eca2ce3a-469f-449d-8d77-d7bac57ece89}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"8663\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6174,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\""
		"1.2224fd8b6488a5197111194ab074a6d83292959c5ea7f034f46cc51e8a280a50\"}]},\"ping\":{\"ping_freshness\":\"{9b88c576-d7c7-4806-9fbf-73bd3596e8c3}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2024.4.10.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\""
		"ping_freshness\":\"{d665ce17-4fa8-4a5e-b6ec-4d631397f31b}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.120a8783d5ccfe1107dea29a51959fbbebbe1d57ad974dc9ee5b65323c90dab4\"}]},\"ping\":{\"ping_freshness\":\"{fed12d59-9664-428a-91a5-42b33ceb8d46}\",\"rd\":6310},\""
		"updatecheck\":{},\"version\":\"2024.3.27.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.3296\"},\"prodversion\":\"123.0.6312.107\",\"protocol\":\"3.1\",\"requestid\":\"{b06ea4a0-32a7-41e1-9c56-33fdaa748f35}\",\"sessionid\":\""
		"{896a3cc9-75fe-436f-a1c0-6113124973f9}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.372\"},\"updaterversion\":\"123.0.6312.107\"}}", 
		"LAST");
	
	 
	web_reg_save_param("JVS_01",
        "LB=\"pending\",\"totalPaid\":0,\"chash\":\"",
        "RB=\",\"stockControl\":0",
        "ORD=1",
        "LAST");

	web_url("init", 
		"URL=https://www.garbarino.com/api/checkout/init?", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/init", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		"LAST");

	
	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891638.0.0.0; DOMAIN=www.garbarino.com");
	 
	web_reg_save_param("JVS_02",
        "LB=\"checker\":{\"items\":\"",
        "RB=\",\"total\":",
        "ORD=1",
        "LAST");


	web_submit_data("signin_2", 
		"Action=https://www.garbarino.com/api/checkout/load-step/signin", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/signin", 
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"{JVS_01}\",\"checker\":null}", "ENDITEM", 
		"LAST");
	
	lr_think_time(4);
	web_custom_request("collect_9", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712891581829&gcd=13l3l3l3l1&npa=0&dma=0&cid=147003939.1712891588&ul=es-419&are=1&pscdl=noapi&_eu=AAg&_geo=1&_rdi=1&_s=10&sid=1712891587&sct=1&seg=1&dl=https%3A%2F%2Fwww.garbarino.com%2Fcheckout%2Finit&dt=Checkout%20%7C%20Garbarino&uid=47128&en=ads_conversion_Tramitaci_n_de_la_compr_1&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&_et=4&tfd=67918", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t138.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_submit_data("discount", 
		"Action=https://www.garbarino.com/api/checkout/load-step/discount", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/discount", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"{JVS_01}\",\"checker\":{\"items\":\"{JVS_02}\",\"total\":\"b4aceed7a0fb87666d1f00add3faf9b869ee7449\"}}", "ENDITEM", 
		"LAST");

	web_custom_request("collect_10", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712891581829&gcd=13l3l3l3l1&npa=0&dma=0&cid=147003939.1712891588&ul=es-419&are=1&pscdl=noapi&_eu=Ag&_geo=1&_rdi=1&_s=11&dt=Aplic%C3%A1%20descuentos%20%7C%20Checkout%20%7C%20Garbarino&dl=https%3A%2F%2Fwww.garbarino.com%2Fcheckout%2F__HASH__%2Fdiscount&sid=1712891587&sct=1&seg=1&uid=47128&en=page_view&_ee=1&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&_et=9482&tfd=72404", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891648.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1498693455.1712891588.1531208777.1712891595.1712891648; DOMAIN=www.garbarino.com");

	web_submit_data("discount_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/discount", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/discount", 
		"Snapshot=t141.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"{JVS_01}\",\"checker\":{\"items\":\"{JVS_02}\",\"total\":\"b4aceed7a0fb87666d1f00add3faf9b869ee7449\"},\"payload\":{\"noCode\":true}}", "ENDITEM", 
		"LAST");

	web_submit_data("delivery", 
		"Action=https://www.garbarino.com/api/checkout/load-step/delivery", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/delivery", 
		"Snapshot=t142.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"{JVS_01}\",\"checker\":{\"items\":\"{JVS_02}\",\"total\":\"b4aceed7a0fb87666d1f00add3faf9b869ee7449\"}}", "ENDITEM", 
		"LAST");

	web_custom_request("collect_11", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712891581829&gcd=13l3l3l3l1&npa=0&dma=0&cid=147003939.1712891588&ul=es-419&are=1&pscdl=noapi&_eu=AAg&_geo=1&_rdi=1&_s=12&sid=1712891587&sct=1&seg=1&dl=https%3A%2F%2Fwww.garbarino.com%2Fcheckout%2F{JVS_01}%2Fdiscount&dt=Aplic%C3%A1%20descuentos%20%7C%20Checkout%20%7C%20Garbarino&uid=47128&en=ads_conversion_Tramitaci_n_de_la_compr_1&ep.device_type=desktop&"
		"ep.site_context=Contexto%20predeterminado&_et=6&tfd=75540", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t143.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("collect_12", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712891581829&gcd=13l3l3l3l1&npa=0&dma=0&cid=147003939.1712891588&ul=es-419&are=1&pscdl=noapi&_eu=Ag&_geo=1&_rdi=1&_s=13&dt=Elige%20c%C3%B3mo%20recibir%20tu%20compra%20%7C%20Checkout%20%7C%20Garbarino&dl=https%3A%2F%2Fwww.garbarino.com%2Fcheckout%2F__HASH__%2Fdelivery&sid=1712891587&sct=1&seg=1&uid=47128&en=page_view&_ee=1&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&_et=3132&tfd"
		"=75547", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t144.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891651.0.0.0; DOMAIN=www.garbarino.com");

	web_submit_data("calculate", 
		"Action=https://www.garbarino.com/api/checkout/delivery/calculate", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/delivery", 
		"Snapshot=t145.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"{JVS_01}\",\"checker\":{\"items\":\"{JVS_02}\",\"total\":\"b4aceed7a0fb87666d1f00add3faf9b869ee7449\"},\"address\":{\"id\":12074,\"deliveryDefault\":true,\"invoiceDefault\":true,\"street\":\"Manuel Castro\",\"streetNumber\":\"304\",\"apartment\":null,\"floor\":null,\"comment\":null,\"intersection1\":null,\"intersection2\":null,\"city\":\"Lomas de Zamora\",\"userId\":47128,\"zipcodeId\":491,\""
		"zipcode\":{\"id\":491,\"code\":\"1832\",\"stateId\":4,\"state\":{\"id\":4,\"name\":\"Provincia de Buenos Aires\",\"iso\":\"B\",\"countryId\":9,\"country\":{\"id\":9,\"name\":\"Argentina\",\"iso\":\"AR\",\"zipcodeValidation\":\"1\",\"phoneCode\":54,\"phoneValidation\":\"^0[1-3]{1}[0-9]{9}$\",\"langIso\":\"es_AR,es,en_AR,en\",\"continentId\":6,\"continent\":{\"id\":6,\"name\":\"América del Sur\",\"iso\":\"SA\"}}}}}}", "ENDITEM", 
		"LAST");

	web_add_cookie("_gcl_au=1.1.1498693455.1712891588.1531208777.1712891595.1712891651; DOMAIN=www.garbarino.com");

	web_submit_data("delivery_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/delivery", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/delivery", 
		"Snapshot=t146.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"{JVS_01}\",\"checker\":{\"items\":\"{JVS_02}\",\"total\":\"b4aceed7a0fb87666d1f00add3faf9b869ee7449\"},\"payload\":{\"clientAddress\":{\"id\":12074,\"deliveryDefault\":true,\"invoiceDefault\":true,\"street\":\"Manuel Castro\",\"streetNumber\":\"304\",\"apartment\":null,\"floor\":null,\"comment\":null,\"intersection1\":null,\"intersection2\":null,\"city\":\"Lomas de Zamora\",\"userId\":47128,\""
		"zipcodeId\":491,\"zipcode\":{\"id\":491,\"code\":\"1832\",\"stateId\":4,\"state\":{\"id\":4,\"name\":\"Provincia de Buenos Aires\",\"iso\":\"B\",\"countryId\":9,\"country\":{\"id\":9,\"name\":\"Argentina\",\"iso\":\"AR\",\"zipcodeValidation\":\"1\",\"phoneCode\":54,\"phoneValidation\":\"^0[1-3]{1}[0-9]{9}$\",\"langIso\":\"es_AR,es,en_AR,en\",\"continentId\":6,\"continent\":{\"id\":6,\"name\":\"América del Sur\",\"iso\":\"SA\"}}}}},\"selection\":{\"47\":{\"cost\":0,\"currencyId\":null,\"hasCost\""
		":true,\"toAddress\":{\"id\":12074,\"deliveryDefault\":true,\"invoiceDefault\":true,\"street\":\"Manuel Castro\",\"streetNumber\":\"304\",\"apartment\":null,\"floor\":null,\"comment\":null,\"intersection1\":null,\"intersection2\":null,\"city\":\"Lomas de Zamora\",\"userId\":47128,\"zipcodeId\":491,\"zipcode\":{\"id\":491,\"code\":\"1832\",\"stateId\":4,\"state\":{\"id\":4,\"name\":\"Provincia de Buenos Aires\",\"iso\":\"B\",\"countryId\":9,\"country\":{\"id\":9,\"name\":\"Argentina\",\"iso\":\"AR\""
		",\"zipcodeValidation\":\"1\",\"phoneCode\":54,\"phoneValidation\":\"^0[1-3]{1}[0-9]{9}$\",\"langIso\":\"es_AR,es,en_AR,en\",\"continentId\":6,\"continent\":{\"id\":6,\"name\":\"América del Sur\",\"iso\":\"SA\"}}}}},\"deliveryOptionId\":81,\"deliveryOptionKeyname\":\"envio_visuar\",\"sellerId\":47,\"methodKey\":\"Shipping\",\"methodName\":\"Envío a domicilio\",\"integratorKey\":\"custom\",\"integratorName\":\"Personalizado\",\"optionKey\":\"envio_visuar\",\"optionName\":\"Envio a Domicilio\",\""
		"rateKey\":\"__free__\",\"carrierName\":null,\"message\":null,\"data\":{},\"toAddressLine\":\"Manuel Castro 304, Lomas de Zamora, Provincia de Buenos Aires, 1832\",\"hasEta\":true,\"etaMessage\":\"Llega entre el Miércoles y el Viernes 19/04\",\"etaFromDate\":\"2024-04-17T03:14:12.090Z\",\"etaToDate\":\"2024-04-19T03:14:12.090Z\",\"sku\":null,\"checkoutGroup\":null,\"hash\":\"af2390051637deb44c99ea77142b39279f046d99\",\"discountPct\":0,\"discount\":0,\"total\":0}},\"receiver\":{\"firstname\":\""
		"Juan\",\"lastname\":\"Robledo\",\"idNumber\":\"11111111\"}}}", "ENDITEM", 
		"LAST");

	web_custom_request("collect_13", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712891581829&gcd=13l3l3l3l1&npa=0&dma=0&cid=147003939.1712891588&ul=es-419&are=1&pscdl=noapi&_eu=AAg&_geo=1&_rdi=1&_s=14&sid=1712891587&sct=1&seg=1&dl=https%3A%2F%2Fwww.garbarino.com%2Fcheckout%2F{JVS_01}%2Fdelivery&dt=Elige%20c%C3%B3mo%20recibir%20tu%20compra%20%7C%20Checkout%20%7C%20Garbarino&uid=47128&en=ads_conversion_Tramitaci_n_de_la_compr_1&ep.device_type="
		"desktop&ep.site_context=Contexto%20predeterminado&_et=5&tfd=78421", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t147.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891654.0.0.0; DOMAIN=www.garbarino.com");
	
	 
	web_reg_save_param("JVS_03",
        "LB=\"total\":\"",
        "RB=\"},\"checkerTest\"",
        "ORD=1",
        "LAST");


	web_submit_data("payment", 
		"Action=https://www.garbarino.com/api/checkout/load-step/payment", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/payment", 
		"Snapshot=t148.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"{JVS_01}\",\"checker\":{\"items\":\"{JVS_02}\",\"total\":\"b4aceed7a0fb87666d1f00add3faf9b869ee7449\"}}", "ENDITEM", 
		"LAST");

	web_custom_request("collect_14", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712891581829&gcd=13l3l3l3l1&npa=0&dma=0&cid=147003939.1712891588&ul=es-419&are=1&pscdl=noapi&_geo=1&_rdi=1&_s=15&cu=ARS&sid=1712891587&sct=1&seg=1&dl=https%3A%2F%2Fwww.garbarino.com%2Fcheckout%2F{JVS_01}%2Fdelivery&dt=Elige%20c%C3%B3mo%20recibir%20tu%20compra%20%7C%20Checkout%20%7C%20Garbarino&uid=47128&en=add_shipping_info&_ee=1&pr1=afDrubbitShop%20"
		"(https%3A%2F%2Fwww.garbarino.com)~idSASMS918BZGMAR~nmSamsung%20Galaxy%20S23%20Ultra%20256%20GB%20Green%20SM-S918BZGM~qt1~pr1742400~ds677599~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~brSamsung~c5ARS%201742400.00&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&ep.affiliation=DrubbitShop%20(https%3A%2F%2Fwww.garbarino.com)&epn.value=1742400&epn.shipping=0&ep.shipping_tier=Shipping-envio_visuar&_et=2872&tfd=79044", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t149.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("collect_15", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712891581829&gcd=13l3l3l3l1&npa=0&dma=0&cid=147003939.1712891588&ul=es-419&are=1&pscdl=noapi&_eu=Ag&_geo=1&_rdi=1&_s=16&dt=Elige%20la%20forma%20de%20pago%20%7C%20Checkout%20%7C%20Garbarino&dl=https%3A%2F%2Fwww.garbarino.com%2Fcheckout%2F__HASH__%2Fpayment&sid=1712891587&sct=1&seg=1&uid=47128&en=page_view&_ee=1&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&_et=621&tfd=79050", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t150.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891655.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1498693455.1712891588.1531208777.1712891595.1712891655; DOMAIN=www.garbarino.com");

	web_submit_data("payment_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/payment", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/payment", 
		"Snapshot=t151.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"{JVS_01}\",\"checker\":{\"items\":\"{JVS_02}\",\"total\":\"b4aceed7a0fb87666d1f00add3faf9b869ee7449\"},\"payload\":{\"selection\":{\"paymentOptionId\":20,\"image\":{\"id\":1737091,\"url\":\"uploads/7f86f7d8feee2add62c53a3392f8028c8ba5b32a.png\",\"location\":\"cdn\",\"type\":\"image\",\"contentType\":\"image/png\",\"alt\":\"transfer\",\"data\":{\"width\":50,\"height\":50},\"fullUrl\":\"https://"
		"d2eebw31vcx88p.cloudfront.net/garbarino/uploads/7f86f7d8feee2add62c53a3392f8028c8ba5b32a.png\"},\"title\":\"Transferencia Bancaria\",\"messages\":[{\"text\":\"5% de descuento pagando con transferencia bancaria\"}],\"orderMessages\":[{\"text\":\"Tenés 24 hs para transferir y enviarnos tu comprobante a cac@garbarino.com.ar\"}],\"checkoutData\":{},\"method\":{\"methodName\":\"Transferencia Bancaria\",\"methodKey\":\"WireTransfer\",\"unpaidEmail\":true,\"offlinePayment\":true}},\"input\":null}}", "ENDITEM", 
		"LAST");

	web_custom_request("collect_16", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712891581829&gcd=13l3l3l3l1&npa=0&dma=0&cid=147003939.1712891588&ul=es-419&are=1&pscdl=noapi&_eu=AAg&_geo=1&_rdi=1&_s=17&sid=1712891587&sct=1&seg=1&dl=https%3A%2F%2Fwww.garbarino.com%2Fcheckout%2F{JVS_01}%2Fpayment&dt=Elige%20la%20forma%20de%20pago%20%7C%20Checkout%20%7C%20Garbarino&uid=47128&en=ads_conversion_Tramitaci_n_de_la_compr_1&ep.device_type=desktop&"
		"ep.site_context=Contexto%20predeterminado&_et=5&tfd=82403", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t152.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891658.0.0.0; DOMAIN=www.garbarino.com");

	web_submit_data("contact", 
		"Action=https://www.garbarino.com/api/checkout/load-step/contact", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/contact", 
		"Snapshot=t153.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"{JVS_01}\",\"checker\":{\"items\":\"{JVS_02}\",\"total\":\"{JVS_03}\"}}", "ENDITEM", 
		"LAST");

	web_custom_request("collect_17", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712891581829&gcd=13l3l3l3l1&npa=0&dma=0&cid=147003939.1712891588&ul=es-419&are=1&pscdl=noapi&_geo=1&_rdi=1&_s=18&cu=ARS&sid=1712891587&sct=1&seg=1&dl=https%3A%2F%2Fwww.garbarino.com%2Fcheckout%2F{JVS_01}%2Fpayment&dt=Elige%20la%20forma%20de%20pago%20%7C%20Checkout%20%7C%20Garbarino&uid=47128&en=add_payment_info&_ee=1&pr1=afDrubbitShop%20"
		"(https%3A%2F%2Fwww.garbarino.com)~idSASMS918BZGMAR~nmSamsung%20Galaxy%20S23%20Ultra%20256%20GB%20Green%20SM-S918BZGM~qt1~pr1655280.04~ds764718.96~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~brSamsung~c5ARS%201742400.00&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&ep.affiliation=DrubbitShop%20(https%3A%2F%2Fwww.garbarino.com)&epn.value=1655280.04&epn.shipping=0&ep.shipping_tier=Shipping-envio_visuar&ep.payment_type="
		"WireTransfer&_et=3351&tfd=82988", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t154.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("collect_18", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712891581829&gcd=13l3l3l3l1&npa=0&dma=0&cid=147003939.1712891588&ul=es-419&are=1&pscdl=noapi&_eu=Ag&_geo=1&_rdi=1&_s=19&dt=Contacto%20y%20Facturaci%C3%B3n%20%7C%20Checkout%20%7C%20Garbarino&dl=https%3A%2F%2Fwww.garbarino.com%2Fcheckout%2F__HASH__%2Fcontact&sid=1712891587&sct=1&seg=1&uid=47128&en=page_view&_ee=1&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&_et=583&tfd=82993", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t155.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_add_cookie("_gcl_au=1.1.1498693455.1712891588.1531208777.1712891595.1712891658; DOMAIN=www.garbarino.com");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891659.0.0.0; DOMAIN=www.garbarino.com");

	web_url("phone-countries", 
		"URL=https://www.garbarino.com/api/user/phone-countries", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/contact", 
		"Snapshot=t156.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("upload", 
		"URL=https://beacons2.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t157.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_CONNECTION_ABORTED\"},\"network_changed\":false,\"protocol\":\"HTTP\",\"request_age_ms\":70609,\"request_elapsed_ms\":10222,\"sample_rate\":1.0,\"server_ip\":\"192.178.56.162:443\",\"status\":\"tcp.connection.aborted\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CONNECTION_ABORTED\"},\"network_changed\":false,\"protocol\":\"HTTP\",\"request_age_ms\":70556,\""
		"request_elapsed_ms\":10194,\"sample_rate\":1.0,\"server_ip\":\"192.178.56.162:443\",\"status\":\"tcp.connection.aborted\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"http_response_code\":200,\"network_changed\":false,\"protocol\":\"HTTPS\",\"request_age_ms\":70480,\"request_elapsed_ms\":10473,\"sample_rate\":0.05,\"server_ip\":\"192.178.56.162:443\",\"status\":\"ok\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"http_response_code\":200,\"network_changed\""
		":false,\"protocol\":\"QUIC\",\"request_age_ms\":7073,\"request_elapsed_ms\":76,\"sample_rate\":0.05,\"server_ip\":\"192.178.56.162:443\",\"status\":\"ok\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		"LAST");

	web_custom_request("upload_2", 
		"URL=https://beacons.gcp.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t158.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"http_response_code\":200,\"network_changed\":false,\"protocol\":\"QUIC\",\"request_age_ms\":66260,\"request_elapsed_ms\":5045,\"sample_rate\":0.05,\"server_ip\":\"142.250.177.2:443\",\"status\":\"ok\",\"url\":\"https://googleads.g.doubleclick.net/\",\"was_proxied\":false},{\"http_response_code\":200,\"network_changed\":false,\"protocol\":\"QUIC\",\"request_age_ms\":34696,\"request_elapsed_ms\":200,\"sample_rate\":0.05,\"server_ip\":\"142.250.177.2:443\",\"status\":\"ok\",\""
		"url\":\"https://googleads.g.doubleclick.net/\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		"LAST");

	web_custom_request("upload_3", 
		"URL=https://beacons.gcp.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t159.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":61106,\"request_elapsed_ms\":257,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":61008,\"request_elapsed_ms\":274,\""
		"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":60845,\"request_elapsed_ms\":113,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net:"
		":ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":60818,\"request_elapsed_ms\":156,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":60789,\"request_elapsed_ms\":152,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\""
		"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":60760,\"request_elapsed_ms\":172,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\""
		"protocol\":\"\",\"request_age_ms\":60732,\"request_elapsed_ms\":193,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":60700,\"request_elapsed_ms\":218,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\""
		"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":57939,\"request_elapsed_ms\":1094,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":55553,\"request_elapsed_ms\":1081"
		",\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":46363,\"request_elapsed_ms\":204,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net:"
		":ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":46278,\"request_elapsed_ms\":153,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":43475,\"request_elapsed_ms\":353,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\""
		"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":42592,\"request_elapsed_ms\":155,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\""
		"protocol\":\"\",\"request_age_ms\":42495,\"request_elapsed_ms\":109,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":42470,\"request_elapsed_ms\":133,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\""
		"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":40009,\"request_elapsed_ms\":1093,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":20938,\"request_elapsed_ms\":117,"
		"\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":20910,\"request_elapsed_ms\":188,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net:"
		":ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":11458,\"request_elapsed_ms\":1095,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":8316,\"request_elapsed_ms\":259,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\""
		"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":5135,\"request_elapsed_ms\":280,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\""
		"protocol\":\"\",\"request_age_ms\":4810,\"request_elapsed_ms\":86,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":1419,\"request_elapsed_ms\":446,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\""
		"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":867,\"request_elapsed_ms\":296,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.google.com.mx/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":828,\"request_elapsed_ms\":493,\"sample_rate\":1.0,\""
		"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://www.google.com.mx/\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		"LAST");

	web_add_cookie("_gcl_au=1.1.1498693455.1712891588.1531208777.1712891595.1712891659; DOMAIN=www.garbarino.com");

	web_submit_data("contact_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/contact", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/contact", 
		"Snapshot=t160.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"{JVS_01}\",\"checker\":{\"items\":\"{JVS_02}\",\"total\":\"{JVS_03}\"},\"payload\":{\"buyer\":{\"idNumber\":\"11111111\",\"firstname\":\"Juan\",\"lastname\":\"Robledo\",\"phoneCountryId\":9,\"phoneAreaCode\":\"11\",\"phoneNumber\":\"42434534\"},\"invoice\":{\"id\":4077,\"business\":false,\"personFirstname\":\"Juan\",\"personLastname\":\"Robledo\",\"personIdNumber\":\""
		"11111111\",\"businessName\":null,\"businessIdNumber\":null,\"invoiceType\":null,\"userId\":47128},\"invoiceAddress\":{\"id\":12074,\"deliveryDefault\":true,\"invoiceDefault\":true,\"street\":\"Manuel Castro\",\"streetNumber\":\"304\",\"apartment\":null,\"floor\":null,\"comment\":null,\"intersection1\":null,\"intersection2\":null,\"city\":\"Lomas de Zamora\",\"userId\":47128,\"zipcodeId\":491,\"zipcode\":{\"id\":491,\"code\":\"1832\",\"stateId\":4,\"state\":{\"id\":4,\"name\":\"Provincia de Buenos "
		"Aires\",\"iso\":\"B\",\"countryId\":9,\"country\":{\"id\":9,\"name\":\"Argentina\",\"iso\":\"AR\",\"zipcodeValidation\":\"1\",\"phoneCode\":54,\"phoneValidation\":\"^0[1-3]{1}[0-9]{9}$\",\"langIso\":\"es_AR,es,en_AR,en\",\"continentId\":6,\"continent\":{\"id\":6,\"name\":\"América del Sur\",\"iso\":\"SA\"}}}}}}}", "ENDITEM", 
		"LAST");

	web_submit_data("confirm", 
		"Action=https://www.garbarino.com/api/checkout/load-step/confirm", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/confirm", 
		"Snapshot=t161.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"{JVS_01}\",\"checker\":{\"items\":\"{JVS_02}\",\"total\":\"{JVS_03}\"}}", "ENDITEM", 
		"LAST");

	web_custom_request("collect_19", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712891581829&gcd=13l3l3l3l1&npa=0&dma=0&cid=147003939.1712891588&ul=es-419&are=1&pscdl=noapi&_eu=AAg&_geo=1&_rdi=1&_s=20&sid=1712891587&sct=1&seg=1&dl=https%3A%2F%2Fwww.garbarino.com%2Fcheckout%2F{JVS_01}%2Fcontact&dt=Contacto%20y%20Facturaci%C3%B3n%20%7C%20Checkout%20%7C%20Garbarino&uid=47128&en=ads_conversion_Tramitaci_n_de_la_compr_1&ep.device_type=desktop&"
		"ep.site_context=Contexto%20predeterminado&_et=5&tfd=86968", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t162.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("collect_20", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712891581829&gcd=13l3l3l3l1&npa=0&dma=0&cid=147003939.1712891588&ul=es-419&are=1&pscdl=noapi&_eu=Ag&_geo=1&_rdi=1&_s=21&dt=Realiz%C3%A1%20el%20pago%20%7C%20Checkout%20%7C%20Garbarino&dl=https%3A%2F%2Fwww.garbarino.com%2Fcheckout%2F__HASH__%2Fconfirm&sid=1712891587&sct=1&seg=1&uid=47128&en=page_view&_ee=1&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&_et=3971&tfd=86976", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t163.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891663.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1498693455.1712891588.1531208777.1712891595.1712891663; DOMAIN=www.garbarino.com");

	web_submit_data("confirm_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/confirm", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/confirm", 
		"Snapshot=t164.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"{JVS_01}\",\"checker\":{\"items\":\"{JVS_02}\",\"total\":\"{JVS_03}\"},\"payload\":{}}", "ENDITEM",
		"LAST");

	web_custom_request("collect_21", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712891581829&gcd=13l3l3l3l1&npa=0&dma=0&cid=147003939.1712891588&ul=es-419&are=1&pscdl=noapi&_eu=AAg&_geo=1&_rdi=1&_s=22&sid=1712891587&sct=1&seg=1&dl=https%3A%2F%2Fwww.garbarino.com%2Fcheckout%2F{JVS_01}%2Fconfirm&dt=Realiz%C3%A1%20el%20pago%20%7C%20Checkout%20%7C%20Garbarino&uid=47128&en=ads_conversion_Tramitaci_n_de_la_compr_1&ep.device_type=desktop&"
		"ep.site_context=Contexto%20predeterminado&_et=8&tfd=90470", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t165.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891666.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1498693455.1712891588.1531208777.1712891595.1712891666; DOMAIN=www.garbarino.com");

	web_url("177399b5-5eea-488c-9711-53270aca9ad0", 
		"URL=https://www.garbarino.com/user/orders/177399b5-5eea-488c-9711-53270aca9ad0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/confirm", 
		"Snapshot=t166.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("collect_22", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712891581829&gcd=13l3l3l3l1&npa=0&dma=0&cid=147003939.1712891588&ul=es-419&are=1&pscdl=noapi&_geo=1&_rdi=1&_s=24&sid=1712891587&sct=1&seg=1&dl=https%3A%2F%2Fwww.garbarino.com%2Fcheckout%2F{JVS_01}%2Fconfirm&dt=Realiz%C3%A1%20el%20pago%20%7C%20Checkout%20%7C%20Garbarino&uid=47128&en=user_engagement&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&_et="
		"1126&tfd=91746", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t167.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891667.0.0.0; DOMAIN=www.garbarino.com");

	web_url("products-ids_2", 
		"URL=https://www.garbarino.com/api/catalog/wishlist/products-ids", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/orders/177399b5-5eea-488c-9711-53270aca9ad0", 
		"Snapshot=t168.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("177399b5-5eea-488c-9711-53270aca9ad0_2", 
		"URL=https://www.garbarino.com/api/user/order/177399b5-5eea-488c-9711-53270aca9ad0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/orders/177399b5-5eea-488c-9711-53270aca9ad0", 
		"Snapshot=t169.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891668.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1498693455.1712891588.1531208777.1712891595.1712891668; DOMAIN=www.garbarino.com");

	web_url("4120", 
		"URL=https://www.garbarino.com/api/user/order/177399b5-5eea-488c-9711-53270aca9ad0/refresh-delivery-eta/4120", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/orders/177399b5-5eea-488c-9711-53270aca9ad0", 
		"Snapshot=t170.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891672.0.0.0; DOMAIN=www.garbarino.com");

	web_url("phone-countries_2", 
		"URL=https://www.garbarino.com/api/user/phone-countries", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/account", 
		"Snapshot=t171.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("collect_23", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712891667981&gcd=13l3l3l3l1&npa=0&dma=0&cid=147003939.1712891588&ul=es-419&are=1&pscdl=noapi&_geo=1&_rdi=1&dt=Detalle%20de%20compra%20%7C%20Garbarino&dl=https%3A%2F%2Fwww.garbarino.com%2Fuser%2Forders%2F__ID__&sid=1712891587&sct=1&seg=1&dr=https%3A%2F%2Fwww.garbarino.com%2Fcheckout%2F{JVS_01}%2Fconfirm&uid=47128&_s=1&tfd=6666", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t172.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=en=page_view&_ee=1&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&_et=8\r\nen=page_view&_ee=1&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&_et=4201&dt=Mi%20cuenta%20%7C%20Garbarino&dl=https%3A%2F%2Fwww.garbarino.com%2Fuser%2Faccount", 
		"LAST");

	web_add_cookie("_gcl_au=1.1.1498693455.1712891588.1531208777.1712891595.1712891672; DOMAIN=www.garbarino.com");

	web_custom_request("logout", 
		"URL=https://www.garbarino.com/api/user/logout", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/account", 
		"Snapshot=t173.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_url("www.garbarino.com_2", 
		"URL=https://www.garbarino.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/user/account", 
		"Snapshot=t174.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("collect_24", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712891667981&gcd=13l3l3l3l1&npa=0&dma=0&cid=147003939.1712891588&ul=es-419&are=1&pscdl=noapi&_geo=1&_rdi=1&_s=2&sid=1712891587&sct=1&seg=1&dl=https%3A%2F%2Fwww.garbarino.com%2Fuser%2Faccount&dr=https%3A%2F%2Fwww.garbarino.com%2Fcheckout%2F{JVS_01}%2Fconfirm&dt=Mi%20cuenta%20%7C%20Garbarino&uid=47128&en=user_engagement&ep.device_type=desktop&ep.site_context="
		"Contexto%20predeterminado&_et=3808&tfd=10913", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t175.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("collect_25", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712891677659&gcd=13l3l3l3l1&npa=0&dma=0&cid=147003939.1712891588&ul=es-419&are=1&pscdl=noapi&_geo=1&_rdi=1&dt=Garbarino&dl=https%3A%2F%2Fwww.garbarino.com%2F&sid=1712891587&sct=1&seg=1&dr=https%3A%2F%2Fwww.garbarino.com%2Fuser%2Faccount&_s=1&tfd=3301", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t176.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=en=page_view&_ee=1&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&_et=10\r\nen=view_item_list&_ee=1&pr1=afDrubbit~idSASMS711BLGLAR~nmSamsung%20Galaxy%20S23%20FE%205G%20Fan%20Edition%20128%20GB%2F8%20GB%20RAM%20Menta~pr1001900~ds163099~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%201001900.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp0&pr2=afDrubbit~idSASMG990EZWAR~"
		"nmSamsung%20Galaxy%20S21%20FE%205G%20128%20GB%20%2F%206%20GB%20RAM%20White%20Fan%20Edition~pr827090~ds305909~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20827090.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp1&pr3=afDrubbit~idSASMF731BZAKAR~nmSamsung%20Galaxy%20Z%20Flip5%205G%20Dual-SIM%20512%20GB%20%2F%208%20GB%20RAM%20Graphit~pr1489200~ds700799~qt1~brSamsung~"
		"caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%201489200.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp2&pr4=afDrubbit~idSASMS918BZGMAR~nmSamsung%20Galaxy%20S23%20Ultra%20256%20GB%20Green%20SM-S918BZGM~pr1742400~ds677599~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%201742400.00~"
		"li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp3&pr5=afDrubbit~id907_185_ME-S518-AR-V-TDF~nmCelular%20Quantum%20Q-Test%205%2C45%22%20Octa-Core%2032%2F1GB%20Android%2011%20Violeta~pr71999~ds99000~qt1~breNOVA~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%2071999.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp4&pr6=afDrubbit~id907_185_S509N-AR-TDF-NEG~"
		"nmCelular%20Quantum%20YOLO%203G%205%22%2032GB%20Android%20Go%20Negro~pr118449~ds84050~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20118449.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp5&pr7=afDrubbit~id112_001_CEL003~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Azul~pr206164~ds34625~qt1~brQuantum~"
		"caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp6&pr8=afDrubbit~id112_001_CEL008~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Blanco~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~"
		"li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp7&pr9=afDrubbit~id114_001_CEL008~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Blanco~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp8&pr10=afDrubbit~id112_001_CEL005~"
		"nmCelular%20Quantum%20Q03%206.22%22%20octa-core%202%2B64%20GB%208%2B5MP%20Android%0A13%20Gris~pr199000~ds0~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20199000.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp9&pr11=afDrubbit~id112_001_CEL007~nmCelular%20Quantum%20Q30%206%2C5%22%204G%20Octa-Core%206%2F128%20GB%2048%2B5%2B2%2F8%0AMP%20Android%2012%20Negro~pr257499~ds0~qt1~brQuantum~"
		"caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20257499.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp10&pr12=afDrubbit~idSASMA346MZSBAR~nmSamsung%20Galaxy%20A34%205G%20128%20GB%20%2F%206%20GB%20RAM%2048MP%20SM-A346MZSBARO~pr695999~ds0~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20695999.00~"
		"li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp11&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&epn.value=7022028&_et=4&cu=ARS\r\nen=view_item_list&_ee=1&pr1=afDrubbit~idSASMS711BLGLAR~nmSamsung%20Galaxy%20S23%20FE%205G%20Fan%20Edition%20128%20GB%2F8%20GB%20RAM%20Menta~pr1001900~ds163099~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%201001900.00~"
		"li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp0&pr2=afDrubbit~idSASMG990EZWAR~nmSamsung%20Galaxy%20S21%20FE%205G%20128%20GB%20%2F%206%20GB%20RAM%20White%20Fan%20Edition~pr827090~ds305909~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20827090.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp1&pr3=afDrubbit~idSASMF731BZAKAR~"
		"nmSamsung%20Galaxy%20Z%20Flip5%205G%20Dual-SIM%20512%20GB%20%2F%208%20GB%20RAM%20Graphit~pr1489200~ds700799~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%201489200.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp2&pr4=afDrubbit~idSASMS918BZGMAR~nmSamsung%20Galaxy%20S23%20Ultra%20256%20GB%20Green%20SM-S918BZGM~pr1742400~ds677599~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~"
		"c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%201742400.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp3&pr5=afDrubbit~id907_185_ME-S518-AR-V-TDF~nmCelular%20Quantum%20Q-Test%205%2C45%22%20Octa-Core%2032%2F1GB%20Android%2011%20Violeta~pr71999~ds99000~qt1~breNOVA~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%2071999.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~"
		"lp4&pr6=afDrubbit~id907_185_S509N-AR-TDF-NEG~nmCelular%20Quantum%20YOLO%203G%205%22%2032GB%20Android%20Go%20Negro~pr118449~ds84050~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20118449.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp5&pr7=afDrubbit~id112_001_CEL003~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Azul~pr206164~ds34625~qt1~"
		"brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp6&pr8=afDrubbit~id112_001_CEL008~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Blanco~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~"
		"c5ARS%20206164.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp7&pr9=afDrubbit~id114_001_CEL008~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Blanco~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp8&pr10=afDrubbit~id112_001_CEL005~"
		"nmCelular%20Quantum%20Q03%206.22%22%20octa-core%202%2B64%20GB%208%2B5MP%20Android%0A13%20Gris~pr199000~ds0~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20199000.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp9&pr11=afDrubbit~id112_001_CEL007~nmCelular%20Quantum%20Q30%206%2C5%22%204G%20Octa-Core%206%2F128%20GB%2048%2B5%2B2%2F8%0AMP%20Android%2012%20Negro~pr257499~ds0~qt1~brQuantum~"
		"caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20257499.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp10&pr12=afDrubbit~idSASMA346MZSBAR~nmSamsung%20Galaxy%20A34%205G%20128%20GB%20%2F%206%20GB%20RAM%2048MP%20SM-A346MZSBARO~pr695999~ds0~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20695999.00~"
		"li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp11&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&epn.value=7022028&_et=4&cu=ARS\r\nen=view_item_list&_ee=1&pr1=afDrubbit~id114_001_TV012~nmSmart%20TV%20Skyworth%2065%22%20LED%204K%20UHD%20Frameless%20Android%20TV~pr710062~ds602437~qt1~brSkyworth~caSmart%20Tv%2C%20Audio%20Y%20Video~c2Televisi%C3%B3n~c3Smart%20Tv~k0currencyIso~v0ARS~c5ARS%20710062.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp0&pr2=afDrubbit~"
		"id112_001_LAVA012~nmLavarropas%20Carga%20Frontal%206%20Kg%20Blanco%20Drean~pr599999~ds44399~qt1~brDrean~caElectrodom%C3%A9sticos~c2Lavado~c3Lavarropas%20Autom%C3%A1ticos~k0currencyIso~v0ARS~c5ARS%20599999.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp1&pr3=afDrubbit~id114_001_MIX000~nmMixer%20Philips%20HR2530%2F50%20400%20W%20Varilla%20Pl%C3%A1stico~pr52002~ds2997~qt1~brPhilips~caElectrodom%C3%A9sticos~c2Peque%C3%B1os%20Electrodom%C3%A9sticos~c3Mixers~k0currencyIso~v0ARS~"
		"c5ARS%2052002.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp2&pr4=afDrubbit~id114_001_AUR021~nmAuriculares%20Motorola%20Buds%20In%20Ear%20085%20Blanco~pr51999~ds24000~qt1~brMotorola~caSmart%20Tv%2C%20Audio%20Y%20Video~c2Audio~c3Auriculares~k0currencyIso~v0ARS~c5ARS%2051999.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp3&pr5=afDrubbit~id114_001_TAB000~nmTablet%20eNova%208%22%20WIFI%202GB%2032GB%20Android%2012%20Negro~pr104704~ds5591.99~qt1~breNOVA~"
		"caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Inform%C3%A1tica~c3Tablets~k0currencyIso~v0ARS~c5ARS%20104704.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp4&pr6=afDrubbit~id112_001_CEL003~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Azul~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~"
		"li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp5&pr7=afDrubbit~id114_001_TV018~nmSmart%20Tv%20Motorola%2091MT50G22%2050%20Led%204k%20Uhd%20Android%20Tv%20Google~pr600021~ds25978~qt1~brMotorola~caSmart%20Tv%2C%20Audio%20Y%20Video~c2Televisi%C3%B3n~c3Smart%20Tv~k0currencyIso~v0ARS~c5ARS%20600021.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp6&pr8=afDrubbit~id112_001_CEL008~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Blanco~"
		"pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp7&pr9=afDrubbit~id114_001_LAVA008~nmLavarropas%20Enova%20carga%20vertical%205%20Kg%20blanco~pr509999~ds0~qt1~breNOVA~caElectrodom%C3%A9sticos~c2Lavado~c3Lavarropas%20Autom%C3%A1ticos~k0currencyIso~v0ARS~c5ARS%20509999.00~"
		"li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp8&pr10=afDrubbit~id114_001_CAF008~nmCafetera%20el%C3%A9ctrica%20Black%20and%20Decker%20CM0941B-AR%2012%20Pocillos~pr49302~ds598~qt1~brBlack%20%26%20Decker~caElectrodom%C3%A9sticos~c2Peque%C3%B1os%20Electrodom%C3%A9sticos~c3Cafeteras~k0currencyIso~v0ARS~c5ARS%2049302.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp9&pr11=afDrubbit~id114_001_CEL008~"
		"nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Blanco~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp10&pr12=afDrubbit~id112_001_LAVA013~nmLavarropas%20Carga%20Frontal%208%20Kg%20Blanco%20Drean~pr736999~ds0~qt1~brDrean~caElectrodom%C3%A9sticos~c2Lavado~"
		"c3Lavarropas%20Autom%C3%A1ticos~k0currencyIso~v0ARS~c5ARS%20736999.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp11&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&epn.value=4033579&_et=3&cu=ARS\r\nen=view_item_list&_ee=1&pr1=afDrubbit~id907_185_ETRDI53TC~nmAire%20Acondicionado%20Electra%20Inverter%20FC%20ETRDI53TC%205200W%204558%20FR~pr1261000~ds667259~qt1~brELECTRA~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Aires%20Acondicionado%20Split~k0currencyIso~v0ARS~"
		"c5ARS%201261000.00~liundefined-ProductsCarouselUnified~lp0&pr2=afDrubbit~id911_275_VP20P~nmVentilador%20De%20Pie%20Liliana%2020%22%20%20VP20P%2090W%20Negro~pr84499~ds54167~qt1~brLiliana~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Calefacci%C3%B3n%20A%20Le%C3%B1a~k0currencyIso~v0ARS~c5ARS%2084499.00~liundefined-ProductsCarouselUnified~lp1&pr3=afDrubbit~id910_1_23249~nmVENTILADOR%20DE%20TECHO%20LAFTDREN%20361A%203%20VELOCIDADES%20LED%2024W%20BLANCO~pr835749~ds0~qt1~brLAFTDREN~"
		"caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Ventiladores~c4De%20Techo~k0currencyIso~v0ARS~c5ARS%20835749.00~liundefined-ProductsCarouselUnified~lp2&pr4=afDrubbit~id238104031~nmVentilador%20Turbo%20Yelmo%20Tornado%2020%20Pulgadas%205%20Aspas%203vel%20100w~pr119999~ds0~qt1~brYELMO~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Ventiladores~c4De%20Mesa~k0currencyIso~v0ARS~c5ARS%20119999.00~liundefined-ProductsCarouselUnified~lp3&pr5=afDrubbit~id907_185_323572~"
		"nmEstufa%20Sin%20Salida%20Coventry%20MINI%207500%20COV%20Gas%20Natural%20Gris~pr257500~ds117499~qt1~brCoventry~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Calefacci%C3%B3n%20El%C3%A9ctrica~k0currencyIso~v0ARS~c5ARS%20257500.00~liundefined-ProductsCarouselUnified~lp4&pr6=afDrubbit~id907_185_ME-551IDQ1201F~nmAire%20Acondicionado%20Portatil%20Surrey%20551IDQ1201F%20F%2FC%203000F~pr669499~ds275500~qt1~brSurrey~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~"
		"c3Aires%20Acondicionado%20Ventana%20Y%20Portatil~k0currencyIso~v0ARS~c5ARS%20669499.00~liundefined-ProductsCarouselUnified~lp5&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&epn.value=3228246&_et=4&cu=ARS", 
		"LAST");

	web_url("fedcm.json_2", 
		"URL=https://accounts.google.com/gsi/fedcm.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t177.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("listaccounts", 
		"URL=https://accounts.google.com/gsi/fedcm/listaccounts", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t178.inf", 
		"Mode=HTML", 
		"LAST");

	return 0;
}
# 5 "c:\\users\\lalor\\documents\\git\\software-quality-and-engineering---up\\fundamentos de pruebas y calidad de software\\vugen\\testinginanutshell\\garbarino_v4\\\\combined_Garbarino_v4.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\lalor\\documents\\git\\software-quality-and-engineering---up\\fundamentos de pruebas y calidad de software\\vugen\\testinginanutshell\\garbarino_v4\\\\combined_Garbarino_v4.c" 2

