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

[Token(Token = "0x20002D7")]
[ComVisible(true)]
public class ToBase64Transform : ICryptoTransform, IDisposable
{
	[Token(Token = "0x17000295")]
	public int InputBlockSize
	{
		[Token(Token = "0x60018E7")]
		[Address(RVA = "0x5336900", Offset = "0x5335900", VA = "0x5336900", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000296")]
	public int OutputBlockSize
	{
		[Token(Token = "0x60018E8")]
		[Address(RVA = "0x5336910", Offset = "0x5335910", VA = "0x5336910", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000297")]
	public bool CanTransformMultipleBlocks
	{
		[Token(Token = "0x60018E9")]
		[Address(RVA = "0x5336920", Offset = "0x5335920", VA = "0x5336920", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000298")]
	public virtual bool CanReuseTransform
	{
		[Token(Token = "0x60018EA")]
		[Address(RVA = "0x5336930", Offset = "0x5335930", VA = "0x5336930", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60018EB")]
	[Address(RVA = "0x5336940", Offset = "0x5335940", VA = "0x5336940", Slot = "8")]
	public int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x60018EC")]
	[Address(RVA = "0x5336B90", Offset = "0x5335B90", VA = "0x5336B90", Slot = "9")]
	public byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x60018ED")]
	[Address(RVA = "0x5336DB0", Offset = "0x5335DB0", VA = "0x5336DB0", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60018EE")]
	[Address(RVA = "0x5336E20", Offset = "0x5335E20", VA = "0x5336E20")]
	public void Clear()
	{
	}

	[Token(Token = "0x60018EF")]
	[Address(RVA = "0x5336E90", Offset = "0x5335E90", VA = "0x5336E90", Slot = "12")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60018F0")]
	[Address(RVA = "0x5336EA0", Offset = "0x5335EA0", VA = "0x5336EA0", Slot = "1")]
	~ToBase64Transform()
	{
	}

	[Token(Token = "0x60018F1")]
	[Address(RVA = "0x5336F40", Offset = "0x5335F40", VA = "0x5336F40")]
	public ToBase64Transform()
	{
	}
}
