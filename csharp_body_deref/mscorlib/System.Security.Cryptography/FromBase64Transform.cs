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

[Token(Token = "0x20002FF")]
[ComVisible(true)]
public class FromBase64Transform : ICryptoTransform, IDisposable
{
	[Token(Token = "0x4000CE2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private byte[] _inputBuffer;

	[Token(Token = "0x4000CE3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int _inputIndex;

	[Token(Token = "0x4000CE4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private FromBase64TransformMode _whitespaces;

	[Token(Token = "0x1700029A")]
	public int InputBlockSize
	{
		[Token(Token = "0x6001917")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700029B")]
	public int OutputBlockSize
	{
		[Token(Token = "0x6001918")]
		[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700029C")]
	public bool CanTransformMultipleBlocks
	{
		[Token(Token = "0x6001919")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700029D")]
	public virtual bool CanReuseTransform
	{
		[Token(Token = "0x600191A")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001915")]
	[Address(RVA = "0x19A8500", Offset = "0x19A6B00", VA = "0x1819A8500")]
	public FromBase64Transform()
	{
	}

	[Token(Token = "0x6001916")]
	[Address(RVA = "0x19A8560", Offset = "0x19A6B60", VA = "0x1819A8560")]
	public FromBase64Transform(FromBase64TransformMode whitespaces)
	{
	}

	[Token(Token = "0x600191B")]
	[Address(RVA = "0x19A7D20", Offset = "0x19A6320", VA = "0x1819A7D20", Slot = "8")]
	public int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x600191C")]
	[Address(RVA = "0x19A8120", Offset = "0x19A6720", VA = "0x1819A8120", Slot = "9")]
	public byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x600191D")]
	[Address(RVA = "0x19A7AF0", Offset = "0x19A60F0", VA = "0x1819A7AF0")]
	private byte[] DiscardWhiteSpaces(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x600191E")]
	[Address(RVA = "0x19A7A90", Offset = "0x19A6090", VA = "0x1819A7A90", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600191F")]
	[Address(RVA = "0x14F6820", Offset = "0x14F4E20", VA = "0x1814F6820")]
	private void Reset()
	{
	}

	[Token(Token = "0x6001920")]
	[Address(RVA = "0x19A7A90", Offset = "0x19A6090", VA = "0x1819A7A90")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001921")]
	[Address(RVA = "0x19A7C60", Offset = "0x19A6260", VA = "0x1819A7C60", Slot = "12")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001922")]
	[Address(RVA = "0x19A7CB0", Offset = "0x19A62B0", VA = "0x1819A7CB0", Slot = "1")]
	~FromBase64Transform()
	{
	}
}
