using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001F9")]
public interface IAsyncOnTriggerStay2DHandler
{
	[Token(Token = "0x6000BCE")]
	UniTask<Collider2D> OnTriggerStay2DAsync();
}
