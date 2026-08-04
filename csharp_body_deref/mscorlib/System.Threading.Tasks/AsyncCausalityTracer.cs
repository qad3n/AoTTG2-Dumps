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

[Token(Token = "0x2000263")]
[System.Runtime.CompilerServices.FriendAccessAllowed]
internal static class AsyncCausalityTracer
{
	[Token(Token = "0x1700020E")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static bool LoggingOn
	{
		[Token(Token = "0x6001502")]
		[Address(RVA = "0x3D4A0B0", Offset = "0x3D4A0B0", VA = "0x3D4A0B0")]
		[System.Runtime.CompilerServices.FriendAccessAllowed]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001503")]
	[Address(RVA = "0x3D4E5A0", Offset = "0x3D4E5A0", VA = "0x3D4E5A0")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static void TraceOperationCreation(System.Threading.Tasks.CausalityTraceLevel traceLevel, int taskId, string operationName, ulong relatedContext)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001504")]
	[Address(RVA = "0x3D4E5B0", Offset = "0x3D4E5B0", VA = "0x3D4E5B0")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static void TraceOperationCompletion(System.Threading.Tasks.CausalityTraceLevel traceLevel, int taskId, System.Threading.Tasks.AsyncCausalityStatus status)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001505")]
	[Address(RVA = "0x3D4E5C0", Offset = "0x3D4E5C0", VA = "0x3D4E5C0")]
	internal static void TraceSynchronousWorkStart(System.Threading.Tasks.CausalityTraceLevel traceLevel, int taskId, System.Threading.Tasks.CausalitySynchronousWork work)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001506")]
	[Address(RVA = "0x3D4A0C0", Offset = "0x3D4A0C0", VA = "0x3D4A0C0")]
	internal static void TraceSynchronousWorkCompletion(System.Threading.Tasks.CausalityTraceLevel traceLevel, System.Threading.Tasks.CausalitySynchronousWork work)
	{
	}
}
