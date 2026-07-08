using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001F3")]
public interface IAsyncOnTriggerExitHandler
{
	[Token(Token = "0x6000BB9")]
	UniTask<Collider> OnTriggerExitAsync();
}
