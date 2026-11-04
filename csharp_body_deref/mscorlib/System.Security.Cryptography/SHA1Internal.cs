// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.SHA1Internal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x200034C")]
internal class SHA1Internal
{
	[Token(Token = "0x4000E14")]
	private const int BLOCK_SIZE_BYTES = 64;

	[Token(Token = "0x4000E15")]
	[FieldOffset(Offset = "0x10")]
	private uint[] _H;

	[Token(Token = "0x4000E16")]
	[FieldOffset(Offset = "0x18")]
	private ulong count;

	[Token(Token = "0x4000E17")]
	[FieldOffset(Offset = "0x20")]
	private byte[] _ProcessingBuffer;

	[Token(Token = "0x4000E18")]
	[FieldOffset(Offset = "0x28")]
	private int _ProcessingBufferCount;

	[Token(Token = "0x4000E19")]
	[FieldOffset(Offset = "0x30")]
	private uint[] buff;

	[Token(Token = "0x6001BC4")]
	[Address(RVA = "0x19E61F0", Offset = "0x19E47F0", VA = "0x1819E61F0")]
	public SHA1Internal()
	{
	}

	[Token(Token = "0x6001BC5")]
	[Address(RVA = "0x19E4E80", Offset = "0x19E3480", VA = "0x1819E4E80")]
	public void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001BC6")]
	[Address(RVA = "0x19E4FB0", Offset = "0x19E35B0", VA = "0x1819E4FB0")]
	public byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001BC7")]
	[Address(RVA = "0x19E5810", Offset = "0x19E3E10", VA = "0x1819E5810")]
	public void Initialize()
	{
	}

	[Token(Token = "0x6001BC8")]
	[Address(RVA = "0x19E58A0", Offset = "0x19E3EA0", VA = "0x1819E58A0")]
	private void ProcessBlock(byte[] inputBuffer, uint inputOffset)
	{
	}

	[Token(Token = "0x6001BC9")]
	[Address(RVA = "0x19E5090", Offset = "0x19E3690", VA = "0x1819E5090")]
	private static void InitialiseBuff(uint[] buff, byte[] input, uint inputOffset)
	{
	}

	[Token(Token = "0x6001BCA")]
	[Address(RVA = "0x19E4AB0", Offset = "0x19E30B0", VA = "0x1819E4AB0")]
	private static void FillBuff(uint[] buff)
	{
	}

	[Token(Token = "0x6001BCB")]
	[Address(RVA = "0x19E5FC0", Offset = "0x19E45C0", VA = "0x1819E5FC0")]
	private void ProcessFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
	}

	[Token(Token = "0x6001BCC")]
	[Address(RVA = "0x19E49D0", Offset = "0x19E2FD0", VA = "0x1819E49D0")]
	internal void AddLength(ulong length, byte[] buffer, int position)
	{
	}
}
