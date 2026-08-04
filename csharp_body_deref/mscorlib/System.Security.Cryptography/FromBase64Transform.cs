// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.FromBase64Transform
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002D0")]
[ComVisible(true)]
public class FromBase64Transform : ICryptoTransform, IDisposable
{
	[Token(Token = "0x4000CD5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private byte[] _inputBuffer;

	[Token(Token = "0x4000CD6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int _inputIndex;

	[Token(Token = "0x4000CD7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private FromBase64TransformMode _whitespaces;

	[Token(Token = "0x17000298")]
	public int InputBlockSize
	{
		[Token(Token = "0x60018AF")]
		[Address(RVA = "0x3B2CFE0", Offset = "0x3B2CFE0", VA = "0x3B2CFE0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000299")]
	public int OutputBlockSize
	{
		[Token(Token = "0x60018B0")]
		[Address(RVA = "0x3B2CFF0", Offset = "0x3B2CFF0", VA = "0x3B2CFF0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700029A")]
	public bool CanTransformMultipleBlocks
	{
		[Token(Token = "0x60018B1")]
		[Address(RVA = "0x3B2D000", Offset = "0x3B2D000", VA = "0x3B2D000", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700029B")]
	public virtual bool CanReuseTransform
	{
		[Token(Token = "0x60018B2")]
		[Address(RVA = "0x3B2D010", Offset = "0x3B2D010", VA = "0x3B2D010", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60018AD")]
	[Address(RVA = "0x3B2CF10", Offset = "0x3B2CF10", VA = "0x3B2CF10")]
	public FromBase64Transform()
	{
	}

	[Token(Token = "0x60018AE")]
	[Address(RVA = "0x3B2CF70", Offset = "0x3B2CF70", VA = "0x3B2CF70")]
	public FromBase64Transform(FromBase64TransformMode whitespaces)
	{
	}

	[Token(Token = "0x60018B3")]
	[Address(RVA = "0x3B2D020", Offset = "0x3B2D020", VA = "0x3B2D020", Slot = "8")]
	public int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x60018B4")]
	[Address(RVA = "0x3B2D5E0", Offset = "0x3B2D5E0", VA = "0x3B2D5E0", Slot = "9")]
	public byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x60018B5")]
	[Address(RVA = "0x3B2D380", Offset = "0x3B2D380", VA = "0x3B2D380")]
	private byte[] DiscardWhiteSpaces(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x60018B6")]
	[Address(RVA = "0x3B2D930", Offset = "0x3B2D930", VA = "0x3B2D930", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60018B7")]
	[Address(RVA = "0x3B2D920", Offset = "0x3B2D920", VA = "0x3B2D920")]
	private void Reset()
	{
	}

	[Token(Token = "0x60018B8")]
	[Address(RVA = "0x3B2D9A0", Offset = "0x3B2D9A0", VA = "0x3B2D9A0")]
	public void Clear()
	{
	}

	[Token(Token = "0x60018B9")]
	[Address(RVA = "0x3B2DA10", Offset = "0x3B2DA10", VA = "0x3B2DA10", Slot = "12")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60018BA")]
	[Address(RVA = "0x3B2DA60", Offset = "0x3B2DA60", VA = "0x3B2DA60", Slot = "1")]
	~FromBase64Transform()
	{
	}
}
