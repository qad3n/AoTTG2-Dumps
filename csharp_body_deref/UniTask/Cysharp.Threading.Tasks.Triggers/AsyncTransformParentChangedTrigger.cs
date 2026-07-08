using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001EE")]
[DisallowMultipleComponent]
public sealed class AsyncTransformParentChangedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x46EDBB0", Offset = "0x46EDBB0", VA = "0x46EDBB0")]
	private void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x46EDC20", Offset = "0x46EDC20", VA = "0x46EDC20")]
	public IAsyncOnTransformParentChangedHandler GetOnTransformParentChangedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x46EDC90", Offset = "0x46EDC90", VA = "0x46EDC90")]
	public IAsyncOnTransformParentChangedHandler GetOnTransformParentChangedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BA8")]
	[Address(RVA = "0x46EDD00", Offset = "0x46EDD00", VA = "0x46EDD00")]
	public UniTask OnTransformParentChangedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x46EDDF0", Offset = "0x46EDDF0", VA = "0x46EDDF0")]
	public UniTask OnTransformParentChangedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x46EDEE0", Offset = "0x46EDEE0", VA = "0x46EDEE0")]
	public AsyncTransformParentChangedTrigger()
	{
	}
}
