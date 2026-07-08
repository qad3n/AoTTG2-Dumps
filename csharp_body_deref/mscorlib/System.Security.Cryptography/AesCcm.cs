using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000320")]
public sealed class AesCcm : IDisposable
{
	[Token(Token = "0x17000302")]
	public static KeySizes NonceByteSizes
	{
		[Token(Token = "0x6001B70")]
		[Address(RVA = "0x4E72A10", Offset = "0x4E72A10", VA = "0x4E72A10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000303")]
	public static KeySizes TagByteSizes
	{
		[Token(Token = "0x6001B71")]
		[Address(RVA = "0x4E72A50", Offset = "0x4E72A50", VA = "0x4E72A50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001B6E")]
	[Address(RVA = "0x4E72990", Offset = "0x4E72990", VA = "0x4E72990")]
	public AesCcm(byte[] key)
	{
	}

	[Token(Token = "0x6001B6F")]
	[Address(RVA = "0x4E729D0", Offset = "0x4E729D0", VA = "0x4E729D0")]
	public AesCcm(ReadOnlySpan<byte> key)
	{
	}

	[Token(Token = "0x6001B72")]
	[Address(RVA = "0x4E72A90", Offset = "0x4E72A90", VA = "0x4E72A90")]
	public void Decrypt(byte[] nonce, byte[] ciphertext, byte[] tag, byte[] plaintext, [Optional] byte[] associatedData)
	{
	}

	[Token(Token = "0x6001B73")]
	[Address(RVA = "0x4E72AD0", Offset = "0x4E72AD0", VA = "0x4E72AD0")]
	public void Decrypt(ReadOnlySpan<byte> nonce, ReadOnlySpan<byte> ciphertext, ReadOnlySpan<byte> tag, Span<byte> plaintext, [Optional] ReadOnlySpan<byte> associatedData)
	{
	}

	[Token(Token = "0x6001B74")]
	[Address(RVA = "0x4E72B10", Offset = "0x4E72B10", VA = "0x4E72B10", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001B75")]
	[Address(RVA = "0x4E72B20", Offset = "0x4E72B20", VA = "0x4E72B20")]
	public void Encrypt(byte[] nonce, byte[] plaintext, byte[] ciphertext, byte[] tag, [Optional] byte[] associatedData)
	{
	}

	[Token(Token = "0x6001B76")]
	[Address(RVA = "0x4E72B60", Offset = "0x4E72B60", VA = "0x4E72B60")]
	public void Encrypt(ReadOnlySpan<byte> nonce, ReadOnlySpan<byte> plaintext, Span<byte> ciphertext, Span<byte> tag, [Optional] ReadOnlySpan<byte> associatedData)
	{
	}
}
