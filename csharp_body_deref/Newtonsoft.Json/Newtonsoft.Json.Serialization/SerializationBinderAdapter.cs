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
	[Address(RVA = "0x3AFFBC0", Offset = "0x3AFFBC0", VA = "0x3AFFBC0")]
	public SerializationBinderAdapter(SerializationBinder serializationBinder)
	{
	}

	[Token(Token = "0x6000995")]
	[Address(RVA = "0x3AFFBF0", Offset = "0x3AFFBF0", VA = "0x3AFFBF0", Slot = "4")]
	public Type BindToType(string? assemblyName, string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000996")]
	[Address(RVA = "0x3AFFC20", Offset = "0x3AFFC20", VA = "0x3AFFC20", Slot = "5")]
	public void BindToName(Type serializedType, out string? assemblyName, out string? typeName)
	{
	}
}
