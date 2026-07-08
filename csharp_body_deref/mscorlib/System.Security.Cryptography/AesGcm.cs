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
		[Address(RVA = "0x4E72C20", Offset = "0x4E72C20", VA = "0x4E72C20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000305")]
	public static KeySizes TagByteSizes
	{
		[Token(Token = "0x6001B7A")]
		[Address(RVA = "0x4E72C60", Offset = "0x4E72C60", VA = "0x4E72C60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001B77")]
	[Address(RVA = "0x4E72BA0", Offset = "0x4E72BA0", VA = "0x4E72BA0")]
	public AesGcm(byte[] key)
	{
	}

	[Token(Token = "0x6001B78")]
	[Address(RVA = "0x4E72BE0", Offset = "0x4E72BE0", VA = "0x4E72BE0")]
	public AesGcm(ReadOnlySpan<byte> key)
	{
	}

	[Token(Token = "0x6001B7B")]
	[Address(RVA = "0x4E72CA0", Offset = "0x4E72CA0", VA = "0x4E72CA0")]
	public void Decrypt(byte[] nonce, byte[] ciphertext, byte[] tag, byte[] plaintext, [Optional] byte[] associatedData)
	{
	}

	[Token(Token = "0x6001B7C")]
	[Address(RVA = "0x4E72CE0", Offset = "0x4E72CE0", VA = "0x4E72CE0")]
	public void Decrypt(ReadOnlySpan<byte> nonce, ReadOnlySpan<byte> ciphertext, ReadOnlySpan<byte> tag, Span<byte> plaintext, [Optional] ReadOnlySpan<byte> associatedData)
	{
	}

	[Token(Token = "0x6001B7D")]
	[Address(RVA = "0x4E72D20", Offset = "0x4E72D20", VA = "0x4E72D20", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001B7E")]
	[Address(RVA = "0x4E72D30", Offset = "0x4E72D30", VA = "0x4E72D30")]
	public void Encrypt(byte[] nonce, byte[] plaintext, byte[] ciphertext, byte[] tag, [Optional] byte[] associatedData)
	{
	}

	[Token(Token = "0x6001B7F")]
	[Address(RVA = "0x4E72D70", Offset = "0x4E72D70", VA = "0x4E72D70")]
	public void Encrypt(ReadOnlySpan<byte> nonce, ReadOnlySpan<byte> plaintext, Span<byte> ciphertext, Span<byte> tag, [Optional] ReadOnlySpan<byte> associatedData)
	{
	}
}
