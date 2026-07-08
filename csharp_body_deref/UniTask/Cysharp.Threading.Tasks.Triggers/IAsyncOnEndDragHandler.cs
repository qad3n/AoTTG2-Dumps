using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200020D")]
public interface IAsyncOnEndDragHandler
{
	[Token(Token = "0x6000C14")]
	UniTask<PointerEventData> OnEndDragAsync();
}
