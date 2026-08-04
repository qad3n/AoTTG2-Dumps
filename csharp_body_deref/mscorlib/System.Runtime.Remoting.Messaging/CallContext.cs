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
[Token(Token = "0x2000394")]
[ComVisible(true)]
public sealed class CallContext
{
	[Token(Token = "0x6001DE2")]
	[Address(RVA = "0x3B848D0", Offset = "0x3B848D0", VA = "0x3B848D0")]
	private CallContext()
	{
	}

	[Token(Token = "0x6001DE3")]
	[Address(RVA = "0x3B848E0", Offset = "0x3B848E0", VA = "0x3B848E0")]
	internal static object SetCurrentCallContext(LogicalCallContext ctx)
	{
		return null;
	}

	[Token(Token = "0x6001DE4")]
	[Address(RVA = "0x3B848F0", Offset = "0x3B848F0", VA = "0x3B848F0")]
	internal static LogicalCallContext SetLogicalCallContext(LogicalCallContext callCtx)
	{
		return null;
	}

	[Token(Token = "0x6001DE5")]
	[Address(RVA = "0x3B84950", Offset = "0x3B84950", VA = "0x3B84950")]
	public static object LogicalGetData(string name)
	{
		return null;
	}

	[Token(Token = "0x6001DE6")]
	[Address(RVA = "0x3B84AC0", Offset = "0x3B84AC0", VA = "0x3B84AC0")]
	public static void LogicalSetData(string name, object data)
	{
	}
}
