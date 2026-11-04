// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskStatus
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200026B")]
public enum TaskStatus
{
	[Token(Token = "0x4000ADA")]
	Created,
	[Token(Token = "0x4000ADB")]
	WaitingForActivation,
	[Token(Token = "0x4000ADC")]
	WaitingToRun,
	[Token(Token = "0x4000ADD")]
	Running,
	[Token(Token = "0x4000ADE")]
	WaitingForChildrenToComplete,
	[Token(Token = "0x4000ADF")]
	RanToCompletion,
	[Token(Token = "0x4000AE0")]
	Canceled,
	[Token(Token = "0x4000AE1")]
	Faulted
}
