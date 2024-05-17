# 1 "c:\\users\\lalor\\documents\\git\\software-quality-and-engineering---up\\fundamentos de pruebas y calidad de software\\vugen\\testinginanutshell\\garbarino\\\\combined_Garbarino.c"
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







 
 



















# 1 "c:\\users\\lalor\\documents\\git\\software-quality-and-engineering---up\\fundamentos de pruebas y calidad de software\\vugen\\testinginanutshell\\garbarino\\\\combined_Garbarino.c" 2

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

 
 
 

                               


 
 
 





















# 2 "c:\\users\\lalor\\documents\\git\\software-quality-and-engineering---up\\fundamentos de pruebas y calidad de software\\vugen\\testinginanutshell\\garbarino\\\\combined_Garbarino.c" 2

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






 
 






# 3 "c:\\users\\lalor\\documents\\git\\software-quality-and-engineering---up\\fundamentos de pruebas y calidad de software\\vugen\\testinginanutshell\\garbarino\\\\combined_Garbarino.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\lalor\\documents\\git\\software-quality-and-engineering---up\\fundamentos de pruebas y calidad de software\\vugen\\testinginanutshell\\garbarino\\\\combined_Garbarino.c" 2

# 1 "Action.c" 1
Action()
{	
	web_cache_cleanup();
	web_cleanup_cookies();
	 
	web_set_sockets_option("SSL_VERSION", "AUTO");
	 
# 29 "Action.c"

	web_url("www.garbarino.com", 
		"URL=https://www.garbarino.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/static-v-shop/1712256370368/fonts/Roboto-Regular.6887b6f2.woff2", "Referer=https://d2eebw31vcx88p.cloudfront.net/garbarino/static-v-shop/1712256370368/css/v-shop.9bd2deec.css", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/static-v-shop/1712256370368/fonts/materialdesignicons-webfont.62ff6e3a.woff2", "Referer=https://d2eebw31vcx88p.cloudfront.net/garbarino/static-v-shop/1712256370368/css/v-shop.9bd2deec.css", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/static-v-shop/1712256370368/fonts/NunitoSans-Regular.e9346522.woff2", "Referer=https://d2eebw31vcx88p.cloudfront.net/garbarino/static-v-shop/1712256370368/css/v-shop.9bd2deec.css", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/static-v-shop/1712256370368/fonts/OpenSans-Regular.bfdb5bc0.woff2", "Referer=https://d2eebw31vcx88p.cloudfront.net/garbarino/static-v-shop/1712256370368/css/v-shop.9bd2deec.css", "ENDITEM", 
		"Url=https://cdn.webpushr.com/app.min.js", "ENDITEM", 
		"Url=/webpushr-sw.js", "ENDITEM", 
		"Url=https://www.googletagmanager.com/gtag/js?id=G-3SQN45GM23", "ENDITEM", 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIzLjAuNjMxMi4xMDcSGQnjFemd-Nrk9hIFDULauvchHR2Oky1DQF0SIAkHTLnezRl6kxIFDXhvEhkSBQ3OQUx6ISJyyOgA90SpEhkJTipy9SV1F30SBQ2LxHTDIc4BXnHb30D5?alt=proto", "Referer=", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/e0bc99d42f591f70c5a93da61fd5d46e546f4d23.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/eb439b150b42351ecceaa1b45e430f8fec6be794.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/a49213b739e5ef9369c8a804e3920afc54448fa8.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/c6ec786930f22b4e33d84616bb015b6b071f4f9e.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/21f19c8a60c84684b348c65f0ee137d4a6f424dc.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/f91ef15dcd387bc806c6ee8f5f3db5fdfa0da12e.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/d794cbbfd49819ec77bfd56a3375e4d8a33ee145.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/caa6c3fb53bc2f18d6c489d6af9ceec17425fa5d.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/8f1f8ef88e94c047643a9254dda8528ddeea0c56.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/2235838f637455f618f6847ccc26b6a844bfa67f.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/33c5d7c6bebcdd072b9fcbd0c0c8996da9994c50.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/283a39c25c7c4cde94383ce1cbf0fc50376d1f6f.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/e45e29050c435ab0b6ac146ac8f5543f98364273.jpg.webp", "ENDITEM", 
		"Url=https://www.google.com.mx/pagead/1p-user-list/11059668143/?random=1712887266516&cv=11&fst=1712887200000&bg=ffffff&guid=ON&async=1&gtm=45je44a0v9138474532za200&gcd=13l3l3l3l1&dma=0&u_w=1536&u_h=864&url=https%3A%2F%2Fwww.garbarino.com%2F&tiba=Garbarino&frm=0&npa=0&data=event%3Dpage_view&fmt=3&is_vtc=1&cid=CAQSGwB7FLtqf6gOnauDoQfrpotYbV_yFXaaO_DI3g&random=2446108281&rmt_tld=1&ipr=y", "ENDITEM", 
		"Url=https://www.google.com.mx/pagead/1p-user-list/11059668143/?random=1712887266526&cv=11&fst=1712887200000&bg=ffffff&guid=ON&async=1&gtm=45je44a0v9138474532za200&gcd=13l3l3l3l1&dma=0&u_w=1536&u_h=864&url=https%3A%2F%2Fwww.garbarino.com%2F&frm=0&tiba=Garbarino&value=9549119&currency_code=ARS&npa=0&data=event%3Dview_item_list&fmt=3&is_vtc=1&cid=CAQSGwB7FLtq3jjwEnExn38reiFXzpS8VpRKyRQTUA&random=3638479689&rmt_tld=1&ipr=y", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/87cb1d366d6b0b272ab2d4ff38d1f096e0c53598.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/1442e28699b062932784e36dce1c796a2e2ece11.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/3cb991672d400ccc687457a6cb4a595de4739e29.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/866ff49ae1ea889d29b7e41574da148ef2f5220b.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/726bd3ef66f2dc46cfded25204368083dd332866.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/06c064b9aba51c3b690be7f426415367b00092c8.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/b6f024f009a2f9ce62c8cd2afc0c17f38461c7db.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/0a33852a228358a8286921bc659838ec658385b0.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/7b56eac94fb38453ffb54453e91b78a3c6296676.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/35c1ff440b470e625c910b0f7d2f88f5fec0e744.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/dfde1e8a197df62f9ed6aa791756b85fe9fb603c.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/c5c4d569c59d98e04382a87cf8390a2be1a57504.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/874d98dd16d115f9cde757a65e935dac80238e69.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/4fb9ce42571f177dae899fca0f6e221307100bc0.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/0039f21c21b8e66edf94e60ba5b1032db4563196.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/0aea5e93d943ce3224bed36bf1df4a7d5075fbcc.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/26c2e1e67403fa1b443c63bffba4057d34de9a6f.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/ac2ec8694c6c0ffed9ce6f9405de4d0bfede70a0.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/73fe98cd3dd621d4e97ad1445059d1c238675cb0.jpg.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/d0ac60e2fa4a5de40a97f0e1484485b61ba5c7fe.png.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/06b85dd6e02fea521106a63753cceaff3ba56d38.png.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/dfa54b4a15d8a9d067964188984b9b85405237fe.png.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/7f86f7d8feee2add62c53a3392f8028c8ba5b32a.png.webp", "ENDITEM", 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/c4858c210134f297bb1ce0976e96fcecf06f5c83.png.webp", "ENDITEM", 
		"Url=https://externalassets.icommarketing.com/icomMkt_tracking_jquery.min.js", "ENDITEM", 
		"LAST");

	 

	 
# 148 "Action.c"
	web_add_cookie("_gcl_au=1.1.1268100167.1712887266; DOMAIN=www.garbarino.com");

	web_add_cookie("_ga=GA1.1.2077486026.1712887266; DOMAIN=www.garbarino.com");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.0.1712887267.0.0.0; DOMAIN=www.garbarino.com");
	

	lr_think_time(23);

	web_submit_data("shop", 
		"Action=https://www.garbarino.com/api/catalog/shop", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"filters\":[\"celulares-notebooks-y-tecnologia\",\"celulares-y-telefonos\",\"celulares-libres\"],\"page\":1}", "ENDITEM", 
		"LAST");

	 

	lr_start_transaction("Case_g01_01_look_cellphone");

	 
# 205 "Action.c"
	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887294.0.0.0; DOMAIN=www.garbarino.com");
	
	

	web_url("20e16b85-a660-4d74-b87e-c9cecb9de043", 
		"URL=https://www.garbarino.com/api/catalog/product/20e16b85-a660-4d74-b87e-c9cecb9de043", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/celulares-notebooks-y-tecnologia/celulares-y-telefonos/celulares-libres", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("Case_g01_01_look_cellphone",2);

	 

	lr_start_transaction("Case_g01_02_select_cellphone");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887312.0.0.0; DOMAIN=www.garbarino.com");

	lr_think_time(33);

	web_submit_data("item", 
		"Action=https://www.garbarino.com/api/cart/item", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/p/samsung-galaxy-z-fold5-5g-dual-sim-256-gb-12-gb-ram-blue/20e16b85-a660-4d74-b87e-c9cecb9de043", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"qty\":1,\"refType\":\"product\",\"refId\":\"ca1f04f6-2e49-487f-8ba7-5a34c233e174\",\"customization\":{},\"sum\":true}", "ENDITEM", 
		"LAST");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887346.0.0.0; DOMAIN=www.garbarino.com");

	web_url("20e16b85-a660-4d74-b87e-c9cecb9de043_2", 
		"URL=https://www.garbarino.com/api/catalog/product-upsells/20e16b85-a660-4d74-b87e-c9cecb9de043", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/p/samsung-galaxy-z-fold5-5g-dual-sim-256-gb-12-gb-ram-blue/20e16b85-a660-4d74-b87e-c9cecb9de043", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"LAST");

	 
# 285 "Action.c"
		

	lr_end_transaction("Case_g01_02_select_cellphone",2);

	 

	lr_start_transaction("Case_g01_03_buy_cellphone");

	web_url("init", 
		"URL=https://www.garbarino.com/api/checkout/init?", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/init", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"LAST");

 

	web_submit_data("signin", 
		"Action=https://www.garbarino.com/api/checkout/load-step/signin", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/signin", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":null}", "ENDITEM", 
		"LAST");

	lr_end_transaction("Case_g01_03_buy_cellphone",2);

	 

	lr_think_time(53);

	lr_start_transaction("Case_g01_04_login");

	 
# 349 "Action.c"
	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887366.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266.404485713.1712887418.1712887418; DOMAIN=www.garbarino.com");
	
	

	lr_think_time(8);

	web_submit_data("signin_2", 
		"Action=https://www.garbarino.com/api/user/signin", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/signin", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"email\":\"nalado4430@kravify.com\",\"password\":\"nalado4430\"}", "ENDITEM", 
		"LAST");

	 

	 
# 385 "Action.c"

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266.404485713.1712887418.1712887428; DOMAIN=www.garbarino.com");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887428.0.0.0; DOMAIN=www.garbarino.com");
	

	web_url("products-ids", 
		"URL=https://www.garbarino.com/api/catalog/wishlist/products-ids", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/signin", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("signin_3", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/signin", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/signin", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"532fb16585530542f5114f7cc7d237efdd888f20\"},\"payload\":{}}", "ENDITEM", 
		"LAST");

	web_submit_data("discount", 
		"Action=https://www.garbarino.com/api/checkout/load-step/discount", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/discount", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"532fb16585530542f5114f7cc7d237efdd888f20\"}}", "ENDITEM", 
		"LAST");

	lr_end_transaction("Case_g01_04_login",2);

	 

	lr_start_transaction("Case_g01_05_coupon");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887429.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266.404485713.1712887418.1712887429; DOMAIN=www.garbarino.com");
	 


	lr_think_time(23);

	web_submit_data("discount_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/discount", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/discount", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"532fb16585530542f5114f7cc7d237efdd888f20\"},\"payload\":{\"noCode\":true}}", "ENDITEM", 
		"LAST");

	web_submit_data("delivery", 
		"Action=https://www.garbarino.com/api/checkout/load-step/delivery", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/delivery", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"532fb16585530542f5114f7cc7d237efdd888f20\"}}", "ENDITEM", 
		"LAST");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887453.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266.404485713.1712887418.1712887453; DOMAIN=www.garbarino.com");
	 

	web_submit_data("calculate", 
		"Action=https://www.garbarino.com/api/checkout/delivery/calculate", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/delivery", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"532fb16585530542f5114f7cc7d237efdd888f20\"},\"address\":{\"id\":12074,\"deliveryDefault\":true,\"invoiceDefault\":true,\"street\":\"Manuel Castro\",\"streetNumber\":\"304\",\"apartment\":null,\"floor\":null,\"comment\":null,\"intersection1\":null,\"intersection2\":null,\"city\":\"Lomas de Zamora\",\"userId\":47128,\"zipcodeId\":491,\""
		"zipcode\":{\"id\":491,\"code\":\"1832\",\"stateId\":4,\"state\":{\"id\":4,\"name\":\"Provincia de Buenos Aires\",\"iso\":\"B\",\"countryId\":9,\"country\":{\"id\":9,\"name\":\"Argentina\",\"iso\":\"AR\",\"zipcodeValidation\":\"1\",\"phoneCode\":54,\"phoneValidation\":\"^0[1-3]{1}[0-9]{9}$\",\"langIso\":\"es_AR,es,en_AR,en\",\"continentId\":6,\"continent\":{\"id\":6,\"name\":\"América del Sur\",\"iso\":\"SA\"}}}}}}", "ENDITEM", 
		"LAST");

	lr_end_transaction("Case_g01_05_coupon",2);

	 

	lr_think_time(19);

	lr_start_transaction("Case_g01_06_delivery_address");

	web_submit_data("delivery_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/delivery", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/delivery", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"532fb16585530542f5114f7cc7d237efdd888f20\"},\"payload\":{\"clientAddress\":{\"id\":12074,\"deliveryDefault\":true,\"invoiceDefault\":true,\"street\":\"Manuel Castro\",\"streetNumber\":\"304\",\"apartment\":null,\"floor\":null,\"comment\":null,\"intersection1\":null,\"intersection2\":null,\"city\":\"Lomas de Zamora\",\"userId\":47128,\""
		"zipcodeId\":491,\"zipcode\":{\"id\":491,\"code\":\"1832\",\"stateId\":4,\"state\":{\"id\":4,\"name\":\"Provincia de Buenos Aires\",\"iso\":\"B\",\"countryId\":9,\"country\":{\"id\":9,\"name\":\"Argentina\",\"iso\":\"AR\",\"zipcodeValidation\":\"1\",\"phoneCode\":54,\"phoneValidation\":\"^0[1-3]{1}[0-9]{9}$\",\"langIso\":\"es_AR,es,en_AR,en\",\"continentId\":6,\"continent\":{\"id\":6,\"name\":\"América del Sur\",\"iso\":\"SA\"}}}}},\"selection\":{\"47\":{\"cost\":0,\"currencyId\":null,\"hasCost\""
		":true,\"toAddress\":{\"id\":12074,\"deliveryDefault\":true,\"invoiceDefault\":true,\"street\":\"Manuel Castro\",\"streetNumber\":\"304\",\"apartment\":null,\"floor\":null,\"comment\":null,\"intersection1\":null,\"intersection2\":null,\"city\":\"Lomas de Zamora\",\"userId\":47128,\"zipcodeId\":491,\"zipcode\":{\"id\":491,\"code\":\"1832\",\"stateId\":4,\"state\":{\"id\":4,\"name\":\"Provincia de Buenos Aires\",\"iso\":\"B\",\"countryId\":9,\"country\":{\"id\":9,\"name\":\"Argentina\",\"iso\":\"AR\""
		",\"zipcodeValidation\":\"1\",\"phoneCode\":54,\"phoneValidation\":\"^0[1-3]{1}[0-9]{9}$\",\"langIso\":\"es_AR,es,en_AR,en\",\"continentId\":6,\"continent\":{\"id\":6,\"name\":\"América del Sur\",\"iso\":\"SA\"}}}}},\"deliveryOptionId\":81,\"deliveryOptionKeyname\":\"envio_visuar\",\"sellerId\":47,\"methodKey\":\"Shipping\",\"methodName\":\"Envío a domicilio\",\"integratorKey\":\"custom\",\"integratorName\":\"Personalizado\",\"optionKey\":\"envio_visuar\",\"optionName\":\"Envio a Domicilio\",\""
		"rateKey\":\"__free__\",\"carrierName\":null,\"message\":null,\"data\":{},\"toAddressLine\":\"Manuel Castro 304, Lomas de Zamora, Provincia de Buenos Aires, 1832\",\"hasEta\":true,\"etaMessage\":\"Llega entre el Martes y el Jueves 18/04\",\"etaFromDate\":\"2024-04-17T02:04:14.427Z\",\"etaToDate\":\"2024-04-19T02:04:14.427Z\",\"sku\":null,\"checkoutGroup\":null,\"hash\":\"79052c5e2e0ed205eac030948c83369f2b891011\",\"discountPct\":0,\"discount\":0,\"total\":0}},\"receiver\":{\"firstname\":\"Juan\",\""
		"lastname\":\"Robledo\",\"idNumber\":\"11111111\"}}}", "ENDITEM", 
		"LAST");
	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887473.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266.404485713.1712887418.1712887473; DOMAIN=www.garbarino.com");
	 

	web_submit_data("payment", 
		"Action=https://www.garbarino.com/api/checkout/load-step/payment", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/payment", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"532fb16585530542f5114f7cc7d237efdd888f20\"}}", "ENDITEM", 
		"EXTRARES", 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$req="
		"Ch4KDGdvb2dsZWNocm9tZRIOMTIzLjAuNjMxMi4xMDcaKQgFEAEaGwoNCAUQBhgBIgMwMDEwARDklxYaAhgJbkv8vSIEIAEgAigBGikIARABGhsKDQgBEAYYASIDMDAxMAEQqJUOGgIYCfgAioUiBCABIAIoARopCAMQARobCg0IAxAGGAEiAzAwMTABELeMDhoCGAl-ujmkIgQgASACKAEaKQgOEAEaGwoNCA4QBhgBIgMwMDEwARCZuAcaAhgJKn7d0SIEIAEgAigBGigIARAIGhoKDQgBEAgYASIDMDAxMAQQ0DgaAhgJ_JX3-iIEIAEgAigEGikIDxABGhsKDQgPEAYYASIDMDAxMAEQwdUCGgIYCekjsy8iBCABIAIoARonCAoQCBoZCg0IChAIGAEiAzAwMTABEAcaAhgJ6qKaVyIEIAEgAigBGicICRABGhkKDQgJEAYYASIDMDAxMAEQIxoCGAmL0zudIgQgASACKAEaKAgIEA"
		"EaGgoNCAgQBhgBIgMwMDEwARDvFRoCGAmSW9NwIgQgASACKAEaKQgNEAEaGwoNCA0QBhgBIgMwMDEwARCflgIaAhgJ-ZaYdSIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQzdsOGgIYCc0geewiBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEPEiGgIYCXCDoVgiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", "ENDITEM", 
		"LAST");

	 

	lr_end_transaction("Case_g01_06_delivery_address",2);

	 
# 555 "Action.c"
	
	 

	lr_start_transaction("Case_g01_07_payment_method");
	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887474.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266.404485713.1712887418.1712887474; DOMAIN=www.garbarino.com");
	 

	lr_think_time(22);

	web_submit_data("payment_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/payment", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/payment", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"532fb16585530542f5114f7cc7d237efdd888f20\"},\"payload\":{\"selection\":{\"paymentOptionId\":20,\"image\":{\"id\":1737091,\"url\":\"uploads/7f86f7d8feee2add62c53a3392f8028c8ba5b32a.png\",\"location\":\"cdn\",\"type\":\"image\",\"contentType\":\"image/png\",\"alt\":\"transfer\",\"data\":{\"width\":50,\"height\":50},\"fullUrl\":\"https://"
		"d2eebw31vcx88p.cloudfront.net/garbarino/uploads/7f86f7d8feee2add62c53a3392f8028c8ba5b32a.png\"},\"title\":\"Transferencia Bancaria\",\"messages\":[{\"text\":\"5% de descuento pagando con transferencia bancaria\"}],\"orderMessages\":[{\"text\":\"Tenés 24 hs para transferir y enviarnos tu comprobante a cac@garbarino.com.ar\"}],\"checkoutData\":{},\"method\":{\"methodName\":\"Transferencia Bancaria\",\"methodKey\":\"WireTransfer\",\"unpaidEmail\":true,\"offlinePayment\":true}},\"input\":null}}", "ENDITEM", 
		"LAST");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887512.0.0.0; DOMAIN=www.garbarino.com");

	web_submit_data("contact", 
		"Action=https://www.garbarino.com/api/checkout/load-step/contact", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/contact", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"4b4e704f4d3c8e2b93504f38bda7e96e68d340cb\"}}", "ENDITEM", 
		"LAST");
	 
# 603 "Action.c"

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266.404485713.1712887418.1712887512; DOMAIN=www.garbarino.com");
	web_url("phone-countries", 
		"URL=https://www.garbarino.com/api/user/phone-countries", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/contact", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		"LAST");
	 
# 624 "Action.c"
	lr_end_transaction("Case_g01_07_payment_method",2);

	 

	lr_think_time(28);

	lr_start_transaction("Case_g01_08_billing_information");

	web_submit_data("contact_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/contact", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/contact", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"4b4e704f4d3c8e2b93504f38bda7e96e68d340cb\"},\"payload\":{\"buyer\":{\"idNumber\":\"11111111\",\"firstname\":\"Juan\",\"lastname\":\"Robledo\",\"phoneCountryId\":9,\"phoneAreaCode\":\"11\",\"phoneNumber\":\"42434534\"},\"invoice\":{\"id\":4065,\"business\":false,\"personFirstname\":\"Juan\",\"personLastname\":\"Robledo\",\"personIdNumber\":\""
		"11111111\",\"businessName\":null,\"businessIdNumber\":null,\"invoiceType\":null,\"userId\":47128},\"invoiceAddress\":{\"id\":12074,\"deliveryDefault\":true,\"invoiceDefault\":true,\"street\":\"Manuel Castro\",\"streetNumber\":\"304\",\"apartment\":null,\"floor\":null,\"comment\":null,\"intersection1\":null,\"intersection2\":null,\"city\":\"Lomas de Zamora\",\"userId\":47128,\"zipcodeId\":491,\"zipcode\":{\"id\":491,\"code\":\"1832\",\"stateId\":4,\"state\":{\"id\":4,\"name\":\"Provincia de Buenos "
		"Aires\",\"iso\":\"B\",\"countryId\":9,\"country\":{\"id\":9,\"name\":\"Argentina\",\"iso\":\"AR\",\"zipcodeValidation\":\"1\",\"phoneCode\":54,\"phoneValidation\":\"^0[1-3]{1}[0-9]{9}$\",\"langIso\":\"es_AR,es,en_AR,en\",\"continentId\":6,\"continent\":{\"id\":6,\"name\":\"América del Sur\",\"iso\":\"SA\"}}}}}}}", "ENDITEM", 
		"LAST");

	web_submit_data("confirm", 
		"Action=https://www.garbarino.com/api/checkout/load-step/confirm", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/confirm", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"4b4e704f4d3c8e2b93504f38bda7e96e68d340cb\"}}", "ENDITEM", 
		"LAST");

	lr_end_transaction("Case_g01_08_billing_information",2);

	lr_think_time(6);
	 
# 672 "Action.c"
	 

	lr_start_transaction("Case_g01_09_confirm_purchase");
	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887541.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266.404485713.1712887418.1712887541; DOMAIN=www.garbarino.com");
	 

	lr_think_time(14);

	web_submit_data("confirm_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/confirm", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/confirm", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"4b4e704f4d3c8e2b93504f38bda7e96e68d340cb\"},\"payload\":{}}", "ENDITEM", 
		"LAST");
	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887567.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266.404485713.1712887418.1712887567; DOMAIN=www.garbarino.com");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887568.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266.404485713.1712887418.1712887568; DOMAIN=www.garbarino.com");
	 

	web_url("1ee470a2-c755-42d3-b95a-bef0a26be671", 
		"URL=https://www.garbarino.com/user/orders/1ee470a2-c755-42d3-b95a-bef0a26be671", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/confirm", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/webpushr-sw.js", "ENDITEM", 
		"LAST");

	web_url("products-ids_2", 
		"URL=https://www.garbarino.com/api/catalog/wishlist/products-ids", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/orders/1ee470a2-c755-42d3-b95a-bef0a26be671", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("1ee470a2-c755-42d3-b95a-bef0a26be671_2", 
		"URL=https://www.garbarino.com/api/user/order/1ee470a2-c755-42d3-b95a-bef0a26be671", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/orders/1ee470a2-c755-42d3-b95a-bef0a26be671", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("4111", 
		"URL=https://www.garbarino.com/api/user/order/1ee470a2-c755-42d3-b95a-bef0a26be671/refresh-delivery-eta/4111", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/orders/1ee470a2-c755-42d3-b95a-bef0a26be671", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("Case_g01_09_confirm_purchase",2);

	return 0;
}
# 5 "c:\\users\\lalor\\documents\\git\\software-quality-and-engineering---up\\fundamentos de pruebas y calidad de software\\vugen\\testinginanutshell\\garbarino\\\\combined_Garbarino.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\lalor\\documents\\git\\software-quality-and-engineering---up\\fundamentos de pruebas y calidad de software\\vugen\\testinginanutshell\\garbarino\\\\combined_Garbarino.c" 2
