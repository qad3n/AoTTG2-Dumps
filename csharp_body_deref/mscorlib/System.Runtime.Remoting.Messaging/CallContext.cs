// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.CallContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Serializable]
[Token(Token = "0x200039C")]
[ComVisible(true)]
public sealed class CallContext
{
	[Token(Token = "0x6001E27")]
	[Address(RVA = "0x538C740", Offset = "0x538B740", VA = "0x538C740")]
	private CallContext()
	{
	}

	[Token(Token = "0x6001E28")]
	[Address(RVA = "0x538C750", Offset = "0x538B750", VA = "0x538C750")]
	internal static object SetCurrentCallContext(LogicalCallContext ctx)
	{
		return null;
	}

	[Token(Token = "0x6001E29")]
	[Address(RVA = "0x538C760", Offset = "0x538B760", VA = "0x538C760")]
	internal static LogicalCallContext SetLogicalCallContext(LogicalCallContext callCtx)
	{
		return null;
	}

	[Token(Token = "0x6001E2A")]
	[Address(RVA = "0x538C7C0", Offset = "0x538B7C0", VA = "0x538C7C0")]
	public static object LogicalGetData(string name)
	{
		return null;
	}

	[Token(Token = "0x6001E2B")]
	[Address(RVA = "0x538C930", Offset = "0x538B930", VA = "0x538C930")]
	public static void LogicalSetData(string name, object data)
	{
	}
}
