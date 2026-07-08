using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001A9")]
public interface IAsyncOnCollisionEnterHandler
{
	[Token(Token = "0x6000AB6")]
	UniTask<Collision> OnCollisionEnterAsync();
}
