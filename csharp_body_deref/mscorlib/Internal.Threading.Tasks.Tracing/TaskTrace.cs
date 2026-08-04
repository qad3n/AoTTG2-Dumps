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

[Token(Token = "0x200005F")]
internal static class TaskTrace
{
	[Token(Token = "0x400018F")]
	[FieldOffset(Offset = "0x0")]
	private static Internal.Runtime.Augments.TaskTraceCallbacks s_callbacks;

	[Token(Token = "0x17000039")]
	public static bool Enabled
	{
		[Token(Token = "0x6000220")]
		[Address(RVA = "0x3AF32C0", Offset = "0x3AF32C0", VA = "0x3AF32C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x3AF3310", Offset = "0x3AF3310", VA = "0x3AF3310")]
	public static void TaskWaitBegin_Asynchronous(int OriginatingTaskSchedulerID, int OriginatingTaskID, int TaskID)
	{
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x3AF3380", Offset = "0x3AF3380", VA = "0x3AF3380")]
	public static void TaskWaitBegin_Synchronous(int OriginatingTaskSchedulerID, int OriginatingTaskID, int TaskID)
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x3AF33F0", Offset = "0x3AF33F0", VA = "0x3AF33F0")]
	public static void TaskWaitEnd(int OriginatingTaskSchedulerID, int OriginatingTaskID, int TaskID)
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x3AF3460", Offset = "0x3AF3460", VA = "0x3AF3460")]
	public static void TaskScheduled(int OriginatingTaskSchedulerID, int OriginatingTaskID, int TaskID, int CreatingTaskID, int TaskCreationOptions)
	{
	}
}
