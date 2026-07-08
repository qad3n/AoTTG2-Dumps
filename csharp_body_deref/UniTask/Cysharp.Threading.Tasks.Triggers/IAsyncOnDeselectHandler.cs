using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000207")]
public interface IAsyncOnDeselectHandler
{
	[Token(Token = "0x6000BFF")]
	UniTask<BaseEventData> OnDeselectAsync();
}
