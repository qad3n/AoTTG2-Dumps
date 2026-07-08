using System.Collections.Concurrent;
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200042A")]
internal sealed class NameCache
{
	[Token(Token = "0x4001206")]
	[FieldOffset(Offset = "0x0")]
	private static ConcurrentDictionary<string, object> ht;

	[Token(Token = "0x4001207")]
	[FieldOffset(Offset = "0x10")]
	private string name;

	[Token(Token = "0x6002199")]
	[Address(RVA = "0x4ED61C0", Offset = "0x4ED61C0", VA = "0x4ED61C0")]
	internal object GetCachedValue(string name)
	{
		return null;
	}

	[Token(Token = "0x600219A")]
	[Address(RVA = "0x4ED6270", Offset = "0x4ED6270", VA = "0x4ED6270")]
	internal void SetCachedValue(object value)
	{
	}

	[Token(Token = "0x600219B")]
	[Address(RVA = "0x4ED6310", Offset = "0x4ED6310", VA = "0x4ED6310")]
	public NameCache()
	{
	}
}
