// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncDrawGizmosTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001BA")]
[DisallowMultipleComponent]
public sealed class AsyncDrawGizmosTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x4A0D2D0", Offset = "0x4A0D2D0", VA = "0x4A0D2D0")]
	private void OnDrawGizmos()
	{
	}

	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x4A0D340", Offset = "0x4A0D340", VA = "0x4A0D340")]
	public IAsyncOnDrawGizmosHandler GetOnDrawGizmosAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AF1")]
	[Address(RVA = "0x4A0D3B0", Offset = "0x4A0D3B0", VA = "0x4A0D3B0")]
	public IAsyncOnDrawGizmosHandler GetOnDrawGizmosAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x4A0D420", Offset = "0x4A0D420", VA = "0x4A0D420")]
	public UniTask OnDrawGizmosAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x4A0D510", Offset = "0x4A0D510", VA = "0x4A0D510")]
	public UniTask OnDrawGizmosAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AF4")]
	[Address(RVA = "0x4A0D600", Offset = "0x4A0D600", VA = "0x4A0D600")]
	public AsyncDrawGizmosTrigger()
	{
	}
}
