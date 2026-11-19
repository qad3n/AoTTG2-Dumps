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

[Token(Token = "0x200031E")]
internal class DESTransform : Mono.Security.Cryptography.SymmetricTransform
{
	[Token(Token = "0x4000D4B")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly int KEY_BIT_SIZE;

	[Token(Token = "0x4000D4C")]
	[FieldOffset(Offset = "0x4")]
	internal static readonly int KEY_BYTE_SIZE;

	[Token(Token = "0x4000D4D")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly int BLOCK_BIT_SIZE;

	[Token(Token = "0x4000D4E")]
	[FieldOffset(Offset = "0xC")]
	internal static readonly int BLOCK_BYTE_SIZE;

	[Token(Token = "0x4000D4F")]
	[FieldOffset(Offset = "0x58")]
	private byte[] keySchedule;

	[Token(Token = "0x4000D50")]
	[FieldOffset(Offset = "0x60")]
	private byte[] byteBuff;

	[Token(Token = "0x4000D51")]
	[FieldOffset(Offset = "0x68")]
	private uint[] dwordBuff;

	[Token(Token = "0x4000D52")]
	[FieldOffset(Offset = "0x10")]
	private static readonly uint[] spBoxes;

	[Token(Token = "0x4000D53")]
	[FieldOffset(Offset = "0x18")]
	private static readonly byte[] PC1;

	[Token(Token = "0x4000D54")]
	[FieldOffset(Offset = "0x20")]
	private static readonly byte[] leftRotTotal;

	[Token(Token = "0x4000D55")]
	[FieldOffset(Offset = "0x28")]
	private static readonly byte[] PC2;

	[Token(Token = "0x4000D56")]
	[FieldOffset(Offset = "0x30")]
	internal static readonly uint[] ipTab;

	[Token(Token = "0x4000D57")]
	[FieldOffset(Offset = "0x38")]
	internal static readonly uint[] fpTab;

	[Token(Token = "0x6001B52")]
	[Address(RVA = "0x5359520", Offset = "0x5358520", VA = "0x5359520")]
	internal DESTransform(SymmetricAlgorithm symmAlgo, bool encryption, byte[] key, byte[] iv)
	{
	}

	[Token(Token = "0x6001B53")]
	[Address(RVA = "0x5359DC0", Offset = "0x5358DC0", VA = "0x5359DC0")]
	private uint CipherFunct(uint r, int n)
	{
		return default(uint);
	}

	[Token(Token = "0x6001B54")]
	[Address(RVA = "0x5359FF0", Offset = "0x5358FF0", VA = "0x5359FF0")]
	internal static void Permutation(byte[] input, byte[] output, uint[] permTab, bool preSwap)
	{
	}

	[Token(Token = "0x6001B55")]
	[Address(RVA = "0x535A3A0", Offset = "0x53593A0", VA = "0x535A3A0")]
	private static void BSwap(byte[] byteBuff)
	{
	}

	[Token(Token = "0x6001B56")]
	[Address(RVA = "0x5359870", Offset = "0x5358870", VA = "0x5359870")]
	internal void SetKey(byte[] key)
	{
	}

	[Token(Token = "0x6001B57")]
	[Address(RVA = "0x535A400", Offset = "0x5359400", VA = "0x535A400")]
	public void ProcessBlock(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x6001B58")]
	[Address(RVA = "0x535A7D0", Offset = "0x53597D0", VA = "0x535A7D0", Slot = "17")]
	protected override void ECB(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x6001B59")]
	[Address(RVA = "0x53597A0", Offset = "0x53587A0", VA = "0x53597A0")]
	internal static byte[] GetStrongKey()
	{
		return null;
	}
}
