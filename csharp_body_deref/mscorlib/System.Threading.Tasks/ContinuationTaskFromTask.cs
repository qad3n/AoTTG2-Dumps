// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.ContinuationTaskFromTask
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200024B")]
internal sealed class ContinuationTaskFromTask : Task
{
	[Token(Token = "0x4000AE3")]
	[FieldOffset(Offset = "0x50")]
	private Task m_antecedent;

	[Token(Token = "0x600149F")]
	[Address(RVA = "0x3D47060", Offset = "0x3D47060", VA = "0x3D47060")]
	public ContinuationTaskFromTask(Task antecedent, Delegate action, object state, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions)
	{
	}

	[Token(Token = "0x60014A0")]
	[Address(RVA = "0x3D4AE30", Offset = "0x3D4AE30", VA = "0x3D4AE30", Slot = "13")]
	internal override void InnerInvoke()
	{
	}
}
