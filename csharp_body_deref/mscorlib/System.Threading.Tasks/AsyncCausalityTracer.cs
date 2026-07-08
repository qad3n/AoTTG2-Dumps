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
		[Address(RVA = "0x5064590", Offset = "0x5064590", VA = "0x5064590")]
		[System.Runtime.CompilerServices.FriendAccessAllowed]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001503")]
	[Address(RVA = "0x5068A80", Offset = "0x5068A80", VA = "0x5068A80")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static void TraceOperationCreation(System.Threading.Tasks.CausalityTraceLevel traceLevel, int taskId, string operationName, ulong relatedContext)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001504")]
	[Address(RVA = "0x5068A90", Offset = "0x5068A90", VA = "0x5068A90")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static void TraceOperationCompletion(System.Threading.Tasks.CausalityTraceLevel traceLevel, int taskId, System.Threading.Tasks.AsyncCausalityStatus status)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001505")]
	[Address(RVA = "0x5068AA0", Offset = "0x5068AA0", VA = "0x5068AA0")]
	internal static void TraceSynchronousWorkStart(System.Threading.Tasks.CausalityTraceLevel traceLevel, int taskId, System.Threading.Tasks.CausalitySynchronousWork work)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001506")]
	[Address(RVA = "0x50645A0", Offset = "0x50645A0", VA = "0x50645A0")]
	internal static void TraceSynchronousWorkCompletion(System.Threading.Tasks.CausalityTraceLevel traceLevel, System.Threading.Tasks.CausalitySynchronousWork work)
	{
	}
}
