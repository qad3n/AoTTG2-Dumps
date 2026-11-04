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
		[Address(RVA = "0x1BC8210", Offset = "0x1BC6810", VA = "0x181BC8210")]
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
	[Address(RVA = "0x1BC8170", Offset = "0x1BC6770", VA = "0x181BC8170")]
	static DefaultJsonNameTable()
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x1BC81B0", Offset = "0x1BC67B0", VA = "0x181BC81B0")]
	public DefaultJsonNameTable()
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x1BC7DA0", Offset = "0x1BC63A0", VA = "0x181BC7DA0", Slot = "4")]
	public override string Get(char[] key, int start, int length)
	{
		return null;
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x1BC7BE0", Offset = "0x1BC61E0", VA = "0x181BC7BE0")]
	public string Add(string key)
	{
		return null;
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x1BC7970", Offset = "0x1BC5F70", VA = "0x181BC7970")]
	private string AddEntry(string str, int hashCode)
	{
		return null;
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x1BC7F90", Offset = "0x1BC6590", VA = "0x181BC7F90")]
	private void Grow()
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x1BC80F0", Offset = "0x1BC66F0", VA = "0x181BC80F0")]
	private static bool TextEquals(string str1, char[] str2, int str2Start, int str2Length)
	{
		return default(bool);
	}
}
