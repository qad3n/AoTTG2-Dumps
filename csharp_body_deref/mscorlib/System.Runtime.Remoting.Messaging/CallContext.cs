using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Serializable]
[Token(Token = "0x2000394")]
[ComVisible(true)]
public sealed class CallContext
{
	[Token(Token = "0x6001DE2")]
	[Address(RVA = "0x4E9EDB0", Offset = "0x4E9EDB0", VA = "0x4E9EDB0")]
	private CallContext()
	{
	}

	[Token(Token = "0x6001DE3")]
	[Address(RVA = "0x4E9EDC0", Offset = "0x4E9EDC0", VA = "0x4E9EDC0")]
	internal static object SetCurrentCallContext(LogicalCallContext ctx)
	{
		return null;
	}

	[Token(Token = "0x6001DE4")]
	[Address(RVA = "0x4E9EDD0", Offset = "0x4E9EDD0", VA = "0x4E9EDD0")]
	internal static LogicalCallContext SetLogicalCallContext(LogicalCallContext callCtx)
	{
		return null;
	}

	[Token(Token = "0x6001DE5")]
	[Address(RVA = "0x4E9EE30", Offset = "0x4E9EE30", VA = "0x4E9EE30")]
	public static object LogicalGetData(string name)
	{
		return null;
	}

	[Token(Token = "0x6001DE6")]
	[Address(RVA = "0x4E9EFA0", Offset = "0x4E9EFA0", VA = "0x4E9EFA0")]
	public static void LogicalSetData(string name, object data)
	{
	}
}
