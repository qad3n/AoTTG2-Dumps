using System.Threading;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200020C")]
[DisallowMultipleComponent]
public sealed class AsyncDropTrigger : AsyncTriggerBase<PointerEventData>, IDropHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x46F0FE0", Offset = "0x46F0FE0", VA = "0x46F0FE0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIDropHandler_002EOnDrop(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x46F1030", Offset = "0x46F1030", VA = "0x46F1030")]
	public IAsyncOnDropHandler GetOnDropAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x46F10A0", Offset = "0x46F10A0", VA = "0x46F10A0")]
	public IAsyncOnDropHandler GetOnDropAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x46F1110", Offset = "0x46F1110", VA = "0x46F1110")]
	public UniTask<PointerEventData> OnDropAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x46F1210", Offset = "0x46F1210", VA = "0x46F1210")]
	public UniTask<PointerEventData> OnDropAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x46F1320", Offset = "0x46F1320", VA = "0x46F1320")]
	public AsyncDropTrigger()
	{
	}
}
