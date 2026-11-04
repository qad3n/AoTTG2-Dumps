// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.AesTransform
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Mono.Security.Cryptography;

namespace System.Security.Cryptography;

[Token(Token = "0x2000015")]
internal class AesTransform : Mono.Security.Cryptography.SymmetricTransform
{
	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x58")]
	private uint[] expandedKey;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x60")]
	private int Nk;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x64")]
	private int Nr;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x0")]
	private static readonly uint[] Rcon;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x8")]
	private static readonly byte[] SBox;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x10")]
	private static readonly byte[] iSBox;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x18")]
	private static readonly uint[] T0;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x20")]
	private static readonly uint[] T1;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x28")]
	private static readonly uint[] T2;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x30")]
	private static readonly uint[] T3;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x38")]
	private static readonly uint[] iT0;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x40")]
	private static readonly uint[] iT1;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x48")]
	private static readonly uint[] iT2;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x50")]
	private static readonly uint[] iT3;

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x2405F80", Offset = "0x2404580", VA = "0x182405F80")]
	public AesTransform(Aes algo, bool encryption, byte[] key, byte[] iv)
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x2402EC0", Offset = "0x24014C0", VA = "0x182402EC0", Slot = "17")]
	protected override void ECB(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x2405A40", Offset = "0x2404040", VA = "0x182405A40")]
	private uint SubByte(uint a)
	{
		return default(uint);
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x2402EF0", Offset = "0x24014F0", VA = "0x182402EF0")]
	private void Encrypt128(byte[] indata, byte[] outdata, uint[] ekey)
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x24003F0", Offset = "0x23FE9F0", VA = "0x1824003F0")]
	private void Decrypt128(byte[] indata, byte[] outdata, uint[] ekey)
	{
	}
}
