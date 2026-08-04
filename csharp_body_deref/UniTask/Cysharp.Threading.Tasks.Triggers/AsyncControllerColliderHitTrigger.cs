// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncControllerColliderHitTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001B6")]
[DisallowMultipleComponent]
public sealed class AsyncControllerColliderHitTrigger : AsyncTriggerBase<ControllerColliderHit>
{
	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x4A0CBE0", Offset = "0x4A0CBE0", VA = "0x4A0CBE0")]
	private void OnControllerColliderHit(ControllerColliderHit hit)
	{
	}

	[Token(Token = "0x6000AE2")]
	[Address(RVA = "0x4A0CC30", Offset = "0x4A0CC30", VA = "0x4A0CC30")]
	public IAsyncOnControllerColliderHitHandler GetOnControllerColliderHitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x4A0CCA0", Offset = "0x4A0CCA0", VA = "0x4A0CCA0")]
	public IAsyncOnControllerColliderHitHandler GetOnControllerColliderHitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x4A0CD10", Offset = "0x4A0CD10", VA = "0x4A0CD10")]
	public UniTask<ControllerColliderHit> OnControllerColliderHitAsync()
	{
		return default(UniTask<ControllerColliderHit>);
	}

	[Token(Token = "0x6000AE5")]
	[Address(RVA = "0x4A0CE10", Offset = "0x4A0CE10", VA = "0x4A0CE10")]
	public UniTask<ControllerColliderHit> OnControllerColliderHitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<ControllerColliderHit>);
	}

	[Token(Token = "0x6000AE6")]
	[Address(RVA = "0x4A0CF20", Offset = "0x4A0CF20", VA = "0x4A0CF20")]
	public AsyncControllerColliderHitTrigger()
	{
	}
}
