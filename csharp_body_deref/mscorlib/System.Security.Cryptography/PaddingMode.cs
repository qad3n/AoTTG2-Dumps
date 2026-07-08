using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Serializable]
[Token(Token = "0x20002D2")]
[ComVisible(true)]
public enum PaddingMode
{
	[Token(Token = "0x4000CDF")]
	None = 1,
	[Token(Token = "0x4000CE0")]
	PKCS7,
	[Token(Token = "0x4000CE1")]
	Zeros,
	[Token(Token = "0x4000CE2")]
	ANSIX923,
	[Token(Token = "0x4000CE3")]
	ISO10126
}
