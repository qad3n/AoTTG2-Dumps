using System.Threading;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000210")]
[DisallowMultipleComponent]
public sealed class AsyncInitializePotentialDragTrigger : AsyncTriggerBase<PointerEventData>, IInitializePotentialDragHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C1C")]
	[Address(RVA = "0x46F16E0", Offset = "0x46F16E0", VA = "0x46F16E0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIInitializePotentialDragHandler_002EOnInitializePotentialDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x46F1730", Offset = "0x46F1730", VA = "0x46F1730")]
	public IAsyncOnInitializePotentialDragHandler GetOnInitializePotentialDragAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x46F17A0", Offset = "0x46F17A0", VA = "0x46F17A0")]
	public IAsyncOnInitializePotentialDragHandler GetOnInitializePotentialDragAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x46F1810", Offset = "0x46F1810", VA = "0x46F1810")]
	public UniTask<PointerEventData> OnInitializePotentialDragAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x46F1910", Offset = "0x46F1910", VA = "0x46F1910")]
	public UniTask<PointerEventData> OnInitializePotentialDragAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x46F1A20", Offset = "0x46F1A20", VA = "0x46F1A20")]
	public AsyncInitializePotentialDragTrigger()
	{
	}
}
