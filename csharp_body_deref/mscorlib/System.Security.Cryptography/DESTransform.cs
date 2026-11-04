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

[Token(Token = "0x2000345")]
internal class DESTransform : Mono.Security.Cryptography.SymmetricTransform
{
	[Token(Token = "0x4000DEB")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly int KEY_BIT_SIZE;

	[Token(Token = "0x4000DEC")]
	[FieldOffset(Offset = "0x4")]
	internal static readonly int KEY_BYTE_SIZE;

	[Token(Token = "0x4000DED")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly int BLOCK_BIT_SIZE;

	[Token(Token = "0x4000DEE")]
	[FieldOffset(Offset = "0xC")]
	internal static readonly int BLOCK_BYTE_SIZE;

	[Token(Token = "0x4000DEF")]
	[FieldOffset(Offset = "0x58")]
	private byte[] keySchedule;

	[Token(Token = "0x4000DF0")]
	[FieldOffset(Offset = "0x60")]
	private byte[] byteBuff;

	[Token(Token = "0x4000DF1")]
	[FieldOffset(Offset = "0x68")]
	private uint[] dwordBuff;

	[Token(Token = "0x4000DF2")]
	[FieldOffset(Offset = "0x10")]
	private static readonly uint[] spBoxes;

	[Token(Token = "0x4000DF3")]
	[FieldOffset(Offset = "0x18")]
	private static readonly byte[] PC1;

	[Token(Token = "0x4000DF4")]
	[FieldOffset(Offset = "0x20")]
	private static readonly byte[] leftRotTotal;

	[Token(Token = "0x4000DF5")]
	[FieldOffset(Offset = "0x28")]
	private static readonly byte[] PC2;

	[Token(Token = "0x4000DF6")]
	[FieldOffset(Offset = "0x30")]
	internal static readonly uint[] ipTab;

	[Token(Token = "0x4000DF7")]
	[FieldOffset(Offset = "0x38")]
	internal static readonly uint[] fpTab;

	[Token(Token = "0x6001B75")]
	[Address(RVA = "0x19BE210", Offset = "0x19BC810", VA = "0x1819BE210")]
	internal DESTransform(SymmetricAlgorithm symmAlgo, bool encryption, byte[] key, byte[] iv)
	{
	}

	[Token(Token = "0x6001B76")]
	[Address(RVA = "0x19BCEF0", Offset = "0x19BB4F0", VA = "0x1819BCEF0")]
	private uint CipherFunct(uint r, int n)
	{
		return default(uint);
	}

	[Token(Token = "0x6001B77")]
	[Address(RVA = "0x19BD380", Offset = "0x19BB980", VA = "0x1819BD380")]
	internal static void Permutation(byte[] input, byte[] output, uint[] permTab, bool preSwap)
	{
	}

	[Token(Token = "0x6001B78")]
	[Address(RVA = "0x19BCE60", Offset = "0x19BB460", VA = "0x1819BCE60")]
	private static void BSwap(byte[] byteBuff)
	{
	}

	[Token(Token = "0x6001B79")]
	[Address(RVA = "0x19BDB60", Offset = "0x19BC160", VA = "0x1819BDB60")]
	internal void SetKey(byte[] key)
	{
	}

	[Token(Token = "0x6001B7A")]
	[Address(RVA = "0x19BD710", Offset = "0x19BBD10", VA = "0x1819BD710")]
	public void ProcessBlock(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x6001B7B")]
	[Address(RVA = "0x19BD200", Offset = "0x19BB800", VA = "0x1819BD200", Slot = "17")]
	protected override void ECB(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x6001B7C")]
	[Address(RVA = "0x19BD2D0", Offset = "0x19BB8D0", VA = "0x1819BD2D0")]
	internal static byte[] GetStrongKey()
	{
		return null;
	}
}
