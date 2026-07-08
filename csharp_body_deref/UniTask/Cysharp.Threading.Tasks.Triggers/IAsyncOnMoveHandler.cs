using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000211")]
public interface IAsyncOnMoveHandler
{
	[Token(Token = "0x6000C22")]
	UniTask<AxisEventData> OnMoveAsync();
}
