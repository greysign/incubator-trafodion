/**********************************************************************
// @@@ START COPYRIGHT @@@
//
// (C) Copyright 1998-2014 Hewlett-Packard Development Company, L.P.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
// @@@ END COPYRIGHT @@@
********************************************************************/
/**************************************************************************
**************************************************************************/
//
// MODULE: NSKIEEE.h
//
// PURPOSE:
//
//
#ifndef NSK_IEEEH
#define NSK_IEEEH

#define	TANDEM_TO_IEEE		0
#define	IEEE_TO_TANDEM		1

#define	STATUS_OK			0
#define	STATUS_OVERFLOW		1
#define	STATUS_UNDERFLOW	2

namespace ODBC {

void	byte_swap(BYTE *source, long source_len);
void	byte_swap_2(BYTE *source);
void	byte_swap_4(BYTE *source);
void	byte_swap_8(BYTE *source);
void	byte_swap_string(BYTE *source, long source_len);
short conv_float64_to_ieee_d (BYTE *op);
short conv_ieee_d_to_float64 (BYTE *op);
short conv_float32_to_ieee_s (BYTE *op );
short conv_ieee_s_to_float32 (BYTE *op );
short Datatype_Dependent_Swap(BYTE *source, long dataType, long source_len, BOOL tandem_ieee);
short Datatype_Dependent_Convert(BYTE *source, long dataType, long source_len, BOOL tandem_ieee);
void SQLDatatype_Dependent_Swap(BYTE *source, long dataType, SQLINTEGER charSet, long DataLength);
short SQLDatatype_Dependent_Convert(BYTE *source, long dataType, long DateTimeCode, BOOL tandem_ieee);
long dataLength(SQLSMALLINT SQLDataType, SQLINTEGER SQLOctetLength, unsigned char* buffer, BOOL out=FALSE);
long dataLength(SQLSMALLINT SQLDataType, SQLINTEGER SQLOctetLength, unsigned char* buffer);
long dataLengthFetchRowset(SQLSMALLINT SQLDataType, SQLINTEGER SQLOctetLength, SQLINTEGER maxRowLen, unsigned char* buffer);
long dataLengthFetchPerf(SQLSMALLINT SQLDataType, SQLINTEGER SQLOctetLength, SQLINTEGER maxRowLen, unsigned char* buffer);

}

#endif