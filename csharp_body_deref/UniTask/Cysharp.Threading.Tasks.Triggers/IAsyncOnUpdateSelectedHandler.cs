using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000223")]
public interface IAsyncOnUpdateSelectedHandler
{
	[Token(Token = "0x6000C61")]
	UniTask<BaseEventData> OnUpdateSelectedAsync();
}
