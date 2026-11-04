// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.NameTable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000C4")]
public class NameTable : XmlNameTable
{
	[Token(Token = "0x20000C5")]
	private class Entry
	{
		[Token(Token = "0x40004CF")]
		[FieldOffset(Offset = "0x10")]
		internal string str;

		[Token(Token = "0x40004D0")]
		[FieldOffset(Offset = "0x18")]
		internal int hashCode;

		[Token(Token = "0x40004D1")]
		[FieldOffset(Offset = "0x20")]
		internal Entry next;

		[Token(Token = "0x6000A8F")]
		[Address(RVA = "0x1BC8210", Offset = "0x1BC6810", VA = "0x181BC8210")]
		internal Entry(string str, int hashCode, Entry next)
		{
		}
	}

	[Token(Token = "0x40004CB")]
	[FieldOffset(Offset = "0x10")]
	private Entry[] entries;

	[Token(Token = "0x40004CC")]
	[FieldOffset(Offset = "0x18")]
	private int count;

	[Token(Token = "0x40004CD")]
	[FieldOffset(Offset = "0x1C")]
	private int mask;

	[Token(Token = "0x40004CE")]
	[FieldOffset(Offset = "0x20")]
	private int hashCodeRandomizer;

	[Token(Token = "0x6000A88")]
	[Address(RVA = "0x27291C0", Offset = "0x27277C0", VA = "0x1827291C0")]
	public NameTable()
	{
	}

	[Token(Token = "0x6000A89")]
	[Address(RVA = "0x2728BD0", Offset = "0x27271D0", VA = "0x182728BD0", Slot = "6")]
	public override string Add(string key)
	{
		return null;
	}

	[Token(Token = "0x6000A8A")]
	[Address(RVA = "0x2728D40", Offset = "0x2727340", VA = "0x182728D40", Slot = "5")]
	public override string Add(char[] key, int start, int len)
	{
		return null;
	}

	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x2728F00", Offset = "0x2727500", VA = "0x182728F00", Slot = "4")]
	public override string Get(string value)
	{
		return null;
	}

	[Token(Token = "0x6000A8C")]
	[Address(RVA = "0x2728970", Offset = "0x2726F70", VA = "0x182728970")]
	private string AddEntry(string str, int hashCode)
	{
		return null;
	}

	[Token(Token = "0x6000A8D")]
	[Address(RVA = "0x2729060", Offset = "0x2727660", VA = "0x182729060")]
	private void Grow()
	{
	}

	[Token(Token = "0x6000A8E")]
	[Address(RVA = "0x1BC80F0", Offset = "0x1BC66F0", VA = "0x181BC80F0")]
	private static bool TextEquals(string str1, char[] str2, int str2Start, int str2Length)
	{
		return default(bool);
	}
}
