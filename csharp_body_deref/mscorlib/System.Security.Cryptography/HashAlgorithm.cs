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

[Token(Token = "0x20002F1")]
public abstract class HashAlgorithm : IDisposable, ICryptoTransform
{
	[Token(Token = "0x4000CC6")]
	[FieldOffset(Offset = "0x10")]
	private bool _disposed;

	[Token(Token = "0x4000CC7")]
	[FieldOffset(Offset = "0x14")]
	protected int HashSizeValue;

	[Token(Token = "0x4000CC8")]
	[FieldOffset(Offset = "0x18")]
	protected internal byte[] HashValue;

	[Token(Token = "0x4000CC9")]
	[FieldOffset(Offset = "0x20")]
	protected int State;

	[Token(Token = "0x1700027A")]
	public virtual int HashSize
	{
		[Token(Token = "0x6001898")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700027B")]
	public virtual byte[] Hash
	{
		[Token(Token = "0x6001899")]
		[Address(RVA = "0x19AAFB0", Offset = "0x19A95B0", VA = "0x1819AAFB0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027C")]
	public virtual int InputBlockSize
	{
		[Token(Token = "0x60018A2")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "14")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700027D")]
	public virtual int OutputBlockSize
	{
		[Token(Token = "0x60018A3")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700027E")]
	public virtual bool CanTransformMultipleBlocks
	{
		[Token(Token = "0x60018A4")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700027F")]
	public virtual bool CanReuseTransform
	{
		[Token(Token = "0x60018A5")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001895")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected HashAlgorithm()
	{
	}

	[Token(Token = "0x6001896")]
	[Address(RVA = "0x19AA6F0", Offset = "0x19A8CF0", VA = "0x1819AA6F0")]
	public static HashAlgorithm Create()
	{
		return null;
	}

	[Token(Token = "0x6001897")]
	[Address(RVA = "0x19AA700", Offset = "0x19A8D00", VA = "0x1819AA700")]
	public static HashAlgorithm Create(string hashName)
	{
		return null;
	}

	[Token(Token = "0x600189A")]
	[Address(RVA = "0x19AA430", Offset = "0x19A8A30", VA = "0x1819AA430")]
	public byte[] ComputeHash(byte[] buffer)
	{
		return null;
	}

	[Token(Token = "0x600189B")]
	[Address(RVA = "0x19AAB50", Offset = "0x19A9150", VA = "0x1819AAB50")]
	public bool TryComputeHash(ReadOnlySpan<byte> source, Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x600189C")]
	[Address(RVA = "0x19AA500", Offset = "0x19A8B00", VA = "0x1819AA500")]
	public byte[] ComputeHash(byte[] buffer, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x600189D")]
	[Address(RVA = "0x19AA270", Offset = "0x19A8870", VA = "0x1819AA270")]
	public byte[] ComputeHash(Stream inputStream)
	{
		return null;
	}

	[Token(Token = "0x600189E")]
	[Address(RVA = "0x19AA170", Offset = "0x19A8770", VA = "0x1819AA170")]
	private byte[] CaptureHashCodeAndReinitialize()
	{
		return null;
	}

	[Token(Token = "0x600189F")]
	[Address(RVA = "0x19AA790", Offset = "0x19A8D90", VA = "0x1819AA790", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60018A0")]
	[Address(RVA = "0x19AA230", Offset = "0x19A8830", VA = "0x1819AA230")]
	public void Clear()
	{
	}

	[Token(Token = "0x60018A1")]
	[Address(RVA = "0x19AA780", Offset = "0x19A8D80", VA = "0x1819AA780", Slot = "13")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60018A6")]
	[Address(RVA = "0x19AA960", Offset = "0x19A8F60", VA = "0x1819AA960", Slot = "9")]
	public int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x60018A7")]
	[Address(RVA = "0x19AA9F0", Offset = "0x19A8FF0", VA = "0x1819AA9F0", Slot = "10")]
	public byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x60018A8")]
	[Address(RVA = "0x19AADF0", Offset = "0x19A93F0", VA = "0x1819AADF0")]
	private void ValidateTransformBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
	}

	[Token(Token = "0x60018A9")]
	protected abstract void HashCore(byte[] array, int ibStart, int cbSize);

	[Token(Token = "0x60018AA")]
	protected abstract byte[] HashFinal();

	[Token(Token = "0x60018AB")]
	public abstract void Initialize();

	[Token(Token = "0x60018AC")]
	[Address(RVA = "0x19AA7F0", Offset = "0x19A8DF0", VA = "0x1819AA7F0", Slot = "21")]
	protected virtual void HashCore(ReadOnlySpan<byte> source)
	{
	}

	[Token(Token = "0x60018AD")]
	[Address(RVA = "0x19AACB0", Offset = "0x19A92B0", VA = "0x1819AACB0", Slot = "22")]
	protected virtual bool TryHashFinal(Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}
}
