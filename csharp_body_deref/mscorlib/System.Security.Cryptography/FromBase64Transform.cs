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
		[Address(RVA = "0x4E474C0", Offset = "0x4E474C0", VA = "0x4E474C0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000299")]
	public int OutputBlockSize
	{
		[Token(Token = "0x60018B0")]
		[Address(RVA = "0x4E474D0", Offset = "0x4E474D0", VA = "0x4E474D0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700029A")]
	public bool CanTransformMultipleBlocks
	{
		[Token(Token = "0x60018B1")]
		[Address(RVA = "0x4E474E0", Offset = "0x4E474E0", VA = "0x4E474E0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700029B")]
	public virtual bool CanReuseTransform
	{
		[Token(Token = "0x60018B2")]
		[Address(RVA = "0x4E474F0", Offset = "0x4E474F0", VA = "0x4E474F0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60018AD")]
	[Address(RVA = "0x4E473F0", Offset = "0x4E473F0", VA = "0x4E473F0")]
	public FromBase64Transform()
	{
	}

	[Token(Token = "0x60018AE")]
	[Address(RVA = "0x4E47450", Offset = "0x4E47450", VA = "0x4E47450")]
	public FromBase64Transform(FromBase64TransformMode whitespaces)
	{
	}

	[Token(Token = "0x60018B3")]
	[Address(RVA = "0x4E47500", Offset = "0x4E47500", VA = "0x4E47500", Slot = "8")]
	public int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x60018B4")]
	[Address(RVA = "0x4E47AC0", Offset = "0x4E47AC0", VA = "0x4E47AC0", Slot = "9")]
	public byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x60018B5")]
	[Address(RVA = "0x4E47860", Offset = "0x4E47860", VA = "0x4E47860")]
	private byte[] DiscardWhiteSpaces(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x60018B6")]
	[Address(RVA = "0x4E47E10", Offset = "0x4E47E10", VA = "0x4E47E10", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60018B7")]
	[Address(RVA = "0x4E47E00", Offset = "0x4E47E00", VA = "0x4E47E00")]
	private void Reset()
	{
	}

	[Token(Token = "0x60018B8")]
	[Address(RVA = "0x4E47E80", Offset = "0x4E47E80", VA = "0x4E47E80")]
	public void Clear()
	{
	}

	[Token(Token = "0x60018B9")]
	[Address(RVA = "0x4E47EF0", Offset = "0x4E47EF0", VA = "0x4E47EF0", Slot = "12")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60018BA")]
	[Address(RVA = "0x4E47F40", Offset = "0x4E47F40", VA = "0x4E47F40", Slot = "1")]
	~FromBase64Transform()
	{
	}
}
