CREATE TABLE purplemap (
    id SERIAL PRIMARY KEY NOT NULL,
    sip_user VARCHAR(128) NOT NULL,
    ext_user VARCHAR(128) NOT NULL,
    ext_prot VARCHAR(16) NOT NULL,
    ext_pass VARCHAR(64)
);

INSERT INTO version (table_name, table_version) values ('purplemap','1');

