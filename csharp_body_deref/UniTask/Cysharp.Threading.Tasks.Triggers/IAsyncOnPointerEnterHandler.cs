using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000217")]
public interface IAsyncOnPointerEnterHandler
{
	[Token(Token = "0x6000C37")]
	UniTask<PointerEventData> OnPointerEnterAsync();
}
