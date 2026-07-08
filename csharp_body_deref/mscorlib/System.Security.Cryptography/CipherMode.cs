using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Serializable]
[Token(Token = "0x20002D1")]
[ComVisible(true)]
public enum CipherMode
{
	[Token(Token = "0x4000CD9")]
	CBC = 1,
	[Token(Token = "0x4000CDA")]
	ECB,
	[Token(Token = "0x4000CDB")]
	OFB,
	[Token(Token = "0x4000CDC")]
	CFB,
	[Token(Token = "0x4000CDD")]
	CTS
}
