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

[Token(Token = "0x2000329")]
public sealed class AesGcm : IDisposable
{
	[Token(Token = "0x17000305")]
	public static KeySizes NonceByteSizes
	{
		[Token(Token = "0x6001BBE")]
		[Address(RVA = "0x5362440", Offset = "0x5361440", VA = "0x5362440")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000306")]
	public static KeySizes TagByteSizes
	{
		[Token(Token = "0x6001BBF")]
		[Address(RVA = "0x5362480", Offset = "0x5361480", VA = "0x5362480")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001BBC")]
	[Address(RVA = "0x53623C0", Offset = "0x53613C0", VA = "0x53623C0")]
	public AesGcm(byte[] key)
	{
	}

	[Token(Token = "0x6001BBD")]
	[Address(RVA = "0x5362400", Offset = "0x5361400", VA = "0x5362400")]
	public AesGcm(ReadOnlySpan<byte> key)
	{
	}

	[Token(Token = "0x6001BC0")]
	[Address(RVA = "0x53624C0", Offset = "0x53614C0", VA = "0x53624C0")]
	public void Decrypt(byte[] nonce, byte[] ciphertext, byte[] tag, byte[] plaintext, [Optional] byte[] associatedData)
	{
	}

	[Token(Token = "0x6001BC1")]
	[Address(RVA = "0x5362500", Offset = "0x5361500", VA = "0x5362500")]
	public void Decrypt(ReadOnlySpan<byte> nonce, ReadOnlySpan<byte> ciphertext, ReadOnlySpan<byte> tag, Span<byte> plaintext, [Optional] ReadOnlySpan<byte> associatedData)
	{
	}

	[Token(Token = "0x6001BC2")]
	[Address(RVA = "0x5362540", Offset = "0x5361540", VA = "0x5362540", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001BC3")]
	[Address(RVA = "0x5362550", Offset = "0x5361550", VA = "0x5362550")]
	public void Encrypt(byte[] nonce, byte[] plaintext, byte[] ciphertext, byte[] tag, [Optional] byte[] associatedData)
	{
	}

	[Token(Token = "0x6001BC4")]
	[Address(RVA = "0x5362590", Offset = "0x5361590", VA = "0x5362590")]
	public void Encrypt(ReadOnlySpan<byte> nonce, ReadOnlySpan<byte> plaintext, Span<byte> ciphertext, Span<byte> tag, [Optional] ReadOnlySpan<byte> associatedData)
	{
	}
}
