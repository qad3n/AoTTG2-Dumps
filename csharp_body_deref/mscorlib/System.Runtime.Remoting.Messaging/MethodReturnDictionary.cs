using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003B8")]
internal class MethodReturnDictionary : System.Runtime.Remoting.Messaging.MessageDictionary
{
	[Token(Token = "0x4000F99")]
	[FieldOffset(Offset = "0x0")]
	public static string[] InternalReturnKeys;

	[Token(Token = "0x4000F9A")]
	[FieldOffset(Offset = "0x8")]
	public static string[] InternalExceptionKeys;

	[Token(Token = "0x6001ED2")]
	[Address(RVA = "0x4EAAEE0", Offset = "0x4EAAEE0", VA = "0x4EAAEE0")]
	public MethodReturnDictionary(IMethodReturnMessage message)
	{
	}
}
