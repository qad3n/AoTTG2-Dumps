// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.TripleDESTransform
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Mono.Security.Cryptography;

namespace System.Security.Cryptography;

[Token(Token = "0x2000327")]
internal class TripleDESTransform : Mono.Security.Cryptography.SymmetricTransform
{
	[Token(Token = "0x4000D7B")]
	[FieldOffset(Offset = "0x58")]
	private System.Security.Cryptography.DESTransform E1;

	[Token(Token = "0x4000D7C")]
	[FieldOffset(Offset = "0x60")]
	private System.Security.Cryptography.DESTransform D2;

	[Token(Token = "0x4000D7D")]
	[FieldOffset(Offset = "0x68")]
	private System.Security.Cryptography.DESTransform E3;

	[Token(Token = "0x4000D7E")]
	[FieldOffset(Offset = "0x70")]
	private System.Security.Cryptography.DESTransform D1;

	[Token(Token = "0x4000D7F")]
	[FieldOffset(Offset = "0x78")]
	private System.Security.Cryptography.DESTransform E2;

	[Token(Token = "0x4000D80")]
	[FieldOffset(Offset = "0x80")]
	private System.Security.Cryptography.DESTransform D3;

	[Token(Token = "0x6001BB0")]
	[Address(RVA = "0x5361C30", Offset = "0x5360C30", VA = "0x5361C30")]
	public TripleDESTransform(TripleDES algo, bool encryption, byte[] key, byte[] iv)
	{
	}

	[Token(Token = "0x6001BB1")]
	[Address(RVA = "0x5362070", Offset = "0x5361070", VA = "0x5362070", Slot = "17")]
	protected override void ECB(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x6001BB2")]
	[Address(RVA = "0x5361FD0", Offset = "0x5360FD0", VA = "0x5361FD0")]
	internal static byte[] GetStrongKey()
	{
		return null;
	}
}
