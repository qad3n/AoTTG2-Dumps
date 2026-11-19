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
		[Token(Token = "0x6000222")]
		[Address(RVA = "0x52FE0B0", Offset = "0x52FD0B0", VA = "0x52FE0B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x52FE100", Offset = "0x52FD100", VA = "0x52FE100")]
	public static void TaskWaitBegin_Asynchronous(int OriginatingTaskSchedulerID, int OriginatingTaskID, int TaskID)
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x52FE170", Offset = "0x52FD170", VA = "0x52FE170")]
	public static void TaskWaitBegin_Synchronous(int OriginatingTaskSchedulerID, int OriginatingTaskID, int TaskID)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x52FE1E0", Offset = "0x52FD1E0", VA = "0x52FE1E0")]
	public static void TaskWaitEnd(int OriginatingTaskSchedulerID, int OriginatingTaskID, int TaskID)
	{
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x52FE250", Offset = "0x52FD250", VA = "0x52FE250")]
	public static void TaskScheduled(int OriginatingTaskSchedulerID, int OriginatingTaskID, int TaskID, int CreatingTaskID, int TaskCreationOptions)
	{
	}
}
