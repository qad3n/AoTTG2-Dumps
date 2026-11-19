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
		[Address(RVA = "0x60E8BB0", Offset = "0x60E7BB0", VA = "0x60E8BB0")]
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
	[Address(RVA = "0x60D83A0", Offset = "0x60D73A0", VA = "0x60D83A0")]
	public NameTable()
	{
	}

	[Token(Token = "0x6000A89")]
	[Address(RVA = "0x60E8510", Offset = "0x60E7510", VA = "0x60E8510", Slot = "6")]
	public override string Add(string key)
	{
		return null;
	}

	[Token(Token = "0x6000A8A")]
	[Address(RVA = "0x60E8790", Offset = "0x60E7790", VA = "0x60E8790", Slot = "5")]
	public override string Add(char[] key, int start, int len)
	{
		return null;
	}

	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x60E8A70", Offset = "0x60E7A70", VA = "0x60E8A70", Slot = "4")]
	public override string Get(string value)
	{
		return null;
	}

	[Token(Token = "0x6000A8C")]
	[Address(RVA = "0x60E8660", Offset = "0x60E7660", VA = "0x60E8660")]
	private string AddEntry(string str, int hashCode)
	{
		return null;
	}

	[Token(Token = "0x6000A8D")]
	[Address(RVA = "0x60E8C00", Offset = "0x60E7C00", VA = "0x60E8C00")]
	private void Grow()
	{
	}

	[Token(Token = "0x6000A8E")]
	[Address(RVA = "0x60E89C0", Offset = "0x60E79C0", VA = "0x60E89C0")]
	private static bool TextEquals(string str1, char[] str2, int str2Start, int str2Length)
	{
		return default(bool);
	}
}
