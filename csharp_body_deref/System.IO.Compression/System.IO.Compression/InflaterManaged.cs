// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.InflaterManaged
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000020")]
internal sealed class InflaterManaged
{
	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly byte[] s_extraLengthBits;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int[] s_lengthBase;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int[] s_distanceBasePosition;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x18")]
	private static readonly byte[] s_codeOrder;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x20")]
	private static readonly byte[] s_staticDistanceTreeTable;

	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x10")]
	private readonly OutputWindow _output;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x18")]
	private readonly InputBuffer _input;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0x20")]
	private HuffmanTree _literalLengthTree;

	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x28")]
	private HuffmanTree _distanceTree;

	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x30")]
	private InflaterState _state;

	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0x34")]
	private bool _hasFormatReader;

	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x38")]
	private int _bfinal;

	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x3C")]
	private BlockType _blockType;

	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x40")]
	private readonly byte[] _blockLengthBuffer;

	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0x48")]
	private int _blockLength;

	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x4C")]
	private int _length;

	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x50")]
	private int _distanceCode;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x54")]
	private int _extraBits;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x58")]
	private int _loopCounter;

	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x5C")]
	private int _literalLengthCodeCount;

	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0x60")]
	private int _distanceCodeCount;

	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0x64")]
	private int _codeLengthCodeCount;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x68")]
	private int _codeArraySize;

	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x6C")]
	private int _lengthCode;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0x70")]
	private readonly byte[] _codeList;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0x78")]
	private readonly byte[] _codeLengthTreeCodeLength;

	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x80")]
	private readonly bool _deflate64;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0x88")]
	private HuffmanTree _codeLengthTree;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x90")]
	private IFileFormatReader _formatReader;

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x5F643D0", Offset = "0x5F633D0", VA = "0x5F643D0")]
	internal InflaterManaged(IFileFormatReader reader, bool deflate64)
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x5F69A40", Offset = "0x5F68A40", VA = "0x5F69A40")]
	private void Reset()
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x5F64DA0", Offset = "0x5F63DA0", VA = "0x5F64DA0")]
	public void SetInput(byte[] inputBytes, int offset, int length)
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x5F64D90", Offset = "0x5F63D90", VA = "0x5F64D90")]
	public bool Finished()
	{
		return default(bool);
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x5F64B10", Offset = "0x5F63B10", VA = "0x5F64B10")]
	public int Inflate(byte[] bytes, int offset, int length)
	{
		return default(int);
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x5F69B30", Offset = "0x5F68B30", VA = "0x5F69B30")]
	private bool Decode()
	{
		return default(bool);
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x5F6AD10", Offset = "0x5F69D10", VA = "0x5F6AD10")]
	private bool DecodeUncompressedBlock(out bool end_of_block)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x5F6A890", Offset = "0x5F69890", VA = "0x5F6A890")]
	private bool DecodeBlock(out bool end_of_block_code_seen)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x5F6A0E0", Offset = "0x5F690E0", VA = "0x5F6A0E0")]
	private bool DecodeDynamicBlockHeader()
	{
		return default(bool);
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x5F6B160", Offset = "0x5F6A160", VA = "0x5F6B160")]
	public void Dispose()
	{
	}
}
