// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncAwakeTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200018A")]
[DisallowMultipleComponent]
public sealed class AsyncAwakeTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x2929360", Offset = "0x2927960", VA = "0x182929360")]
	public UniTask AwakeAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A01")]
	[Address(RVA = "0x29294C0", Offset = "0x2927AC0", VA = "0x1829294C0")]
	public AsyncAwakeTrigger()
	{
	}
}
