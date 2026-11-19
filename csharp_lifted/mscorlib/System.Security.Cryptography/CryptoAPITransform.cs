// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.CryptoAPITransform
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x200031B")]
[ComVisible(true)]
public sealed class CryptoAPITransform : ICryptoTransform, IDisposable
{
	[Token(Token = "0x4000D46")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private bool m_disposed;

	[Token(Token = "0x170002E9")]
	public bool CanReuseTransform
	{
		[Token(Token = "0x6001B2D")]
		[Address(RVA = "0x5356330", Offset = "0x5355330", VA = "0x5356330", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EA")]
	public bool CanTransformMultipleBlocks
	{
		[Token(Token = "0x6001B2E")]
		[Address(RVA = "0x5356340", Offset = "0x5355340", VA = "0x5356340", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EB")]
	public int InputBlockSize
	{
		[Token(Token = "0x6001B2F")]
		[Address(RVA = "0x5356350", Offset = "0x5355350", VA = "0x5356350", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002EC")]
	public IntPtr KeyHandle
	{
		[Token(Token = "0x6001B30")]
		[Address(RVA = "0x5356360", Offset = "0x5355360", VA = "0x5356360")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x170002ED")]
	public int OutputBlockSize
	{
		[Token(Token = "0x6001B31")]
		[Address(RVA = "0x5356370", Offset = "0x5355370", VA = "0x5356370", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001B2C")]
	[Address(RVA = "0x5356310", Offset = "0x5355310", VA = "0x5356310")]
	internal CryptoAPITransform()
	{
	}

	[Token(Token = "0x6001B32")]
	[Address(RVA = "0x5356380", Offset = "0x5355380", VA = "0x5356380", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001B33")]
	[Address(RVA = "0x5356410", Offset = "0x5355410", VA = "0x5356410")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001B34")]
	[Address(RVA = "0x5356400", Offset = "0x5355400", VA = "0x5356400")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001B35")]
	[Address(RVA = "0x5356420", Offset = "0x5355420", VA = "0x5356420", Slot = "8")]
	public int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x6001B36")]
	[Address(RVA = "0x5356430", Offset = "0x5355430", VA = "0x5356430", Slot = "9")]
	public byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x6001B37")]
	[Address(RVA = "0x5356440", Offset = "0x5355440", VA = "0x5356440")]
	[ComVisible(false)]
	public void Reset()
	{
	}
}
