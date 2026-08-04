// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncCollisionStayTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001B2")]
[DisallowMultipleComponent]
public sealed class AsyncCollisionStayTrigger : AsyncTriggerBase<Collision>
{
	[Token(Token = "0x6000AD3")]
	[Address(RVA = "0x4A0C4E0", Offset = "0x4A0C4E0", VA = "0x4A0C4E0")]
	private void OnCollisionStay(Collision coll)
	{
	}

	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x4A0C530", Offset = "0x4A0C530", VA = "0x4A0C530")]
	public IAsyncOnCollisionStayHandler GetOnCollisionStayAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x4A0C5A0", Offset = "0x4A0C5A0", VA = "0x4A0C5A0")]
	public IAsyncOnCollisionStayHandler GetOnCollisionStayAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x4A0C610", Offset = "0x4A0C610", VA = "0x4A0C610")]
	public UniTask<Collision> OnCollisionStayAsync()
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x4A0C710", Offset = "0x4A0C710", VA = "0x4A0C710")]
	public UniTask<Collision> OnCollisionStayAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000AD8")]
	[Address(RVA = "0x4A0C820", Offset = "0x4A0C820", VA = "0x4A0C820")]
	public AsyncCollisionStayTrigger()
	{
	}
}
