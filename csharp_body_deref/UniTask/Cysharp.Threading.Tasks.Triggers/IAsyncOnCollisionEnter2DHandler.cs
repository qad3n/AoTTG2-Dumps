using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001AB")]
public interface IAsyncOnCollisionEnter2DHandler
{
	[Token(Token = "0x6000ABD")]
	UniTask<Collision2D> OnCollisionEnter2DAsync();
}
