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

[Token(Token = "0x2000323")]
[ComVisible(true)]
public sealed class RijndaelManagedTransform : ICryptoTransform, IDisposable
{
	[Token(Token = "0x4000D3F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private CipherMode m_cipherMode;

	[Token(Token = "0x4000D40")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private PaddingMode m_paddingValue;

	[Token(Token = "0x4000D41")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private System.Security.Cryptography.RijndaelManagedTransformMode m_transformMode;

	[Token(Token = "0x4000D42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private int m_blockSizeBits;

	[Token(Token = "0x4000D43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int m_blockSizeBytes;

	[Token(Token = "0x4000D44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private int m_inputBlockSize;

	[Token(Token = "0x4000D45")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private int m_outputBlockSize;

	[Token(Token = "0x4000D46")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int[] m_encryptKeyExpansion;

	[Token(Token = "0x4000D47")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private int[] m_decryptKeyExpansion;

	[Token(Token = "0x4000D48")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private int m_Nr;

	[Token(Token = "0x4000D49")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	private int m_Nb;

	[Token(Token = "0x4000D4A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int m_Nk;

	[Token(Token = "0x4000D4B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private int[] m_encryptindex;

	[Token(Token = "0x4000D4C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private int[] m_decryptindex;

	[Token(Token = "0x4000D4D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private int[] m_IV;

	[Token(Token = "0x4000D4E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private int[] m_lastBlockBuffer;

	[Token(Token = "0x4000D4F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private byte[] m_depadBuffer;

	[Token(Token = "0x4000D50")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private byte[] m_shiftRegister;

	[Token(Token = "0x4000D51")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly byte[] s_Sbox;

	[Token(Token = "0x4000D52")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly int[] s_Rcon;

	[Token(Token = "0x4000D53")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly int[] s_T;

	[Token(Token = "0x4000D54")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly int[] s_TF;

	[Token(Token = "0x4000D55")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly int[] s_iT;

	[Token(Token = "0x4000D56")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static readonly int[] s_iTF;

	[Token(Token = "0x170002C1")]
	public int BlockSizeValue
	{
		[Token(Token = "0x6001A10")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002C2")]
	public int InputBlockSize
	{
		[Token(Token = "0x6001A11")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002C3")]
	public int OutputBlockSize
	{
		[Token(Token = "0x6001A12")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002C4")]
	public bool CanTransformMultipleBlocks
	{
		[Token(Token = "0x6001A13")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002C5")]
	public bool CanReuseTransform
	{
		[Token(Token = "0x6001A14")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001A0C")]
	[Address(RVA = "0x19B5420", Offset = "0x19B3A20", VA = "0x1819B5420")]
	internal RijndaelManagedTransform(byte[] rgbKey, CipherMode mode, byte[] rgbIV, int blockSize, int feedbackSize, PaddingMode PaddingValue, System.Security.Cryptography.RijndaelManagedTransformMode transformMode)
	{
	}

	[Token(Token = "0x6001A0D")]
	[Address(RVA = "0x19B2260", Offset = "0x19B0860", VA = "0x1819B2260", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001A0E")]
	[Address(RVA = "0x19B2260", Offset = "0x19B0860", VA = "0x1819B2260")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001A0F")]
	[Address(RVA = "0x19B3290", Offset = "0x19B1890", VA = "0x1819B3290")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001A15")]
	[Address(RVA = "0x19B4990", Offset = "0x19B2F90", VA = "0x1819B4990", Slot = "8")]
	public int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x6001A16")]
	[Address(RVA = "0x19B4DB0", Offset = "0x19B33B0", VA = "0x1819B4DB0", Slot = "9")]
	public byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x6001A17")]
	[Address(RVA = "0x19B4810", Offset = "0x19B2E10", VA = "0x1819B4810")]
	public void Reset()
	{
	}

	[Token(Token = "0x6001A18")]
	[Address(RVA = "0x19B35A0", Offset = "0x19B1BA0", VA = "0x1819B35A0")]
	private int EncryptData(byte[] inputBuffer, int inputOffset, int inputCount, ref byte[] outputBuffer, int outputOffset, PaddingMode paddingMode, bool fLast)
	{
		return default(int);
	}

	[Token(Token = "0x6001A19")]
	[Address(RVA = "0x19B2470", Offset = "0x19B0A70", VA = "0x1819B2470")]
	private int DecryptData(byte[] inputBuffer, int inputOffset, int inputCount, ref byte[] outputBuffer, int outputOffset, PaddingMode paddingMode, bool fLast)
	{
		return default(int);
	}

	[Token(Token = "0x6001A1A")]
	[Address(RVA = "0x19B33C0", Offset = "0x19B19C0", VA = "0x1819B33C0")]
	private unsafe void Enc(int* encryptindex, int* encryptKeyExpansion, int* T, int* TF, int* work, int* temp)
	{
	}

	[Token(Token = "0x6001A1B")]
	[Address(RVA = "0x19B2270", Offset = "0x19B0870", VA = "0x1819B2270")]
	private unsafe void Dec(int* decryptindex, int* decryptKeyExpansion, int* iT, int* iTF, int* work, int* temp)
	{
	}

	[Token(Token = "0x6001A1C")]
	[Address(RVA = "0x19B41F0", Offset = "0x19B27F0", VA = "0x1819B41F0")]
	private void GenerateKeyExpansion(byte[] rgbKey)
	{
	}

	[Token(Token = "0x6001A1D")]
	[Address(RVA = "0x19B5AB0", Offset = "0x19B40B0", VA = "0x1819B5AB0")]
	private static int rot1(int val)
	{
		return default(int);
	}

	[Token(Token = "0x6001A1E")]
	[Address(RVA = "0x19B5AC0", Offset = "0x19B40C0", VA = "0x1819B5AC0")]
	private static int rot2(int val)
	{
		return default(int);
	}

	[Token(Token = "0x6001A1F")]
	[Address(RVA = "0x19B5AD0", Offset = "0x19B40D0", VA = "0x1819B5AD0")]
	private static int rot3(int val)
	{
		return default(int);
	}

	[Token(Token = "0x6001A20")]
	[Address(RVA = "0x19B4890", Offset = "0x19B2E90", VA = "0x1819B4890")]
	private static int SubWord(int a)
	{
		return default(int);
	}

	[Token(Token = "0x6001A21")]
	[Address(RVA = "0x19B47E0", Offset = "0x19B2DE0", VA = "0x1819B47E0")]
	private static int MulX(int x)
	{
		return default(int);
	}

	[Token(Token = "0x6001A23")]
	[Address(RVA = "0x19B53F0", Offset = "0x19B39F0", VA = "0x1819B53F0")]
	internal RijndaelManagedTransform()
	{
	}
}
