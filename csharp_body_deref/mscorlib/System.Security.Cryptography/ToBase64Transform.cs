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

[Token(Token = "0x20002CF")]
[ComVisible(true)]
public class ToBase64Transform : ICryptoTransform, IDisposable
{
	[Token(Token = "0x17000294")]
	public int InputBlockSize
	{
		[Token(Token = "0x60018A2")]
		[Address(RVA = "0x3B2C8D0", Offset = "0x3B2C8D0", VA = "0x3B2C8D0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000295")]
	public int OutputBlockSize
	{
		[Token(Token = "0x60018A3")]
		[Address(RVA = "0x3B2C8E0", Offset = "0x3B2C8E0", VA = "0x3B2C8E0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000296")]
	public bool CanTransformMultipleBlocks
	{
		[Token(Token = "0x60018A4")]
		[Address(RVA = "0x3B2C8F0", Offset = "0x3B2C8F0", VA = "0x3B2C8F0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000297")]
	public virtual bool CanReuseTransform
	{
		[Token(Token = "0x60018A5")]
		[Address(RVA = "0x3B2C900", Offset = "0x3B2C900", VA = "0x3B2C900", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60018A6")]
	[Address(RVA = "0x3B2C910", Offset = "0x3B2C910", VA = "0x3B2C910", Slot = "8")]
	public int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x60018A7")]
	[Address(RVA = "0x3B2CB60", Offset = "0x3B2CB60", VA = "0x3B2CB60", Slot = "9")]
	public byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x60018A8")]
	[Address(RVA = "0x3B2CD80", Offset = "0x3B2CD80", VA = "0x3B2CD80", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60018A9")]
	[Address(RVA = "0x3B2CDF0", Offset = "0x3B2CDF0", VA = "0x3B2CDF0")]
	public void Clear()
	{
	}

	[Token(Token = "0x60018AA")]
	[Address(RVA = "0x3B2CE60", Offset = "0x3B2CE60", VA = "0x3B2CE60", Slot = "12")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60018AB")]
	[Address(RVA = "0x3B2CE70", Offset = "0x3B2CE70", VA = "0x3B2CE70", Slot = "1")]
	~ToBase64Transform()
	{
	}

	[Token(Token = "0x60018AC")]
	[Address(RVA = "0x3B2CF00", Offset = "0x3B2CF00", VA = "0x3B2CF00")]
	public ToBase64Transform()
	{
	}
}
