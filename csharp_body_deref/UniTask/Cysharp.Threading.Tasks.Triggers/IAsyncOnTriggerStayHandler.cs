using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001F7")]
public interface IAsyncOnTriggerStayHandler
{
	[Token(Token = "0x6000BC7")]
	UniTask<Collider> OnTriggerStayAsync();
}
