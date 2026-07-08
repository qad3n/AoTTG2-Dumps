using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001B1")]
public interface IAsyncOnCollisionStayHandler
{
	[Token(Token = "0x6000AD2")]
	UniTask<Collision> OnCollisionStayAsync();
}
