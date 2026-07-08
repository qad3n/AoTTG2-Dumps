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
	[Address(RVA = "0x46E3C20", Offset = "0x46E3C20", VA = "0x46E3C20")]
	private void Start()
	{
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x46E0BB0", Offset = "0x46E0BB0", VA = "0x46E0BB0")]
	public UniTask StartAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x60009EA")]
	[Address(RVA = "0x46E3CA0", Offset = "0x46E3CA0", VA = "0x46E3CA0")]
	public AsyncStartTrigger()
	{
	}
}
