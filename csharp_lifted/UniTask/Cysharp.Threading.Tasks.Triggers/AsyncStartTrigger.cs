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

[Token(Token = "0x200018E")]
[DisallowMultipleComponent]
public sealed class AsyncStartTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x4000639")]
	[FieldOffset(Offset = "0x3A")]
	private bool called;

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x62F66F0", Offset = "0x62F56F0", VA = "0x62F66F0")]
	private void Start()
	{
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x62F3680", Offset = "0x62F2680", VA = "0x62F3680")]
	public UniTask StartAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A0E")]
	[Address(RVA = "0x62F6770", Offset = "0x62F5770", VA = "0x62F6770")]
	public AsyncStartTrigger()
	{
	}
}
