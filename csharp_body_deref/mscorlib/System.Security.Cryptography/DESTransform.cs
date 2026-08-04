// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.DESTransform
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Mono.Security.Cryptography;

namespace System.Security.Cryptography;

[Token(Token = "0x2000316")]
internal class DESTransform : Mono.Security.Cryptography.SymmetricTransform
{
	[Token(Token = "0x4000DDE")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly int KEY_BIT_SIZE;

	[Token(Token = "0x4000DDF")]
	[FieldOffset(Offset = "0x4")]
	internal static readonly int KEY_BYTE_SIZE;

	[Token(Token = "0x4000DE0")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly int BLOCK_BIT_SIZE;

	[Token(Token = "0x4000DE1")]
	[FieldOffset(Offset = "0xC")]
	internal static readonly int BLOCK_BYTE_SIZE;

	[Token(Token = "0x4000DE2")]
	[FieldOffset(Offset = "0x58")]
	private byte[] keySchedule;

	[Token(Token = "0x4000DE3")]
	[FieldOffset(Offset = "0x60")]
	private byte[] byteBuff;

	[Token(Token = "0x4000DE4")]
	[FieldOffset(Offset = "0x68")]
	private uint[] dwordBuff;

	[Token(Token = "0x4000DE5")]
	[FieldOffset(Offset = "0x10")]
	private static readonly uint[] spBoxes;

	[Token(Token = "0x4000DE6")]
	[FieldOffset(Offset = "0x18")]
	private static readonly byte[] PC1;

	[Token(Token = "0x4000DE7")]
	[FieldOffset(Offset = "0x20")]
	private static readonly byte[] leftRotTotal;

	[Token(Token = "0x4000DE8")]
	[FieldOffset(Offset = "0x28")]
	private static readonly byte[] PC2;

	[Token(Token = "0x4000DE9")]
	[FieldOffset(Offset = "0x30")]
	internal static readonly uint[] ipTab;

	[Token(Token = "0x4000DEA")]
	[FieldOffset(Offset = "0x38")]
	internal static readonly uint[] fpTab;

	[Token(Token = "0x6001B0D")]
	[Address(RVA = "0x3B4FF50", Offset = "0x3B4FF50", VA = "0x3B4FF50")]
	internal DESTransform(SymmetricAlgorithm symmAlgo, bool encryption, byte[] key, byte[] iv)
	{
	}

	[Token(Token = "0x6001B0E")]
	[Address(RVA = "0x3B50850", Offset = "0x3B50850", VA = "0x3B50850")]
	private uint CipherFunct(uint r, int n)
	{
		return default(uint);
	}

	[Token(Token = "0x6001B0F")]
	[Address(RVA = "0x3B50A80", Offset = "0x3B50A80", VA = "0x3B50A80")]
	internal static void Permutation(byte[] input, byte[] output, uint[] permTab, bool preSwap)
	{
	}

	[Token(Token = "0x6001B10")]
	[Address(RVA = "0x3B50DC0", Offset = "0x3B50DC0", VA = "0x3B50DC0")]
	private static void BSwap(byte[] byteBuff)
	{
	}

	[Token(Token = "0x6001B11")]
	[Address(RVA = "0x3B502A0", Offset = "0x3B502A0", VA = "0x3B502A0")]
	internal void SetKey(byte[] key)
	{
	}

	[Token(Token = "0x6001B12")]
	[Address(RVA = "0x3B50E20", Offset = "0x3B50E20", VA = "0x3B50E20")]
	public void ProcessBlock(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x6001B13")]
	[Address(RVA = "0x3B511F0", Offset = "0x3B511F0", VA = "0x3B511F0", Slot = "17")]
	protected override void ECB(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x6001B14")]
	[Address(RVA = "0x3B501D0", Offset = "0x3B501D0", VA = "0x3B501D0")]
	internal static byte[] GetStrongKey()
	{
		return null;
	}
}
