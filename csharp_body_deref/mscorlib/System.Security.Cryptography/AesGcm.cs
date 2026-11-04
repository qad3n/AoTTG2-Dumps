// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.AesGcm
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000350")]
public sealed class AesGcm : IDisposable
{
	[Token(Token = "0x17000306")]
	public static KeySizes NonceByteSizes
	{
		[Token(Token = "0x6001BE1")]
		[Address(RVA = "0x19D25B0", Offset = "0x19D0BB0", VA = "0x1819D25B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000307")]
	public static KeySizes TagByteSizes
	{
		[Token(Token = "0x6001BE2")]
		[Address(RVA = "0x19D25F0", Offset = "0x19D0BF0", VA = "0x1819D25F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001BDF")]
	[Address(RVA = "0x19D2510", Offset = "0x19D0B10", VA = "0x1819D2510")]
	public AesGcm(byte[] key)
	{
	}

	[Token(Token = "0x6001BE0")]
	[Address(RVA = "0x19D2560", Offset = "0x19D0B60", VA = "0x1819D2560")]
	public AesGcm(ReadOnlySpan<byte> key)
	{
	}

	[Token(Token = "0x6001BE3")]
	[Address(RVA = "0x19D2410", Offset = "0x19D0A10", VA = "0x1819D2410")]
	public void Decrypt(byte[] nonce, byte[] ciphertext, byte[] tag, byte[] plaintext, [Optional] byte[] associatedData)
	{
	}

	[Token(Token = "0x6001BE4")]
	[Address(RVA = "0x19D2450", Offset = "0x19D0A50", VA = "0x1819D2450")]
	public void Decrypt(ReadOnlySpan<byte> nonce, ReadOnlySpan<byte> ciphertext, ReadOnlySpan<byte> tag, Span<byte> plaintext, [Optional] ReadOnlySpan<byte> associatedData)
	{
	}

	[Token(Token = "0x6001BE5")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001BE6")]
	[Address(RVA = "0x19D2490", Offset = "0x19D0A90", VA = "0x1819D2490")]
	public void Encrypt(byte[] nonce, byte[] plaintext, byte[] ciphertext, byte[] tag, [Optional] byte[] associatedData)
	{
	}

	[Token(Token = "0x6001BE7")]
	[Address(RVA = "0x19D24D0", Offset = "0x19D0AD0", VA = "0x1819D24D0")]
	public void Encrypt(ReadOnlySpan<byte> nonce, ReadOnlySpan<byte> plaintext, Span<byte> ciphertext, Span<byte> tag, [Optional] ReadOnlySpan<byte> associatedData)
	{
	}
}
