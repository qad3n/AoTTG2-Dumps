using System.Threading;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000206")]
[DisallowMultipleComponent]
public sealed class AsyncCancelTrigger : AsyncTriggerBase<BaseEventData>, ICancelHandler, IEventSystemHandler
{
	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x46F0560", Offset = "0x46F0560", VA = "0x46F0560", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EICancelHandler_002EOnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x46F05B0", Offset = "0x46F05B0", VA = "0x46F05B0")]
	public IAsyncOnCancelHandler GetOnCancelAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x46F0620", Offset = "0x46F0620", VA = "0x46F0620")]
	public IAsyncOnCancelHandler GetOnCancelAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x46F0690", Offset = "0x46F0690", VA = "0x46F0690")]
	public UniTask<BaseEventData> OnCancelAsync()
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x46F0790", Offset = "0x46F0790", VA = "0x46F0790")]
	public UniTask<BaseEventData> OnCancelAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x46F08A0", Offset = "0x46F08A0", VA = "0x46F08A0")]
	public AsyncCancelTrigger()
	{
	}
}
