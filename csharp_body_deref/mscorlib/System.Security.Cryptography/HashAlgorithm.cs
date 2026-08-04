// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.HashAlgorithm
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3B29C30", Offset = "0x3B29C30", VA = "0x3B29C30", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000279")]
	public virtual byte[] Hash
	{
		[Token(Token = "0x6001831")]
		[Address(RVA = "0x3B29C40", Offset = "0x3B29C40", VA = "0x3B29C40", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027A")]
	public virtual int InputBlockSize
	{
		[Token(Token = "0x600183A")]
		[Address(RVA = "0x3B2A540", Offset = "0x3B2A540", VA = "0x3B2A540", Slot = "14")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700027B")]
	public virtual int OutputBlockSize
	{
		[Token(Token = "0x600183B")]
		[Address(RVA = "0x3B2A550", Offset = "0x3B2A550", VA = "0x3B2A550", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700027C")]
	public virtual bool CanTransformMultipleBlocks
	{
		[Token(Token = "0x600183C")]
		[Address(RVA = "0x3B2A560", Offset = "0x3B2A560", VA = "0x3B2A560", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700027D")]
	public virtual bool CanReuseTransform
	{
		[Token(Token = "0x600183D")]
		[Address(RVA = "0x3B2A570", Offset = "0x3B2A570", VA = "0x3B2A570", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600182D")]
	[Address(RVA = "0x3B29BA0", Offset = "0x3B29BA0", VA = "0x3B29BA0")]
	protected HashAlgorithm()
	{
	}

	[Token(Token = "0x600182E")]
	[Address(RVA = "0x3B29BB0", Offset = "0x3B29BB0", VA = "0x3B29BB0")]
	public static HashAlgorithm Create()
	{
		return null;
	}

	[Token(Token = "0x600182F")]
	[Address(RVA = "0x3B29BC0", Offset = "0x3B29BC0", VA = "0x3B29BC0")]
	public static HashAlgorithm Create(string hashName)
	{
		return null;
	}

	[Token(Token = "0x6001832")]
	[Address(RVA = "0x3B29D60", Offset = "0x3B29D60", VA = "0x3B29D60")]
	public byte[] ComputeHash(byte[] buffer)
	{
		return null;
	}

	[Token(Token = "0x6001833")]
	[Address(RVA = "0x3B29EB0", Offset = "0x3B29EB0", VA = "0x3B29EB0")]
	public bool TryComputeHash(ReadOnlySpan<byte> source, Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6001834")]
	[Address(RVA = "0x3B29FF0", Offset = "0x3B29FF0", VA = "0x3B29FF0")]
	public byte[] ComputeHash(byte[] buffer, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x6001835")]
	[Address(RVA = "0x3B2A150", Offset = "0x3B2A150", VA = "0x3B2A150")]
	public byte[] ComputeHash(Stream inputStream)
	{
		return null;
	}

	[Token(Token = "0x6001836")]
	[Address(RVA = "0x3B29E00", Offset = "0x3B29E00", VA = "0x3B29E00")]
	private byte[] CaptureHashCodeAndReinitialize()
	{
		return null;
	}

	[Token(Token = "0x6001837")]
	[Address(RVA = "0x3B2A430", Offset = "0x3B2A430", VA = "0x3B2A430", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001838")]
	[Address(RVA = "0x3B2A4A0", Offset = "0x3B2A4A0", VA = "0x3B2A4A0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001839")]
	[Address(RVA = "0x3B2A530", Offset = "0x3B2A530", VA = "0x3B2A530", Slot = "13")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600183E")]
	[Address(RVA = "0x3B2A580", Offset = "0x3B2A580", VA = "0x3B2A580", Slot = "9")]
	public int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x600183F")]
	[Address(RVA = "0x3B2A740", Offset = "0x3B2A740", VA = "0x3B2A740", Slot = "10")]
	public byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x6001840")]
	[Address(RVA = "0x3B2A600", Offset = "0x3B2A600", VA = "0x3B2A600")]
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
	[Address(RVA = "0x3B2A8A0", Offset = "0x3B2A8A0", VA = "0x3B2A8A0", Slot = "21")]
	protected virtual void HashCore(ReadOnlySpan<byte> source)
	{
	}

	[Token(Token = "0x6001845")]
	[Address(RVA = "0x3B2AB10", Offset = "0x3B2AB10", VA = "0x3B2AB10", Slot = "22")]
	protected virtual bool TryHashFinal(Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}
}
