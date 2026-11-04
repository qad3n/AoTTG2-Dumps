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
	[FieldOffset(Offset = "0x40")]
	private bool called;

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x2938A80", Offset = "0x2937080", VA = "0x182938A80")]
	private void Start()
	{
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x2938920", Offset = "0x2936F20", VA = "0x182938920")]
	public UniTask StartAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A0E")]
	[Address(RVA = "0x2938B00", Offset = "0x2937100", VA = "0x182938B00")]
	public AsyncStartTrigger()
	{
	}
}
