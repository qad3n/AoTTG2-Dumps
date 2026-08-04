// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.SHA1Internal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3B56370", Offset = "0x3B56370", VA = "0x3B56370")]
	public SHA1Internal()
	{
	}

	[Token(Token = "0x6001B5D")]
	[Address(RVA = "0x3B564F0", Offset = "0x3B564F0", VA = "0x3B564F0")]
	public void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001B5E")]
	[Address(RVA = "0x3B56DF0", Offset = "0x3B56DF0", VA = "0x3B56DF0")]
	public byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001B5F")]
	[Address(RVA = "0x3B56480", Offset = "0x3B56480", VA = "0x3B56480")]
	public void Initialize()
	{
	}

	[Token(Token = "0x6001B60")]
	[Address(RVA = "0x3B565D0", Offset = "0x3B565D0", VA = "0x3B565D0")]
	private void ProcessBlock(byte[] inputBuffer, uint inputOffset)
	{
	}

	[Token(Token = "0x6001B61")]
	[Address(RVA = "0x3B57360", Offset = "0x3B57360", VA = "0x3B57360")]
	private static void InitialiseBuff(uint[] buff, byte[] input, uint inputOffset)
	{
	}

	[Token(Token = "0x6001B62")]
	[Address(RVA = "0x3B57A60", Offset = "0x3B57A60", VA = "0x3B57A60")]
	private static void FillBuff(uint[] buff)
	{
	}

	[Token(Token = "0x6001B63")]
	[Address(RVA = "0x3B57180", Offset = "0x3B57180", VA = "0x3B57180")]
	private void ProcessFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
	}

	[Token(Token = "0x6001B64")]
	[Address(RVA = "0x3B57CA0", Offset = "0x3B57CA0", VA = "0x3B57CA0")]
	internal void AddLength(ulong length, byte[] buffer, int position)
	{
	}
}
