// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.DebuggerSupport
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Internal.Runtime.Augments;

namespace System.Threading.Tasks;

[Token(Token = "0x2000263")]
internal static class DebuggerSupport
{
	[Token(Token = "0x4000AC5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly System.Collections.Generic.LowLevelDictionary<int, Task> s_activeTasks;

	[Token(Token = "0x4000AC6")]
	[FieldOffset(Offset = "0x8")]
	private static readonly object s_activeTasksLock;

	[Token(Token = "0x170001E4")]
	public static bool LoggingOn
	{
		[Token(Token = "0x600142C")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600142D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public static void TraceOperationCreation(System.Threading.Tasks.CausalityTraceLevel traceLevel, Task task, string operationName, ulong relatedContext)
	{
	}

	[Token(Token = "0x600142E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public static void TraceOperationCompletion(System.Threading.Tasks.CausalityTraceLevel traceLevel, Task task, Internal.Runtime.Augments.AsyncStatus status)
	{
	}

	[Token(Token = "0x600142F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public static void TraceOperationRelation(System.Threading.Tasks.CausalityTraceLevel traceLevel, Task task, System.Threading.Tasks.CausalityRelation relation)
	{
	}

	[Token(Token = "0x6001430")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public static void TraceSynchronousWorkStart(System.Threading.Tasks.CausalityTraceLevel traceLevel, Task task, System.Threading.Tasks.CausalitySynchronousWork work)
	{
	}

	[Token(Token = "0x6001431")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public static void TraceSynchronousWorkCompletion(System.Threading.Tasks.CausalityTraceLevel traceLevel, System.Threading.Tasks.CausalitySynchronousWork work)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001432")]
	[Address(RVA = "0x1BAD840", Offset = "0x1BABE40", VA = "0x181BAD840")]
	public static void AddToActiveTasks(Task task)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001433")]
	[Address(RVA = "0x1BAD690", Offset = "0x1BABC90", VA = "0x181BAD690")]
	private static void AddToActiveTasksNonInlined(Task task)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001434")]
	[Address(RVA = "0x1BADA70", Offset = "0x1BAC070", VA = "0x181BADA70")]
	public static void RemoveFromActiveTasks(Task task)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001435")]
	[Address(RVA = "0x1BAD8D0", Offset = "0x1BABED0", VA = "0x181BAD8D0")]
	private static void RemoveFromActiveTasksNonInlined(Task task)
	{
	}
}
