using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200020B")]
public interface IAsyncOnDropHandler
{
	[Token(Token = "0x6000C0D")]
	UniTask<PointerEventData> OnDropAsync();
}
