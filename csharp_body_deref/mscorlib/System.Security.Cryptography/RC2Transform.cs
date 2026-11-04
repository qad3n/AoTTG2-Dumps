// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RC2Transform
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Mono.Security.Cryptography;

namespace System.Security.Cryptography;

[Token(Token = "0x2000348")]
internal class RC2Transform : Mono.Security.Cryptography.SymmetricTransform
{
	[Token(Token = "0x4000E07")]
	[FieldOffset(Offset = "0x58")]
	private ushort R0;

	[Token(Token = "0x4000E08")]
	[FieldOffset(Offset = "0x5A")]
	private ushort R1;

	[Token(Token = "0x4000E09")]
	[FieldOffset(Offset = "0x5C")]
	private ushort R2;

	[Token(Token = "0x4000E0A")]
	[FieldOffset(Offset = "0x5E")]
	private ushort R3;

	[Token(Token = "0x4000E0B")]
	[FieldOffset(Offset = "0x60")]
	private ushort[] K;

	[Token(Token = "0x4000E0C")]
	[FieldOffset(Offset = "0x68")]
	private int j;

	[Token(Token = "0x4000E0D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly byte[] pitable;

	[Token(Token = "0x6001BA8")]
	[Address(RVA = "0x19DC640", Offset = "0x19DAC40", VA = "0x1819DC640")]
	public RC2Transform(RC2 rc2Algo, bool encryption, byte[] key, byte[] iv)
	{
	}

	[Token(Token = "0x6001BA9")]
	[Address(RVA = "0x19DBAE0", Offset = "0x19DA0E0", VA = "0x1819DBAE0", Slot = "17")]
	protected override void ECB(byte[] input, byte[] output)
	{
	}
}
