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

[Token(Token = "0x200034E")]
internal class TripleDESTransform : Mono.Security.Cryptography.SymmetricTransform
{
	[Token(Token = "0x4000E1B")]
	[FieldOffset(Offset = "0x58")]
	private System.Security.Cryptography.DESTransform E1;

	[Token(Token = "0x4000E1C")]
	[FieldOffset(Offset = "0x60")]
	private System.Security.Cryptography.DESTransform D2;

	[Token(Token = "0x4000E1D")]
	[FieldOffset(Offset = "0x68")]
	private System.Security.Cryptography.DESTransform E3;

	[Token(Token = "0x4000E1E")]
	[FieldOffset(Offset = "0x70")]
	private System.Security.Cryptography.DESTransform D1;

	[Token(Token = "0x4000E1F")]
	[FieldOffset(Offset = "0x78")]
	private System.Security.Cryptography.DESTransform E2;

	[Token(Token = "0x4000E20")]
	[FieldOffset(Offset = "0x80")]
	private System.Security.Cryptography.DESTransform D3;

	[Token(Token = "0x6001BD3")]
	[Address(RVA = "0x19E82E0", Offset = "0x19E68E0", VA = "0x1819E82E0")]
	public TripleDESTransform(TripleDES algo, bool encryption, byte[] key, byte[] iv)
	{
	}

	[Token(Token = "0x6001BD4")]
	[Address(RVA = "0x19E80D0", Offset = "0x19E66D0", VA = "0x1819E80D0", Slot = "17")]
	protected override void ECB(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x6001BD5")]
	[Address(RVA = "0x19E8230", Offset = "0x19E6830", VA = "0x1819E8230")]
	internal static byte[] GetStrongKey()
	{
		return null;
	}
}
