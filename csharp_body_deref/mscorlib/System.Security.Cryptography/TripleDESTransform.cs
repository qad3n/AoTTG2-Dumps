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

[Token(Token = "0x200031F")]
internal class TripleDESTransform : Mono.Security.Cryptography.SymmetricTransform
{
	[Token(Token = "0x4000E0E")]
	[FieldOffset(Offset = "0x58")]
	private System.Security.Cryptography.DESTransform E1;

	[Token(Token = "0x4000E0F")]
	[FieldOffset(Offset = "0x60")]
	private System.Security.Cryptography.DESTransform D2;

	[Token(Token = "0x4000E10")]
	[FieldOffset(Offset = "0x68")]
	private System.Security.Cryptography.DESTransform E3;

	[Token(Token = "0x4000E11")]
	[FieldOffset(Offset = "0x70")]
	private System.Security.Cryptography.DESTransform D1;

	[Token(Token = "0x4000E12")]
	[FieldOffset(Offset = "0x78")]
	private System.Security.Cryptography.DESTransform E2;

	[Token(Token = "0x4000E13")]
	[FieldOffset(Offset = "0x80")]
	private System.Security.Cryptography.DESTransform D3;

	[Token(Token = "0x6001B6B")]
	[Address(RVA = "0x3B57F40", Offset = "0x3B57F40", VA = "0x3B57F40")]
	public TripleDESTransform(TripleDES algo, bool encryption, byte[] key, byte[] iv)
	{
	}

	[Token(Token = "0x6001B6C")]
	[Address(RVA = "0x3B58370", Offset = "0x3B58370", VA = "0x3B58370", Slot = "17")]
	protected override void ECB(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x6001B6D")]
	[Address(RVA = "0x3B582D0", Offset = "0x3B582D0", VA = "0x3B582D0")]
	internal static byte[] GetStrongKey()
	{
		return null;
	}
}
