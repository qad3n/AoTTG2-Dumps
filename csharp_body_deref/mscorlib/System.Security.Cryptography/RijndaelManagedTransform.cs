// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RijndaelManagedTransform
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002F4")]
[ComVisible(true)]
public sealed class RijndaelManagedTransform : ICryptoTransform, IDisposable
{
	[Token(Token = "0x4000D32")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private CipherMode m_cipherMode;

	[Token(Token = "0x4000D33")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private PaddingMode m_paddingValue;

	[Token(Token = "0x4000D34")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private System.Security.Cryptography.RijndaelManagedTransformMode m_transformMode;

	[Token(Token = "0x4000D35")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private int m_blockSizeBits;

	[Token(Token = "0x4000D36")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int m_blockSizeBytes;

	[Token(Token = "0x4000D37")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private int m_inputBlockSize;

	[Token(Token = "0x4000D38")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private int m_outputBlockSize;

	[Token(Token = "0x4000D39")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int[] m_encryptKeyExpansion;

	[Token(Token = "0x4000D3A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private int[] m_decryptKeyExpansion;

	[Token(Token = "0x4000D3B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private int m_Nr;

	[Token(Token = "0x4000D3C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	private int m_Nb;

	[Token(Token = "0x4000D3D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int m_Nk;

	[Token(Token = "0x4000D3E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private int[] m_encryptindex;

	[Token(Token = "0x4000D3F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private int[] m_decryptindex;

	[Token(Token = "0x4000D40")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private int[] m_IV;

	[Token(Token = "0x4000D41")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private int[] m_lastBlockBuffer;

	[Token(Token = "0x4000D42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private byte[] m_depadBuffer;

	[Token(Token = "0x4000D43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private byte[] m_shiftRegister;

	[Token(Token = "0x4000D44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly byte[] s_Sbox;

	[Token(Token = "0x4000D45")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly int[] s_Rcon;

	[Token(Token = "0x4000D46")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly int[] s_T;

	[Token(Token = "0x4000D47")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly int[] s_TF;

	[Token(Token = "0x4000D48")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly int[] s_iT;

	[Token(Token = "0x4000D49")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static readonly int[] s_iTF;

	[Token(Token = "0x170002BF")]
	public int BlockSizeValue
	{
		[Token(Token = "0x60019A8")]
		[Address(RVA = "0x3B38860", Offset = "0x3B38860", VA = "0x3B38860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002C0")]
	public int InputBlockSize
	{
		[Token(Token = "0x60019A9")]
		[Address(RVA = "0x3B38870", Offset = "0x3B38870", VA = "0x3B38870", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002C1")]
	public int OutputBlockSize
	{
		[Token(Token = "0x60019AA")]
		[Address(RVA = "0x3B38880", Offset = "0x3B38880", VA = "0x3B38880", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002C2")]
	public bool CanTransformMultipleBlocks
	{
		[Token(Token = "0x60019AB")]
		[Address(RVA = "0x3B38890", Offset = "0x3B38890", VA = "0x3B38890", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002C3")]
	public bool CanReuseTransform
	{
		[Token(Token = "0x60019AC")]
		[Address(RVA = "0x3B388A0", Offset = "0x3B388A0", VA = "0x3B388A0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60019A4")]
	[Address(RVA = "0x3B37B40", Offset = "0x3B37B40", VA = "0x3B37B40")]
	internal RijndaelManagedTransform(byte[] rgbKey, CipherMode mode, byte[] rgbIV, int blockSize, int feedbackSize, PaddingMode PaddingValue, System.Security.Cryptography.RijndaelManagedTransformMode transformMode)
	{
	}

	[Token(Token = "0x60019A5")]
	[Address(RVA = "0x3B38720", Offset = "0x3B38720", VA = "0x3B38720", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60019A6")]
	[Address(RVA = "0x3B38850", Offset = "0x3B38850", VA = "0x3B38850")]
	public void Clear()
	{
	}

	[Token(Token = "0x60019A7")]
	[Address(RVA = "0x3B38730", Offset = "0x3B38730", VA = "0x3B38730")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60019AD")]
	[Address(RVA = "0x3B388B0", Offset = "0x3B388B0", VA = "0x3B388B0", Slot = "8")]
	public int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x60019AE")]
	[Address(RVA = "0x3B3A580", Offset = "0x3B3A580", VA = "0x3B3A580", Slot = "9")]
	public byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x60019AF")]
	[Address(RVA = "0x3B3A8D0", Offset = "0x3B3A8D0", VA = "0x3B3A8D0")]
	public void Reset()
	{
	}

	[Token(Token = "0x60019B0")]
	[Address(RVA = "0x3B38BA0", Offset = "0x3B38BA0", VA = "0x3B38BA0")]
	private int EncryptData(byte[] inputBuffer, int inputOffset, int inputCount, ref byte[] outputBuffer, int outputOffset, PaddingMode paddingMode, bool fLast)
	{
		return default(int);
	}

	[Token(Token = "0x60019B1")]
	[Address(RVA = "0x3B39980", Offset = "0x3B39980", VA = "0x3B39980")]
	private int DecryptData(byte[] inputBuffer, int inputOffset, int inputCount, ref byte[] outputBuffer, int outputOffset, PaddingMode paddingMode, bool fLast)
	{
		return default(int);
	}

	[Token(Token = "0x60019B2")]
	[Address(RVA = "0x3B3A930", Offset = "0x3B3A930", VA = "0x3B3A930")]
	private unsafe void Enc(int* encryptindex, int* encryptKeyExpansion, int* T, int* TF, int* work, int* temp)
	{
	}

	[Token(Token = "0x60019B3")]
	[Address(RVA = "0x3B3AB30", Offset = "0x3B3AB30", VA = "0x3B3AB30")]
	private unsafe void Dec(int* decryptindex, int* decryptKeyExpansion, int* iT, int* iTF, int* work, int* temp)
	{
	}

	[Token(Token = "0x60019B4")]
	[Address(RVA = "0x3B38160", Offset = "0x3B38160", VA = "0x3B38160")]
	private void GenerateKeyExpansion(byte[] rgbKey)
	{
	}

	[Token(Token = "0x60019B5")]
	[Address(RVA = "0x3B3AEB0", Offset = "0x3B3AEB0", VA = "0x3B3AEB0")]
	private static int rot1(int val)
	{
		return default(int);
	}

	[Token(Token = "0x60019B6")]
	[Address(RVA = "0x3B3AEA0", Offset = "0x3B3AEA0", VA = "0x3B3AEA0")]
	private static int rot2(int val)
	{
		return default(int);
	}

	[Token(Token = "0x60019B7")]
	[Address(RVA = "0x3B3AD70", Offset = "0x3B3AD70", VA = "0x3B3AD70")]
	private static int rot3(int val)
	{
		return default(int);
	}

	[Token(Token = "0x60019B8")]
	[Address(RVA = "0x3B3AD80", Offset = "0x3B3AD80", VA = "0x3B3AD80")]
	private static int SubWord(int a)
	{
		return default(int);
	}

	[Token(Token = "0x60019B9")]
	[Address(RVA = "0x3B3AE80", Offset = "0x3B3AE80", VA = "0x3B3AE80")]
	private static int MulX(int x)
	{
		return default(int);
	}

	[Token(Token = "0x60019BB")]
	[Address(RVA = "0x3B3B0E0", Offset = "0x3B3B0E0", VA = "0x3B3B0E0")]
	internal RijndaelManagedTransform()
	{
	}
}
