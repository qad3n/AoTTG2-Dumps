using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000215")]
public interface IAsyncOnPointerDownHandler
{
	[Token(Token = "0x6000C30")]
	UniTask<PointerEventData> OnPointerDownAsync();
}
