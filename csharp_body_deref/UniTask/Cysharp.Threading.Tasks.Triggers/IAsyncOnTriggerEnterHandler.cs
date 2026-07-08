using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001EF")]
public interface IAsyncOnTriggerEnterHandler
{
	[Token(Token = "0x6000BAB")]
	UniTask<Collider> OnTriggerEnterAsync();
}
