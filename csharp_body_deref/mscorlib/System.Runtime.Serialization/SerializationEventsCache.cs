using System.Collections.Concurrent;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003D6")]
internal static class SerializationEventsCache
{
	[Token(Token = "0x4000FD7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConcurrentDictionary<Type, System.Runtime.Serialization.SerializationEvents> s_cache;

	[Token(Token = "0x6001F56")]
	[Address(RVA = "0x4EAF060", Offset = "0x4EAF060", VA = "0x4EAF060")]
	internal static System.Runtime.Serialization.SerializationEvents GetSerializationEventsForType(Type t)
	{
		return null;
	}
}
