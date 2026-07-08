using System.Threading;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000216")]
[DisallowMultipleComponent]
public sealed class AsyncPointerDownTrigger : AsyncTriggerBase<PointerEventData>, IPointerDownHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C31")]
	[Address(RVA = "0x46F2160", Offset = "0x46F2160", VA = "0x46F2160", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerDownHandler_002EOnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x46F21B0", Offset = "0x46F21B0", VA = "0x46F21B0")]
	public IAsyncOnPointerDownHandler GetOnPointerDownAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x46F2220", Offset = "0x46F2220", VA = "0x46F2220")]
	public IAsyncOnPointerDownHandler GetOnPointerDownAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x46F2290", Offset = "0x46F2290", VA = "0x46F2290")]
	public UniTask<PointerEventData> OnPointerDownAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x46F2390", Offset = "0x46F2390", VA = "0x46F2390")]
	public UniTask<PointerEventData> OnPointerDownAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x46F24A0", Offset = "0x46F24A0", VA = "0x46F24A0")]
	public AsyncPointerDownTrigger()
	{
	}
}
