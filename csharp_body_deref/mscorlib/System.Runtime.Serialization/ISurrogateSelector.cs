using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003D2")]
public interface ISurrogateSelector
{
	[Token(Token = "0x6001F45")]
	ISerializationSurrogate GetSurrogate(Type type, StreamingContext context, out ISurrogateSelector selector);
}
