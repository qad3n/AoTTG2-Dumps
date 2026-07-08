using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001B6")]
[DisallowMultipleComponent]
public sealed class AsyncControllerColliderHitTrigger : AsyncTriggerBase<ControllerColliderHit>
{
	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x46E7AE0", Offset = "0x46E7AE0", VA = "0x46E7AE0")]
	private void OnControllerColliderHit(ControllerColliderHit hit)
	{
	}

	[Token(Token = "0x6000AE2")]
	[Address(RVA = "0x46E7B30", Offset = "0x46E7B30", VA = "0x46E7B30")]
	public IAsyncOnControllerColliderHitHandler GetOnControllerColliderHitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x46E7BA0", Offset = "0x46E7BA0", VA = "0x46E7BA0")]
	public IAsyncOnControllerColliderHitHandler GetOnControllerColliderHitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x46E7C10", Offset = "0x46E7C10", VA = "0x46E7C10")]
	public UniTask<ControllerColliderHit> OnControllerColliderHitAsync()
	{
		return default(UniTask<ControllerColliderHit>);
	}

	[Token(Token = "0x6000AE5")]
	[Address(RVA = "0x46E7D10", Offset = "0x46E7D10", VA = "0x46E7D10")]
	public UniTask<ControllerColliderHit> OnControllerColliderHitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<ControllerColliderHit>);
	}

	[Token(Token = "0x6000AE6")]
	[Address(RVA = "0x46E7E20", Offset = "0x46E7E20", VA = "0x46E7E20")]
	public AsyncControllerColliderHitTrigger()
	{
	}
}
