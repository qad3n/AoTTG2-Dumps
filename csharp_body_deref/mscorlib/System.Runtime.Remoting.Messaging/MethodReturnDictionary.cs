// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.MethodReturnDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3B90A00", Offset = "0x3B90A00", VA = "0x3B90A00")]
	public MethodReturnDictionary(IMethodReturnMessage message)
	{
	}
}
