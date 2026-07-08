using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200020F")]
public interface IAsyncOnInitializePotentialDragHandler
{
	[Token(Token = "0x6000C1B")]
	UniTask<PointerEventData> OnInitializePotentialDragAsync();
}
