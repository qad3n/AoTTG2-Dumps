// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncCollisionEnterTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001AA")]
[DisallowMultipleComponent]
public sealed class AsyncCollisionEnterTrigger : AsyncTriggerBase<Collision>
{
	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x4A0B6E0", Offset = "0x4A0B6E0", VA = "0x4A0B6E0")]
	private void OnCollisionEnter(Collision coll)
	{
	}

	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x4A0B730", Offset = "0x4A0B730", VA = "0x4A0B730")]
	public IAsyncOnCollisionEnterHandler GetOnCollisionEnterAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x4A0B7A0", Offset = "0x4A0B7A0", VA = "0x4A0B7A0")]
	public IAsyncOnCollisionEnterHandler GetOnCollisionEnterAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x4A0B810", Offset = "0x4A0B810", VA = "0x4A0B810")]
	public UniTask<Collision> OnCollisionEnterAsync()
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000ABB")]
	[Address(RVA = "0x4A0B910", Offset = "0x4A0B910", VA = "0x4A0B910")]
	public UniTask<Collision> OnCollisionEnterAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x4A0BA20", Offset = "0x4A0BA20", VA = "0x4A0BA20")]
	public AsyncCollisionEnterTrigger()
	{
	}
}
