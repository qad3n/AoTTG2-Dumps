// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncStartTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200018B")]
[DisallowMultipleComponent]
public sealed class AsyncStartTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x4000626")]
	[FieldOffset(Offset = "0x3A")]
	private bool called;

	[Token(Token = "0x60009E8")]
	[Address(RVA = "0x4A08D20", Offset = "0x4A08D20", VA = "0x4A08D20")]
	private void Start()
	{
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x4A05CB0", Offset = "0x4A05CB0", VA = "0x4A05CB0")]
	public UniTask StartAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x60009EA")]
	[Address(RVA = "0x4A08DA0", Offset = "0x4A08DA0", VA = "0x4A08DA0")]
	public AsyncStartTrigger()
	{
	}
}
