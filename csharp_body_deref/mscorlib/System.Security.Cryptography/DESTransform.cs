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
	[Address(RVA = "0x4E6A430", Offset = "0x4E6A430", VA = "0x4E6A430")]
	internal DESTransform(SymmetricAlgorithm symmAlgo, bool encryption, byte[] key, byte[] iv)
	{
	}

	[Token(Token = "0x6001B0E")]
	[Address(RVA = "0x4E6AD30", Offset = "0x4E6AD30", VA = "0x4E6AD30")]
	private uint CipherFunct(uint r, int n)
	{
		return default(uint);
	}

	[Token(Token = "0x6001B0F")]
	[Address(RVA = "0x4E6AF60", Offset = "0x4E6AF60", VA = "0x4E6AF60")]
	internal static void Permutation(byte[] input, byte[] output, uint[] permTab, bool preSwap)
	{
	}

	[Token(Token = "0x6001B10")]
	[Address(RVA = "0x4E6B2A0", Offset = "0x4E6B2A0", VA = "0x4E6B2A0")]
	private static void BSwap(byte[] byteBuff)
	{
	}

	[Token(Token = "0x6001B11")]
	[Address(RVA = "0x4E6A780", Offset = "0x4E6A780", VA = "0x4E6A780")]
	internal void SetKey(byte[] key)
	{
	}

	[Token(Token = "0x6001B12")]
	[Address(RVA = "0x4E6B300", Offset = "0x4E6B300", VA = "0x4E6B300")]
	public void ProcessBlock(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x6001B13")]
	[Address(RVA = "0x4E6B6D0", Offset = "0x4E6B6D0", VA = "0x4E6B6D0", Slot = "17")]
	protected override void ECB(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x6001B14")]
	[Address(RVA = "0x4E6A6B0", Offset = "0x4E6A6B0", VA = "0x4E6A6B0")]
	internal static byte[] GetStrongKey()
	{
		return null;
	}
}
