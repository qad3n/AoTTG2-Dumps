using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000318")]
[ComVisible(true)]
public sealed class MD5CryptoServiceProvider : MD5
{
	[Token(Token = "0x4000DF3")]
	private const int BLOCK_SIZE_BYTES = 64;

	[Token(Token = "0x4000DF4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private uint[] _H;

	[Token(Token = "0x4000DF5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private uint[] buff;

	[Token(Token = "0x4000DF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private ulong count;

	[Token(Token = "0x4000DF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private byte[] _ProcessingBuffer;

	[Token(Token = "0x4000DF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int _ProcessingBufferCount;

	[Token(Token = "0x4000DF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly uint[] K;

	[Token(Token = "0x6001B36")]
	[Address(RVA = "0x4E68F50", Offset = "0x4E68F50", VA = "0x4E68F50")]
	public MD5CryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B37")]
	[Address(RVA = "0x4E6CBD0", Offset = "0x4E6CBD0", VA = "0x4E6CBD0", Slot = "1")]
	~MD5CryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B38")]
	[Address(RVA = "0x4E6CC60", Offset = "0x4E6CC60", VA = "0x4E6CC60", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001B39")]
	[Address(RVA = "0x4E6CCC0", Offset = "0x4E6CCC0", VA = "0x4E6CCC0", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001B3A")]
	[Address(RVA = "0x4E6D920", Offset = "0x4E6D920", VA = "0x4E6D920", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001B3B")]
	[Address(RVA = "0x4E6DDD0", Offset = "0x4E6DDD0", VA = "0x4E6DDD0", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001B3C")]
	[Address(RVA = "0x4E6CDA0", Offset = "0x4E6CDA0", VA = "0x4E6CDA0")]
	private void ProcessBlock(byte[] inputBuffer, int inputOffset)
	{
	}

	[Token(Token = "0x6001B3D")]
	[Address(RVA = "0x4E6DC00", Offset = "0x4E6DC00", VA = "0x4E6DC00")]
	private void ProcessFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
	}

	[Token(Token = "0x6001B3E")]
	[Address(RVA = "0x4E6DE30", Offset = "0x4E6DE30", VA = "0x4E6DE30")]
	internal void AddLength(ulong length, byte[] buffer, int position)
	{
	}
}
