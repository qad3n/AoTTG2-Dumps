using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200021F")]
public interface IAsyncOnSelectHandler
{
	[Token(Token = "0x6000C53")]
	UniTask<BaseEventData> OnSelectAsync();
}
