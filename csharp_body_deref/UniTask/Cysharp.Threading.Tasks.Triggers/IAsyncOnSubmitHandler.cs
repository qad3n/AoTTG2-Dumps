using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000221")]
public interface IAsyncOnSubmitHandler
{
	[Token(Token = "0x6000C5A")]
	UniTask<BaseEventData> OnSubmitAsync();
}
