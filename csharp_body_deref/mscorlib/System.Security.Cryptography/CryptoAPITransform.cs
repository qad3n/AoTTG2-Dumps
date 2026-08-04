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

[Token(Token = "0x2000313")]
[ComVisible(true)]
public sealed class CryptoAPITransform : ICryptoTransform, IDisposable
{
	[Token(Token = "0x4000DD9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private bool m_disposed;

	[Token(Token = "0x170002E8")]
	public bool CanReuseTransform
	{
		[Token(Token = "0x6001AE8")]
		[Address(RVA = "0x3B4CB30", Offset = "0x3B4CB30", VA = "0x3B4CB30", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002E9")]
	public bool CanTransformMultipleBlocks
	{
		[Token(Token = "0x6001AE9")]
		[Address(RVA = "0x3B4CB40", Offset = "0x3B4CB40", VA = "0x3B4CB40", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EA")]
	public int InputBlockSize
	{
		[Token(Token = "0x6001AEA")]
		[Address(RVA = "0x3B4CB50", Offset = "0x3B4CB50", VA = "0x3B4CB50", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002EB")]
	public IntPtr KeyHandle
	{
		[Token(Token = "0x6001AEB")]
		[Address(RVA = "0x3B4CB60", Offset = "0x3B4CB60", VA = "0x3B4CB60")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x170002EC")]
	public int OutputBlockSize
	{
		[Token(Token = "0x6001AEC")]
		[Address(RVA = "0x3B4CB70", Offset = "0x3B4CB70", VA = "0x3B4CB70", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001AE7")]
	[Address(RVA = "0x3B4CB10", Offset = "0x3B4CB10", VA = "0x3B4CB10")]
	internal CryptoAPITransform()
	{
	}

	[Token(Token = "0x6001AED")]
	[Address(RVA = "0x3B4CB80", Offset = "0x3B4CB80", VA = "0x3B4CB80", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001AEE")]
	[Address(RVA = "0x3B4CC10", Offset = "0x3B4CC10", VA = "0x3B4CC10")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001AEF")]
	[Address(RVA = "0x3B4CC00", Offset = "0x3B4CC00", VA = "0x3B4CC00")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001AF0")]
	[Address(RVA = "0x3B4CC20", Offset = "0x3B4CC20", VA = "0x3B4CC20", Slot = "8")]
	public int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x6001AF1")]
	[Address(RVA = "0x3B4CC30", Offset = "0x3B4CC30", VA = "0x3B4CC30", Slot = "9")]
	public byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x6001AF2")]
	[Address(RVA = "0x3B4CC40", Offset = "0x3B4CC40", VA = "0x3B4CC40")]
	[ComVisible(false)]
	public void Reset()
	{
	}
}
