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

[Token(Token = "0x2000347")]
[ComVisible(true)]
public sealed class MD5CryptoServiceProvider : MD5
{
	[Token(Token = "0x4000E00")]
	private const int BLOCK_SIZE_BYTES = 64;

	[Token(Token = "0x4000E01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private uint[] _H;

	[Token(Token = "0x4000E02")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private uint[] buff;

	[Token(Token = "0x4000E03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private ulong count;

	[Token(Token = "0x4000E04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private byte[] _ProcessingBuffer;

	[Token(Token = "0x4000E05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int _ProcessingBufferCount;

	[Token(Token = "0x4000E06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly uint[] K;

	[Token(Token = "0x6001B9E")]
	[Address(RVA = "0x19C1360", Offset = "0x19BF960", VA = "0x1819C1360")]
	public MD5CryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B9F")]
	[Address(RVA = "0x19BF8A0", Offset = "0x19BDEA0", VA = "0x1819BF8A0", Slot = "1")]
	~MD5CryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001BA0")]
	[Address(RVA = "0x19BF820", Offset = "0x19BDE20", VA = "0x1819BF820", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001BA1")]
	[Address(RVA = "0x19BF910", Offset = "0x19BDF10", VA = "0x1819BF910", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001BA2")]
	[Address(RVA = "0x19BFA40", Offset = "0x19BE040", VA = "0x1819BFA40", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001BA3")]
	[Address(RVA = "0x19BFB20", Offset = "0x19BE120", VA = "0x1819BFB20", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001BA4")]
	[Address(RVA = "0x19BFBA0", Offset = "0x19BE1A0", VA = "0x1819BFBA0")]
	private void ProcessBlock(byte[] inputBuffer, int inputOffset)
	{
	}

	[Token(Token = "0x6001BA5")]
	[Address(RVA = "0x19C10D0", Offset = "0x19BF6D0", VA = "0x1819C10D0")]
	private void ProcessFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
	}

	[Token(Token = "0x6001BA6")]
	[Address(RVA = "0x19BF740", Offset = "0x19BDD40", VA = "0x1819BF740")]
	internal void AddLength(ulong length, byte[] buffer, int position)
	{
	}
}
