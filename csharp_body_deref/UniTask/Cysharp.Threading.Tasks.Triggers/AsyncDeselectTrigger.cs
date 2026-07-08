using System.Threading;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000208")]
[DisallowMultipleComponent]
public sealed class AsyncDeselectTrigger : AsyncTriggerBase<BaseEventData>, IDeselectHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x46F08E0", Offset = "0x46F08E0", VA = "0x46F08E0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIDeselectHandler_002EOnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x46F0930", Offset = "0x46F0930", VA = "0x46F0930")]
	public IAsyncOnDeselectHandler GetOnDeselectAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x46F09A0", Offset = "0x46F09A0", VA = "0x46F09A0")]
	public IAsyncOnDeselectHandler GetOnDeselectAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C03")]
	[Address(RVA = "0x46F0A10", Offset = "0x46F0A10", VA = "0x46F0A10")]
	public UniTask<BaseEventData> OnDeselectAsync()
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x46F0B10", Offset = "0x46F0B10", VA = "0x46F0B10")]
	public UniTask<BaseEventData> OnDeselectAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x46F0C20", Offset = "0x46F0C20", VA = "0x46F0C20")]
	public AsyncDeselectTrigger()
	{
	}
}
