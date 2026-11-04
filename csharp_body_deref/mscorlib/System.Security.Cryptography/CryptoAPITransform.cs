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

[Token(Token = "0x2000342")]
[ComVisible(true)]
public sealed class CryptoAPITransform : ICryptoTransform, IDisposable
{
	[Token(Token = "0x4000DE6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private bool m_disposed;

	[Token(Token = "0x170002EA")]
	public bool CanReuseTransform
	{
		[Token(Token = "0x6001B50")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EB")]
	public bool CanTransformMultipleBlocks
	{
		[Token(Token = "0x6001B51")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EC")]
	public int InputBlockSize
	{
		[Token(Token = "0x6001B52")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002ED")]
	public IntPtr KeyHandle
	{
		[Token(Token = "0x6001B53")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x170002EE")]
	public int OutputBlockSize
	{
		[Token(Token = "0x6001B54")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001B4F")]
	[Address(RVA = "0x1917200", Offset = "0x1915800", VA = "0x181917200")]
	internal CryptoAPITransform()
	{
	}

	[Token(Token = "0x6001B55")]
	[Address(RVA = "0x19B9B80", Offset = "0x19B8180", VA = "0x1819B9B80", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001B56")]
	[Address(RVA = "0x19B9B70", Offset = "0x19B8170", VA = "0x1819B9B70")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001B57")]
	[Address(RVA = "0x19B9B70", Offset = "0x19B8170", VA = "0x1819B9B70")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001B58")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "8")]
	public int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x6001B59")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "9")]
	public byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x6001B5A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[ComVisible(false)]
	public void Reset()
	{
	}
}
