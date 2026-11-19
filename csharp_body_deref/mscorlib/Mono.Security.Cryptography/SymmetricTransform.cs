// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Cryptography.SymmetricTransform
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Token(Token = "0x6000191")]
		[Address(RVA = "0x52F42D0", Offset = "0x52F32D0", VA = "0x52F42D0", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000029")]
	public virtual bool CanReuseTransform
	{
		[Token(Token = "0x6000192")]
		[Address(RVA = "0x52F42E0", Offset = "0x52F32E0", VA = "0x52F42E0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002A")]
	public virtual int InputBlockSize
	{
		[Token(Token = "0x6000193")]
		[Address(RVA = "0x52F42F0", Offset = "0x52F32F0", VA = "0x52F42F0", Slot = "14")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700002B")]
	public virtual int OutputBlockSize
	{
		[Token(Token = "0x6000194")]
		[Address(RVA = "0x52F4300", Offset = "0x52F3300", VA = "0x52F4300", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700002C")]
	private bool KeepLastBlock
	{
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x52F4CC0", Offset = "0x52F3CC0", VA = "0x52F4CC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x52F3E50", Offset = "0x52F2E50", VA = "0x52F3E50")]
	public SymmetricTransform(SymmetricAlgorithm symmAlgo, bool encryption, byte[] rgbIV)
	{
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x52F4140", Offset = "0x52F3140", VA = "0x52F4140", Slot = "1")]
	~SymmetricTransform()
	{
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x52F41E0", Offset = "0x52F31E0", VA = "0x52F41E0", Slot = "10")]
	private void System_002EIDisposable_002EDispose()
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x52F4250", Offset = "0x52F3250", VA = "0x52F4250", Slot = "11")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x52F4310", Offset = "0x52F3310", VA = "0x52F4310", Slot = "16")]
	protected virtual void Transform(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x6000196")]
	protected abstract void ECB(byte[] input, byte[] output);

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x52F4480", Offset = "0x52F3480", VA = "0x52F4480", Slot = "18")]
	protected virtual void CBC(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x52F45D0", Offset = "0x52F35D0", VA = "0x52F45D0", Slot = "19")]
	protected virtual void CFB(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x52F4900", Offset = "0x52F3900", VA = "0x52F4900", Slot = "20")]
	protected virtual void OFB(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x52F4950", Offset = "0x52F3950", VA = "0x52F4950", Slot = "21")]
	protected virtual void CTS(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x52F49A0", Offset = "0x52F39A0", VA = "0x52F49A0")]
	private void CheckInput(byte[] inputBuffer, int inputOffset, int inputCount)
	{
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x52F4AD0", Offset = "0x52F3AD0", VA = "0x52F4AD0", Slot = "22")]
	public virtual int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x52F4CE0", Offset = "0x52F3CE0", VA = "0x52F4CE0")]
	private int InternalTransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x52F4E90", Offset = "0x52F3E90", VA = "0x52F4E90")]
	private void Random(byte[] buffer, int start, int length)
	{
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x52F4F40", Offset = "0x52F3F40", VA = "0x52F4F40")]
	private void ThrowBadPaddingException(PaddingMode padding, int length, int position)
	{
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x52F5210", Offset = "0x52F4210", VA = "0x52F5210", Slot = "23")]
	protected virtual byte[] FinalEncrypt(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x52F54D0", Offset = "0x52F44D0", VA = "0x52F54D0", Slot = "24")]
	protected virtual byte[] FinalDecrypt(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x52F57B0", Offset = "0x52F47B0", VA = "0x52F57B0", Slot = "25")]
	public virtual byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}
}
