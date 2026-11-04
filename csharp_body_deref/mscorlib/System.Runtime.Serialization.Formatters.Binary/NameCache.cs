// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.NameCache
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Concurrent;
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000459")]
internal sealed class NameCache
{
	[Token(Token = "0x4001208")]
	[FieldOffset(Offset = "0x0")]
	private static ConcurrentDictionary<string, object> ht;

	[Token(Token = "0x4001209")]
	[FieldOffset(Offset = "0x10")]
	private string name;

	[Token(Token = "0x6002208")]
	[Address(RVA = "0x1A2DE40", Offset = "0x1A2C440", VA = "0x181A2DE40")]
	internal object GetCachedValue(string name)
	{
		return null;
	}

	[Token(Token = "0x6002209")]
	[Address(RVA = "0x1A2DF00", Offset = "0x1A2C500", VA = "0x181A2DF00")]
	internal void SetCachedValue(object value)
	{
	}

	[Token(Token = "0x600220A")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public NameCache()
	{
	}
}
