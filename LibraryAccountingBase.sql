--
-- PostgreSQL database dump
--

-- Dumped from database version 16.4
-- Dumped by pg_dump version 16.4

-- Started on 2025-01-13 00:33:45

SET statement_timeout = 0;
SET lock_timeout = 0;
SET idle_in_transaction_session_timeout = 0;
SET client_encoding = 'UTF8';
SET standard_conforming_strings = on;
SELECT pg_catalog.set_config('search_path', '', false);
SET check_function_bodies = false;
SET xmloption = content;
SET client_min_messages = warning;
SET row_security = off;

SET default_tablespace = '';

SET default_table_access_method = heap;

--
-- TOC entry 216 (class 1259 OID 18506)
-- Name: Authors; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."Authors" (
    author_id integer NOT NULL,
    author_name character varying NOT NULL
);


ALTER TABLE public."Authors" OWNER TO postgres;

--
-- TOC entry 215 (class 1259 OID 18501)
-- Name: Books; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."Books" (
    book_id integer NOT NULL,
    author_id integer NOT NULL,
    genre_id integer NOT NULL,
    description character varying NOT NULL,
    tittle character varying NOT NULL,
    publication_year character varying
);


ALTER TABLE public."Books" OWNER TO postgres;

--
-- TOC entry 217 (class 1259 OID 18511)
-- Name: Genres; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public."Genres" (
    genre_id integer NOT NULL,
    genre_name character varying NOT NULL
);


ALTER TABLE public."Genres" OWNER TO postgres;

--
-- TOC entry 4793 (class 0 OID 18506)
-- Dependencies: 216
-- Data for Name: Authors; Type: TABLE DATA; Schema: public; Owner: postgres

--
-- TOC entry 4644 (class 2606 OID 18510)
-- Name: Authors Authors_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Authors"
    ADD CONSTRAINT "Authors_pkey" PRIMARY KEY (author_id);


--
-- TOC entry 4642 (class 2606 OID 18505)
-- Name: Books Books_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Books"
    ADD CONSTRAINT "Books_pkey" PRIMARY KEY (book_id);


--
-- TOC entry 4646 (class 2606 OID 18515)
-- Name: Genres Genres_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Genres"
    ADD CONSTRAINT "Genres_pkey" PRIMARY KEY (genre_id);


--
-- TOC entry 4647 (class 2606 OID 18531)
-- Name: Books author_id_key; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Books"
    ADD CONSTRAINT author_id_key FOREIGN KEY (author_id) REFERENCES public."Authors"(author_id) NOT VALID;


--
-- TOC entry 4648 (class 2606 OID 18526)
-- Name: Books genre_id_key; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public."Books"
    ADD CONSTRAINT genre_id_key FOREIGN KEY (genre_id) REFERENCES public."Genres"(genre_id) NOT VALID;


-- Completed on 2025-01-13 00:33:45

--
-- PostgreSQL database dump complete
--

