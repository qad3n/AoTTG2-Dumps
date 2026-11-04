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

[Token(Token = "0x200006A")]
internal abstract class SymmetricTransform : ICryptoTransform, IDisposable
{
	[Token(Token = "0x40001E6")]
	[FieldOffset(Offset = "0x10")]
	protected SymmetricAlgorithm algo;

	[Token(Token = "0x40001E7")]
	[FieldOffset(Offset = "0x18")]
	protected bool encrypt;

	[Token(Token = "0x40001E8")]
	[FieldOffset(Offset = "0x1C")]
	protected int BlockSizeByte;

	[Token(Token = "0x40001E9")]
	[FieldOffset(Offset = "0x20")]
	protected byte[] temp;

	[Token(Token = "0x40001EA")]
	[FieldOffset(Offset = "0x28")]
	protected byte[] temp2;

	[Token(Token = "0x40001EB")]
	[FieldOffset(Offset = "0x30")]
	private byte[] workBuff;

	[Token(Token = "0x40001EC")]
	[FieldOffset(Offset = "0x38")]
	private byte[] workout;

	[Token(Token = "0x40001ED")]
	[FieldOffset(Offset = "0x40")]
	protected PaddingMode padmode;

	[Token(Token = "0x40001EE")]
	[FieldOffset(Offset = "0x44")]
	protected int FeedBackByte;

	[Token(Token = "0x40001EF")]
	[FieldOffset(Offset = "0x48")]
	private bool m_disposed;

	[Token(Token = "0x40001F0")]
	[FieldOffset(Offset = "0x49")]
	protected bool lastBlock;

	[Token(Token = "0x40001F1")]
	[FieldOffset(Offset = "0x50")]
	private RandomNumberGenerator _rng;

	[Token(Token = "0x17000028")]
	public virtual bool CanTransformMultipleBlocks
	{
		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000029")]
	public virtual bool CanReuseTransform
	{
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002A")]
	public virtual int InputBlockSize
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0", Slot = "14")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700002B")]
	public virtual int OutputBlockSize
	{
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700002C")]
	private bool KeepLastBlock
	{
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x1975710", Offset = "0x1973D10", VA = "0x181975710")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x1975410", Offset = "0x1973A10", VA = "0x181975410")]
	public SymmetricTransform(SymmetricAlgorithm symmAlgo, bool encryption, byte[] rgbIV)
	{
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x1974960", Offset = "0x1972F60", VA = "0x181974960", Slot = "1")]
	~SymmetricTransform()
	{
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x1974CB0", Offset = "0x19732B0", VA = "0x181974CB0", Slot = "10")]
	private void System_002EIDisposable_002EDispose()
	{
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x19742F0", Offset = "0x19728F0", VA = "0x1819742F0", Slot = "11")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x1975230", Offset = "0x1973830", VA = "0x181975230", Slot = "16")]
	protected virtual void Transform(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x60001AC")]
	protected abstract void ECB(byte[] input, byte[] output);

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x1973E00", Offset = "0x1972400", VA = "0x181973E00", Slot = "18")]
	protected virtual void CBC(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x1973F40", Offset = "0x1972540", VA = "0x181973F40", Slot = "19")]
	protected virtual void CFB(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x1974BB0", Offset = "0x19731B0", VA = "0x181974BB0", Slot = "20")]
	protected virtual void OFB(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x1974100", Offset = "0x1972700", VA = "0x181974100", Slot = "21")]
	protected virtual void CTS(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x1974150", Offset = "0x1972750", VA = "0x181974150")]
	private void CheckInput(byte[] inputBuffer, int inputOffset, int inputCount)
	{
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x1974E50", Offset = "0x1973450", VA = "0x181974E50", Slot = "22")]
	public virtual int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x19749D0", Offset = "0x1972FD0", VA = "0x1819749D0")]
	private int InternalTransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x1974C00", Offset = "0x1973200", VA = "0x181974C00")]
	private void Random(byte[] buffer, int start, int length)
	{
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x1974D10", Offset = "0x1973310", VA = "0x181974D10")]
	private void ThrowBadPaddingException(PaddingMode padding, int length, int position)
	{
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x1974650", Offset = "0x1972C50", VA = "0x181974650", Slot = "23")]
	protected virtual byte[] FinalEncrypt(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x1974360", Offset = "0x1972960", VA = "0x181974360", Slot = "24")]
	protected virtual byte[] FinalDecrypt(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x1975160", Offset = "0x1973760", VA = "0x181975160", Slot = "25")]
	public virtual byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}
}
