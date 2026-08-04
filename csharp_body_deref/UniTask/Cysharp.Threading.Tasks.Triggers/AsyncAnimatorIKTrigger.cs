// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncAnimatorIKTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000196")]
[DisallowMultipleComponent]
public sealed class AsyncAnimatorIKTrigger : AsyncTriggerBase<int>
{
	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x4A094C0", Offset = "0x4A094C0", VA = "0x4A094C0")]
	private void OnAnimatorIK(int layerIndex)
	{
	}

	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x4A09500", Offset = "0x4A09500", VA = "0x4A09500")]
	public IAsyncOnAnimatorIKHandler GetOnAnimatorIKAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A73")]
	[Address(RVA = "0x4A09570", Offset = "0x4A09570", VA = "0x4A09570")]
	public IAsyncOnAnimatorIKHandler GetOnAnimatorIKAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x4A095E0", Offset = "0x4A095E0", VA = "0x4A095E0")]
	public UniTask<int> OnAnimatorIKAsync()
	{
		return default(UniTask<int>);
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x4A096D0", Offset = "0x4A096D0", VA = "0x4A096D0")]
	public UniTask<int> OnAnimatorIKAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<int>);
	}

	[Token(Token = "0x6000A76")]
	[Address(RVA = "0x4A097C0", Offset = "0x4A097C0", VA = "0x4A097C0")]
	public AsyncAnimatorIKTrigger()
	{
	}
}
