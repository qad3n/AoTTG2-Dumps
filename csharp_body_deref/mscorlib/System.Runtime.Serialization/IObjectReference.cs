using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003C9")]
public interface IObjectReference
{
	[Token(Token = "0x6001F25")]
	object GetRealObject(StreamingContext context);
}
