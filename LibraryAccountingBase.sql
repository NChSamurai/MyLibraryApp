PGDMP              	         }            LibraryAccountingBase    16.4    16.4     �           0    0    ENCODING    ENCODING        SET client_encoding = 'UTF8';
                      false            �           0    0 
   STDSTRINGS 
   STDSTRINGS     (   SET standard_conforming_strings = 'on';
                      false            �           0    0 
   SEARCHPATH 
   SEARCHPATH     8   SELECT pg_catalog.set_config('search_path', '', false);
                      false            �           1262    18500    LibraryAccountingBase    DATABASE     �   CREATE DATABASE "LibraryAccountingBase" WITH TEMPLATE = template0 ENCODING = 'UTF8' LOCALE_PROVIDER = libc LOCALE = 'Russian_Russia.1251';
 '   DROP DATABASE "LibraryAccountingBase";
                postgres    false            �            1259    18506    Authors    TABLE     n   CREATE TABLE public."Authors" (
    author_id integer NOT NULL,
    author_name character varying NOT NULL
);
    DROP TABLE public."Authors";
       public         heap    postgres    false            �            1259    18501    Books    TABLE     �   CREATE TABLE public."Books" (
    book_id integer NOT NULL,
    author_id integer NOT NULL,
    genre_id integer NOT NULL,
    description character varying NOT NULL,
    tittle character varying NOT NULL,
    publication_year character varying
);
    DROP TABLE public."Books";
       public         heap    postgres    false            �            1259    18511    Genres    TABLE     k   CREATE TABLE public."Genres" (
    genre_id integer NOT NULL,
    genre_name character varying NOT NULL
);
    DROP TABLE public."Genres";
       public         heap    postgres    false            �          0    18506    Authors 
   TABLE DATA           ;   COPY public."Authors" (author_id, author_name) FROM stdin;
    public          postgres    false    216          �          0    18501    Books 
   TABLE DATA           f   COPY public."Books" (book_id, author_id, genre_id, description, tittle, publication_year) FROM stdin;
    public          postgres    false    215   j       �          0    18511    Genres 
   TABLE DATA           8   COPY public."Genres" (genre_id, genre_name) FROM stdin;
    public          postgres    false    217   �       $           2606    18510    Authors Authors_pkey 
   CONSTRAINT     ]   ALTER TABLE ONLY public."Authors"
    ADD CONSTRAINT "Authors_pkey" PRIMARY KEY (author_id);
 B   ALTER TABLE ONLY public."Authors" DROP CONSTRAINT "Authors_pkey";
       public            postgres    false    216            "           2606    18505    Books Books_pkey 
   CONSTRAINT     W   ALTER TABLE ONLY public."Books"
    ADD CONSTRAINT "Books_pkey" PRIMARY KEY (book_id);
 >   ALTER TABLE ONLY public."Books" DROP CONSTRAINT "Books_pkey";
       public            postgres    false    215            &           2606    18515    Genres Genres_pkey 
   CONSTRAINT     Z   ALTER TABLE ONLY public."Genres"
    ADD CONSTRAINT "Genres_pkey" PRIMARY KEY (genre_id);
 @   ALTER TABLE ONLY public."Genres" DROP CONSTRAINT "Genres_pkey";
       public            postgres    false    217            '           2606    18531    Books author_id_key    FK CONSTRAINT     �   ALTER TABLE ONLY public."Books"
    ADD CONSTRAINT author_id_key FOREIGN KEY (author_id) REFERENCES public."Authors"(author_id) NOT VALID;
 ?   ALTER TABLE ONLY public."Books" DROP CONSTRAINT author_id_key;
       public          postgres    false    215    216    4644            (           2606    18526    Books genre_id_key    FK CONSTRAINT     �   ALTER TABLE ONLY public."Books"
    ADD CONSTRAINT genre_id_key FOREIGN KEY (genre_id) REFERENCES public."Genres"(genre_id) NOT VALID;
 >   ALTER TABLE ONLY public."Books" DROP CONSTRAINT genre_id_key;
       public          postgres    false    217    4646    215            �   ;   x�3426�0�¾���.컰�¦��v]�qa'����煩@��{�"{�b���� �r\      �   t   x��A
�0����9AaR)��D�*���	��&Wxs#_;�6���DC�	x"Y������"*ޔ�#�P<=���,�v̴lg�؈�,c�3��_Y����qܩs����K�      �   /   x�3444估�¾{.l����5⼰��~���[/�s��qqq �R�     