using System;
using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Mono.Security.Cryptography;

[Token(Token = "0x200004C")]
internal abstract class SymmetricTransform : ICryptoTransform, IDisposable
{
	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x10")]
	protected SymmetricAlgorithm algo;

	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x18")]
	protected bool encrypt;

	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x1C")]
	protected int BlockSizeByte;

	[Token(Token = "0x4000167")]
	[FieldOffset(Offset = "0x20")]
	protected byte[] temp;

	[Token(Token = "0x4000168")]
	[FieldOffset(Offset = "0x28")]
	protected byte[] temp2;

	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x30")]
	private byte[] workBuff;

	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x38")]
	private byte[] workout;

	[Token(Token = "0x400016B")]
	[FieldOffset(Offset = "0x40")]
	protected PaddingMode padmode;

	[Token(Token = "0x400016C")]
	[FieldOffset(Offset = "0x44")]
	protected int FeedBackByte;

	[Token(Token = "0x400016D")]
	[FieldOffset(Offset = "0x48")]
	private bool m_disposed;

	[Token(Token = "0x400016E")]
	[FieldOffset(Offset = "0x49")]
	protected bool lastBlock;

	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0x50")]
	private RandomNumberGenerator _rng;

	[Token(Token = "0x17000028")]
	public virtual bool CanTransformMultipleBlocks
	{
		[Token(Token = "0x600018F")]
		[Address(RVA = "0x4E041B0", Offset = "0x4E041B0", VA = "0x4E041B0", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000029")]
	public virtual bool CanReuseTransform
	{
		[Token(Token = "0x6000190")]
		[Address(RVA = "0x4E041C0", Offset = "0x4E041C0", VA = "0x4E041C0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002A")]
	public virtual int InputBlockSize
	{
		[Token(Token = "0x6000191")]
		[Address(RVA = "0x4E041D0", Offset = "0x4E041D0", VA = "0x4E041D0", Slot = "14")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700002B")]
	public virtual int OutputBlockSize
	{
		[Token(Token = "0x6000192")]
		[Address(RVA = "0x4E041E0", Offset = "0x4E041E0", VA = "0x4E041E0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700002C")]
	private bool KeepLastBlock
	{
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x4E04B00", Offset = "0x4E04B00", VA = "0x4E04B00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x4E03D40", Offset = "0x4E03D40", VA = "0x4E03D40")]
	public SymmetricTransform(SymmetricAlgorithm symmAlgo, bool encryption, byte[] rgbIV)
	{
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x4E04030", Offset = "0x4E04030", VA = "0x4E04030", Slot = "1")]
	~SymmetricTransform()
	{
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x4E040C0", Offset = "0x4E040C0", VA = "0x4E040C0", Slot = "10")]
	private void System_002EIDisposable_002EDispose()
	{
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x4E04130", Offset = "0x4E04130", VA = "0x4E04130", Slot = "11")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x4E041F0", Offset = "0x4E041F0", VA = "0x4E041F0", Slot = "16")]
	protected virtual void Transform(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x6000194")]
	protected abstract void ECB(byte[] input, byte[] output);

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x4E04360", Offset = "0x4E04360", VA = "0x4E04360", Slot = "18")]
	protected virtual void CBC(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x4E044A0", Offset = "0x4E044A0", VA = "0x4E044A0", Slot = "19")]
	protected virtual void CFB(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x4E04740", Offset = "0x4E04740", VA = "0x4E04740", Slot = "20")]
	protected virtual void OFB(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x4E04790", Offset = "0x4E04790", VA = "0x4E04790", Slot = "21")]
	protected virtual void CTS(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x4E047E0", Offset = "0x4E047E0", VA = "0x4E047E0")]
	private void CheckInput(byte[] inputBuffer, int inputOffset, int inputCount)
	{
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x4E04910", Offset = "0x4E04910", VA = "0x4E04910", Slot = "22")]
	public virtual int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x4E04B20", Offset = "0x4E04B20", VA = "0x4E04B20")]
	private int InternalTransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x4E04CD0", Offset = "0x4E04CD0", VA = "0x4E04CD0")]
	private void Random(byte[] buffer, int start, int length)
	{
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x4E04D80", Offset = "0x4E04D80", VA = "0x4E04D80")]
	private void ThrowBadPaddingException(PaddingMode padding, int length, int position)
	{
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x4E04F90", Offset = "0x4E04F90", VA = "0x4E04F90", Slot = "23")]
	protected virtual byte[] FinalEncrypt(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x4E05270", Offset = "0x4E05270", VA = "0x4E05270", Slot = "24")]
	protected virtual byte[] FinalDecrypt(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x4E05550", Offset = "0x4E05550", VA = "0x4E05550", Slot = "25")]
	public virtual byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}
}
