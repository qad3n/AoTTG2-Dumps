using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x200010D")]
public interface IContractResolver
{
	[Token(Token = "0x60007C1")]
	JsonContract ResolveContract(Type type);
}
