using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001B5")]
public interface IAsyncOnControllerColliderHitHandler
{
	[Token(Token = "0x6000AE0")]
	UniTask<ControllerColliderHit> OnControllerColliderHitAsync();
}
