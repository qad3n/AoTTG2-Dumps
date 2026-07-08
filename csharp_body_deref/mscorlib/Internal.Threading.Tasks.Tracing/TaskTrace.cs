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
		[Address(RVA = "0x4E0D7A0", Offset = "0x4E0D7A0", VA = "0x4E0D7A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x4E0D7F0", Offset = "0x4E0D7F0", VA = "0x4E0D7F0")]
	public static void TaskWaitBegin_Asynchronous(int OriginatingTaskSchedulerID, int OriginatingTaskID, int TaskID)
	{
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x4E0D860", Offset = "0x4E0D860", VA = "0x4E0D860")]
	public static void TaskWaitBegin_Synchronous(int OriginatingTaskSchedulerID, int OriginatingTaskID, int TaskID)
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x4E0D8D0", Offset = "0x4E0D8D0", VA = "0x4E0D8D0")]
	public static void TaskWaitEnd(int OriginatingTaskSchedulerID, int OriginatingTaskID, int TaskID)
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x4E0D940", Offset = "0x4E0D940", VA = "0x4E0D940")]
	public static void TaskScheduled(int OriginatingTaskSchedulerID, int OriginatingTaskID, int TaskID, int CreatingTaskID, int TaskCreationOptions)
	{
	}
}
