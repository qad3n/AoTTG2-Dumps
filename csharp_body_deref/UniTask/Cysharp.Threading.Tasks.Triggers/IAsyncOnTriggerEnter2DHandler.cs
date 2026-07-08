using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001F1")]
public interface IAsyncOnTriggerEnter2DHandler
{
	[Token(Token = "0x6000BB2")]
	UniTask<Collider2D> OnTriggerEnter2DAsync();
}
