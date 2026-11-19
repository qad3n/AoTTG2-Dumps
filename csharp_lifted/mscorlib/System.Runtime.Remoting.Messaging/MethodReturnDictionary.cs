// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.MethodReturnDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003C0")]
internal class MethodReturnDictionary : System.Runtime.Remoting.Messaging.MessageDictionary
{
	[Token(Token = "0x4000EFF")]
	[FieldOffset(Offset = "0x0")]
	public static string[] InternalReturnKeys;

	[Token(Token = "0x4000F00")]
	[FieldOffset(Offset = "0x8")]
	public static string[] InternalExceptionKeys;

	[Token(Token = "0x6001F17")]
	[Address(RVA = "0x53983F0", Offset = "0x53973F0", VA = "0x53983F0")]
	public MethodReturnDictionary(IMethodReturnMessage message)
	{
	}
}
