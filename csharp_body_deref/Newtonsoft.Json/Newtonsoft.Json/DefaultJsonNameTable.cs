// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.DefaultJsonNameTable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x5556220", Offset = "0x5555220", VA = "0x5556220")]
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
	[Address(RVA = "0x5555B70", Offset = "0x5554B70", VA = "0x5555B70")]
	static DefaultJsonNameTable()
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x5555BB0", Offset = "0x5554BB0", VA = "0x5555BB0")]
	public DefaultJsonNameTable()
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x5555C20", Offset = "0x5554C20", VA = "0x5555C20", Slot = "4")]
	public override string Get(char[] key, int start, int length)
	{
		return null;
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x5555F40", Offset = "0x5554F40", VA = "0x5555F40")]
	public string Add(string key)
	{
		return null;
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x55560F0", Offset = "0x55550F0", VA = "0x55560F0")]
	private string AddEntry(string str, int hashCode)
	{
		return null;
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x5556270", Offset = "0x5555270", VA = "0x5556270")]
	private void Grow()
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x5555E90", Offset = "0x5554E90", VA = "0x5555E90")]
	private static bool TextEquals(string str1, char[] str2, int str2Start, int str2Length)
	{
		return default(bool);
	}
}
