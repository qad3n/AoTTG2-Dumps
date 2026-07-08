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
		[Address(RVA = "0x4E46DB0", Offset = "0x4E46DB0", VA = "0x4E46DB0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000295")]
	public int OutputBlockSize
	{
		[Token(Token = "0x60018A3")]
		[Address(RVA = "0x4E46DC0", Offset = "0x4E46DC0", VA = "0x4E46DC0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000296")]
	public bool CanTransformMultipleBlocks
	{
		[Token(Token = "0x60018A4")]
		[Address(RVA = "0x4E46DD0", Offset = "0x4E46DD0", VA = "0x4E46DD0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000297")]
	public virtual bool CanReuseTransform
	{
		[Token(Token = "0x60018A5")]
		[Address(RVA = "0x4E46DE0", Offset = "0x4E46DE0", VA = "0x4E46DE0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60018A6")]
	[Address(RVA = "0x4E46DF0", Offset = "0x4E46DF0", VA = "0x4E46DF0", Slot = "8")]
	public int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x60018A7")]
	[Address(RVA = "0x4E47040", Offset = "0x4E47040", VA = "0x4E47040", Slot = "9")]
	public byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x60018A8")]
	[Address(RVA = "0x4E47260", Offset = "0x4E47260", VA = "0x4E47260", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60018A9")]
	[Address(RVA = "0x4E472D0", Offset = "0x4E472D0", VA = "0x4E472D0")]
	public void Clear()
	{
	}

	[Token(Token = "0x60018AA")]
	[Address(RVA = "0x4E47340", Offset = "0x4E47340", VA = "0x4E47340", Slot = "12")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60018AB")]
	[Address(RVA = "0x4E47350", Offset = "0x4E47350", VA = "0x4E47350", Slot = "1")]
	~ToBase64Transform()
	{
	}

	[Token(Token = "0x60018AC")]
	[Address(RVA = "0x4E473E0", Offset = "0x4E473E0", VA = "0x4E473E0")]
	public ToBase64Transform()
	{
	}
}
