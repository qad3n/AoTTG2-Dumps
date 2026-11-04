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
[Token(Token = "0x20003C3")]
[ComVisible(true)]
public sealed class CallContext
{
	[Token(Token = "0x6001E51")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	private CallContext()
	{
	}

	[Token(Token = "0x6001E52")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
	internal static object SetCurrentCallContext(LogicalCallContext ctx)
	{
		return null;
	}

	[Token(Token = "0x6001E53")]
	[Address(RVA = "0x19F1610", Offset = "0x19EFC10", VA = "0x1819F1610")]
	internal static LogicalCallContext SetLogicalCallContext(LogicalCallContext callCtx)
	{
		return null;
	}

	[Token(Token = "0x6001E54")]
	[Address(RVA = "0x19F13A0", Offset = "0x19EF9A0", VA = "0x1819F13A0")]
	public static object LogicalGetData(string name)
	{
		return null;
	}

	[Token(Token = "0x6001E55")]
	[Address(RVA = "0x19F1480", Offset = "0x19EFA80", VA = "0x1819F1480")]
	public static void LogicalSetData(string name, object data)
	{
	}
}
