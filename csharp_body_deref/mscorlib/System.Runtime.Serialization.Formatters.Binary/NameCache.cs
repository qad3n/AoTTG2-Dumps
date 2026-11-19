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

[Token(Token = "0x2000432")]
internal sealed class NameCache
{
	[Token(Token = "0x4001168")]
	[FieldOffset(Offset = "0x0")]
	private static ConcurrentDictionary<string, object> ht;

	[Token(Token = "0x4001169")]
	[FieldOffset(Offset = "0x10")]
	private string name;

	[Token(Token = "0x60021DE")]
	[Address(RVA = "0x53C3390", Offset = "0x53C2390", VA = "0x53C3390")]
	internal object GetCachedValue(string name)
	{
		return null;
	}

	[Token(Token = "0x60021DF")]
	[Address(RVA = "0x53C3440", Offset = "0x53C2440", VA = "0x53C3440")]
	internal void SetCachedValue(object value)
	{
	}

	[Token(Token = "0x60021E0")]
	[Address(RVA = "0x53C34E0", Offset = "0x53C24E0", VA = "0x53C34E0")]
	public NameCache()
	{
	}
}
