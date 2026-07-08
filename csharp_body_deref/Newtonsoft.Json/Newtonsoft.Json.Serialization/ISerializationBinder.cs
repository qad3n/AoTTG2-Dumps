using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x200010F")]
public interface ISerializationBinder
{
	[Token(Token = "0x60007C6")]
	Type BindToType(string? assemblyName, string typeName);

	[Token(Token = "0x60007C7")]
	void BindToName(Type serializedType, out string? assemblyName, out string? typeName);
}
