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
		[Address(RVA = "0x4E52D40", Offset = "0x4E52D40", VA = "0x4E52D40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002C0")]
	public int InputBlockSize
	{
		[Token(Token = "0x60019A9")]
		[Address(RVA = "0x4E52D50", Offset = "0x4E52D50", VA = "0x4E52D50", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002C1")]
	public int OutputBlockSize
	{
		[Token(Token = "0x60019AA")]
		[Address(RVA = "0x4E52D60", Offset = "0x4E52D60", VA = "0x4E52D60", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002C2")]
	public bool CanTransformMultipleBlocks
	{
		[Token(Token = "0x60019AB")]
		[Address(RVA = "0x4E52D70", Offset = "0x4E52D70", VA = "0x4E52D70", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002C3")]
	public bool CanReuseTransform
	{
		[Token(Token = "0x60019AC")]
		[Address(RVA = "0x4E52D80", Offset = "0x4E52D80", VA = "0x4E52D80", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60019A4")]
	[Address(RVA = "0x4E52020", Offset = "0x4E52020", VA = "0x4E52020")]
	internal RijndaelManagedTransform(byte[] rgbKey, CipherMode mode, byte[] rgbIV, int blockSize, int feedbackSize, PaddingMode PaddingValue, System.Security.Cryptography.RijndaelManagedTransformMode transformMode)
	{
	}

	[Token(Token = "0x60019A5")]
	[Address(RVA = "0x4E52C00", Offset = "0x4E52C00", VA = "0x4E52C00", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60019A6")]
	[Address(RVA = "0x4E52D30", Offset = "0x4E52D30", VA = "0x4E52D30")]
	public void Clear()
	{
	}

	[Token(Token = "0x60019A7")]
	[Address(RVA = "0x4E52C10", Offset = "0x4E52C10", VA = "0x4E52C10")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60019AD")]
	[Address(RVA = "0x4E52D90", Offset = "0x4E52D90", VA = "0x4E52D90", Slot = "8")]
	public int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x60019AE")]
	[Address(RVA = "0x4E54A60", Offset = "0x4E54A60", VA = "0x4E54A60", Slot = "9")]
	public byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x60019AF")]
	[Address(RVA = "0x4E54DB0", Offset = "0x4E54DB0", VA = "0x4E54DB0")]
	public void Reset()
	{
	}

	[Token(Token = "0x60019B0")]
	[Address(RVA = "0x4E53080", Offset = "0x4E53080", VA = "0x4E53080")]
	private int EncryptData(byte[] inputBuffer, int inputOffset, int inputCount, ref byte[] outputBuffer, int outputOffset, PaddingMode paddingMode, bool fLast)
	{
		return default(int);
	}

	[Token(Token = "0x60019B1")]
	[Address(RVA = "0x4E53E60", Offset = "0x4E53E60", VA = "0x4E53E60")]
	private int DecryptData(byte[] inputBuffer, int inputOffset, int inputCount, ref byte[] outputBuffer, int outputOffset, PaddingMode paddingMode, bool fLast)
	{
		return default(int);
	}

	[Token(Token = "0x60019B2")]
	[Address(RVA = "0x4E54E10", Offset = "0x4E54E10", VA = "0x4E54E10")]
	private unsafe void Enc(int* encryptindex, int* encryptKeyExpansion, int* T, int* TF, int* work, int* temp)
	{
	}

	[Token(Token = "0x60019B3")]
	[Address(RVA = "0x4E55010", Offset = "0x4E55010", VA = "0x4E55010")]
	private unsafe void Dec(int* decryptindex, int* decryptKeyExpansion, int* iT, int* iTF, int* work, int* temp)
	{
	}

	[Token(Token = "0x60019B4")]
	[Address(RVA = "0x4E52640", Offset = "0x4E52640", VA = "0x4E52640")]
	private void GenerateKeyExpansion(byte[] rgbKey)
	{
	}

	[Token(Token = "0x60019B5")]
	[Address(RVA = "0x4E55390", Offset = "0x4E55390", VA = "0x4E55390")]
	private static int rot1(int val)
	{
		return default(int);
	}

	[Token(Token = "0x60019B6")]
	[Address(RVA = "0x4E55380", Offset = "0x4E55380", VA = "0x4E55380")]
	private static int rot2(int val)
	{
		return default(int);
	}

	[Token(Token = "0x60019B7")]
	[Address(RVA = "0x4E55250", Offset = "0x4E55250", VA = "0x4E55250")]
	private static int rot3(int val)
	{
		return default(int);
	}

	[Token(Token = "0x60019B8")]
	[Address(RVA = "0x4E55260", Offset = "0x4E55260", VA = "0x4E55260")]
	private static int SubWord(int a)
	{
		return default(int);
	}

	[Token(Token = "0x60019B9")]
	[Address(RVA = "0x4E55360", Offset = "0x4E55360", VA = "0x4E55360")]
	private static int MulX(int x)
	{
		return default(int);
	}

	[Token(Token = "0x60019BB")]
	[Address(RVA = "0x4E555C0", Offset = "0x4E555C0", VA = "0x4E555C0")]
	internal RijndaelManagedTransform()
	{
	}
}
