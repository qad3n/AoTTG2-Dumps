// ==================== AoTTG2 cross-reference ====================
// Type: Internal.Threading.Tasks.Tracing.TaskTrace
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Internal.Runtime.Augments;

namespace Internal.Threading.Tasks.Tracing;

[Token(Token = "0x2000088")]
internal static class TaskTrace
{
	[Token(Token = "0x400023E")]
	[FieldOffset(Offset = "0x0")]
	private static Internal.Runtime.Augments.TaskTraceCallbacks s_callbacks;

	[Token(Token = "0x17000039")]
	public static bool Enabled
	{
		[Token(Token = "0x600025F")]
		[Address(RVA = "0x1975930", Offset = "0x1973F30", VA = "0x181975930")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x19757B0", Offset = "0x1973DB0", VA = "0x1819757B0")]
	public static void TaskWaitBegin_Asynchronous(int OriginatingTaskSchedulerID, int OriginatingTaskID, int TaskID)
	{
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x1975830", Offset = "0x1973E30", VA = "0x181975830")]
	public static void TaskWaitBegin_Synchronous(int OriginatingTaskSchedulerID, int OriginatingTaskID, int TaskID)
	{
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x19758B0", Offset = "0x1973EB0", VA = "0x1819758B0")]
	public static void TaskWaitEnd(int OriginatingTaskSchedulerID, int OriginatingTaskID, int TaskID)
	{
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x1975730", Offset = "0x1973D30", VA = "0x181975730")]
	public static void TaskScheduled(int OriginatingTaskSchedulerID, int OriginatingTaskID, int TaskID, int CreatingTaskID, int TaskCreationOptions)
	{
	}
}
