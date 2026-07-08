using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000209")]
public interface IAsyncOnDragHandler
{
	[Token(Token = "0x6000C06")]
	UniTask<PointerEventData> OnDragAsync();
}
