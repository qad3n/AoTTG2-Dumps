using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001B3")]
public interface IAsyncOnCollisionStay2DHandler
{
	[Token(Token = "0x6000AD9")]
	UniTask<Collision2D> OnCollisionStay2DAsync();
}
