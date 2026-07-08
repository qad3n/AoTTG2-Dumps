using System.IO;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002C2")]
public abstract class HashAlgorithm : IDisposable, ICryptoTransform
{
	[Token(Token = "0x4000CB9")]
	[FieldOffset(Offset = "0x10")]
	private bool _disposed;

	[Token(Token = "0x4000CBA")]
	[FieldOffset(Offset = "0x14")]
	protected int HashSizeValue;

	[Token(Token = "0x4000CBB")]
	[FieldOffset(Offset = "0x18")]
	protected internal byte[] HashValue;

	[Token(Token = "0x4000CBC")]
	[FieldOffset(Offset = "0x20")]
	protected int State;

	[Token(Token = "0x17000278")]
	public virtual int HashSize
	{
		[Token(Token = "0x6001830")]
		[Address(RVA = "0x4E44110", Offset = "0x4E44110", VA = "0x4E44110", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000279")]
	public virtual byte[] Hash
	{
		[Token(Token = "0x6001831")]
		[Address(RVA = "0x4E44120", Offset = "0x4E44120", VA = "0x4E44120", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027A")]
	public virtual int InputBlockSize
	{
		[Token(Token = "0x600183A")]
		[Address(RVA = "0x4E44A20", Offset = "0x4E44A20", VA = "0x4E44A20", Slot = "14")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700027B")]
	public virtual int OutputBlockSize
	{
		[Token(Token = "0x600183B")]
		[Address(RVA = "0x4E44A30", Offset = "0x4E44A30", VA = "0x4E44A30", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700027C")]
	public virtual bool CanTransformMultipleBlocks
	{
		[Token(Token = "0x600183C")]
		[Address(RVA = "0x4E44A40", Offset = "0x4E44A40", VA = "0x4E44A40", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700027D")]
	public virtual bool CanReuseTransform
	{
		[Token(Token = "0x600183D")]
		[Address(RVA = "0x4E44A50", Offset = "0x4E44A50", VA = "0x4E44A50", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600182D")]
	[Address(RVA = "0x4E44080", Offset = "0x4E44080", VA = "0x4E44080")]
	protected HashAlgorithm()
	{
	}

	[Token(Token = "0x600182E")]
	[Address(RVA = "0x4E44090", Offset = "0x4E44090", VA = "0x4E44090")]
	public static HashAlgorithm Create()
	{
		return null;
	}

	[Token(Token = "0x600182F")]
	[Address(RVA = "0x4E440A0", Offset = "0x4E440A0", VA = "0x4E440A0")]
	public static HashAlgorithm Create(string hashName)
	{
		return null;
	}

	[Token(Token = "0x6001832")]
	[Address(RVA = "0x4E44240", Offset = "0x4E44240", VA = "0x4E44240")]
	public byte[] ComputeHash(byte[] buffer)
	{
		return null;
	}

	[Token(Token = "0x6001833")]
	[Address(RVA = "0x4E44390", Offset = "0x4E44390", VA = "0x4E44390")]
	public bool TryComputeHash(ReadOnlySpan<byte> source, Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6001834")]
	[Address(RVA = "0x4E444D0", Offset = "0x4E444D0", VA = "0x4E444D0")]
	public byte[] ComputeHash(byte[] buffer, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x6001835")]
	[Address(RVA = "0x4E44630", Offset = "0x4E44630", VA = "0x4E44630")]
	public byte[] ComputeHash(Stream inputStream)
	{
		return null;
	}

	[Token(Token = "0x6001836")]
	[Address(RVA = "0x4E442E0", Offset = "0x4E442E0", VA = "0x4E442E0")]
	private byte[] CaptureHashCodeAndReinitialize()
	{
		return null;
	}

	[Token(Token = "0x6001837")]
	[Address(RVA = "0x4E44910", Offset = "0x4E44910", VA = "0x4E44910", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001838")]
	[Address(RVA = "0x4E44980", Offset = "0x4E44980", VA = "0x4E44980")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001839")]
	[Address(RVA = "0x4E44A10", Offset = "0x4E44A10", VA = "0x4E44A10", Slot = "13")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600183E")]
	[Address(RVA = "0x4E44A60", Offset = "0x4E44A60", VA = "0x4E44A60", Slot = "9")]
	public int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x600183F")]
	[Address(RVA = "0x4E44C20", Offset = "0x4E44C20", VA = "0x4E44C20", Slot = "10")]
	public byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x6001840")]
	[Address(RVA = "0x4E44AE0", Offset = "0x4E44AE0", VA = "0x4E44AE0")]
	private void ValidateTransformBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
	}

	[Token(Token = "0x6001841")]
	protected abstract void HashCore(byte[] array, int ibStart, int cbSize);

	[Token(Token = "0x6001842")]
	protected abstract byte[] HashFinal();

	[Token(Token = "0x6001843")]
	public abstract void Initialize();

	[Token(Token = "0x6001844")]
	[Address(RVA = "0x4E44D80", Offset = "0x4E44D80", VA = "0x4E44D80", Slot = "21")]
	protected virtual void HashCore(ReadOnlySpan<byte> source)
	{
	}

	[Token(Token = "0x6001845")]
	[Address(RVA = "0x4E44FF0", Offset = "0x4E44FF0", VA = "0x4E44FF0", Slot = "22")]
	protected virtual bool TryHashFinal(Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}
}
