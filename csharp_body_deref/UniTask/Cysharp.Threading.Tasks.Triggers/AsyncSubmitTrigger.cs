using System.Threading;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000222")]
[DisallowMultipleComponent]
public sealed class AsyncSubmitTrigger : AsyncTriggerBase<BaseEventData>, ISubmitHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C5B")]
	[Address(RVA = "0x46F3660", Offset = "0x46F3660", VA = "0x46F3660", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EISubmitHandler_002EOnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000C5C")]
	[Address(RVA = "0x46F36B0", Offset = "0x46F36B0", VA = "0x46F36B0")]
	public IAsyncOnSubmitHandler GetOnSubmitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C5D")]
	[Address(RVA = "0x46F3720", Offset = "0x46F3720", VA = "0x46F3720")]
	public IAsyncOnSubmitHandler GetOnSubmitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C5E")]
	[Address(RVA = "0x46F3790", Offset = "0x46F3790", VA = "0x46F3790")]
	public UniTask<BaseEventData> OnSubmitAsync()
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C5F")]
	[Address(RVA = "0x46F3890", Offset = "0x46F3890", VA = "0x46F3890")]
	public UniTask<BaseEventData> OnSubmitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C60")]
	[Address(RVA = "0x46F39A0", Offset = "0x46F39A0", VA = "0x46F39A0")]
	public AsyncSubmitTrigger()
	{
	}
}
