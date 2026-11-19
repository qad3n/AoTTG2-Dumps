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

[Token(Token = "0x200026B")]
[System.Runtime.CompilerServices.FriendAccessAllowed]
internal static class AsyncCausalityTracer
{
	[Token(Token = "0x1700020F")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static bool LoggingOn
	{
		[Token(Token = "0x6001545")]
		[Address(RVA = "0x554B4B0", Offset = "0x554A4B0", VA = "0x554B4B0")]
		[System.Runtime.CompilerServices.FriendAccessAllowed]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001546")]
	[Address(RVA = "0x554F280", Offset = "0x554E280", VA = "0x554F280")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static void TraceOperationCreation(System.Threading.Tasks.CausalityTraceLevel traceLevel, int taskId, string operationName, ulong relatedContext)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001547")]
	[Address(RVA = "0x554F290", Offset = "0x554E290", VA = "0x554F290")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static void TraceOperationCompletion(System.Threading.Tasks.CausalityTraceLevel traceLevel, int taskId, System.Threading.Tasks.AsyncCausalityStatus status)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001548")]
	[Address(RVA = "0x554F2A0", Offset = "0x554E2A0", VA = "0x554F2A0")]
	internal static void TraceSynchronousWorkStart(System.Threading.Tasks.CausalityTraceLevel traceLevel, int taskId, System.Threading.Tasks.CausalitySynchronousWork work)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001549")]
	[Address(RVA = "0x554B4C0", Offset = "0x554A4C0", VA = "0x554B4C0")]
	internal static void TraceSynchronousWorkCompletion(System.Threading.Tasks.CausalityTraceLevel traceLevel, System.Threading.Tasks.CausalitySynchronousWork work)
	{
	}
}
