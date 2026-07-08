using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001B2")]
[DisallowMultipleComponent]
public sealed class AsyncCollisionStayTrigger : AsyncTriggerBase<Collision>
{
	[Token(Token = "0x6000AD3")]
	[Address(RVA = "0x46E73E0", Offset = "0x46E73E0", VA = "0x46E73E0")]
	private void OnCollisionStay(Collision coll)
	{
	}

	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x46E7430", Offset = "0x46E7430", VA = "0x46E7430")]
	public IAsyncOnCollisionStayHandler GetOnCollisionStayAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x46E74A0", Offset = "0x46E74A0", VA = "0x46E74A0")]
	public IAsyncOnCollisionStayHandler GetOnCollisionStayAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x46E7510", Offset = "0x46E7510", VA = "0x46E7510")]
	public UniTask<Collision> OnCollisionStayAsync()
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x46E7610", Offset = "0x46E7610", VA = "0x46E7610")]
	public UniTask<Collision> OnCollisionStayAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000AD8")]
	[Address(RVA = "0x46E7720", Offset = "0x46E7720", VA = "0x46E7720")]
	public AsyncCollisionStayTrigger()
	{
	}
}
