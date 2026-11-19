// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.SerializationEventsCache
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Concurrent;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003DE")]
internal static class SerializationEventsCache
{
	[Token(Token = "0x4000F3D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConcurrentDictionary<Type, System.Runtime.Serialization.SerializationEvents> s_cache;

	[Token(Token = "0x6001F9B")]
	[Address(RVA = "0x539C4B0", Offset = "0x539B4B0", VA = "0x539C4B0")]
	internal static System.Runtime.Serialization.SerializationEvents GetSerializationEventsForType(Type t)
	{
		return null;
	}
}
