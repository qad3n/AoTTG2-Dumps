// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.AsyncCausalityTracer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000293")]
[System.Runtime.CompilerServices.FriendAccessAllowed]
internal static class AsyncCausalityTracer
{
	[Token(Token = "0x17000210")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static bool LoggingOn
	{
		[Token(Token = "0x600156E")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
		[System.Runtime.CompilerServices.FriendAccessAllowed]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600156F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static void TraceOperationCreation(System.Threading.Tasks.CausalityTraceLevel traceLevel, int taskId, string operationName, ulong relatedContext)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001570")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static void TraceOperationCompletion(System.Threading.Tasks.CausalityTraceLevel traceLevel, int taskId, System.Threading.Tasks.AsyncCausalityStatus status)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001571")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal static void TraceSynchronousWorkStart(System.Threading.Tasks.CausalityTraceLevel traceLevel, int taskId, System.Threading.Tasks.CausalitySynchronousWork work)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001572")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal static void TraceSynchronousWorkCompletion(System.Threading.Tasks.CausalityTraceLevel traceLevel, System.Threading.Tasks.CausalitySynchronousWork work)
	{
	}
}
