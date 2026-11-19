// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.HuffmanTree
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x200001F")]
internal sealed class HuffmanTree
{
	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x10")]
	private readonly int _tableBits;

	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0x18")]
	private readonly short[] _table;

	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0x20")]
	private readonly short[] _left;

	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0x28")]
	private readonly short[] _right;

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0x30")]
	private readonly byte[] _codeLengthArray;

	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x38")]
	private readonly int _tableMask;

	[Token(Token = "0x17000019")]
	public static HuffmanTree StaticLiteralLengthTree
	{
		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x5F68A70", Offset = "0x5F67A70", VA = "0x5F68A70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001A")]
	public static HuffmanTree StaticDistanceTree
	{
		[Token(Token = "0x60000B5")]
		[Address(RVA = "0x5F68AE0", Offset = "0x5F67AE0", VA = "0x5F68AE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x5F68B50", Offset = "0x5F67B50", VA = "0x5F68B50")]
	public HuffmanTree(byte[] codeLengths)
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x5F68E20", Offset = "0x5F67E20", VA = "0x5F68E20")]
	private static byte[] GetStaticLiteralTreeLength()
	{
		return null;
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x5F69160", Offset = "0x5F68160", VA = "0x5F69160")]
	private static byte[] GetStaticDistanceTreeLength()
	{
		return null;
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x5F69320", Offset = "0x5F68320", VA = "0x5F69320")]
	private uint[] CalculateHuffmanCode()
	{
		return null;
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x5F68C40", Offset = "0x5F67C40", VA = "0x5F68C40")]
	private void CreateTable()
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x5F69720", Offset = "0x5F68720", VA = "0x5F69720")]
	public int GetNextSymbol(InputBuffer input)
	{
		return default(int);
	}
}
