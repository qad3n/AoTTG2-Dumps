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
	[Address(RVA = "0x292C0E0", Offset = "0x292A6E0", VA = "0x18292C0E0")]
	private void OnControllerColliderHit(ControllerColliderHit hit)
	{
	}

	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x292BDC0", Offset = "0x292A3C0", VA = "0x18292BDC0")]
	public IAsyncOnControllerColliderHitHandler GetOnControllerColliderHitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B07")]
	[Address(RVA = "0x292BE30", Offset = "0x292A430", VA = "0x18292BE30")]
	public IAsyncOnControllerColliderHitHandler GetOnControllerColliderHitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x292BFC0", Offset = "0x292A5C0", VA = "0x18292BFC0")]
	public UniTask<ControllerColliderHit> OnControllerColliderHitAsync()
	{
		return default(UniTask<ControllerColliderHit>);
	}

	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x292BEB0", Offset = "0x292A4B0", VA = "0x18292BEB0")]
	public UniTask<ControllerColliderHit> OnControllerColliderHitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<ControllerColliderHit>);
	}

	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x292C130", Offset = "0x292A730", VA = "0x18292C130")]
	public AsyncControllerColliderHitTrigger()
	{
	}
}
