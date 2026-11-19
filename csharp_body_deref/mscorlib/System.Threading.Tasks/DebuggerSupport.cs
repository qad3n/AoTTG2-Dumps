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

[Token(Token = "0x200023B")]
internal static class DebuggerSupport
{
	[Token(Token = "0x4000A23")]
	[FieldOffset(Offset = "0x0")]
	private static readonly System.Collections.Generic.LowLevelDictionary<int, Task> s_activeTasks;

	[Token(Token = "0x4000A24")]
	[FieldOffset(Offset = "0x8")]
	private static readonly object s_activeTasksLock;

	[Token(Token = "0x170001E3")]
	public static bool LoggingOn
	{
		[Token(Token = "0x6001403")]
		[Address(RVA = "0x5542570", Offset = "0x5541570", VA = "0x5542570")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001404")]
	[Address(RVA = "0x5542580", Offset = "0x5541580", VA = "0x5542580")]
	public static void TraceOperationCreation(System.Threading.Tasks.CausalityTraceLevel traceLevel, Task task, string operationName, ulong relatedContext)
	{
	}

	[Token(Token = "0x6001405")]
	[Address(RVA = "0x5542590", Offset = "0x5541590", VA = "0x5542590")]
	public static void TraceOperationCompletion(System.Threading.Tasks.CausalityTraceLevel traceLevel, Task task, Internal.Runtime.Augments.AsyncStatus status)
	{
	}

	[Token(Token = "0x6001406")]
	[Address(RVA = "0x55425A0", Offset = "0x55415A0", VA = "0x55425A0")]
	public static void TraceOperationRelation(System.Threading.Tasks.CausalityTraceLevel traceLevel, Task task, System.Threading.Tasks.CausalityRelation relation)
	{
	}

	[Token(Token = "0x6001407")]
	[Address(RVA = "0x55425B0", Offset = "0x55415B0", VA = "0x55425B0")]
	public static void TraceSynchronousWorkStart(System.Threading.Tasks.CausalityTraceLevel traceLevel, Task task, System.Threading.Tasks.CausalitySynchronousWork work)
	{
	}

	[Token(Token = "0x6001408")]
	[Address(RVA = "0x55425C0", Offset = "0x55415C0", VA = "0x55425C0")]
	public static void TraceSynchronousWorkCompletion(System.Threading.Tasks.CausalityTraceLevel traceLevel, System.Threading.Tasks.CausalitySynchronousWork work)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001409")]
	[Address(RVA = "0x55425D0", Offset = "0x55415D0", VA = "0x55425D0")]
	public static void AddToActiveTasks(Task task)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600140A")]
	[Address(RVA = "0x5542680", Offset = "0x5541680", VA = "0x5542680")]
	private static void AddToActiveTasksNonInlined(Task task)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600140B")]
	[Address(RVA = "0x5542860", Offset = "0x5541860", VA = "0x5542860")]
	public static void RemoveFromActiveTasks(Task task)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600140C")]
	[Address(RVA = "0x5542910", Offset = "0x5541910", VA = "0x5542910")]
	private static void RemoveFromActiveTasksNonInlined(Task task)
	{
	}
}
