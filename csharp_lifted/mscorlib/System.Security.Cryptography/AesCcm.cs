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

[Token(Token = "0x2000328")]
public sealed class AesCcm : IDisposable
{
	[Token(Token = "0x17000303")]
	public static KeySizes NonceByteSizes
	{
		[Token(Token = "0x6001BB5")]
		[Address(RVA = "0x5362230", Offset = "0x5361230", VA = "0x5362230")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000304")]
	public static KeySizes TagByteSizes
	{
		[Token(Token = "0x6001BB6")]
		[Address(RVA = "0x5362270", Offset = "0x5361270", VA = "0x5362270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001BB3")]
	[Address(RVA = "0x53621B0", Offset = "0x53611B0", VA = "0x53621B0")]
	public AesCcm(byte[] key)
	{
	}

	[Token(Token = "0x6001BB4")]
	[Address(RVA = "0x53621F0", Offset = "0x53611F0", VA = "0x53621F0")]
	public AesCcm(ReadOnlySpan<byte> key)
	{
	}

	[Token(Token = "0x6001BB7")]
	[Address(RVA = "0x53622B0", Offset = "0x53612B0", VA = "0x53622B0")]
	public void Decrypt(byte[] nonce, byte[] ciphertext, byte[] tag, byte[] plaintext, [Optional] byte[] associatedData)
	{
	}

	[Token(Token = "0x6001BB8")]
	[Address(RVA = "0x53622F0", Offset = "0x53612F0", VA = "0x53622F0")]
	public void Decrypt(ReadOnlySpan<byte> nonce, ReadOnlySpan<byte> ciphertext, ReadOnlySpan<byte> tag, Span<byte> plaintext, [Optional] ReadOnlySpan<byte> associatedData)
	{
	}

	[Token(Token = "0x6001BB9")]
	[Address(RVA = "0x5362330", Offset = "0x5361330", VA = "0x5362330", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001BBA")]
	[Address(RVA = "0x5362340", Offset = "0x5361340", VA = "0x5362340")]
	public void Encrypt(byte[] nonce, byte[] plaintext, byte[] ciphertext, byte[] tag, [Optional] byte[] associatedData)
	{
	}

	[Token(Token = "0x6001BBB")]
	[Address(RVA = "0x5362380", Offset = "0x5361380", VA = "0x5362380")]
	public void Encrypt(ReadOnlySpan<byte> nonce, ReadOnlySpan<byte> plaintext, Span<byte> ciphertext, Span<byte> tag, [Optional] ReadOnlySpan<byte> associatedData)
	{
	}
}
