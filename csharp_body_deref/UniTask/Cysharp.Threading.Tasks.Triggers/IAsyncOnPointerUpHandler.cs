using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200021B")]
public interface IAsyncOnPointerUpHandler
{
	[Token(Token = "0x6000C45")]
	UniTask<PointerEventData> OnPointerUpAsync();
}
