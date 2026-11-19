// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.FastEncoder
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x200001A")]
internal sealed class FastEncoder
{
	[Token(Token = "0x4000065")]
	[FieldOffset(Offset = "0x10")]
	private readonly FastEncoderWindow _inputWindow;

	[Token(Token = "0x4000066")]
	[FieldOffset(Offset = "0x18")]
	private readonly Match _currentMatch;

	[Token(Token = "0x4000067")]
	[FieldOffset(Offset = "0x20")]
	private double _lastCompressionRatio;

	[Token(Token = "0x17000013")]
	internal int BytesInHistory
	{
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x5F66B10", Offset = "0x5F65B10", VA = "0x5F66B10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000014")]
	internal DeflateInput UnprocessedInput
	{
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x5F66BC0", Offset = "0x5F65BC0", VA = "0x5F66BC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000015")]
	internal double LastCompressionRatio
	{
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x5F66DC0", Offset = "0x5F65DC0", VA = "0x5F66DC0")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x5F66C50", Offset = "0x5F65C50", VA = "0x5F66C50")]
	internal void FlushInput()
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x5F66C70", Offset = "0x5F65C70", VA = "0x5F66C70")]
	internal void GetBlock(DeflateInput input, OutputBuffer output, int maxBytesToCopy)
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x5F66B70", Offset = "0x5F65B70", VA = "0x5F66B70")]
	internal void GetCompressedData(DeflateInput input, OutputBuffer output)
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x5F66B60", Offset = "0x5F65B60", VA = "0x5F66B60")]
	internal void GetBlockHeader(OutputBuffer output)
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x5F66C40", Offset = "0x5F65C40", VA = "0x5F66C40")]
	internal void GetBlockFooter(OutputBuffer output)
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x5F66F00", Offset = "0x5F65F00", VA = "0x5F66F00")]
	private void GetCompressedOutput(DeflateInput input, OutputBuffer output, int maxBytesToCopy)
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x5F671D0", Offset = "0x5F661D0", VA = "0x5F671D0")]
	private void GetCompressedOutput(OutputBuffer output)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x5F672C0", Offset = "0x5F662C0", VA = "0x5F672C0")]
	private bool InputAvailable(DeflateInput input)
	{
		return default(bool);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x5F67290", Offset = "0x5F66290", VA = "0x5F67290")]
	private bool SafeToWriteTo(OutputBuffer output)
	{
		return default(bool);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x5F670E0", Offset = "0x5F660E0", VA = "0x5F670E0")]
	private void WriteEndOfBlock(OutputBuffer output)
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x5F676B0", Offset = "0x5F666B0", VA = "0x5F676B0")]
	internal static void WriteMatch(int matchLen, int matchPos, OutputBuffer output)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x5F67600", Offset = "0x5F66600", VA = "0x5F67600")]
	internal static void WriteChar(byte b, OutputBuffer output)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x5F66DD0", Offset = "0x5F65DD0", VA = "0x5F66DD0")]
	internal static void WriteDeflatePreamble(OutputBuffer output)
	{
	}
}
