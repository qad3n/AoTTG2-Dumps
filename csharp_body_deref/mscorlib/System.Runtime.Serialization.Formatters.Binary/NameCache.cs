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
	[Address(RVA = "0x3BBBCE0", Offset = "0x3BBBCE0", VA = "0x3BBBCE0")]
	internal object GetCachedValue(string name)
	{
		return null;
	}

	[Token(Token = "0x600219A")]
	[Address(RVA = "0x3BBBD90", Offset = "0x3BBBD90", VA = "0x3BBBD90")]
	internal void SetCachedValue(object value)
	{
	}

	[Token(Token = "0x600219B")]
	[Address(RVA = "0x3BBBE30", Offset = "0x3BBBE30", VA = "0x3BBBE30")]
	public NameCache()
	{
	}
}
