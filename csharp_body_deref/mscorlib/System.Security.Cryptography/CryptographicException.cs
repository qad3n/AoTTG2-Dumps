using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Serializable]
[Token(Token = "0x20002D4")]
[ComVisible(true)]
public class CryptographicException : SystemException
{
	[Token(Token = "0x4000CE7")]
	private const int FORMAT_MESSAGE_IGNORE_INSERTS = 512;

	[Token(Token = "0x4000CE8")]
	private const int FORMAT_MESSAGE_FROM_SYSTEM = 4096;

	[Token(Token = "0x4000CE9")]
	private const int FORMAT_MESSAGE_ARGUMENT_ARRAY = 8192;

	[Token(Token = "0x60018C1")]
	[Address(RVA = "0x4E480B0", Offset = "0x4E480B0", VA = "0x4E480B0")]
	public CryptographicException()
	{
	}

	[Token(Token = "0x60018C2")]
	[Address(RVA = "0x4E46680", Offset = "0x4E46680", VA = "0x4E46680")]
	public CryptographicException(string message)
	{
	}

	[Token(Token = "0x60018C3")]
	[Address(RVA = "0x4E48100", Offset = "0x4E48100", VA = "0x4E48100")]
	public CryptographicException(string format, string insert)
	{
	}

	[Token(Token = "0x60018C4")]
	[Address(RVA = "0x4E48180", Offset = "0x4E48180", VA = "0x4E48180")]
	public CryptographicException(string message, Exception inner)
	{
	}

	[Token(Token = "0x60018C5")]
	[Address(RVA = "0x4E481A0", Offset = "0x4E481A0", VA = "0x4E481A0")]
	public CryptographicException(int hr)
	{
	}

	[Token(Token = "0x60018C6")]
	[Address(RVA = "0x4E481F0", Offset = "0x4E481F0", VA = "0x4E481F0")]
	protected CryptographicException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60018C7")]
	[Address(RVA = "0x4E48200", Offset = "0x4E48200", VA = "0x4E48200")]
	private static void ThrowCryptographicException(int hr)
	{
	}
}
