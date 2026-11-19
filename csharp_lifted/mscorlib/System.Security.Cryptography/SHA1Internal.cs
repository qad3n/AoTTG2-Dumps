// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.SHA1Internal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000325")]
internal class SHA1Internal
{
	[Token(Token = "0x4000D74")]
	private const int BLOCK_SIZE_BYTES = 64;

	[Token(Token = "0x4000D75")]
	[FieldOffset(Offset = "0x10")]
	private uint[] _H;

	[Token(Token = "0x4000D76")]
	[FieldOffset(Offset = "0x18")]
	private ulong count;

	[Token(Token = "0x4000D77")]
	[FieldOffset(Offset = "0x20")]
	private byte[] _ProcessingBuffer;

	[Token(Token = "0x4000D78")]
	[FieldOffset(Offset = "0x28")]
	private int _ProcessingBufferCount;

	[Token(Token = "0x4000D79")]
	[FieldOffset(Offset = "0x30")]
	private uint[] buff;

	[Token(Token = "0x6001BA1")]
	[Address(RVA = "0x535FAB0", Offset = "0x535EAB0", VA = "0x535FAB0")]
	public SHA1Internal()
	{
	}

	[Token(Token = "0x6001BA2")]
	[Address(RVA = "0x535FC30", Offset = "0x535EC30", VA = "0x535FC30")]
	public void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001BA3")]
	[Address(RVA = "0x5360C00", Offset = "0x535FC00", VA = "0x5360C00")]
	public byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001BA4")]
	[Address(RVA = "0x535FBC0", Offset = "0x535EBC0", VA = "0x535FBC0")]
	public void Initialize()
	{
	}

	[Token(Token = "0x6001BA5")]
	[Address(RVA = "0x535FD10", Offset = "0x535ED10", VA = "0x535FD10")]
	private void ProcessBlock(byte[] inputBuffer, uint inputOffset)
	{
	}

	[Token(Token = "0x6001BA6")]
	[Address(RVA = "0x5361120", Offset = "0x5360120", VA = "0x5361120")]
	private static void InitialiseBuff(uint[] buff, byte[] input, uint inputOffset)
	{
	}

	[Token(Token = "0x6001BA7")]
	[Address(RVA = "0x5361820", Offset = "0x5360820", VA = "0x5361820")]
	private static void FillBuff(uint[] buff)
	{
	}

	[Token(Token = "0x6001BA8")]
	[Address(RVA = "0x5360F70", Offset = "0x535FF70", VA = "0x5360F70")]
	private void ProcessFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
	}

	[Token(Token = "0x6001BA9")]
	[Address(RVA = "0x5361990", Offset = "0x5360990", VA = "0x5361990")]
	internal void AddLength(ulong length, byte[] buffer, int position)
	{
	}
}
