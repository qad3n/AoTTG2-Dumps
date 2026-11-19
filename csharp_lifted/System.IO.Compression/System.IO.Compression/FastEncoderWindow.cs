// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.FastEncoderWindow
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x200001C")]
internal sealed class FastEncoderWindow
{
	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x10")]
	private byte[] _window;

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x18")]
	private int _bufPos;

	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x1C")]
	private int _bufEnd;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x20")]
	private ushort[] _prev;

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x28")]
	private ushort[] _lookup;

	[Token(Token = "0x17000016")]
	public int BytesAvailable
	{
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x5F66D20", Offset = "0x5F65D20", VA = "0x5F66D20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000017")]
	public DeflateInput UnprocessedInput
	{
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x5F66D30", Offset = "0x5F65D30", VA = "0x5F66D30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000018")]
	public int FreeWindowSpace
	{
		[Token(Token = "0x60000A5")]
		[Address(RVA = "0x5F67190", Offset = "0x5F66190", VA = "0x5F67190")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x5F66DB0", Offset = "0x5F65DB0", VA = "0x5F66DB0")]
	public void FlushWindow()
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x5F68540", Offset = "0x5F67540", VA = "0x5F68540")]
	private void ResetWindow()
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x5F671A0", Offset = "0x5F661A0", VA = "0x5F671A0")]
	public void CopyBytes(byte[] inputBuffer, int startIndex, int count)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x5F685F0", Offset = "0x5F675F0", VA = "0x5F685F0")]
	public void MoveWindows()
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x5F68780", Offset = "0x5F67780", VA = "0x5F68780")]
	private uint HashValue(uint hash, byte b)
	{
		return default(uint);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x5F68790", Offset = "0x5F67790", VA = "0x5F68790")]
	private uint InsertString(ref uint hash)
	{
		return default(uint);
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x5F68800", Offset = "0x5F67800", VA = "0x5F68800")]
	private void InsertStrings(ref uint hash, int matchLen)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x5F672F0", Offset = "0x5F662F0", VA = "0x5F672F0")]
	internal bool GetNextSymbolOrMatch(Match match)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x5F68850", Offset = "0x5F67850", VA = "0x5F68850")]
	private int FindMatch(int search, out int matchPos, int searchDepth, int niceLength)
	{
		return default(int);
	}
}
