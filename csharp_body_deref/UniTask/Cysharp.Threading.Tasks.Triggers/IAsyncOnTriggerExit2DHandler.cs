using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001F5")]
public interface IAsyncOnTriggerExit2DHandler
{
	[Token(Token = "0x6000BC0")]
	UniTask<Collider2D> OnTriggerExit2DAsync();
}
