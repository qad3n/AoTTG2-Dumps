// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.OutputWindow
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000027")]
internal sealed class OutputWindow
{
	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x10")]
	private readonly byte[] _window;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x18")]
	private int _end;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x1C")]
	private int _bytesUsed;

	[Token(Token = "0x17000024")]
	public int FreeBytes
	{
		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x5F6B000", Offset = "0x5F6A000", VA = "0x5F6B000")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000025")]
	public int AvailableBytes
	{
		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x5F6B590", Offset = "0x5F6A590", VA = "0x5F6B590")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x5F6B010", Offset = "0x5F6A010", VA = "0x5F6B010")]
	public void Write(byte b)
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x5F6B050", Offset = "0x5F6A050", VA = "0x5F6B050")]
	public void WriteLengthDistance(int length, int distance)
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x5F6AF10", Offset = "0x5F69F10", VA = "0x5F6AF10")]
	public int CopyFrom(InputBuffer input, int length)
	{
		return default(int);
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x5F69A90", Offset = "0x5F68A90", VA = "0x5F69A90")]
	public int CopyTo(byte[] output, int offset, int length)
	{
		return default(int);
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x5F699E0", Offset = "0x5F689E0", VA = "0x5F699E0")]
	public OutputWindow()
	{
	}
}
