using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000115")]
public delegate void SerializationCallback(object o, StreamingContext context);
