using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000219")]
public interface IAsyncOnPointerExitHandler
{
	[Token(Token = "0x6000C3E")]
	UniTask<PointerEventData> OnPointerExitAsync();
}
