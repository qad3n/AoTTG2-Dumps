// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.MD5CryptoServiceProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3B4EA70", Offset = "0x3B4EA70", VA = "0x3B4EA70")]
	public MD5CryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B37")]
	[Address(RVA = "0x3B526F0", Offset = "0x3B526F0", VA = "0x3B526F0", Slot = "1")]
	~MD5CryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B38")]
	[Address(RVA = "0x3B52780", Offset = "0x3B52780", VA = "0x3B52780", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001B39")]
	[Address(RVA = "0x3B527E0", Offset = "0x3B527E0", VA = "0x3B527E0", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001B3A")]
	[Address(RVA = "0x3B53440", Offset = "0x3B53440", VA = "0x3B53440", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001B3B")]
	[Address(RVA = "0x3B538F0", Offset = "0x3B538F0", VA = "0x3B538F0", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001B3C")]
	[Address(RVA = "0x3B528C0", Offset = "0x3B528C0", VA = "0x3B528C0")]
	private void ProcessBlock(byte[] inputBuffer, int inputOffset)
	{
	}

	[Token(Token = "0x6001B3D")]
	[Address(RVA = "0x3B53720", Offset = "0x3B53720", VA = "0x3B53720")]
	private void ProcessFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
	}

	[Token(Token = "0x6001B3E")]
	[Address(RVA = "0x3B53950", Offset = "0x3B53950", VA = "0x3B53950")]
	internal void AddLength(ulong length, byte[] buffer, int position)
	{
	}
}
