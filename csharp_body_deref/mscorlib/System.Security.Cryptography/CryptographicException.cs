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
[Token(Token = "0x20002DC")]
[ComVisible(true)]
public class CryptographicException : SystemException
{
	[Token(Token = "0x4000C54")]
	private const int FORMAT_MESSAGE_IGNORE_INSERTS = 512;

	[Token(Token = "0x4000C55")]
	private const int FORMAT_MESSAGE_FROM_SYSTEM = 4096;

	[Token(Token = "0x4000C56")]
	private const int FORMAT_MESSAGE_ARGUMENT_ARRAY = 8192;

	[Token(Token = "0x6001906")]
	[Address(RVA = "0x5337C30", Offset = "0x5336C30", VA = "0x5337C30")]
	public CryptographicException()
	{
	}

	[Token(Token = "0x6001907")]
	[Address(RVA = "0x53361D0", Offset = "0x53351D0", VA = "0x53361D0")]
	public CryptographicException(string message)
	{
	}

	[Token(Token = "0x6001908")]
	[Address(RVA = "0x5337C80", Offset = "0x5336C80", VA = "0x5337C80")]
	public CryptographicException(string format, string insert)
	{
	}

	[Token(Token = "0x6001909")]
	[Address(RVA = "0x5337D00", Offset = "0x5336D00", VA = "0x5337D00")]
	public CryptographicException(string message, Exception inner)
	{
	}

	[Token(Token = "0x600190A")]
	[Address(RVA = "0x5337D20", Offset = "0x5336D20", VA = "0x5337D20")]
	public CryptographicException(int hr)
	{
	}

	[Token(Token = "0x600190B")]
	[Address(RVA = "0x5337D70", Offset = "0x5336D70", VA = "0x5337D70")]
	protected CryptographicException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600190C")]
	[Address(RVA = "0x5337D80", Offset = "0x5336D80", VA = "0x5337D80")]
	private static void ThrowCryptographicException(int hr)
	{
	}
}
