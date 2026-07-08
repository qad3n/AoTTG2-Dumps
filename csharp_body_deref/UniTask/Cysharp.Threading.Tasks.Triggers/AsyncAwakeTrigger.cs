using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000187")]
[DisallowMultipleComponent]
public sealed class AsyncAwakeTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x46E0D90", Offset = "0x46E0D90", VA = "0x46E0D90")]
	public UniTask AwakeAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x46E38C0", Offset = "0x46E38C0", VA = "0x46E38C0")]
	public AsyncAwakeTrigger()
	{
	}
}
