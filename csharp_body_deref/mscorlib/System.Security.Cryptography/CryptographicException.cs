// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.CryptographicException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3B2DBD0", Offset = "0x3B2DBD0", VA = "0x3B2DBD0")]
	public CryptographicException()
	{
	}

	[Token(Token = "0x60018C2")]
	[Address(RVA = "0x3B2C1A0", Offset = "0x3B2C1A0", VA = "0x3B2C1A0")]
	public CryptographicException(string message)
	{
	}

	[Token(Token = "0x60018C3")]
	[Address(RVA = "0x3B2DC20", Offset = "0x3B2DC20", VA = "0x3B2DC20")]
	public CryptographicException(string format, string insert)
	{
	}

	[Token(Token = "0x60018C4")]
	[Address(RVA = "0x3B2DCA0", Offset = "0x3B2DCA0", VA = "0x3B2DCA0")]
	public CryptographicException(string message, Exception inner)
	{
	}

	[Token(Token = "0x60018C5")]
	[Address(RVA = "0x3B2DCC0", Offset = "0x3B2DCC0", VA = "0x3B2DCC0")]
	public CryptographicException(int hr)
	{
	}

	[Token(Token = "0x60018C6")]
	[Address(RVA = "0x3B2DD10", Offset = "0x3B2DD10", VA = "0x3B2DD10")]
	protected CryptographicException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60018C7")]
	[Address(RVA = "0x3B2DD20", Offset = "0x3B2DD20", VA = "0x3B2DD20")]
	private static void ThrowCryptographicException(int hr)
	{
	}
}
