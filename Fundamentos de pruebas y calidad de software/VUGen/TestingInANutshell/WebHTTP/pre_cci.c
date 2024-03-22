# 1 "c:\\users\\lalor\\documents\\git\\software-quality-and-engineering---up\\fundamentos de pruebas y calidad de software\\vugen\\testinginanutshell\\webhttp\\\\combined_WebHTTP.c"
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







 
 



















# 1 "c:\\users\\lalor\\documents\\git\\software-quality-and-engineering---up\\fundamentos de pruebas y calidad de software\\vugen\\testinginanutshell\\webhttp\\\\combined_WebHTTP.c" 2

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

 
 
 

                               


 
 
 





















# 2 "c:\\users\\lalor\\documents\\git\\software-quality-and-engineering---up\\fundamentos de pruebas y calidad de software\\vugen\\testinginanutshell\\webhttp\\\\combined_WebHTTP.c" 2

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

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2

# 1 "WebSocketCB.c" 1
void OnOpenCB0 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
 
 
 
 
 
 
 
 

}

void OnMessageCB0 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
 
 
 
 
 
 
}

void OnErrorCB0 (const char* connectionID,
				  const char * message,
				  int length)
{
	
 
}

void OnCloseCB0 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
 
}

# 9 "globals.h" 2

# 1 "WebSocketBuffer.h" 1



 

char WebSocketReceive0[] = "{\"authentication-expire-time\":1711096529,\"category\":\"system\",\"cv\":\"8233"
                        "61549602128896\",\"ping-interval\":600,\"reconnect-url\":\"wss://prod-westus2.ac"
                        "cess-point.cloudmessaging.edge.microsoft.com\",\"token\":\"CAbWzLCiGZ6h9tvWyeQLy"
                        "LZt9o9TLgH7PvpKGfutT7PBF6LBARv7v1yb2MCUv65r6sKgM9EKD1zW+kruJljz95EZEm02E2+OZud5y"
                        "Zo3B1QN3NGWBJKpWY+J4XHSXfasvciR03kqLeuG8AUk4PZU/CCexwNuswvVhRw+x6BsLSFMpraFjZdX7"
                        "VVyrZwXB3kt\",\"type\":\"token\"}";
long WebSocketReceiveLen0   = sizeof(WebSocketReceive0) - 1;	 


# 10 "globals.h" 2



 
 


# 3 "c:\\users\\lalor\\documents\\git\\software-quality-and-engineering---up\\fundamentos de pruebas y calidad de software\\vugen\\testinginanutshell\\webhttp\\\\combined_WebHTTP.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\lalor\\documents\\git\\software-quality-and-engineering---up\\fundamentos de pruebas y calidad de software\\vugen\\testinginanutshell\\webhttp\\\\combined_WebHTTP.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=123", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t198.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("codeforces.com", 
		"URL=https://codeforces.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t199.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/service-worker-50751.js", "ENDITEM", 
		"LAST");

	web_url("enter", 
		"URL=https://codeforces.com/enter?back=%2F", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://codeforces.com/", 
		"Snapshot=t201.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("18.html", 
		"URL=https://codeforces.com/iframe/18.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://codeforces.com/service-worker-50751.js", 
		"Snapshot=t202.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("18.html_2", 
		"URL=https://codeforces.com/offline/18.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://codeforces.com/service-worker-50751.js", 
		"Snapshot=t203.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("ees", 
		"URL=https://codeforces.com/2fdcd78/ees?name=70a7c28f3de&cookie=evercookie_etag", 
		"Resource=0", 
		"Referer=https://codeforces.com/enter?back=%2F", 
		"Snapshot=t204.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("ecs", 
		"URL=https://codeforces.com/2fdcd78/ecs?name=70a7c28f3de&cookie=evercookie_cache", 
		"Resource=0", 
		"Referer=https://codeforces.com/enter?back=%2F", 
		"Snapshot=t205.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("evercookie_etag=undefined; DOMAIN=codeforces.com");

	web_add_cookie("evercookie_cache=undefined; DOMAIN=codeforces.com");

	web_url("eps", 
		"URL=https://codeforces.com/2fdcd78/eps?name=70a7c28f3de&cookie=evercookie_png", 
		"Resource=0", 
		"Referer=https://codeforces.com/enter?back=%2F", 
		"Snapshot=t206.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../cdn-cgi/challenge-platform/h/b/scripts/jsd/de9364586261/main.js", "Referer=", "ENDITEM", 
		"LAST");

	web_submit_data("empty", 
		"Action=https://codeforces.com/data/empty", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://codeforces.com/enter?back=%2F", 
		"Snapshot=t207.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=bfaa", "Value=c61de0fc18b24540d9ea19ad37a01ad8", "ENDITEM", 
		"Name=ftaa", "Value=", "ENDITEM", 
		"Name=csrf_token", "Value=e86ce144a8a1300fb2f90e05f541e1b1", "ENDITEM", 
		"LAST");

	web_custom_request("8682540a2fc19a5f", 
		"URL=https://codeforces.com/cdn-cgi/challenge-platform/h/b/jsd/r/8682540a2fc19a5f", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t208.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"wp\":\"o2A+a9L8ahAaY75LgLUOX+9lOSFOcsctt98L4ROfdlpdKAOEfuV5dhLZOYgA$C22OSMtOGOtltALOPtLx5T+Mh2wvb+fdN2FSyZU7$z+xNaqF3LyRfMcOaAAecE9wCOr$CKnwOn+7EO9qAOc+99+NY+cOLdOXhHOL3wODj8S$2uLSMCAO9jwO95VXL1BnfOs+9ckJ2O8H2d7KfkP$OVBnMNsS+OQMsKcA2oBMh1BiVO1yrcO9KPTe7mVqdO-MjMXx5L7c0qVyrMV3rJwTrPBJ3mGz+OmAV+a8fwXn$qOfKXpFRmC0+o9uwi2dg36gwQg+rGB+G4tO2k8tOLx62ozQ9JhmSeQ+OCc5HBcxag9Y4DklLPpNpUwud6DU6SsE6lgPQOYqAzaYkDNsM92tL6$7iY7-5z+kEqVeJXsbaS3fOOoZ3yV7Vyx5nO0aHWA77q3cFVY65wrrOECUnUqB9OLspDAVLOOoUQZOtR+"
		"tdN2lOOZZ5MM2O6HvZ5WMmObm+6hMir+nh2tLG$7A$HgqQP2tAtRVvpxxr39OQcqLU5wom7XR3Ok3p2egq5EXtUREw73S2rsDm7QR5do0RsvoNa9HY+VOawO2tRctZfcl9CfjTRskW4ktoKYQM0h3EXSXQd5vFUJ+q8BAYenRDWxSbn0noDlcj3ce3cjqisRJ+vmta9YXaYge3uobAavHt3LV7+5nuX8t2fLtRLaFQ9LQaATtuKG$mTat8OnhAhL2aQcOdKG0LnaQdNyDjZNeX+SL2fN0kUFfn+GH+gS2bFw9YeQX72tON+GoLnYEv$f9AKaC$FnFQfKLH-KKOjVV2haYYE0Lcz+l7uDkAOs5tn+JRKlfPX+Y+Un2gxjt+e7nY2c958Qg$wMt9LlL1lOgBOdZ6ataiCAEfEOSk2O+t09GjMH8$O+"
		"BTGVcOsGjCt2BF$LnLjHOwFtP9Hathaf5k$2V5x-zshxl9l8tCtmxxwa89xlfdoLmEALtVQvRL0aCDlkmfmkf+YrF89JPj6+SL+M6KA+QqrN+vOJONn+kO+ux8aQROOohLtor+YhAbtkOOHnE9O$NQWe6LtS4amuDSK7ebHGx+V2Ao7yg8RJxpDDx9OkDV$iT9o0Bsc+xSuBOXMVbKOLckc0atRMYr+waN6+0x25fl$NAjuxLRYHOvtNP7HY+oLJX-o9EO+p$LS4ii8BOT$tZ2cQvAE8+EfC0OBcOT5xZQ0-E5tPObMtBGQuARHKkrZ55jVWhgCtZV84UXFGhT9LClUVN89o7LMttDOd7fsEE5fX42$hB7CNfEtcaUZfKNzVNXBtKwKz+Vm9$OHtnOtuqNGM$t7ty1wNfG3oi6+cvN97GxPwJR6wu$n89p2nEdN1WcllXVNtV+57awGgruGQVFgHt89HRNVtdQJjZVR$y$Jt+mG89yH+"
		"12dfB9olROaFttPSXhWteBOz8yljB8Td$3rhXpu8JGqnFmRhM-LpBBB-3f9MfOjm-EGjX8mezaifRJfEOoAASRpPaE$A2yUYDfiV$Fvf5ffMT75gSeb$x7PWzEtfAW6PMV5kJ7fSAzHUtLhLmzyNSPqCGAimzH+YtHNK0OofDVLh0VBh6gDwMo-ifg099COnbn3CZ2-caZfO1SCcLaUxLl8Fu2u9NphKdKFqAYDnVjKemn8Qw2V$n+dfhn+2foLYrnPcaN-hocEefJgZyvY5AOBAd-dt3f-aQ5AmA8lztsSgZOoOOV+kU7fLGaO0n37+RJ-pGYD+"
		"1ONrtXQT9u2eOA9VqYoAfrGL95HaFanMHKYo9h9dS88QeL2SAfNelpN-AyOYhAhKza1FJaH6AsA8d8AqlHBY3DHLkeSLdh2v9NmDNxNt7eDYEmRkeD9YdoK4Nlh-5HVNrKUNdqq4h6EwfmKzMFN2OnGLpOLq7p3iW8nLoCDotA-JmntTfLyNvwm9+W5c2d5HXhYFZdkEVf9$dYA7L+MKayq2SD0nZmC7RCfL5cORmngcZ5GAdN1-DNUFKR9JmYfaUx9GJ+rcwOTgxbGXe53ehjl1YZoOTLDabo86oYPe+XYoLayl5GfsxmQyDAHwf8NzMwSt9tS+1op$fLcfcxsQFFaPdVvQA7+fEa8BCGjK+cOHAcm+5tEHgMs65yDE3DK9fhZEyf7pY1RDxr6OA9+lQRfK6wxQxcpOC-1BfNtAa96RfRY$UQkl9-soj6jvJwB8qF-s2PEQXQmgu5aBTqtL-H8pMOfSCQ+"
		"nf4KmGMPmQLOHDsryifmeN17AeH22SvJ83745-KlFitOKo4WNqYEDjZcZrLd+4gvKNtSx2r$NGiQHCutShS23dXrnPog-80JVtAlP41hVOua6c6qOzDlrDniP2aoV3UekkaNusGG7E4fLU+GE+vLsglVAwcyN7LR0E-qYEcoLOUYNm+BFVPw8XhinvqCleizNjKf5vcU9nMsr$yyLthJHEmpJURNdNc7jvj$wv8gsozkazivKh1FtZN96yCWYDjy$0P+DaJ9BtaFypl+YVR6ZTTDWp0C+d7fh97srHfoHFC4j$s0+yzesqOKa3K2NdnSg4RhEOERdDgEFPOOLPTi0$u$Ktnc8WoEnF6uNjLdbOG$fnt9p7JiDMLirtAlQrwo6pCfQx+zyJSh6A$2U3zHTUSRDrm564yWMai9Ovbh4rjisrgM2oJmjK$0VMH+8K4yDDQ3xAEBzeOWSi59lCW7rHOCca8htA343yZ9SDNzbciUgVU$ymCgk+"
		"Xc$TBHVc$fzoUJsr4it97aAKLGXhAPqPnHc6sgkerHFTAezpd2bss3faT-CCwNdEGbJgxuvKes+Pv936VyxDJK7kOmBPOo-DprHap6spbvXN4-yn$lGH8s$3so9+8eggEuDkORxRqFbfvoqUPfpofJYZoFziDKvE-9js-LFS1F0ed+JwgUjmvL8G2GWM1gtwCr4h42ra+cafAsGDvqzgB$dy38svnk0sBTZYL+6zihsjn7uFAV$CSCf8UQZkJxf+NdGrzmQGt+msr2tlUFitC9swcACBLAiQ+Opg-COODl-hl647O3G5zB-NvnoG35VjkU+v9Wpidda8NraocuZNwMyZU0P9LpcNVVEX4yynNJHWYBzfrLo3p22E7YfwfqSRaok67xdRLSZFldZ718Ba6o4DPBOV3c4dn68kSzvsD88$LDZ9eX7WowBUEA12QNkRn8o$eB5NilBc2RlT3fORJ6f$A2R+"
		"derUDqi97um$-QE2LHF2eBDCtNfjq26dEY6MWvgy67LBt4OAPR81Nxw0+mO376VMQkj04OCRcq3Hv93QsLxus7z2HsRfXVV9sjf0UnSX1Ow1CaE18BZFuA-C5+8bybRGtC0WQov3M+4e2BppyOcWkW6L0WGB+ROdLU1MgZvq49ky9CisDdD1bbwcvhWGgW8i2n43RpbltRO46fdi4BDR-b$vAhrjxiSkO7xKSixkmcTOCa30ojleGnZ0TDwkO$wiTa4jtD1iUnaAc0Sei2Q$NnNk2$liGcliA7f$etXNKikAkn2$k-rjekQLQ$3j4k577kVfr-qnwtC$Haazij4iteW33iJtBedSuO$nZ0hQzYjnxz3jwMhDLNC$gednZ300U0MiDm33mnU-r3Unk3ieALX-Va33i-QNA-kjMUzksDznPMQhr2Ojg$B-ompi3jZ-ocp-HKh$UjZi9$U3W-7Y17Oz698Sr3Wnu$33W-qeFfLSTz1$+"
		"eJYlfDOg$lSAeSajnZjneA$U0+$30+$YheSuL2eYX33fYdfFnZ0Ehj7EYXtdzi0dhkSk35emHo3ChG+8h2Nqsc0U3bkuz33JS3fZ2B3HhJSczo3C-dkCfDeDhr21mC9-eCfhzremX3jjzb0U2SYPQJao3xY2m62Z3PzGzxUgz330fizxUiY8D0Sti0$Zh0hrjLhZzphXeC7a+Nz30ztlhGi32KYJY3zkzgSehLjEk+D3hr2Je17kfOENf+EOxrYXS9ltq4hK$+q4YO747F3qiu$efOZN7AZTeq-YZF0wAMhJ7MzP$T7MYRzc7B2ZSFeC7BSwYwmZSk3dZ2Qp$U3pzBY3cxfqXp$BhExk0CEdqXfuEUYyhO$U3l2K2mHR2+xKKQxV+JzpUoU$jNaz2i0DqVnvtRNRNptRmDZ2shjALFzN3aFfafLmLBN6NUaScJ9oDgF6xMMTa-x-j2mDcqLP-GKjUUFfaGNwEdlTSNOKHgF1tcN$mU+"
		"bMGm3luAsHC9KzC9tOOadueqwf-7sMtKfPDYsLOMYEtrQbA7YWG9Oyd8t9f+tBf8AJtPYofx9USY2dhNDxecOiuZtBt$CxPg-8+D1m5X5W54wzC7O5+lHA8lOksA-JGu8cd-d+VA3o5JDVtPfo+LOJc-kHDd3Y3qAE1BP51cO-3cFuHGkr+gkxkr+G3jcof22NOXdds5n4tyQfEKOM+TEpfoOv1U3lfajDK4sggmAGE7PAODK3tyGY20DvfFwb3tKwkK8WtHdrhlOH5KOcjLf57X+X9nwdkb3X-fCMCfceV5s0H$23tCtf+XQOCCtLjzHVx4-fcY6hFO5H+RtE8cwedPcfCf+hOx9dgxgwOX1SOhVSVWfdSXQTfk6z+ND-xA+6LXnzV$5BgM+ZDbhoOOOM+JOJa2AjXQAkGQfjqY76+n72KLhVqY7$fbyG9MHO7YfkNte1hyE+o1PeatGetJfNOLY+DOvQ9LrkrVzNnKbee3t+"
		"9KeYO2yKO2y3t7bQR3V2An$LrvGiCnAn5FNdofzNOPENaqfPY49gNuMt73-OZ-qePzXez1r3qMLeVN$qBzOrclYnDRC+AvAk5dRKLeejA-NKfs9VvK5aiL7VEZq4Lj5TRv5JXL7ADkEs5dA6mxMLF4VGDVo6HoY+$4mLErt+9r6+Xot+oTKZyf7qe9qMOm9B54BODyPyN1offCAfaYatDA-dRktweZ-hbVaNSALNBkBQi+7YDrCTbdaJ6ZaLqAolKmn5NHFGLdJVoJAs+b5eOnfsfPiKBKAToTHu5y76FzK4agejcOoTof7pR-FW$DB2ooaNLX7M9+72$fOPq29etbDWOV8lL1GmhGMt$kNK$mheh6BhCUtb7MS2MGfjGUmtoTStZfXUz+O$fXcODJPVDX8foGGB7grUmtfCLELh7XmkRNAMfiJXbNOibd915icOcOAMaiNibXNE$wXihibdDzVzz+7aJpS+"
		"KzcimtazJFXDKHSz8zbdLh9gzkDxA8qzcO5Nc+7i6+9060z+O$YM9$B0mMhAAGmaSOMtG$JTk+n2SmDA9y9XDmG2Hy5Zmt$MmQ$fRN9o63aNwzfmhZKjKZ6ZeUbVKTGXGXmB8xPXbNc7AGn2GpZB8uA37Sihfprsnyxpt9-xat$dOyDqFXRha7b+GQfB63ZrGQoVDAaPz+foNdtNNUf8wqLLX+73-JPJJvJyc27d5Z9tGP6UFz73ilN+wtzkKZJlDbOXa2RGwzXTev$f6m$bbpi-Xaoq$+XHi+OADVaY92$ZN8xKObOA$2$aay6oA2LOpa9mNYelcO$O3+AUN0ReGOU2aYK+vULKoVe+UYRtS+AqCrY36+fCG07UvWr+dtstdy6tlTP$OGDlmtOAatutuADtlthQ4+"
		"1hJQyTZUf3MGcMP2yfAvRnMO2AdfcO7AjG6yJb6AWYOYydost2MLiAuAQnjm$vGnTLXLRZDnfBSCxhy9DXiPkjDExvnQjm$npZDnuR5BDB$iPtaZXLDmL7yY0+GWhVOWLNMA1mo9aY$zCbf3SzzTbTcZtfUYfCRoxnC4NdPWYfs2R86nEsfYKxZofjnEdOuiXub2TlAfWUeQXbYVUX9t$MeTaNDlD46roF9VT+gVQboETohQwn4f4MfG-MeS83RVld0Xol5U$Xr24fWy9tRNoEpZBFMb85QVUYLrt5TgbVTddbvkbV0X6d05uzXVy7X7RV48$duBH+5Cjmo6yXSOHtXhNXO7a3R3A757abi+o84jw+NjRXXmbdLBYu3fHb$OGbKbapDYsNAnLYsek2sOAG8E4JFdt7XhaQLrmta9jXMdKF$XSAfjOHp+1q5qSu482uORFXSUfz9zSzLdzve+"
		"yB-EOGXkRKXveOutstLzXvbXNXhCuXmqKZvq9xA6BQ9dVsKEZNK2GspqO$72HdYD0qA490qnwtgJPDls4Dg0HO5ElDltRt927+2DdYDtLKR46s49jlS939jsxnHA0kGAunQYgnQbfh1Q9h4np-d-hsd-0d9E7Te29jl+Ahlj1j4WFefjW7t+DUNARKfi53K9upSjuX8iGSsyRH3Sd-TSQziSjStxgSdx325i9jaWeQ9SuiAhpxTpctDh3yrSu3LzwXohuiAv5xBXRhjxg+o6l6lxUduXYEyZ8QS3K2SgpMzF9lFjKYgUbjgg3h0cyhggjMaWt5pzR7zEVV0aae9iZUYKR8x9349qSyVFx+RSgwWEkwpU8lBZ8r5q9X7MDAqAf+XmRw1w2PWPNjLZz+LZDwQUFXK49tDXkOpt5tK8WwslKQfSs10dDcnpA5stow2LdjGCQbS80ZAf5yA2Gl6bBUeTAd8qDDU2+77lH8EjQ-g+9O4+"
		"wjo1Q12HqARU$XE+Tr8MbooiLjBUrNgoaL-V$3o9AGBRnlT9AcjldlUfQXO$RKSlUhpfjZ$UVlQKp75KT95FVMLe5EvLsKuiSEOuboE2MK1KjS0FWOskQ1pKg63k1MJksnWSnjzkWljVSAow8edllMrMelT9DV7LfTNe0eulmesMziow3eQe932n93TQoDs3dlUe4M9TA73bZkT9D6bR$Oo9akGqaQn3lVjWt+KmDx9TD6tqGK42HqAwme3qp6we1NfZVlgELEG3Wm5rFqTF93Rq3hrkWmLkQr0KT99aeMhLdK0ru4gaPK4x12YkaeTWbU$W670aKkB4QGRv$4pc3j23QwVtOGo7jAwXMeUoTKQ41KpYD+K+Dr1y1+ohxlgvNAaeWouAoNax2JU72y23291YljAJUeUV41f+GfUVZJud93$J42927GO52hmUY3jD5FY+GTje2b+"
		"wJ1fasqgoOGDajQXiGTur3T8QDQGT0nOnfbZT02Gj5JUU9+aJ1Msj5tLAK81TWMQJ1MWysyUrg7jDo9oyOtxYHu7-wT2aB1dUUyo9DUlG9uLU3Q5ffU3FAxGT45DAJL0LAXjZSYqw2MgMjy0rjDRuEh+Xkd9XSXpAAzoaTC8mPM1GSCcBR40WPTupt5x3+zpphptKst9zsHpi2XPMQUWeMegdLpXkY3Ue2v7QD0WYGQae2zgzsEst5Us8n3sgrnkoT03fw7LmsT67grth23grY4DKgrDrW$dlhMPKsZd724sZQqWLVqU5mVxq0FGZTcY4L4j4dN5B0e-BjatldlsZTy3yg4T$sBltOp0ypBsppLYw0rsZj8EekA8MNp4BltOMBQG2nRT99ZT8ZkMpsB2ZjN$$sBgXA$UXup4BUeTRsC6l0U0kUycpNEmyJVcWzZpXoVmtAb0NCb4vLzluWNLbQ+7bpfrQlB0+"
		"7MfeziAWUL-PTGkn4YShdnUOgW3bTR88MYywhl+YMyln3WfOzW4fzz+kOXQeWn2SWj+97SuOlOe0xO$w7YLdUfO9+KZD9VRQlzcOrW4QDvu7www86RSd99$dYgYXS+8mOqUCOp1aUROYbVQtfAuAzvBUZANQt59CVH6S4EeBRj$4O+++12Ej7oFbTNLH6mLKdlf7JOlLZamjfQ9bj$4MjlOV1C09taqOPhmiL+NnDd7glJL7E9xvtRV7SLoLPf9uFdtYfx9FLiOwQVjLsikthCiWt1wUB5fc+Dh9+uyxPENeQCbsFoaQY6dGcKLojuXJQBH9NMCO$LWxL+J$t$efLU81+Q1nEoymK97LVQJrEsa8LfOLgLprABHLs7saeY9+inRPmQONKzYfCRGv+EaYAOAxLiK4k5pQl+CujfcDOz+aQ2fKVOdV7DC8HtekLFOGXJnt9BhfPlb2nJfO$2fx7eqwF13GSCTLr+"
		"wo82wJNYYPNrMy9jfHYNdo-sKXKQcn8VVVMGgys$94fnk$LxCqG7n4UFlQH-ayBO31V6fwNG2zVQ-Ht55+oQpGHtOwfrNR1Q36WvSUP$qtZtOAZ2V8RP7G+7jmf8gouGjSWa0FdAgsamcSSAHnNUnJla3aP+UadNnA3dSoQF7W9ZtTurO92azzQM8NEAWfYQdkf+MNckszDRN$kfrtYEJAvfhDrUkQQi+7Qzn6YqoDf8eF6+S4yJMLhGocVXK$cAwrhO1aqjBOenGdtA0HQhODRN7aqmoM5a79BmhoasKrfJE4NeHaVB-KE9LAojwfY3CvBNsXEUNROewn+9Q3NTXxuzc3wVOeKJthOqU6hyAd7$rL7Ot2RPaCgG$OdVNSaKY5fSMnPHtl0npOa9XCMmyFcca65hHXQMtkj2op6WkSoF7gQpPglaFfxRo+a3kQR96W+"
		"VXThGHnlHY-566G1QXd32qUPTHOfbnc36AtBJd$OHz$R4wAHBO1SXfoF+yrDWCXqy5A$71Vw6556$LAaca1eKDHGhCY2LZ7hOEFYkc1C6lMYL9pxuE78tnlMYT9QS221PDwDmhxomcSab8NqfRSeo1lj99uhLcp7WTcAmiGuhAlyf15kQdA3Vz+9bSjtzNGY++Gzf77bHcgMYjuVuRnLxKODe2MLfu5+xyMLQ5Sc1-5sh-kQiluuN9Nj$MhBd5Kj9V6kbtysPFyfMV79NqLHtvHZFOfTLDOZOmn7nf8JmO7+UZUl5ESo+8wG1SqFr9dOf0bx7GsYECm3dzfFQatSYEfuD9EebnfvE1$bYWxeEan72LeHafWx2ut8S9sHk5Y0YOAlEeup4kqkrKif8ftMObQi5n1dVhrAvL7sLHhOlE1JDeGBHVcNV4fqP7kDJmEuYguzesPxQNHfVfOfYMsYwROn2MsPl7SoSO+"
		"GzhHs97EUsY7oAn6mODHuVNoMZ4iqLO+BnH3F1R4ioN+xg9KOD6GVZotz6xcKLwVShFA9XKUVAhMrtQ$XVckXQK0HTOg+cl9kXQR3v1s-ZNNzt+pL-BslP+9CfYUVhGilOsAom9lYa8+K+SaAPljkUVAhhermfTVhOdD7+L7SWLqdV-TfPhN+f6xCO3kxO-K$o5ctYLCkmiorq+Q97U2MkdmKO9yOmOxqmkjihKqTNwqY5jLwZ5jeKdL0RmzkOzLjmEg8Fc4pfBdHGfhqkivm$knOC1vTXEhQ8FQ25x8yaK8kuLYeY2L9GzxLqO53SqfqbkmUGE0yA1pgXS6es1xvH+GL5smOmXSQfsPLdvmSzJRgH$28eM+5jhdDQNbcDxU5lY8UDkYXTr1a5-qq5gG3bckOujhrRUo2SCkE6$7$LSJKB-luweydqPy74ja9L1eb4e0HMoeaAcVeYCrnLi5VO6TyevBz6V+fcLbm8KSC+"
		"8LemkqUmzksv7Smol6Fbc0OzuX6mXDQz5mSVs53g6sOqnnUXKq5-RxJRK3bm0QttijVtgPtFUR8CR7SYQ7ftFUQtD5H-CZc1ErVE38V7G6rL$zCOleH$BOSJohkS8ReA4L9SJSu2nsvOXBKgrmRnEns1SNxBSzJD-Ng+vkBrSk$N9zqalRum8ltDA$-koUR2TdjweW9zZTsRe680tezDQz-MfEBdkx5tUQMmUfQwRagcufct6s83ydlOrTKySzsW1xuulGjfpZuLN3$Nt7nQMy+DJNNCnUxDXqRxCNU3luj1rFay+TOglb2MuRKLRxRsESoRanSA7reOq$t6UBsoS53MxNb3YXz1t+7WEUUHA7C9LzWD7MJsEO+nxkxAd$qGCV7pEEO$ZK6kUt4-H+P1a$RtVqKGkfCr-nNaLhiV+LLurhvS46-GduDadoavNLKkrJKjyA3FZ2dYhfUd6wONFMdaj9qAQ6Z+k4Z25h+"
		"LaVEbtK4DAi9SzdK77dFxMKsHkwN3A81DYaT7d+Ylxj1SKVBhrQL9TlOYXSwreOa+dOM7ZtOov7X5BTLzD7cDRqYC89XlfOooN-o7L6Htyx+GbRfZnntMqlLNMzcGRF+jF4ynj3v69CJBMYFDWPYc4dDYCWHFXm7V+$QS2LzHgOx19Q$QD34tOoMdqxcqOLfCc6eTv130cTZnnDV4KuqR+mR+Ekua0NMdkcWQ5rHDVByjAjc1$+2Cc6t5LVLuJKJzshVqDtORc09Oog-VfVzfrEaFGEkKkG+Ne4cd6+RqnMNO86GJBOR5iNF+yrqKfSK5yDe7fluKyV7ezd$j9Mof+wC7Sq5Fl3fQjubOoeADofqSA-xaPeDf8xA+2CakVb88SsZmFEmVk6HiLffvvSBXA2NvLdJTZn-Vu5-wqK4C$d0FBQi-0sEjKEFA9YDqlWVJgOXL8HpD5F9ffZHqodV+"
		"LK3xnUkiiS6hjHrqFnlK$cs-3flsr0OPzi74LVdideadt9mSsKHjF+swaS8kUmbYrtlkDzYxDVLHYtdl7Ae96ODw23SKNrzD-nR8BhKHiJtAnMn+DvZ3ui3r5-2XSnFT0vXJtktbJfe6Y$dJkrg54rVhwYn7AWSO-0SBCF6D6ixD4z5wOR4oVa+oPr-Q4cCk4VyQFQ2tc4ejk5a2-RrKHJ4z-f2+giJt4-FORSQ7BFikrC$zOyDkvz$QRtdhnoBboY+x-V4nE7XiVZMrhLE4W-dn54Unc8Ld41hQybUL331dLryYFhSHdaewiu4qTRotDwy3hitrBTGS96wzrQlJrtfiye+"
		"aUihlLHbhMOXjG8BcivjR7PYtgiFHQlLwQjjDSCE8aa-vhE8hr8lATL7yC9rEKyz-$BVEOSPau$JhVa1z1MLQZhpV7KD9fSit4ljH1oKXiVpiNqnVATPmpR6qL3e1jB6fPwQ6to0N$2rrJPirBYDc7NjWF66qJVpiu2H9E+DLiUmBYM45b$L$HOKarEGHFOHo8+Lg0$Xmqt6auL8ia-uOFQxuKqrYLeBwmWhvOVNKl9jmuHlcLj0HS9pndKduOcqVN5qDWhkcB+8-SK-PEY4sk1FCxGnJnEYdiszN7nWg+GfRYdOzNwuY+9y$yS9HBlO98scM$9S2tCV6CPMxJS1r2-zNw2g$EjUdd8sSlNxZuyKiVgVaJo7xij+cEkn6zbloEGgAkvCdPfloJermevV+08DfOUxUUcLdkifoDh4KrHLYCBXcz+yPf6YPB$8k+yfog3tUN7wpKsm$O86uXNKOT9zl7oBYnXDqUAf+L++"
		"n-oHFgdZn7ztnKO+1DjR8UOD9yHwau9Np7UxQ3LP2qSKQ7hQEO+6dM$uzBmDfPz8AnHwUevrEpshWSsu1qkj$ZehOa2n9Phocvx+eQHY$8NcBOxFrXzDyvh3hSya$9+CnrSgThfxEw6mq3SUD9zJppl6UKL2ETXnGJkQ+cN53KcharoigVuOWxkH+CCvgh7gDpyF1a0bdSoFyz$rpHEBGTiZZjrY4kJNYnawBM4hsGAG-RxE4q+0AiyMVGeKRBx2GFC6sOeieUOT9uOwO1DhDY+7-nysDyZElyM4kOODmYroOcZmp$BBv+SlspO8$TC7tauxykqNVEj+3dZz2KFVun5UkpcoMPJN+Z0bGo3d1sYYYw+stgKu9uj7lFt-RMXnGO9UfCh7NBmCf7ZUkkJvG-8bGRtm6cZtDx29bR$4dGmXjbUGBBG5+"
		"qW5GLxV-pNbaPzDNkJj9hpNqwGiu0olUwH1RK$U7ZUyD4jzZtbLTpwFwJmVaQyaiANgQgJLucLx47RVVOEJOuS0b-HlMyfkL2P3CBF9Mgd8ysyrzw6wtnj30j-c$rqDecMp9Dn1rQ3PfonY0QV-TGMDQ6tEBKtJhTGuPvJCnLpn4ZgOPkJyl9E3Bhhn6T87kt77lEjY5KdQy+bO9M$lbAvU91fyyvklaAxpfNb8NBcMJr6AfEYy+vvwKSrnjVU5NvwEtLlOyT5UNbhXcSpgM6S+tJKPDXot2CiTPjuLnfSszfV82wNe3cof$Hglptq5mP$zap0fkUoxOGeoWkbMdCOdXYxyYOJVpOSvTSaOOQKqU-9NvfbULRcMv4t5T-28$h4K+YWs$3Tk9DsuvU9AHG+f4WhPcX+ei+YOmJ9J8hrthlH92fOEWR7nte8Hkl$tyLiOW+YYGdUxaX+z+"
		"h0xO6V$CaRLMu$QhwfQeFapL4dXQYPOwLDTR9W7B3oiAb5i6N5r+WwCGVVLgO7azmfA-lzHh4GD9wk-6l6kLMJaVsboC3OCGddZ6TH3Yr-ctOGS8NB+aJVXp8a7Nj7vGhgwpEh+rrlQfcoSiZou5VLE3wZtj-0yJaoswkZn59mZL6ANSo--4GAlLGy-MVM-in7AQEbcGN$n+SMNOAJmizYX57oHskoVxKYcQwYtCLxO8HLAQYwYyN+HzLmGmr$SYdfaTtPH3HvjDO$NwZ6FcjR1z6MLDumrUaLB+mAGtlEHGr7hOm0KME8enGzfogMSwV9lwgLzixRck9sHcXpi5JQaXSSD$26jDx$Hq8QhaPlFx9zvvFGV6M3lkYDXc3+CDS6fEomZEs3FDDxhquix5iyEOw+ptZnP2QU9G5ANCwZlQf4nxLofO1MM+XxSFG66cQq+"
		"lssnQUL9q5l2McKdjq-oNGOr1yiNEDm$kg54y8m6nnfs8hqMPdwFuKjaHtf4Z4-wYw-sqD7au55DcfiN1EdeVh+Xq0E0uFx9uelSDl8xr+6Gi8eHYW7mn3P007UaSxVLUY31gUxsSact2fOhmalO3Rn97c3kFV2Bzaylx7cUMAOoVQ8O5ECaM2sElRYpMt5BzTVO7GeDFdjUajDyek3DLhhmgH4xKGdcqM1BEFwZUfHKxSfWNL6GO+TlOP1XWOTS$2J-qLVTxK9t970F2YeyOLSPec0ACN157V8OgJRdA1NJsmnO8F6c7fCUgj1FyQQXGJOELoFspc6bjOAS5HEaz5WdS0grxdO6z9lR$wg4NTR7SPHgLgboMLOUY9ll38sRAQN06A6kiCdG80GMZPUPPwNwdR$57MiLeT97N6ex7UxZ3930t89oBGt$KL8NzCWW-X5vTdhJ9cPM+s$+jj1hKdcrC1QvGM+xD+"
		"d9tLbiuYeQx2X8PaC1lbGDOSUYyVn947QLXObUQttlfubQkqkTfHFWusuO9R5LGdkX$ujGzLYt6Tmf7d3Lt$DUsdbUdVVKJOd5mn6B+Vr59QcQQyHtV+vOL55kfQyNXASU8RlFLYxtnNA9e7T+LNY4VQh7n5aB9pNeAy2t+5swdKrNJb58BHXa7ZHWGHQyC68Xb3Zu0lhHBY6VjhJ9otWLGepQ$28+0YxDtfOFOT3m1j39E$JLQxoX9oRnSPx3B8d4-yh-WVbc69XlyfSOt5zVQjAhBtf$t$c7bwCwYO0X4qDWefGthLLnV289+iKhv416qYNfzUrbkTqFBWjUQOsJ3wxfh6AimQC7v7eHyRa53ze00Lkbr3POcauV96Kqhq334SVr1FmZq899qqjASqEs02J5j2DiTrrH-arzd7NTDi6n1Wr789a5LDOuWDWmz-tYhBPigkgLxV$5yN65MtfMcsD5jO1U+"
		"iOrucdo8xyNtaK54dDTLDHy9xbX+38k+5qDwaqFLVr0Kx3JCyZK0Xbr3WrfdbdK45xPSXtgEQnkbZq3U8hjdeJwCkLYK89Ljsy9PC3QBiSOJvNQHEGYOq+cQJVdS-lm2nx4nF8E8KA8V6qG+UFkY6U5b$nKwwmFmuJPX1V2AbJifXe-zaU$bz-F$9cLFA9lF-2VF0eMENr7KfnO2y7rJEJc5wfVsjzwfJDKQaZexKKyfAWLKqAJpsNaFBoQFf+PLlbxWOsEaOX--0fVsFFnyu63nF7qcUVUiWSt28zomwrCTaHVXVtONep5ozX0cultSi4t8RnBd$j5Ob1FudMzYyEgpTLnMHZ2G7yWx-zeyvYJ0zry-nMnzSg8H$gXypjS0zuMkL7aOt-X6Rfsh4DbVTfXUDes5OkL3wdt6AObOMC6gY08J1o+"
		"ZhMwWBhjDOPzLdrmvSe6lxJH1bmBp-z3A0wJMG4Ze74Ll6D89dNSp$Ks5NNOK3AGDtF$0wK$Yt8LdolSDKLlNfNszthgyDNNLGcLsBwldtJFxA97Fs5AJnXcYrNtMttvwSYMGY2HoYq3vwaL699Vkq37Ofo7f7Y-MhBA78DgAnfKzfLXjt8LsFtmrpw0U0L3kC30yPh3$i0J8NtLvPfLzgJ098mbDYpAhzQU023S9vryWM+luCMVO377tnAJSg2F+De9RJYHoKvaqCmefZFgNvus2LwkODJcB-ARA7savDK+08L5y22i7OmPsEh+kjJEiTgwWqMObTYHA$NnGaQNn8wtA$q-OTOz9dQQGDO2awFjQ0zF6OvYzeRGCN96FQOCM5SOgKVtf8wtF$DfR+SA0WsHKpOhOtVz0Ekc$73Qnkw8BAE2F6OfUh1zuHNahrUOA1bfaNlF65JWuRQZfi4fi+CJ2VEw+6xll1S-9qO0$VseaPg7t4Ao+"
		"EqMgCi$hM21R0$THdnQfuh91RqcdanSt4l8JwRzanmsKle7K-LD$8Ym1ls2uP7QO2H+m-e9jXJSxrCZFlp+DO44+9zV-$NOk2SUsdrG4GDM4K45xcehCJ65ShNaKQ5bNOM$u2tr7eSZimtGZqA9Pw+UqXcKHsZO5YdhVHLGtLYV17b$5fxP28oFmFlYz50HLKQOc$GwYDlmH4sK6D5ctc+Ltg8qsSw0Otcq0mhMr-aZvC-9nKBGbU+JZ5ZY3lj$KfnOzZqAG3d8ufkRR-45mg34rBKAkG+8e9TtvG9LQeQZ0qA7Ffer-b2km96s6YZ5fhiTCkM2flwWGONJMGw$tjfiR92G+65EBG8o-3caNJ2wUnP-lE1EHKPlpQKKhFnOH2t2l$CBYUGq44fOy47yD6AiNp5f5knGyy0c5KRvqvw+v6y1esELbJ9vRypJomBK5jnFYKHVZgrVV+"
		"JVlmYnKuEDfxq5upDPtKuXSGkfGS4JQLm9ZJg9G4aK$wO5Y8QA$aglKe1rrnsO842EHlHg+1dg3yChYMV83QgEuc5lluq-JXNA2n2PQu9wuJkqSTiD930LdRs4G+8$iH+K8UEmPl0sBSvq$5LnM+aaf4hxYirPYNPT6o8O6k46B5H4R1PDdbJGxTiB443QNzWJLVQHca8S+9Y6kF7aUUuvcCdzUq3Ow3Pyv3Qq4NFMeiwkS2$-9-m4EjQhLvrn5Rz4GXeiFOBOuQzySVaCQA9o3z+u0iG4jSvDX4z+9TSuMD7tN3+MXT+hVY376YsFntsdJrOOOKnnZOcAohfH9tVYAQESVSXSnQDM5nvYaKKcFj9gFUZ43rwSRNvb6KvpwO$EKfaOLZwOO7DCDoJZvh+e0Z59L2Oa8e0qlH0VtTlOBhOOcMRPvpfO0TP1x+$MKWFrtEtbuGLTRFZmCOe0HD9paRPxox2ROmajExx+AL2smYPf9LWY1+"
		"bk-1HbxONWFLfbWQW0sqLq5gQs+BSP2ST2aXVNQFhRDd99S1u3ca-bQZ2Z+51W29HO9RA$ua3LjAptPBOC$COOFjtufOVRe0ya3HfQWYPfOw$+6XlW21sFcR3$sMp+SnusbjRe0lMd9lYTBOgRLZpUgPj2ua+uOyZ2MQLOoHzQxsjfSVOyOO9dxARA$Sabb+2VOHkFFQ-8ENQFiuujcOama5cRQ6QFaUFXabjaqwNBT+fJAcFqObBxjJm7CXjuP-hsdQ5nJ2fsSHT6FhvSFw6$2g9tZNVPsz+sB2RLtsFQs1$4+5uFl9GQd22858mDSmDqNVsviZfaL7HLeEet6t6i0yCh12OQOuAP5q8as90PQOrQmfXL3M9tOu+"
		"RAcOSOSlOyFGEmepYNfHvKrtwVTny59gaWj9K0T2fGtAyj-DegSv8APvAmLzLnfQ0LX37K9HPYaZRvwO$fAn2Aq5r4g3-ZNaDOOafB96w6QLz9LEboJqh5FQUMDKqev3sLhSx6HalELCOObZ8nOLPOODNBLPEXYb-hif0ieOOOvEOO\",\"s\":\"0.06559635328252267:1711067001:-uAbL5Pc99zkX3GMERD5NaID19hgV5LpGzWMTpscLzM\"}", 
		"LAST");

	web_add_cookie("cf_clearance=mZFSkmZ.E2nRrQ8pvB3hql2C2p_UvknnfgtKHfRhVrM-1711070104-1.0.1.1-D1m6ayl8SQmirM6Wv1gXPr4iP2j_U5QkwCEznTCBJRs2_eCer9bfiiuY679wkpYgJ9_RWXxHPrbX8ECJn4ryIw; DOMAIN=codeforces.com");

	web_add_cookie("evercookie_png=5ceeyuyfwsyll0li7r; DOMAIN=codeforces.com");

	web_add_cookie("evercookie_etag=5ceeyuyfwsyll0li7r; DOMAIN=codeforces.com");

	web_add_cookie("evercookie_cache=5ceeyuyfwsyll0li7r; DOMAIN=codeforces.com");

	web_add_cookie("70a7c28f3de=5ceeyuyfwsyll0li7r; DOMAIN=codeforces.com");

	web_submit_data("empty_2", 
		"Action=https://codeforces.com/data/empty", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://codeforces.com/enter?back=%2F", 
		"Snapshot=t211.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=bfaa", "Value=c61de0fc18b24540d9ea19ad37a01ad8", "ENDITEM", 
		"Name=ftaa", "Value=5ceeyuyfwsyll0li7r", "ENDITEM", 
		"Name=csrf_token", "Value=e86ce144a8a1300fb2f90e05f541e1b1", "ENDITEM", 
		"LAST");

	web_url("ees_2", 
		"URL=https://codeforces.com/2fdcd78/ees?name=70a7c28f3de&cookie=evercookie_etag", 
		"Resource=0", 
		"Referer=https://codeforces.com/enter?back=%2F", 
		"Snapshot=t212.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=eps?name=70a7c28f3de&cookie=evercookie_png", "Referer=https://codeforces.com/enter?back=%2F", "ENDITEM", 
		"LAST");

	web_submit_data("enter_2", 
		"Action=https://codeforces.com/enter?back=%2F", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://codeforces.com/service-worker-50751.js", 
		"Snapshot=t213.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		"ITEMDATA", 
		"Name=csrf_token", "Value=e86ce144a8a1300fb2f90e05f541e1b1", "ENDITEM", 
		"Name=action", "Value=enter", "ENDITEM", 
		"Name=ftaa", "Value=5ceeyuyfwsyll0li7r", "ENDITEM", 
		"Name=bfaa", "Value=c61de0fc18b24540d9ea19ad37a01ad8", "ENDITEM", 
		"Name=handleOrEmail", "Value=robles.luis.1iv@gmail.com", "ENDITEM", 
		"Name=password", "Value=lalito", "ENDITEM", 
		"Name=_tta", "Value=912", "ENDITEM", 
		"EXTRARES", 
		"Url=/service-worker-11681.js", "Referer=https://codeforces.com/", "ENDITEM", 
		"LAST");

	web_custom_request("rum_2", 
		"URL=https://codeforces.com/cdn-cgi/rum?", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://codeforces.com/enter?back=%2F", 
		"Snapshot=t214.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"referrer\":\"https://codeforces.com/\",\"eventType\":3,\"versions\":{\"js\":\"2023.10.0\",\"fl\":\"2024.3.0\"},\"pageloadId\":\"0ce74f54-c98c-4343-9227-381c29035183\",\"location\":\"https://codeforces.com/enter\",\"landingPath\":\"/enter\",\"startTime\":1711070096934,\"siteToken\":\"316c29dfa3804effb5a91c52a59b5bd0\",\"lcp\":{\"value\":5970.600000023842,\"path\":\"/enter\",\"element\":\"#header>div>a>img\",\"size\":17936,\"url\":\"https://codeforces.org/s/50751/images/"
		"codeforces-sponsored-by-ton.png\",\"rld\":524.3000000119209,\"rlt\":0,\"erd\":3.600000023841858,\"it\":\"img\",\"fp\":null},\"fid\":{\"value\":22.600000023841858,\"path\":\"/enter\",\"element\":\"#handleOrEmail\",\"name\":\"keydown\"},\"cls\":{\"value\":0.0043172129519329855,\"path\":\"/enter\",\"element\":\"#body\",\"currentRect\":{\"x\":200,\"y\":4,\"width\":1500,\"height\":865,\"top\":4,\"right\":1700,\"bottom\":869,\"left\":200},\"previousRect\":{\"x\":210,\"y\":4,\"width\":1500,\"height\":614"
		",\"top\":4,\"right\":1710,\"bottom\":618,\"left\":210}},\"fcp\":{\"value\":6090.800000011921,\"path\":\"/enter\"},\"ttfb\":{\"value\":5442.699999988079,\"path\":\"/enter\"},\"inp\":{\"value\":40,\"path\":\"/enter\",\"element\":\"#handleOrEmail\",\"name\":\"keydown\"},\"timingsV2\":{\"nextHopProtocol\":\"http/1.1\"},\"st\":1}", 
		"LAST");

	web_url("18.html_3", 
		"URL=https://codeforces.com/iframe/18.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://codeforces.com/service-worker-11681.js", 
		"Snapshot=t215.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("18.html_4", 
		"URL=https://codeforces.com/offline/18.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://codeforces.com/service-worker-11681.js", 
		"Snapshot=t216.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(95);

	web_custom_request("v2", 
		"URL=https://clientservices.googleapis.com/uma/v2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t217.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/vnd.chrome.uma", 
		"BodyBinary=\td\\x00\\x1A\\xD5<\\xC4\n\\xE4\\x10\\x13\\x1A\\xFA\n\\x08\\x91\\xF2\\xE1\\xAF\\x06\\x12\\x10123.0.6312.58-64\\x18\\xE0\\x98\\xAD\\xA1\\x06\"\\x06es-419*\\x18\n\nWindows NT\\x12\n10.0.226212o\n\\x06x86_64\\x10\\xEE}\\x18\\x80\\x80\\xD8\\xC5\\xED\\xFF\\x1F\"\rDell G15 5511(\\x010\\x80\\x0C8\\xE0\\x06B\n\\x08\\x00\\x10\\x00\\x1A\\x002\\x00:\\x00Mw\\xC4\rCU}\"\\x0ECe\\x00\\x00\\xA0?j\\x16\n\\x0CGenuineIntel\\x10\\xD1\\x8D \\x18\\x10 "
		"\\x01\\x82\\x01\\x00\\x8A\\x01\\x00\\xAA\\x01\\x06x86_64\\xB0\\x01\\x01J\n\r\\xF3!;c\\x15\\x80\\x8D}\\xCAJ\n\r#4\\xBCw\\x15\\x80\\x8D}\\xCAJ\n\r\\xDA\\x13;\\xE4\\x15D\\xB8\r\\x01J\n\r\\x95\\xAA\\x950\\x15\\xDF\\x17J?J\n\r[\\x08\\xD6W\\x15\\xD6S\\xAFaJ\n\r\\xDF)3m\\x15\\x9F\\xCF \\xDCJ\n\rR_`\\x98\\x15\\x80\\x8D}\\xCAJ\n\r3\\x14\\xECG\\x15\\x80\\x8D}\\xCAJ\n\r\\x99mfD\\x15\\x80\\x8D}\\xCAJ\n\r\\x16\\xDF\\x08\\xB0\\x15Z\\xE5{7J\n\r\\xB8e\\x96\\xE8\\x15\\x80\\x8D}\\xCAJ\n\r"
		"\\xF7o\\x18\\xD5\\x15\\x98\\xA7\\x83\\xA7J\n\r\\xA3\\x90\\xB8\\xB0\\x15\\x80\\x8D}\\xCAJ\n\rr\\xCC\\xCFH\\x15\\x02\\xAEc\\xEEJ\n\r\\xD1\\x88\\x94\\xB7\\x15sY\\x8C\\x1FJ\n\r\\xB8\\xA1\\x82\\xA5\\x15=\\xF4\\xD3ZJ\n\r\\xEB\\x89\\\\\\xA0\\x15\\xA2\\xE6\\xED\\x12J\n\r\\xB4\\x97-\\xD9\\x15\\x80\\x8D}\\xCAJ\n\rSYf&\\x15\\x80\\x8D}\\xCAJ\n\r\\x0Cu\\x7F\\x02\\x15\\x80\\x8D}\\xCAJ\n\r\\xEF\\x81\\x15\\xAE\\x15\\xA2\\xE6\\xED\\x12J\n\r\\x16?\\xD3?\\x15\\x80\\x8D}\\xCAJ\n\r\\x03\\xF2r\\xC2\\x15\\x80\\x8D}"
		"\\xCAJ\n\r\\x95@&\\xF6\\x15\\x80\\x8D}\\xCAJ\n\r\\xCA\\x93\\x15\\xE4\\x15\\x80\\x8D}\\xCAJ\n\r\\x9A!\\xCF\\xBA\\x15\\x80\\x8D}\\xCAJ\n\r\\xE2q\\x9B\\xAD\\x15\\xA2\\xE6\\xED\\x12J\n\r\\x0C\\xDF\\xAB\\xC9\\x15\\x80\\x8D}\\xCAJ\n\r4\\x89\\xC6a\\x15\\x80\\x8D}\\xCAJ\n\r\\xCC\\xA7*\r\\x15\\x80\\x8D}\\xCAJ\n\rm#:^\\x15d\\xC4;`J\n\r\\x14\tkJ\\x15\\x80\\x8D}\\xCAJ\n\r\\x92~Jx\\x15Z\\xE5{7J\n\r.Q\\xC5\\x91\\x15\\x80\\x8D}\\xCAJ\n\r\\xD9\\xD5\\xC2\\xDF\\x15J\\xD4\\x8A\\x02J\n\r"
		"\\x1D\\xCA\\x7Fo\\x15J\\xD4\\x8A\\x02J\n\r\\x85|\\xF19\\x15\\xF7\\xC9\\x1F\\xEFJ\n\rXO\\x86\\x08\\x15J\\xD4\\x8A\\x02J\n\r\\x1E_\\xC9K\\x15=\\xF29\\xF8J\n\r\\xE7\\xED\\xCE\\xDC\\x15\\xB0\\x14?\\xF2J\n\r\\xE3\\xA9\\xB9\\xF7\\x15\\x80\\x8D}\\xCAJ\n\r\\xFF\\xC9\\x82K\\x15\\x80\\x8D}\\xCAJ\n\rN\\x18J1\\x15\\x80\\x8D}\\xCAJ\n\r<=I\\xDA\\x15\\x80\\x8D}\\xCAJ\n\r>\\xFD\\xBAr\\x15\\x80\\x8D}\\xCAJ\n\r\\x0B\\x10v@\\x15\\x80\\x8D}\\xCAJ\n\r\\xC4\\xDF\\xD7>\\x15\\x80\\x8D}\\xCAJ\n\r"
		"\\xA8\\x86\\xDF\\x97\\x15\\x80\\x8D}\\xCAJ\n\r\\xBE/\\xA1Y\\x15\\xA5\\xC7\\\\\\xFAJ\n\r\\x13F\\xDB\\xAF\\x15\\x80\\x8D}\\xCAJ\n\r\\xF0KX\\x8C\\x150\\x8C/iJ\n\r//Z\\x04\\x15Hi\\x0F\\x94J\n\rF\\xCD\\xA3\\x8A\\x15\\x80\\x8D}\\xCAJ\n\rX\\xB4{\\xDE\\x15\\x80\\x8D}\\xCAJ\n\r\\xF0+\\xA7\\x9E\\x15Z\\xE5{7J\n\r\\xA6\\x03\\xA3N\\x15\\x0E%\\xBB\\xECJ\n\rK\\x10P\\x98\\x15\\xDF\\x17J?J\n\r\\x11\\xB3\\xEF\\xF1\\x15\\x80\\x8D}\\xCAJ\n\r\\x16K\\xF7<\\x15\\x80\\x8D}\\xCAJ\n\r"
		"\\xF4\\xDD\\xDC\\x1E\\x15\\xD5\\x13\\x9DeJ\n\r\\x1D\\x88\r\\xEA\\x15\\xA2\\xE6\\xED\\x12J\n\r\\x84n\"#\\x15\\x80\\x8D}\\xCAJ\n\r\\\\7_a\\x15\\x80\\x8D}\\xCAJ\n\rG3\\x08\\xD0\\x15\\xA2\\xE6\\xED\\x12J\n\rL\\xF4\\x84{\\x15\\xDF\\x17J?J\n\r\\xC5\\xD6\\xB7\\x06\\x15\\x80\\x8D}\\xCAJ\n\r8\\xFA\\xF1\\x94\\x15\\x80\\x8D}\\xCAJ\n\r`\\x87MI\\x15C]2RJ\n\r`\\xB3\\xFB8\\x15\\x0B$\\x8F\\xF0J\n\r\\xC2s({\\x15\\x00\\x11\\xCE\\x00J\n\rU\\x08\\xC6:\\x15\\x9C*nHJ\n\r\\xA3\\xB6\\xDCc\\x15Yl\\x13\\xABJ\n\r"
		"F\\xE7\\x06\\xE7\\x15c(\\x82\\xA5J\n\r\\x0C\\x19\\x96\\xF2\\x15\\x80\\x8F\\xDD$J\n\r\\xE2\\xAABD\\x15c(\\x82\\xA5J\n\rd\\xCF\\x90\\xF6\\x15u\\x05\\xD6JJ\n\rw\\xD3\\xD1\\x0E\\x15\\x14\\x0F\\xCC\\xE1J\n\r\\xA0\\xF0\\xF0u\\x15u\\x05\\xD6JJ\n\r\\x90?\\x0Cq\\x15\\x14\\x0F\\xCC\\xE1J\n\r\\x81\\x84\\xB1\\xE2\\x156A\\x10\\xBDJ\n\r\\x89\\x18\\xE7\\xE7\\x15\\x14\\x0F\\xCC\\xE1J\n\r\\xCEA\\xCAg\\x15\\x80\\x8D}\\xCAJ\n\r\\xFD\\xDA\\x10\\x05\\x15\\x80\\x8D}\\xCAJ\n\r\\xC0\\xDC\\x9Fm\\x15D\\x802\\xF0J\n\r"
		"\\xF0\\x0Fz\\xC7\\x15aOlWJ\n\r_\\x90\\x08\\xDD\\x15\\xE7\\xB77\\xF6J\n\r[F!.\\x15)jl.J\n\rr\\xE8\\xA3\\x9F\\x15\\x80\\x8D}\\xCAJ\n\r\\x01\\x96\\xCFm\\x15\\x80\\x8D}\\xCAJ\n\r\\xB3i\\x8F\\xA3\\x15V\\x83\\x1B\\xAFJ\n\r\\xBAm\\xD2;\\x15J\\xD4\\x8A\\x02P\\x04Z\\x02\\x08\\x00b\\x04GGLSj\\x0C\\x08\\x00\\x10\\x00\\x18\\x00 \\x068\\x00@\\x00\\x80\\x01\\xE0\\x98\\xAD\\xA1\\x06\\x98\\x01\\x00\\xB0\\x01\\x01\\xE2\\x01\\x1620240321-050138.474000\\xF8\\x01\\xB6 "
		"\\x80\\x02\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\x01\\x88\\x02\\x01\\x92\\x02$4a15a35d-aa84-4793-9199-5c6a6513416a\\xA8\\x02\\xD4\\x15\\xB2\\x02\\x04\\xFB\\x0C\\x8Dx2\r\tVM\\xC4\\xD3\\xE0\\x1D],\\x1A\\x02\\x10\\x012\\x0F\t_\\xFC\\xBB9\\xAF\\x97\\xD3\\x9A\\x10\\x01\\x1A\\x02\\x10\\x022\\x11\t\\x17\\xF9\\xCB\\xEA\\x16s\\xCD\\x8C\\x10\\x84\\x07\\x1A\\x03\\x10\\x85\\x07\\xE0\\x01,", 
		"LAST");

	return 0;
}
# 5 "c:\\users\\lalor\\documents\\git\\software-quality-and-engineering---up\\fundamentos de pruebas y calidad de software\\vugen\\testinginanutshell\\webhttp\\\\combined_WebHTTP.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\lalor\\documents\\git\\software-quality-and-engineering---up\\fundamentos de pruebas y calidad de software\\vugen\\testinginanutshell\\webhttp\\\\combined_WebHTTP.c" 2

