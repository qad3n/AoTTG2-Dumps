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

[Token(Token = "0x20002FC")]
[ComVisible(true)]
public sealed class RijndaelManagedTransform : ICryptoTransform, IDisposable
{
	[Token(Token = "0x4000C9F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private CipherMode m_cipherMode;

	[Token(Token = "0x4000CA0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private PaddingMode m_paddingValue;

	[Token(Token = "0x4000CA1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private System.Security.Cryptography.RijndaelManagedTransformMode m_transformMode;

	[Token(Token = "0x4000CA2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private int m_blockSizeBits;

	[Token(Token = "0x4000CA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int m_blockSizeBytes;

	[Token(Token = "0x4000CA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private int m_inputBlockSize;

	[Token(Token = "0x4000CA5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private int m_outputBlockSize;

	[Token(Token = "0x4000CA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int[] m_encryptKeyExpansion;

	[Token(Token = "0x4000CA7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private int[] m_decryptKeyExpansion;

	[Token(Token = "0x4000CA8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private int m_Nr;

	[Token(Token = "0x4000CA9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	private int m_Nb;

	[Token(Token = "0x4000CAA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int m_Nk;

	[Token(Token = "0x4000CAB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private int[] m_encryptindex;

	[Token(Token = "0x4000CAC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private int[] m_decryptindex;

	[Token(Token = "0x4000CAD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private int[] m_IV;

	[Token(Token = "0x4000CAE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private int[] m_lastBlockBuffer;

	[Token(Token = "0x4000CAF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private byte[] m_depadBuffer;

	[Token(Token = "0x4000CB0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private byte[] m_shiftRegister;

	[Token(Token = "0x4000CB1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly byte[] s_Sbox;

	[Token(Token = "0x4000CB2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly int[] s_Rcon;

	[Token(Token = "0x4000CB3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly int[] s_T;

	[Token(Token = "0x4000CB4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly int[] s_TF;

	[Token(Token = "0x4000CB5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly int[] s_iT;

	[Token(Token = "0x4000CB6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static readonly int[] s_iTF;

	[Token(Token = "0x170002C0")]
	public int BlockSizeValue
	{
		[Token(Token = "0x60019ED")]
		[Address(RVA = "0x5342540", Offset = "0x5341540", VA = "0x5342540")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002C1")]
	public int InputBlockSize
	{
		[Token(Token = "0x60019EE")]
		[Address(RVA = "0x5342550", Offset = "0x5341550", VA = "0x5342550", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002C2")]
	public int OutputBlockSize
	{
		[Token(Token = "0x60019EF")]
		[Address(RVA = "0x5342560", Offset = "0x5341560", VA = "0x5342560", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002C3")]
	public bool CanTransformMultipleBlocks
	{
		[Token(Token = "0x60019F0")]
		[Address(RVA = "0x5342570", Offset = "0x5341570", VA = "0x5342570", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002C4")]
	public bool CanReuseTransform
	{
		[Token(Token = "0x60019F1")]
		[Address(RVA = "0x5342580", Offset = "0x5341580", VA = "0x5342580", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60019E9")]
	[Address(RVA = "0x5341730", Offset = "0x5340730", VA = "0x5341730")]
	internal RijndaelManagedTransform(byte[] rgbKey, CipherMode mode, byte[] rgbIV, int blockSize, int feedbackSize, PaddingMode PaddingValue, System.Security.Cryptography.RijndaelManagedTransformMode transformMode)
	{
	}

	[Token(Token = "0x60019EA")]
	[Address(RVA = "0x5342400", Offset = "0x5341400", VA = "0x5342400", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60019EB")]
	[Address(RVA = "0x5342530", Offset = "0x5341530", VA = "0x5342530")]
	public void Clear()
	{
	}

	[Token(Token = "0x60019EC")]
	[Address(RVA = "0x5342410", Offset = "0x5341410", VA = "0x5342410")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60019F2")]
	[Address(RVA = "0x5342590", Offset = "0x5341590", VA = "0x5342590", Slot = "8")]
	public int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x60019F3")]
	[Address(RVA = "0x53441C0", Offset = "0x53431C0", VA = "0x53441C0", Slot = "9")]
	public byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x60019F4")]
	[Address(RVA = "0x5344510", Offset = "0x5343510", VA = "0x5344510")]
	public void Reset()
	{
	}

	[Token(Token = "0x60019F5")]
	[Address(RVA = "0x5342880", Offset = "0x5341880", VA = "0x5342880")]
	private int EncryptData(byte[] inputBuffer, int inputOffset, int inputCount, ref byte[] outputBuffer, int outputOffset, PaddingMode paddingMode, bool fLast)
	{
		return default(int);
	}

	[Token(Token = "0x60019F6")]
	[Address(RVA = "0x5343550", Offset = "0x5342550", VA = "0x5343550")]
	private int DecryptData(byte[] inputBuffer, int inputOffset, int inputCount, ref byte[] outputBuffer, int outputOffset, PaddingMode paddingMode, bool fLast)
	{
		return default(int);
	}

	[Token(Token = "0x60019F7")]
	[Address(RVA = "0x5344570", Offset = "0x5343570", VA = "0x5344570")]
	private unsafe void Enc(int* encryptindex, int* encryptKeyExpansion, int* T, int* TF, int* work, int* temp)
	{
	}

	[Token(Token = "0x60019F8")]
	[Address(RVA = "0x5344780", Offset = "0x5343780", VA = "0x5344780")]
	private unsafe void Dec(int* decryptindex, int* decryptKeyExpansion, int* iT, int* iTF, int* work, int* temp)
	{
	}

	[Token(Token = "0x60019F9")]
	[Address(RVA = "0x5341E50", Offset = "0x5340E50", VA = "0x5341E50")]
	private void GenerateKeyExpansion(byte[] rgbKey)
	{
	}

	[Token(Token = "0x60019FA")]
	[Address(RVA = "0x5344AF0", Offset = "0x5343AF0", VA = "0x5344AF0")]
	private static int rot1(int val)
	{
		return default(int);
	}

	[Token(Token = "0x60019FB")]
	[Address(RVA = "0x5344AE0", Offset = "0x5343AE0", VA = "0x5344AE0")]
	private static int rot2(int val)
	{
		return default(int);
	}

	[Token(Token = "0x60019FC")]
	[Address(RVA = "0x53449B0", Offset = "0x53439B0", VA = "0x53449B0")]
	private static int rot3(int val)
	{
		return default(int);
	}

	[Token(Token = "0x60019FD")]
	[Address(RVA = "0x53449C0", Offset = "0x53439C0", VA = "0x53449C0")]
	private static int SubWord(int a)
	{
		return default(int);
	}

	[Token(Token = "0x60019FE")]
	[Address(RVA = "0x5344AC0", Offset = "0x5343AC0", VA = "0x5344AC0")]
	private static int MulX(int x)
	{
		return default(int);
	}

	[Token(Token = "0x6001A00")]
	[Address(RVA = "0x5344D20", Offset = "0x5343D20", VA = "0x5344D20")]
	internal RijndaelManagedTransform()
	{
	}
}
