using System.Threading;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000224")]
[DisallowMultipleComponent]
public sealed class AsyncUpdateSelectedTrigger : AsyncTriggerBase<BaseEventData>, IUpdateSelectedHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x46F39E0", Offset = "0x46F39E0", VA = "0x46F39E0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIUpdateSelectedHandler_002EOnUpdateSelected(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x46F3A30", Offset = "0x46F3A30", VA = "0x46F3A30")]
	public IAsyncOnUpdateSelectedHandler GetOnUpdateSelectedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x46F3AA0", Offset = "0x46F3AA0", VA = "0x46F3AA0")]
	public IAsyncOnUpdateSelectedHandler GetOnUpdateSelectedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x46F3B10", Offset = "0x46F3B10", VA = "0x46F3B10")]
	public UniTask<BaseEventData> OnUpdateSelectedAsync()
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x46F3C10", Offset = "0x46F3C10", VA = "0x46F3C10")]
	public UniTask<BaseEventData> OnUpdateSelectedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x46F3D20", Offset = "0x46F3D20", VA = "0x46F3D20")]
	public AsyncUpdateSelectedTrigger()
	{
	}
}
