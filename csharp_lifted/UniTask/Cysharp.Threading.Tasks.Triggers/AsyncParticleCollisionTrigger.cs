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
	[Address(RVA = "0x62FD940", Offset = "0x62FC940", VA = "0x62FD940")]
	private void OnParticleCollision(GameObject other)
	{
	}

	[Token(Token = "0x6000B6F")]
	[Address(RVA = "0x62FD990", Offset = "0x62FC990", VA = "0x62FD990")]
	public IAsyncOnParticleCollisionHandler GetOnParticleCollisionAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x62FDA00", Offset = "0x62FCA00", VA = "0x62FDA00")]
	public IAsyncOnParticleCollisionHandler GetOnParticleCollisionAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x62FDA70", Offset = "0x62FCA70", VA = "0x62FDA70")]
	public UniTask<GameObject> OnParticleCollisionAsync()
	{
		return default(UniTask<GameObject>);
	}

	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x62FDB70", Offset = "0x62FCB70", VA = "0x62FDB70")]
	public UniTask<GameObject> OnParticleCollisionAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<GameObject>);
	}

	[Token(Token = "0x6000B73")]
	[Address(RVA = "0x62FDC80", Offset = "0x62FCC80", VA = "0x62FDC80")]
	public AsyncParticleCollisionTrigger()
	{
	}
}
