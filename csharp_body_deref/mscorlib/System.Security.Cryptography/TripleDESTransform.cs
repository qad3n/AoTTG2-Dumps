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
	[Address(RVA = "0x4E72420", Offset = "0x4E72420", VA = "0x4E72420")]
	public TripleDESTransform(TripleDES algo, bool encryption, byte[] key, byte[] iv)
	{
	}

	[Token(Token = "0x6001B6C")]
	[Address(RVA = "0x4E72850", Offset = "0x4E72850", VA = "0x4E72850", Slot = "17")]
	protected override void ECB(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x6001B6D")]
	[Address(RVA = "0x4E727B0", Offset = "0x4E727B0", VA = "0x4E727B0")]
	internal static byte[] GetStrongKey()
	{
		return null;
	}
}
