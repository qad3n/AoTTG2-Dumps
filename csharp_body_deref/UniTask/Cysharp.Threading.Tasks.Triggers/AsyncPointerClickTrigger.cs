using System.Threading;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000214")]
[DisallowMultipleComponent]
public sealed class AsyncPointerClickTrigger : AsyncTriggerBase<PointerEventData>, IPointerClickHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x46F1DE0", Offset = "0x46F1DE0", VA = "0x46F1DE0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerClickHandler_002EOnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C2B")]
	[Address(RVA = "0x46F1E30", Offset = "0x46F1E30", VA = "0x46F1E30")]
	public IAsyncOnPointerClickHandler GetOnPointerClickAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C2C")]
	[Address(RVA = "0x46F1EA0", Offset = "0x46F1EA0", VA = "0x46F1EA0")]
	public IAsyncOnPointerClickHandler GetOnPointerClickAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x46F1F10", Offset = "0x46F1F10", VA = "0x46F1F10")]
	public UniTask<PointerEventData> OnPointerClickAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x46F2010", Offset = "0x46F2010", VA = "0x46F2010")]
	public UniTask<PointerEventData> OnPointerClickAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x46F2120", Offset = "0x46F2120", VA = "0x46F2120")]
	public AsyncPointerClickTrigger()
	{
	}
}
