using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000311")]
internal static class Constants
{
	[Token(Token = "0x4000D92")]
	internal const int S_OK = 0;

	[Token(Token = "0x4000D93")]
	internal const int NTE_FILENOTFOUND = -2147024894;

	[Token(Token = "0x4000D94")]
	internal const int NTE_NO_KEY = -2146893811;

	[Token(Token = "0x4000D95")]
	internal const int NTE_BAD_KEYSET = -2146893802;

	[Token(Token = "0x4000D96")]
	internal const int NTE_KEYSET_NOT_DEF = -2146893799;

	[Token(Token = "0x4000D97")]
	internal const int KP_IV = 1;

	[Token(Token = "0x4000D98")]
	internal const int KP_MODE = 4;

	[Token(Token = "0x4000D99")]
	internal const int KP_MODE_BITS = 5;

	[Token(Token = "0x4000D9A")]
	internal const int KP_EFFECTIVE_KEYLEN = 19;

	[Token(Token = "0x4000D9B")]
	internal const int ALG_CLASS_SIGNATURE = 8192;

	[Token(Token = "0x4000D9C")]
	internal const int ALG_CLASS_DATA_ENCRYPT = 24576;

	[Token(Token = "0x4000D9D")]
	internal const int ALG_CLASS_HASH = 32768;

	[Token(Token = "0x4000D9E")]
	internal const int ALG_CLASS_KEY_EXCHANGE = 40960;

	[Token(Token = "0x4000D9F")]
	internal const int ALG_TYPE_DSS = 512;

	[Token(Token = "0x4000DA0")]
	internal const int ALG_TYPE_RSA = 1024;

	[Token(Token = "0x4000DA1")]
	internal const int ALG_TYPE_BLOCK = 1536;

	[Token(Token = "0x4000DA2")]
	internal const int ALG_TYPE_STREAM = 2048;

	[Token(Token = "0x4000DA3")]
	internal const int ALG_TYPE_ANY = 0;

	[Token(Token = "0x4000DA4")]
	internal const int CALG_MD5 = 32771;

	[Token(Token = "0x4000DA5")]
	internal const int CALG_SHA1 = 32772;

	[Token(Token = "0x4000DA6")]
	internal const int CALG_SHA_256 = 32780;

	[Token(Token = "0x4000DA7")]
	internal const int CALG_SHA_384 = 32781;

	[Token(Token = "0x4000DA8")]
	internal const int CALG_SHA_512 = 32782;

	[Token(Token = "0x4000DA9")]
	internal const int CALG_RSA_KEYX = 41984;

	[Token(Token = "0x4000DAA")]
	internal const int CALG_RSA_SIGN = 9216;

	[Token(Token = "0x4000DAB")]
	internal const int CALG_DSS_SIGN = 8704;

	[Token(Token = "0x4000DAC")]
	internal const int CALG_DES = 26113;

	[Token(Token = "0x4000DAD")]
	internal const int CALG_RC2 = 26114;

	[Token(Token = "0x4000DAE")]
	internal const int CALG_3DES = 26115;

	[Token(Token = "0x4000DAF")]
	internal const int CALG_3DES_112 = 26121;

	[Token(Token = "0x4000DB0")]
	internal const int CALG_AES_128 = 26126;

	[Token(Token = "0x4000DB1")]
	internal const int CALG_AES_192 = 26127;

	[Token(Token = "0x4000DB2")]
	internal const int CALG_AES_256 = 26128;

	[Token(Token = "0x4000DB3")]
	internal const int CALG_RC4 = 26625;

	[Token(Token = "0x4000DB4")]
	internal const int PROV_RSA_FULL = 1;

	[Token(Token = "0x4000DB5")]
	internal const int PROV_DSS_DH = 13;

	[Token(Token = "0x4000DB6")]
	internal const int PROV_RSA_AES = 24;

	[Token(Token = "0x4000DB7")]
	internal const int AT_KEYEXCHANGE = 1;

	[Token(Token = "0x4000DB8")]
	internal const int AT_SIGNATURE = 2;

	[Token(Token = "0x4000DB9")]
	internal const int PUBLICKEYBLOB = 6;

	[Token(Token = "0x4000DBA")]
	internal const int PRIVATEKEYBLOB = 7;

	[Token(Token = "0x4000DBB")]
	internal const int CRYPT_OAEP = 64;

	[Token(Token = "0x4000DBC")]
	internal const uint CRYPT_VERIFYCONTEXT = 4026531840u;

	[Token(Token = "0x4000DBD")]
	internal const uint CRYPT_NEWKEYSET = 8u;

	[Token(Token = "0x4000DBE")]
	internal const uint CRYPT_DELETEKEYSET = 16u;

	[Token(Token = "0x4000DBF")]
	internal const uint CRYPT_MACHINE_KEYSET = 32u;

	[Token(Token = "0x4000DC0")]
	internal const uint CRYPT_SILENT = 64u;

	[Token(Token = "0x4000DC1")]
	internal const uint CRYPT_EXPORTABLE = 1u;

	[Token(Token = "0x4000DC2")]
	internal const uint CLR_KEYLEN = 1u;

	[Token(Token = "0x4000DC3")]
	internal const uint CLR_PUBLICKEYONLY = 2u;

	[Token(Token = "0x4000DC4")]
	internal const uint CLR_EXPORTABLE = 3u;

	[Token(Token = "0x4000DC5")]
	internal const uint CLR_REMOVABLE = 4u;

	[Token(Token = "0x4000DC6")]
	internal const uint CLR_HARDWARE = 5u;

	[Token(Token = "0x4000DC7")]
	internal const uint CLR_ACCESSIBLE = 6u;

	[Token(Token = "0x4000DC8")]
	internal const uint CLR_PROTECTED = 7u;

	[Token(Token = "0x4000DC9")]
	internal const uint CLR_UNIQUE_CONTAINER = 8u;

	[Token(Token = "0x4000DCA")]
	internal const uint CLR_ALGID = 9u;

	[Token(Token = "0x4000DCB")]
	internal const uint CLR_PP_CLIENT_HWND = 10u;

	[Token(Token = "0x4000DCC")]
	internal const uint CLR_PP_PIN = 11u;

	[Token(Token = "0x4000DCD")]
	internal const string OID_RSA_SMIMEalgCMS3DESwrap = "1.2.840.113549.1.9.16.3.6";

	[Token(Token = "0x4000DCE")]
	internal const string OID_RSA_MD5 = "1.2.840.113549.2.5";

	[Token(Token = "0x4000DCF")]
	internal const string OID_RSA_RC2CBC = "1.2.840.113549.3.2";

	[Token(Token = "0x4000DD0")]
	internal const string OID_RSA_DES_EDE3_CBC = "1.2.840.113549.3.7";

	[Token(Token = "0x4000DD1")]
	internal const string OID_OIWSEC_desCBC = "1.3.14.3.2.7";

	[Token(Token = "0x4000DD2")]
	internal const string OID_OIWSEC_SHA1 = "1.3.14.3.2.26";

	[Token(Token = "0x4000DD3")]
	internal const string OID_OIWSEC_SHA256 = "2.16.840.1.101.3.4.2.1";

	[Token(Token = "0x4000DD4")]
	internal const string OID_OIWSEC_SHA384 = "2.16.840.1.101.3.4.2.2";

	[Token(Token = "0x4000DD5")]
	internal const string OID_OIWSEC_SHA512 = "2.16.840.1.101.3.4.2.3";

	[Token(Token = "0x4000DD6")]
	internal const string OID_OIWSEC_RIPEMD160 = "1.3.36.3.2.1";
}
