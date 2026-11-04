// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.SerializationBinderAdapter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000139")]
internal class SerializationBinderAdapter : ISerializationBinder
{
	[Token(Token = "0x40005BE")]
	[FieldOffset(Offset = "0x10")]
	public readonly SerializationBinder SerializationBinder;

	[Token(Token = "0x6000994")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public SerializationBinderAdapter(SerializationBinder serializationBinder)
	{
	}

	[Token(Token = "0x6000995")]
	[Address(RVA = "0x1C6C730", Offset = "0x1C6AD30", VA = "0x181C6C730", Slot = "4")]
	public Type BindToType(string? assemblyName, string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000996")]
	[Address(RVA = "0x1C6C700", Offset = "0x1C6AD00", VA = "0x181C6C700", Slot = "5")]
	public void BindToName(Type serializedType, out string? assemblyName, out string? typeName)
	{
	}
}
