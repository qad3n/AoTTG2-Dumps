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

[Token(Token = "0x2000320")]
[ComVisible(true)]
public sealed class MD5CryptoServiceProvider : MD5
{
	[Token(Token = "0x4000D60")]
	private const int BLOCK_SIZE_BYTES = 64;

	[Token(Token = "0x4000D61")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private uint[] _H;

	[Token(Token = "0x4000D62")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private uint[] buff;

	[Token(Token = "0x4000D63")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private ulong count;

	[Token(Token = "0x4000D64")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private byte[] _ProcessingBuffer;

	[Token(Token = "0x4000D65")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int _ProcessingBufferCount;

	[Token(Token = "0x4000D66")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly uint[] K;

	[Token(Token = "0x6001B7B")]
	[Address(RVA = "0x53580E0", Offset = "0x53570E0", VA = "0x53580E0")]
	public MD5CryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B7C")]
	[Address(RVA = "0x535BB70", Offset = "0x535AB70", VA = "0x535BB70", Slot = "1")]
	~MD5CryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B7D")]
	[Address(RVA = "0x535BC10", Offset = "0x535AC10", VA = "0x535BC10", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001B7E")]
	[Address(RVA = "0x535BC70", Offset = "0x535AC70", VA = "0x535BC70", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001B7F")]
	[Address(RVA = "0x535C8E0", Offset = "0x535B8E0", VA = "0x535C8E0", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001B80")]
	[Address(RVA = "0x535CD60", Offset = "0x535BD60", VA = "0x535CD60", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001B81")]
	[Address(RVA = "0x535BD50", Offset = "0x535AD50", VA = "0x535BD50")]
	private void ProcessBlock(byte[] inputBuffer, int inputOffset)
	{
	}

	[Token(Token = "0x6001B82")]
	[Address(RVA = "0x535CBC0", Offset = "0x535BBC0", VA = "0x535CBC0")]
	private void ProcessFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
	}

	[Token(Token = "0x6001B83")]
	[Address(RVA = "0x535CDC0", Offset = "0x535BDC0", VA = "0x535CDC0")]
	internal void AddLength(ulong length, byte[] buffer, int position)
	{
	}
}
