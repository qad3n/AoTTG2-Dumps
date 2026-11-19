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

[Token(Token = "0x20001B9")]
[DisallowMultipleComponent]
public sealed class AsyncControllerColliderHitTrigger : AsyncTriggerBase<ControllerColliderHit>
{
	[Token(Token = "0x6000B05")]
	[Address(RVA = "0x62FA5B0", Offset = "0x62F95B0", VA = "0x62FA5B0")]
	private void OnControllerColliderHit(ControllerColliderHit hit)
	{
	}

	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x62FA600", Offset = "0x62F9600", VA = "0x62FA600")]
	public IAsyncOnControllerColliderHitHandler GetOnControllerColliderHitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B07")]
	[Address(RVA = "0x62FA670", Offset = "0x62F9670", VA = "0x62FA670")]
	public IAsyncOnControllerColliderHitHandler GetOnControllerColliderHitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x62FA6E0", Offset = "0x62F96E0", VA = "0x62FA6E0")]
	public UniTask<ControllerColliderHit> OnControllerColliderHitAsync()
	{
		return default(UniTask<ControllerColliderHit>);
	}

	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x62FA7E0", Offset = "0x62F97E0", VA = "0x62FA7E0")]
	public UniTask<ControllerColliderHit> OnControllerColliderHitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<ControllerColliderHit>);
	}

	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x62FA8F0", Offset = "0x62F98F0", VA = "0x62FA8F0")]
	public AsyncControllerColliderHitTrigger()
	{
	}
}
