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

[Token(Token = "0x20001D7")]
[DisallowMultipleComponent]
public sealed class AsyncParticleCollisionTrigger : AsyncTriggerBase<GameObject>
{
	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x29340F0", Offset = "0x29326F0", VA = "0x1829340F0")]
	private void OnParticleCollision(GameObject other)
	{
	}

	[Token(Token = "0x6000B6F")]
	[Address(RVA = "0x2933DD0", Offset = "0x29323D0", VA = "0x182933DD0")]
	public IAsyncOnParticleCollisionHandler GetOnParticleCollisionAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x2933E40", Offset = "0x2932440", VA = "0x182933E40")]
	public IAsyncOnParticleCollisionHandler GetOnParticleCollisionAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x2933EC0", Offset = "0x29324C0", VA = "0x182933EC0")]
	public UniTask<GameObject> OnParticleCollisionAsync()
	{
		return default(UniTask<GameObject>);
	}

	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x2933FE0", Offset = "0x29325E0", VA = "0x182933FE0")]
	public UniTask<GameObject> OnParticleCollisionAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<GameObject>);
	}

	[Token(Token = "0x6000B73")]
	[Address(RVA = "0x2934140", Offset = "0x2932740", VA = "0x182934140")]
	public AsyncParticleCollisionTrigger()
	{
	}
}
