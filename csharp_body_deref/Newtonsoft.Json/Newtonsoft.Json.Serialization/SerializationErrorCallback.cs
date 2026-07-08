using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000116")]
public delegate void SerializationErrorCallback(object o, StreamingContext context, ErrorContext errorContext);
