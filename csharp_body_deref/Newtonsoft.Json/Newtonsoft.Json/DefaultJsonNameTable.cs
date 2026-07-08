using Il2CppDummyDll;

namespace Newtonsoft.Json;

[Token(Token = "0x200000F")]
public class DefaultJsonNameTable : JsonNameTable
{
	[Token(Token = "0x2000010")]
	private class Entry
	{
		[Token(Token = "0x4000018")]
		[FieldOffset(Offset = "0x10")]
		internal readonly string Value;

		[Token(Token = "0x4000019")]
		[FieldOffset(Offset = "0x18")]
		internal readonly int HashCode;

		[Token(Token = "0x400001A")]
		[FieldOffset(Offset = "0x20")]
		internal Entry Next;

		[Token(Token = "0x6000014")]
		[Address(RVA = "0x3A5F400", Offset = "0x3A5F400", VA = "0x3A5F400")]
		internal Entry(string value, int hashCode, Entry next)
		{
		}
	}

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int HashCodeRandomizer;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x10")]
	private int _count;

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x18")]
	private Entry[] _entries;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x20")]
	private int _mask;

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x3A5ED30", Offset = "0x3A5ED30", VA = "0x3A5ED30")]
	static DefaultJsonNameTable()
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x3A5ED70", Offset = "0x3A5ED70", VA = "0x3A5ED70")]
	public DefaultJsonNameTable()
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x3A5EDE0", Offset = "0x3A5EDE0", VA = "0x3A5EDE0", Slot = "4")]
	public override string Get(char[] key, int start, int length)
	{
		return null;
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x3A5F110", Offset = "0x3A5F110", VA = "0x3A5F110")]
	public string Add(string key)
	{
		return null;
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x3A5F2C0", Offset = "0x3A5F2C0", VA = "0x3A5F2C0")]
	private string AddEntry(string str, int hashCode)
	{
		return null;
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x3A5F450", Offset = "0x3A5F450", VA = "0x3A5F450")]
	private void Grow()
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x3A5F060", Offset = "0x3A5F060", VA = "0x3A5F060")]
	private static bool TextEquals(string str1, char[] str2, int str2Start, int str2Length)
	{
		return default(bool);
	}
}
