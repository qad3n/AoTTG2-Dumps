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

[Token(Token = "0x2000321")]
public sealed class AesGcm : IDisposable
{
	[Token(Token = "0x17000304")]
	public static KeySizes NonceByteSizes
	{
		[Token(Token = "0x6001B79")]
		[Address(RVA = "0x3B58740", Offset = "0x3B58740", VA = "0x3B58740")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000305")]
	public static KeySizes TagByteSizes
	{
		[Token(Token = "0x6001B7A")]
		[Address(RVA = "0x3B58780", Offset = "0x3B58780", VA = "0x3B58780")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001B77")]
	[Address(RVA = "0x3B586C0", Offset = "0x3B586C0", VA = "0x3B586C0")]
	public AesGcm(byte[] key)
	{
	}

	[Token(Token = "0x6001B78")]
	[Address(RVA = "0x3B58700", Offset = "0x3B58700", VA = "0x3B58700")]
	public AesGcm(ReadOnlySpan<byte> key)
	{
	}

	[Token(Token = "0x6001B7B")]
	[Address(RVA = "0x3B587C0", Offset = "0x3B587C0", VA = "0x3B587C0")]
	public void Decrypt(byte[] nonce, byte[] ciphertext, byte[] tag, byte[] plaintext, [Optional] byte[] associatedData)
	{
	}

	[Token(Token = "0x6001B7C")]
	[Address(RVA = "0x3B58800", Offset = "0x3B58800", VA = "0x3B58800")]
	public void Decrypt(ReadOnlySpan<byte> nonce, ReadOnlySpan<byte> ciphertext, ReadOnlySpan<byte> tag, Span<byte> plaintext, [Optional] ReadOnlySpan<byte> associatedData)
	{
	}

	[Token(Token = "0x6001B7D")]
	[Address(RVA = "0x3B58840", Offset = "0x3B58840", VA = "0x3B58840", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001B7E")]
	[Address(RVA = "0x3B58850", Offset = "0x3B58850", VA = "0x3B58850")]
	public void Encrypt(byte[] nonce, byte[] plaintext, byte[] ciphertext, byte[] tag, [Optional] byte[] associatedData)
	{
	}

	[Token(Token = "0x6001B7F")]
	[Address(RVA = "0x3B58890", Offset = "0x3B58890", VA = "0x3B58890")]
	public void Encrypt(ReadOnlySpan<byte> nonce, ReadOnlySpan<byte> plaintext, Span<byte> ciphertext, Span<byte> tag, [Optional] ReadOnlySpan<byte> associatedData)
	{
	}
}
