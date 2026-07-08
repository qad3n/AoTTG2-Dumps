using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Serializable]
[Token(Token = "0x20002D5")]
[ComVisible(true)]
public class CryptographicUnexpectedOperationException : CryptographicException
{
	[Token(Token = "0x60018C8")]
	[Address(RVA = "0x4E48240", Offset = "0x4E48240", VA = "0x4E48240")]
	public CryptographicUnexpectedOperationException()
	{
	}

	[Token(Token = "0x60018C9")]
	[Address(RVA = "0x4E44210", Offset = "0x4E44210", VA = "0x4E44210")]
	public CryptographicUnexpectedOperationException(string message)
	{
	}

	[Token(Token = "0x60018CA")]
	[Address(RVA = "0x4E482A0", Offset = "0x4E482A0", VA = "0x4E482A0")]
	public CryptographicUnexpectedOperationException(string format, string insert)
	{
	}

	[Token(Token = "0x60018CB")]
	[Address(RVA = "0x4E48330", Offset = "0x4E48330", VA = "0x4E48330")]
	public CryptographicUnexpectedOperationException(string message, Exception inner)
	{
	}

	[Token(Token = "0x60018CC")]
	[Address(RVA = "0x4E48360", Offset = "0x4E48360", VA = "0x4E48360")]
	protected CryptographicUnexpectedOperationException(SerializationInfo info, StreamingContext context)
	{
	}
}
