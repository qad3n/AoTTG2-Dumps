// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncParticleCollisionTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001D4")]
[DisallowMultipleComponent]
public sealed class AsyncParticleCollisionTrigger : AsyncTriggerBase<GameObject>
{
	[Token(Token = "0x6000B4A")]
	[Address(RVA = "0x4A0FF70", Offset = "0x4A0FF70", VA = "0x4A0FF70")]
	private void OnParticleCollision(GameObject other)
	{
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x4A0FFC0", Offset = "0x4A0FFC0", VA = "0x4A0FFC0")]
	public IAsyncOnParticleCollisionHandler GetOnParticleCollisionAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x4A10030", Offset = "0x4A10030", VA = "0x4A10030")]
	public IAsyncOnParticleCollisionHandler GetOnParticleCollisionAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x4A100A0", Offset = "0x4A100A0", VA = "0x4A100A0")]
	public UniTask<GameObject> OnParticleCollisionAsync()
	{
		return default(UniTask<GameObject>);
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x4A101A0", Offset = "0x4A101A0", VA = "0x4A101A0")]
	public UniTask<GameObject> OnParticleCollisionAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<GameObject>);
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x4A102B0", Offset = "0x4A102B0", VA = "0x4A102B0")]
	public AsyncParticleCollisionTrigger()
	{
	}
}
