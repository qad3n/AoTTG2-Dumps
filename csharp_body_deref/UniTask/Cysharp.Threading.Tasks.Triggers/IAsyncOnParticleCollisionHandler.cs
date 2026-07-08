using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001D3")]
public interface IAsyncOnParticleCollisionHandler
{
	[Token(Token = "0x6000B49")]
	UniTask<GameObject> OnParticleCollisionAsync();
}
