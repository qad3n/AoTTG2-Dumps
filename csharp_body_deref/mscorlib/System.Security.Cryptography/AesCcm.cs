// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.AesCcm
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x200034F")]
public sealed class AesCcm : IDisposable
{
	[Token(Token = "0x17000304")]
	public static KeySizes NonceByteSizes
	{
		[Token(Token = "0x6001BD8")]
		[Address(RVA = "0x19D2390", Offset = "0x19D0990", VA = "0x1819D2390")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000305")]
	public static KeySizes TagByteSizes
	{
		[Token(Token = "0x6001BD9")]
		[Address(RVA = "0x19D23D0", Offset = "0x19D09D0", VA = "0x1819D23D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001BD6")]
	[Address(RVA = "0x19D2340", Offset = "0x19D0940", VA = "0x1819D2340")]
	public AesCcm(byte[] key)
	{
	}

	[Token(Token = "0x6001BD7")]
	[Address(RVA = "0x19D22F0", Offset = "0x19D08F0", VA = "0x1819D22F0")]
	public AesCcm(ReadOnlySpan<byte> key)
	{
	}

	[Token(Token = "0x6001BDA")]
	[Address(RVA = "0x19D21F0", Offset = "0x19D07F0", VA = "0x1819D21F0")]
	public void Decrypt(byte[] nonce, byte[] ciphertext, byte[] tag, byte[] plaintext, [Optional] byte[] associatedData)
	{
	}

	[Token(Token = "0x6001BDB")]
	[Address(RVA = "0x19D2230", Offset = "0x19D0830", VA = "0x1819D2230")]
	public void Decrypt(ReadOnlySpan<byte> nonce, ReadOnlySpan<byte> ciphertext, ReadOnlySpan<byte> tag, Span<byte> plaintext, [Optional] ReadOnlySpan<byte> associatedData)
	{
	}

	[Token(Token = "0x6001BDC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001BDD")]
	[Address(RVA = "0x19D2270", Offset = "0x19D0870", VA = "0x1819D2270")]
	public void Encrypt(byte[] nonce, byte[] plaintext, byte[] ciphertext, byte[] tag, [Optional] byte[] associatedData)
	{
	}

	[Token(Token = "0x6001BDE")]
	[Address(RVA = "0x19D22B0", Offset = "0x19D08B0", VA = "0x1819D22B0")]
	public void Encrypt(ReadOnlySpan<byte> nonce, ReadOnlySpan<byte> plaintext, Span<byte> ciphertext, Span<byte> tag, [Optional] ReadOnlySpan<byte> associatedData)
	{
	}
}
