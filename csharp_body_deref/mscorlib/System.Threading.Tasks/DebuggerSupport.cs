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
		[Address(RVA = "0x3D3FE10", Offset = "0x3D3FE10", VA = "0x3D3FE10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60013BC")]
	[Address(RVA = "0x3D3FE20", Offset = "0x3D3FE20", VA = "0x3D3FE20")]
	public static void TraceOperationCreation(System.Threading.Tasks.CausalityTraceLevel traceLevel, Task task, string operationName, ulong relatedContext)
	{
	}

	[Token(Token = "0x60013BD")]
	[Address(RVA = "0x3D3FE30", Offset = "0x3D3FE30", VA = "0x3D3FE30")]
	public static void TraceOperationCompletion(System.Threading.Tasks.CausalityTraceLevel traceLevel, Task task, Internal.Runtime.Augments.AsyncStatus status)
	{
	}

	[Token(Token = "0x60013BE")]
	[Address(RVA = "0x3D3FE40", Offset = "0x3D3FE40", VA = "0x3D3FE40")]
	public static void TraceOperationRelation(System.Threading.Tasks.CausalityTraceLevel traceLevel, Task task, System.Threading.Tasks.CausalityRelation relation)
	{
	}

	[Token(Token = "0x60013BF")]
	[Address(RVA = "0x3D3FE50", Offset = "0x3D3FE50", VA = "0x3D3FE50")]
	public static void TraceSynchronousWorkStart(System.Threading.Tasks.CausalityTraceLevel traceLevel, Task task, System.Threading.Tasks.CausalitySynchronousWork work)
	{
	}

	[Token(Token = "0x60013C0")]
	[Address(RVA = "0x3D3FE60", Offset = "0x3D3FE60", VA = "0x3D3FE60")]
	public static void TraceSynchronousWorkCompletion(System.Threading.Tasks.CausalityTraceLevel traceLevel, System.Threading.Tasks.CausalitySynchronousWork work)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013C1")]
	[Address(RVA = "0x3D3FE70", Offset = "0x3D3FE70", VA = "0x3D3FE70")]
	public static void AddToActiveTasks(Task task)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60013C2")]
	[Address(RVA = "0x3D3FF20", Offset = "0x3D3FF20", VA = "0x3D3FF20")]
	private static void AddToActiveTasksNonInlined(Task task)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013C3")]
	[Address(RVA = "0x3D40130", Offset = "0x3D40130", VA = "0x3D40130")]
	public static void RemoveFromActiveTasks(Task task)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60013C4")]
	[Address(RVA = "0x3D401E0", Offset = "0x3D401E0", VA = "0x3D401E0")]
	private static void RemoveFromActiveTasksNonInlined(Task task)
	{
	}
}
