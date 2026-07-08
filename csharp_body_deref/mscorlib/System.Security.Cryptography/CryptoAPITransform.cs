using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000313")]
[ComVisible(true)]
public sealed class CryptoAPITransform : ICryptoTransform, IDisposable
{
	[Token(Token = "0x4000DD9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private bool m_disposed;

	[Token(Token = "0x170002E8")]
	public bool CanReuseTransform
	{
		[Token(Token = "0x6001AE8")]
		[Address(RVA = "0x4E67010", Offset = "0x4E67010", VA = "0x4E67010", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002E9")]
	public bool CanTransformMultipleBlocks
	{
		[Token(Token = "0x6001AE9")]
		[Address(RVA = "0x4E67020", Offset = "0x4E67020", VA = "0x4E67020", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EA")]
	public int InputBlockSize
	{
		[Token(Token = "0x6001AEA")]
		[Address(RVA = "0x4E67030", Offset = "0x4E67030", VA = "0x4E67030", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002EB")]
	public IntPtr KeyHandle
	{
		[Token(Token = "0x6001AEB")]
		[Address(RVA = "0x4E67040", Offset = "0x4E67040", VA = "0x4E67040")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x170002EC")]
	public int OutputBlockSize
	{
		[Token(Token = "0x6001AEC")]
		[Address(RVA = "0x4E67050", Offset = "0x4E67050", VA = "0x4E67050", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001AE7")]
	[Address(RVA = "0x4E66FF0", Offset = "0x4E66FF0", VA = "0x4E66FF0")]
	internal CryptoAPITransform()
	{
	}

	[Token(Token = "0x6001AED")]
	[Address(RVA = "0x4E67060", Offset = "0x4E67060", VA = "0x4E67060", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001AEE")]
	[Address(RVA = "0x4E670F0", Offset = "0x4E670F0", VA = "0x4E670F0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001AEF")]
	[Address(RVA = "0x4E670E0", Offset = "0x4E670E0", VA = "0x4E670E0")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001AF0")]
	[Address(RVA = "0x4E67100", Offset = "0x4E67100", VA = "0x4E67100", Slot = "8")]
	public int TransformBlock(byte[] inputBuffer, int inputOffset, int inputCount, byte[] outputBuffer, int outputOffset)
	{
		return default(int);
	}

	[Token(Token = "0x6001AF1")]
	[Address(RVA = "0x4E67110", Offset = "0x4E67110", VA = "0x4E67110", Slot = "9")]
	public byte[] TransformFinalBlock(byte[] inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x6001AF2")]
	[Address(RVA = "0x4E67120", Offset = "0x4E67120", VA = "0x4E67120")]
	[ComVisible(false)]
	public void Reset()
	{
	}
}
