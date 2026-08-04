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

[Token(Token = "0x2000320")]
public sealed class AesCcm : IDisposable
{
	[Token(Token = "0x17000302")]
	public static KeySizes NonceByteSizes
	{
		[Token(Token = "0x6001B70")]
		[Address(RVA = "0x3B58530", Offset = "0x3B58530", VA = "0x3B58530")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000303")]
	public static KeySizes TagByteSizes
	{
		[Token(Token = "0x6001B71")]
		[Address(RVA = "0x3B58570", Offset = "0x3B58570", VA = "0x3B58570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001B6E")]
	[Address(RVA = "0x3B584B0", Offset = "0x3B584B0", VA = "0x3B584B0")]
	public AesCcm(byte[] key)
	{
	}

	[Token(Token = "0x6001B6F")]
	[Address(RVA = "0x3B584F0", Offset = "0x3B584F0", VA = "0x3B584F0")]
	public AesCcm(ReadOnlySpan<byte> key)
	{
	}

	[Token(Token = "0x6001B72")]
	[Address(RVA = "0x3B585B0", Offset = "0x3B585B0", VA = "0x3B585B0")]
	public void Decrypt(byte[] nonce, byte[] ciphertext, byte[] tag, byte[] plaintext, [Optional] byte[] associatedData)
	{
	}

	[Token(Token = "0x6001B73")]
	[Address(RVA = "0x3B585F0", Offset = "0x3B585F0", VA = "0x3B585F0")]
	public void Decrypt(ReadOnlySpan<byte> nonce, ReadOnlySpan<byte> ciphertext, ReadOnlySpan<byte> tag, Span<byte> plaintext, [Optional] ReadOnlySpan<byte> associatedData)
	{
	}

	[Token(Token = "0x6001B74")]
	[Address(RVA = "0x3B58630", Offset = "0x3B58630", VA = "0x3B58630", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001B75")]
	[Address(RVA = "0x3B58640", Offset = "0x3B58640", VA = "0x3B58640")]
	public void Encrypt(byte[] nonce, byte[] plaintext, byte[] ciphertext, byte[] tag, [Optional] byte[] associatedData)
	{
	}

	[Token(Token = "0x6001B76")]
	[Address(RVA = "0x3B58680", Offset = "0x3B58680", VA = "0x3B58680")]
	public void Encrypt(ReadOnlySpan<byte> nonce, ReadOnlySpan<byte> plaintext, Span<byte> ciphertext, Span<byte> tag, [Optional] ReadOnlySpan<byte> associatedData)
	{
	}
}
