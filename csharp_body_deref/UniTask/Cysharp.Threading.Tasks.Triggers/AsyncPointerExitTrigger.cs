using System.Threading;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200021A")]
[DisallowMultipleComponent]
public sealed class AsyncPointerExitTrigger : AsyncTriggerBase<PointerEventData>, IPointerExitHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x46F2860", Offset = "0x46F2860", VA = "0x46F2860", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerExitHandler_002EOnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x46F28B0", Offset = "0x46F28B0", VA = "0x46F28B0")]
	public IAsyncOnPointerExitHandler GetOnPointerExitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x46F2920", Offset = "0x46F2920", VA = "0x46F2920")]
	public IAsyncOnPointerExitHandler GetOnPointerExitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x46F2990", Offset = "0x46F2990", VA = "0x46F2990")]
	public UniTask<PointerEventData> OnPointerExitAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x46F2A90", Offset = "0x46F2A90", VA = "0x46F2A90")]
	public UniTask<PointerEventData> OnPointerExitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x46F2BA0", Offset = "0x46F2BA0", VA = "0x46F2BA0")]
	public AsyncPointerExitTrigger()
	{
	}
}
