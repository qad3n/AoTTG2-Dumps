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
[Token(Token = "0x2000303")]
[ComVisible(true)]
public class CryptographicException : SystemException
{
	[Token(Token = "0x4000CF4")]
	private const int FORMAT_MESSAGE_IGNORE_INSERTS = 512;

	[Token(Token = "0x4000CF5")]
	private const int FORMAT_MESSAGE_FROM_SYSTEM = 4096;

	[Token(Token = "0x4000CF6")]
	private const int FORMAT_MESSAGE_ARGUMENT_ARRAY = 8192;

	[Token(Token = "0x6001929")]
	[Address(RVA = "0x19A3330", Offset = "0x19A1930", VA = "0x1819A3330")]
	public CryptographicException()
	{
	}

	[Token(Token = "0x600192A")]
	[Address(RVA = "0x19A3390", Offset = "0x19A1990", VA = "0x1819A3390")]
	public CryptographicException(string message)
	{
	}

	[Token(Token = "0x600192B")]
	[Address(RVA = "0x19A3270", Offset = "0x19A1870", VA = "0x1819A3270")]
	public CryptographicException(string format, string insert)
	{
	}

	[Token(Token = "0x600192C")]
	[Address(RVA = "0x19A3300", Offset = "0x19A1900", VA = "0x1819A3300")]
	public CryptographicException(string message, Exception inner)
	{
	}

	[Token(Token = "0x600192D")]
	[Address(RVA = "0x19A3210", Offset = "0x19A1810", VA = "0x1819A3210")]
	public CryptographicException(int hr)
	{
	}

	[Token(Token = "0x600192E")]
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	protected CryptographicException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600192F")]
	[Address(RVA = "0x19A31C0", Offset = "0x19A17C0", VA = "0x1819A31C0")]
	private static void ThrowCryptographicException(int hr)
	{
	}
}
