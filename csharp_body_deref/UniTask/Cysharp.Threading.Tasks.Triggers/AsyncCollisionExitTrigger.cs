// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncCollisionExitTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001AE")]
[DisallowMultipleComponent]
public sealed class AsyncCollisionExitTrigger : AsyncTriggerBase<Collision>
{
	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x4A0BDE0", Offset = "0x4A0BDE0", VA = "0x4A0BDE0")]
	private void OnCollisionExit(Collision coll)
	{
	}

	[Token(Token = "0x6000AC6")]
	[Address(RVA = "0x4A0BE30", Offset = "0x4A0BE30", VA = "0x4A0BE30")]
	public IAsyncOnCollisionExitHandler GetOnCollisionExitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AC7")]
	[Address(RVA = "0x4A0BEA0", Offset = "0x4A0BEA0", VA = "0x4A0BEA0")]
	public IAsyncOnCollisionExitHandler GetOnCollisionExitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AC8")]
	[Address(RVA = "0x4A0BF10", Offset = "0x4A0BF10", VA = "0x4A0BF10")]
	public UniTask<Collision> OnCollisionExitAsync()
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000AC9")]
	[Address(RVA = "0x4A0C010", Offset = "0x4A0C010", VA = "0x4A0C010")]
	public UniTask<Collision> OnCollisionExitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000ACA")]
	[Address(RVA = "0x4A0C120", Offset = "0x4A0C120", VA = "0x4A0C120")]
	public AsyncCollisionExitTrigger()
	{
	}
}
