using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200021D")]
public interface IAsyncOnScrollHandler
{
	[Token(Token = "0x6000C4C")]
	UniTask<PointerEventData> OnScrollAsync();
}
