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
		[Address(RVA = "0x44A8A40", Offset = "0x44A8A40", VA = "0x44A8A40")]
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
	[Address(RVA = "0x4497BC0", Offset = "0x4497BC0", VA = "0x4497BC0")]
	public NameTable()
	{
	}

	[Token(Token = "0x6000A89")]
	[Address(RVA = "0x44A8370", Offset = "0x44A8370", VA = "0x44A8370", Slot = "6")]
	public override string Add(string key)
	{
		return null;
	}

	[Token(Token = "0x6000A8A")]
	[Address(RVA = "0x44A8610", Offset = "0x44A8610", VA = "0x44A8610", Slot = "5")]
	public override string Add(char[] key, int start, int len)
	{
		return null;
	}

	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x44A88F0", Offset = "0x44A88F0", VA = "0x44A88F0", Slot = "4")]
	public override string Get(string value)
	{
		return null;
	}

	[Token(Token = "0x6000A8C")]
	[Address(RVA = "0x44A84D0", Offset = "0x44A84D0", VA = "0x44A84D0")]
	private string AddEntry(string str, int hashCode)
	{
		return null;
	}

	[Token(Token = "0x6000A8D")]
	[Address(RVA = "0x44A8A90", Offset = "0x44A8A90", VA = "0x44A8A90")]
	private void Grow()
	{
	}

	[Token(Token = "0x6000A8E")]
	[Address(RVA = "0x44A8840", Offset = "0x44A8840", VA = "0x44A8840")]
	private static bool TextEquals(string str1, char[] str2, int str2Start, int str2Length)
	{
		return default(bool);
	}
}
