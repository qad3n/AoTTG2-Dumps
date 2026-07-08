using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000203")]
public interface IAsyncOnBeginDragHandler
{
	[Token(Token = "0x6000BF1")]
	UniTask<PointerEventData> OnBeginDragAsync();
}
