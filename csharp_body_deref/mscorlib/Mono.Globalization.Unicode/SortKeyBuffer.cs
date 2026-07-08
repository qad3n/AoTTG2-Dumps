using System.Globalization;
using Il2CppDummyDll;

namespace Mono.Globalization.Unicode;

[Token(Token = "0x200003F")]
internal class SortKeyBuffer
{
	[Token(Token = "0x4000125")]
	[FieldOffset(Offset = "0x10")]
	private byte[] l1b;

	[Token(Token = "0x4000126")]
	[FieldOffset(Offset = "0x18")]
	private byte[] l2b;

	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0x20")]
	private byte[] l3b;

	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x28")]
	private byte[] l4sb;

	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0x30")]
	private byte[] l4tb;

	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0x38")]
	private byte[] l4kb;

	[Token(Token = "0x400012B")]
	[FieldOffset(Offset = "0x40")]
	private byte[] l4wb;

	[Token(Token = "0x400012C")]
	[FieldOffset(Offset = "0x48")]
	private byte[] l5b;

	[Token(Token = "0x400012D")]
	[FieldOffset(Offset = "0x50")]
	private string source;

	[Token(Token = "0x400012E")]
	[FieldOffset(Offset = "0x58")]
	private int l1;

	[Token(Token = "0x400012F")]
	[FieldOffset(Offset = "0x5C")]
	private int l2;

	[Token(Token = "0x4000130")]
	[FieldOffset(Offset = "0x60")]
	private int l3;

	[Token(Token = "0x4000131")]
	[FieldOffset(Offset = "0x64")]
	private int l4s;

	[Token(Token = "0x4000132")]
	[FieldOffset(Offset = "0x68")]
	private int l4t;

	[Token(Token = "0x4000133")]
	[FieldOffset(Offset = "0x6C")]
	private int l4k;

	[Token(Token = "0x4000134")]
	[FieldOffset(Offset = "0x70")]
	private int l4w;

	[Token(Token = "0x4000135")]
	[FieldOffset(Offset = "0x74")]
	private int l5;

	[Token(Token = "0x4000136")]
	[FieldOffset(Offset = "0x78")]
	private int lcid;

	[Token(Token = "0x4000137")]
	[FieldOffset(Offset = "0x7C")]
	private CompareOptions options;

	[Token(Token = "0x4000138")]
	[FieldOffset(Offset = "0x80")]
	private bool processLevel2;

	[Token(Token = "0x4000139")]
	[FieldOffset(Offset = "0x81")]
	private bool frenchSort;

	[Token(Token = "0x400013A")]
	[FieldOffset(Offset = "0x82")]
	private bool frenchSorted;

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x4DEFDE0", Offset = "0x4DEFDE0", VA = "0x4DEFDE0")]
	public SortKeyBuffer(int lcid)
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x4DF6220", Offset = "0x4DF6220", VA = "0x4DF6220")]
	public void Reset()
	{
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x4DEFDF0", Offset = "0x4DEFDF0", VA = "0x4DEFDF0")]
	internal void Initialize(CompareOptions options, int lcid, string s, bool frenchSort)
	{
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x4DF0DB0", Offset = "0x4DF0DB0", VA = "0x4DF0DB0")]
	internal void AppendCJKExtension(byte lv1msb, byte lv1lsb)
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x4DF0F00", Offset = "0x4DF0F00", VA = "0x4DF0F00")]
	internal void AppendKana(byte category, byte lv1, byte lv2, byte lv3, bool isSmallKana, byte markType, bool isKatakana, bool isHalfWidth)
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x4DF0C20", Offset = "0x4DF0C20", VA = "0x4DF0C20")]
	internal void AppendNormal(byte category, byte lv1, byte lv2, byte lv3)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x4DF62E0", Offset = "0x4DF62E0", VA = "0x4DF62E0")]
	private void AppendLevel5(byte category, byte lv1)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x4DF6240", Offset = "0x4DF6240", VA = "0x4DF6240")]
	private void AppendBufferPrimitive(byte value, ref byte[] buf, ref int bidx)
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x4DF0680", Offset = "0x4DF0680", VA = "0x4DF0680")]
	public SortKey GetResultAndReset()
	{
		return null;
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x4DF6990", Offset = "0x4DF6990", VA = "0x4DF6990")]
	private int GetOptimizedLength(byte[] data, int len, byte defaultValue)
	{
		return default(int);
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x4DF6380", Offset = "0x4DF6380", VA = "0x4DF6380")]
	public SortKey GetResult()
	{
		return null;
	}
}
