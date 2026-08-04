// ==================== AoTTG2 cross-reference ====================
// Type: Internal.Runtime.Augments.TaskTraceCallbacks
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Internal.Runtime.Augments;

[Token(Token = "0x2000061")]
internal abstract class TaskTraceCallbacks
{
	[Token(Token = "0x1700003A")]
	public abstract bool Enabled
	{
		[Token(Token = "0x6000225")]
		get;
	}

	[Token(Token = "0x6000226")]
	public abstract void TaskWaitBegin_Asynchronous(int OriginatingTaskSchedulerID, int OriginatingTaskID, int TaskID);

	[Token(Token = "0x6000227")]
	public abstract void TaskWaitBegin_Synchronous(int OriginatingTaskSchedulerID, int OriginatingTaskID, int TaskID);

	[Token(Token = "0x6000228")]
	public abstract void TaskWaitEnd(int OriginatingTaskSchedulerID, int OriginatingTaskID, int TaskID);

	[Token(Token = "0x6000229")]
	public abstract void TaskScheduled(int OriginatingTaskSchedulerID, int OriginatingTaskID, int TaskID, int CreatingTaskID, int TaskCreationOptions);
}
