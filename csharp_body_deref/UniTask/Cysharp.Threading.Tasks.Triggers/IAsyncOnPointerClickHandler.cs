using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000213")]
public interface IAsyncOnPointerClickHandler
{
	[Token(Token = "0x6000C29")]
	UniTask<PointerEventData> OnPointerClickAsync();
}
