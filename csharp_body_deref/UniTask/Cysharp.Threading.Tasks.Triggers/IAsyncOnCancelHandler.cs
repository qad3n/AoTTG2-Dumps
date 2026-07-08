using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000205")]
public interface IAsyncOnCancelHandler
{
	[Token(Token = "0x6000BF8")]
	UniTask<BaseEventData> OnCancelAsync();
}
