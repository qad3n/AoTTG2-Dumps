using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x200031D")]
internal class SHA1Internal
{
	[Token(Token = "0x4000E07")]
	private const int BLOCK_SIZE_BYTES = 64;

	[Token(Token = "0x4000E08")]
	[FieldOffset(Offset = "0x10")]
	private uint[] _H;

	[Token(Token = "0x4000E09")]
	[FieldOffset(Offset = "0x18")]
	private ulong count;

	[Token(Token = "0x4000E0A")]
	[FieldOffset(Offset = "0x20")]
	private byte[] _ProcessingBuffer;

	[Token(Token = "0x4000E0B")]
	[FieldOffset(Offset = "0x28")]
	private int _ProcessingBufferCount;

	[Token(Token = "0x4000E0C")]
	[FieldOffset(Offset = "0x30")]
	private uint[] buff;

	[Token(Token = "0x6001B5C")]
	[Address(RVA = "0x4E70850", Offset = "0x4E70850", VA = "0x4E70850")]
	public SHA1Internal()
	{
	}

	[Token(Token = "0x6001B5D")]
	[Address(RVA = "0x4E709D0", Offset = "0x4E709D0", VA = "0x4E709D0")]
	public void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001B5E")]
	[Address(RVA = "0x4E712D0", Offset = "0x4E712D0", VA = "0x4E712D0")]
	public byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001B5F")]
	[Address(RVA = "0x4E70960", Offset = "0x4E70960", VA = "0x4E70960")]
	public void Initialize()
	{
	}

	[Token(Token = "0x6001B60")]
	[Address(RVA = "0x4E70AB0", Offset = "0x4E70AB0", VA = "0x4E70AB0")]
	private void ProcessBlock(byte[] inputBuffer, uint inputOffset)
	{
	}

	[Token(Token = "0x6001B61")]
	[Address(RVA = "0x4E71840", Offset = "0x4E71840", VA = "0x4E71840")]
	private static void InitialiseBuff(uint[] buff, byte[] input, uint inputOffset)
	{
	}

	[Token(Token = "0x6001B62")]
	[Address(RVA = "0x4E71F40", Offset = "0x4E71F40", VA = "0x4E71F40")]
	private static void FillBuff(uint[] buff)
	{
	}

	[Token(Token = "0x6001B63")]
	[Address(RVA = "0x4E71660", Offset = "0x4E71660", VA = "0x4E71660")]
	private void ProcessFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
	}

	[Token(Token = "0x6001B64")]
	[Address(RVA = "0x4E72180", Offset = "0x4E72180", VA = "0x4E72180")]
	internal void AddLength(ulong length, byte[] buffer, int position)
	{
	}
}
