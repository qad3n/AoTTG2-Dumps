using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001AD")]
public interface IAsyncOnCollisionExitHandler
{
	[Token(Token = "0x6000AC4")]
	UniTask<Collision> OnCollisionExitAsync();
}
