// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.ToBase64Transform
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002FE")]
[ComVisible(true)]
public class ToBase64Transform : ICryptoTransform, IDisposable
{
	[Token(Token = "0x17000296")]
	public int InputBlockSize
	{
		[Token(Token = "0x600190A")]
		[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000297")]
	public int OutputBlockSize
	{
		[Token(Token = "0x600190B")]
		[Address(RVA = "0x846F40", Offset = "0x845540", VA = "0x180846F40", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000298")]
	public bool CanTransformMultipleBlocks
	{
		[Token(Token = "0x600190C")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000299")]
	public virtual bool CanReuseTransform
	{
		[Token(Token = "0x600190D")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600190E")]
	[Address(RVA = "0x19B6A80", Offset = "0x19B5080", VA = "0x1819B6A80", Slot = "8")]
	public int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x600190F")]
	[Address(RVA = "0x19B6D70", Offset = "0x19B5370", VA = "0x1819B6D70", Slot = "9")]
	public byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x6001910")]
	[Address(RVA = "0x19B6A20", Offset = "0x19B5020", VA = "0x1819B6A20", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001911")]
	[Address(RVA = "0x19B6A20", Offset = "0x19B5020", VA = "0x1819B6A20")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001912")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "12")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001913")]
	[Address(RVA = "0x19A7CB0", Offset = "0x19A62B0", VA = "0x1819A7CB0", Slot = "1")]
	~ToBase64Transform()
	{
	}

	[Token(Token = "0x6001914")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ToBase64Transform()
	{
	}
}
