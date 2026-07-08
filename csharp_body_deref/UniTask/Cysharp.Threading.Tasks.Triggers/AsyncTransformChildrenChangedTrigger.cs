using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001EC")]
[DisallowMultipleComponent]
public sealed class AsyncTransformChildrenChangedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x46ED840", Offset = "0x46ED840", VA = "0x46ED840")]
	private void OnTransformChildrenChanged()
	{
	}

	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x46ED8B0", Offset = "0x46ED8B0", VA = "0x46ED8B0")]
	public IAsyncOnTransformChildrenChangedHandler GetOnTransformChildrenChangedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x46ED920", Offset = "0x46ED920", VA = "0x46ED920")]
	public IAsyncOnTransformChildrenChangedHandler GetOnTransformChildrenChangedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BA1")]
	[Address(RVA = "0x46ED990", Offset = "0x46ED990", VA = "0x46ED990")]
	public UniTask OnTransformChildrenChangedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x46EDA80", Offset = "0x46EDA80", VA = "0x46EDA80")]
	public UniTask OnTransformChildrenChangedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x46EDB70", Offset = "0x46EDB70", VA = "0x46EDB70")]
	public AsyncTransformChildrenChangedTrigger()
	{
	}
}
