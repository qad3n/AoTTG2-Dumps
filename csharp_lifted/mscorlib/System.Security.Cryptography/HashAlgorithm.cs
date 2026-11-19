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

[Token(Token = "0x20002CA")]
public abstract class HashAlgorithm : IDisposable, ICryptoTransform
{
	[Token(Token = "0x4000C26")]
	[FieldOffset(Offset = "0x10")]
	private bool _disposed;

	[Token(Token = "0x4000C27")]
	[FieldOffset(Offset = "0x14")]
	protected int HashSizeValue;

	[Token(Token = "0x4000C28")]
	[FieldOffset(Offset = "0x18")]
	protected internal byte[] HashValue;

	[Token(Token = "0x4000C29")]
	[FieldOffset(Offset = "0x20")]
	protected int State;

	[Token(Token = "0x17000279")]
	public virtual int HashSize
	{
		[Token(Token = "0x6001875")]
		[Address(RVA = "0x5333D90", Offset = "0x5332D90", VA = "0x5333D90", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700027A")]
	public virtual byte[] Hash
	{
		[Token(Token = "0x6001876")]
		[Address(RVA = "0x5333DA0", Offset = "0x5332DA0", VA = "0x5333DA0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027B")]
	public virtual int InputBlockSize
	{
		[Token(Token = "0x600187F")]
		[Address(RVA = "0x5334490", Offset = "0x5333490", VA = "0x5334490", Slot = "14")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700027C")]
	public virtual int OutputBlockSize
	{
		[Token(Token = "0x6001880")]
		[Address(RVA = "0x53344A0", Offset = "0x53334A0", VA = "0x53344A0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700027D")]
	public virtual bool CanTransformMultipleBlocks
	{
		[Token(Token = "0x6001881")]
		[Address(RVA = "0x53344B0", Offset = "0x53334B0", VA = "0x53344B0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700027E")]
	public virtual bool CanReuseTransform
	{
		[Token(Token = "0x6001882")]
		[Address(RVA = "0x53344C0", Offset = "0x53334C0", VA = "0x53344C0", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001872")]
	[Address(RVA = "0x5333D00", Offset = "0x5332D00", VA = "0x5333D00")]
	protected HashAlgorithm()
	{
	}

	[Token(Token = "0x6001873")]
	[Address(RVA = "0x5333D10", Offset = "0x5332D10", VA = "0x5333D10")]
	public static HashAlgorithm Create()
	{
		return null;
	}

	[Token(Token = "0x6001874")]
	[Address(RVA = "0x5333D20", Offset = "0x5332D20", VA = "0x5333D20")]
	public static HashAlgorithm Create(string hashName)
	{
		return null;
	}

	[Token(Token = "0x6001877")]
	[Address(RVA = "0x5333E90", Offset = "0x5332E90", VA = "0x5333E90")]
	public byte[] ComputeHash(byte[] buffer)
	{
		return null;
	}

	[Token(Token = "0x6001878")]
	[Address(RVA = "0x532EFD0", Offset = "0x532DFD0", VA = "0x532EFD0")]
	public bool TryComputeHash(ReadOnlySpan<byte> source, Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6001879")]
	[Address(RVA = "0x5333FE0", Offset = "0x5332FE0", VA = "0x5333FE0")]
	public byte[] ComputeHash(byte[] buffer, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x600187A")]
	[Address(RVA = "0x5334150", Offset = "0x5333150", VA = "0x5334150")]
	public byte[] ComputeHash(Stream inputStream)
	{
		return null;
	}

	[Token(Token = "0x600187B")]
	[Address(RVA = "0x5333F30", Offset = "0x5332F30", VA = "0x5333F30")]
	private byte[] CaptureHashCodeAndReinitialize()
	{
		return null;
	}

	[Token(Token = "0x600187C")]
	[Address(RVA = "0x532E6A0", Offset = "0x532D6A0", VA = "0x532E6A0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600187D")]
	[Address(RVA = "0x53343F0", Offset = "0x53333F0", VA = "0x53343F0")]
	public void Clear()
	{
	}

	[Token(Token = "0x600187E")]
	[Address(RVA = "0x5334480", Offset = "0x5333480", VA = "0x5334480", Slot = "13")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001883")]
	[Address(RVA = "0x53344D0", Offset = "0x53334D0", VA = "0x53344D0", Slot = "9")]
	public int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x6001884")]
	[Address(RVA = "0x53346A0", Offset = "0x53336A0", VA = "0x53346A0", Slot = "10")]
	public byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x6001885")]
	[Address(RVA = "0x5334550", Offset = "0x5333550", VA = "0x5334550")]
	private void ValidateTransformBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
	}

	[Token(Token = "0x6001886")]
	protected abstract void HashCore(byte[] array, int ibStart, int cbSize);

	[Token(Token = "0x6001887")]
	protected abstract byte[] HashFinal();

	[Token(Token = "0x6001888")]
	public abstract void Initialize();

	[Token(Token = "0x6001889")]
	[Address(RVA = "0x5334800", Offset = "0x5333800", VA = "0x5334800", Slot = "21")]
	protected virtual void HashCore(ReadOnlySpan<byte> source)
	{
	}

	[Token(Token = "0x600188A")]
	[Address(RVA = "0x5334A50", Offset = "0x5333A50", VA = "0x5334A50", Slot = "22")]
	protected virtual bool TryHashFinal(Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}
}
