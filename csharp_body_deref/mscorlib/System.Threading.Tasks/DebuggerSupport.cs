using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Internal.Runtime.Augments;

namespace System.Threading.Tasks;

[Token(Token = "0x2000232")]
internal static class DebuggerSupport
{
	[Token(Token = "0x4000A68")]
	[FieldOffset(Offset = "0x0")]
	private static readonly System.Collections.Generic.LowLevelDictionary<int, Task> s_activeTasks;

	[Token(Token = "0x4000A69")]
	[FieldOffset(Offset = "0x8")]
	private static readonly object s_activeTasksLock;

	[Token(Token = "0x170001E0")]
	public static bool LoggingOn
	{
		[Token(Token = "0x60013BB")]
		[Address(RVA = "0x505A2F0", Offset = "0x505A2F0", VA = "0x505A2F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60013BC")]
	[Address(RVA = "0x505A300", Offset = "0x505A300", VA = "0x505A300")]
	public static void TraceOperationCreation(System.Threading.Tasks.CausalityTraceLevel traceLevel, Task task, string operationName, ulong relatedContext)
	{
	}

	[Token(Token = "0x60013BD")]
	[Address(RVA = "0x505A310", Offset = "0x505A310", VA = "0x505A310")]
	public static void TraceOperationCompletion(System.Threading.Tasks.CausalityTraceLevel traceLevel, Task task, Internal.Runtime.Augments.AsyncStatus status)
	{
	}

	[Token(Token = "0x60013BE")]
	[Address(RVA = "0x505A320", Offset = "0x505A320", VA = "0x505A320")]
	public static void TraceOperationRelation(System.Threading.Tasks.CausalityTraceLevel traceLevel, Task task, System.Threading.Tasks.CausalityRelation relation)
	{
	}

	[Token(Token = "0x60013BF")]
	[Address(RVA = "0x505A330", Offset = "0x505A330", VA = "0x505A330")]
	public static void TraceSynchronousWorkStart(System.Threading.Tasks.CausalityTraceLevel traceLevel, Task task, System.Threading.Tasks.CausalitySynchronousWork work)
	{
	}

	[Token(Token = "0x60013C0")]
	[Address(RVA = "0x505A340", Offset = "0x505A340", VA = "0x505A340")]
	public static void TraceSynchronousWorkCompletion(System.Threading.Tasks.CausalityTraceLevel traceLevel, System.Threading.Tasks.CausalitySynchronousWork work)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013C1")]
	[Address(RVA = "0x505A350", Offset = "0x505A350", VA = "0x505A350")]
	public static void AddToActiveTasks(Task task)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60013C2")]
	[Address(RVA = "0x505A400", Offset = "0x505A400", VA = "0x505A400")]
	private static void AddToActiveTasksNonInlined(Task task)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013C3")]
	[Address(RVA = "0x505A610", Offset = "0x505A610", VA = "0x505A610")]
	public static void RemoveFromActiveTasks(Task task)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60013C4")]
	[Address(RVA = "0x505A6C0", Offset = "0x505A6C0", VA = "0x505A6C0")]
	private static void RemoveFromActiveTasksNonInlined(Task task)
	{
	}
}
