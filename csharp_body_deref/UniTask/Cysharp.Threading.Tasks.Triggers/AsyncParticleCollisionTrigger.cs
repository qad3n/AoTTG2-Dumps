using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001D4")]
[DisallowMultipleComponent]
public sealed class AsyncParticleCollisionTrigger : AsyncTriggerBase<GameObject>
{
	[Token(Token = "0x6000B4A")]
	[Address(RVA = "0x46EAE70", Offset = "0x46EAE70", VA = "0x46EAE70")]
	private void OnParticleCollision(GameObject other)
	{
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x46EAEC0", Offset = "0x46EAEC0", VA = "0x46EAEC0")]
	public IAsyncOnParticleCollisionHandler GetOnParticleCollisionAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x46EAF30", Offset = "0x46EAF30", VA = "0x46EAF30")]
	public IAsyncOnParticleCollisionHandler GetOnParticleCollisionAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x46EAFA0", Offset = "0x46EAFA0", VA = "0x46EAFA0")]
	public UniTask<GameObject> OnParticleCollisionAsync()
	{
		return default(UniTask<GameObject>);
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x46EB0A0", Offset = "0x46EB0A0", VA = "0x46EB0A0")]
	public UniTask<GameObject> OnParticleCollisionAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<GameObject>);
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x46EB1B0", Offset = "0x46EB1B0", VA = "0x46EB1B0")]
	public AsyncParticleCollisionTrigger()
	{
	}
}
