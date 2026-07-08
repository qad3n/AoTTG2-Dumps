using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001AF")]
public interface IAsyncOnCollisionExit2DHandler
{
	[Token(Token = "0x6000ACB")]
	UniTask<Collision2D> OnCollisionExit2DAsync();
}
