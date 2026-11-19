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

[Token(Token = "0x20002D8")]
[ComVisible(true)]
public class FromBase64Transform : ICryptoTransform, IDisposable
{
	[Token(Token = "0x4000C42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private byte[] _inputBuffer;

	[Token(Token = "0x4000C43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int _inputIndex;

	[Token(Token = "0x4000C44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private FromBase64TransformMode _whitespaces;

	[Token(Token = "0x17000299")]
	public int InputBlockSize
	{
		[Token(Token = "0x60018F4")]
		[Address(RVA = "0x5337020", Offset = "0x5336020", VA = "0x5337020", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700029A")]
	public int OutputBlockSize
	{
		[Token(Token = "0x60018F5")]
		[Address(RVA = "0x5337030", Offset = "0x5336030", VA = "0x5337030", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700029B")]
	public bool CanTransformMultipleBlocks
	{
		[Token(Token = "0x60018F6")]
		[Address(RVA = "0x5337040", Offset = "0x5336040", VA = "0x5337040", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700029C")]
	public virtual bool CanReuseTransform
	{
		[Token(Token = "0x60018F7")]
		[Address(RVA = "0x5337050", Offset = "0x5336050", VA = "0x5337050", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60018F2")]
	[Address(RVA = "0x5336F50", Offset = "0x5335F50", VA = "0x5336F50")]
	public FromBase64Transform()
	{
	}

	[Token(Token = "0x60018F3")]
	[Address(RVA = "0x5336FB0", Offset = "0x5335FB0", VA = "0x5336FB0")]
	public FromBase64Transform(FromBase64TransformMode whitespaces)
	{
	}

	[Token(Token = "0x60018F8")]
	[Address(RVA = "0x5337060", Offset = "0x5336060", VA = "0x5337060", Slot = "8")]
	public int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x60018F9")]
	[Address(RVA = "0x5337610", Offset = "0x5336610", VA = "0x5337610", Slot = "9")]
	public byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x60018FA")]
	[Address(RVA = "0x53373C0", Offset = "0x53363C0", VA = "0x53373C0")]
	private byte[] DiscardWhiteSpaces(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x60018FB")]
	[Address(RVA = "0x5337960", Offset = "0x5336960", VA = "0x5337960", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60018FC")]
	[Address(RVA = "0x5337950", Offset = "0x5336950", VA = "0x5337950")]
	private void Reset()
	{
	}

	[Token(Token = "0x60018FD")]
	[Address(RVA = "0x53379D0", Offset = "0x53369D0", VA = "0x53379D0")]
	public void Clear()
	{
	}

	[Token(Token = "0x60018FE")]
	[Address(RVA = "0x5337A40", Offset = "0x5336A40", VA = "0x5337A40", Slot = "12")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60018FF")]
	[Address(RVA = "0x5337A90", Offset = "0x5336A90", VA = "0x5337A90", Slot = "1")]
	~FromBase64Transform()
	{
	}
}
