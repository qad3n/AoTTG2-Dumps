using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003D1")]
public interface ISerializationSurrogate
{
	[Token(Token = "0x6001F43")]
	void GetObjectData(object obj, SerializationInfo info, StreamingContext context);

	[Token(Token = "0x6001F44")]
	object SetObjectData(object obj, SerializationInfo info, StreamingContext context, ISurrogateSelector selector);
}
