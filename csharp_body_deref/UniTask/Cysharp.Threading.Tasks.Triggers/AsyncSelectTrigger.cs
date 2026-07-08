using System.Threading;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000220")]
[DisallowMultipleComponent]
public sealed class AsyncSelectTrigger : AsyncTriggerBase<BaseEventData>, ISelectHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x46F32E0", Offset = "0x46F32E0", VA = "0x46F32E0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EISelectHandler_002EOnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x46F3330", Offset = "0x46F3330", VA = "0x46F3330")]
	public IAsyncOnSelectHandler GetOnSelectAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x46F33A0", Offset = "0x46F33A0", VA = "0x46F33A0")]
	public IAsyncOnSelectHandler GetOnSelectAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x46F3410", Offset = "0x46F3410", VA = "0x46F3410")]
	public UniTask<BaseEventData> OnSelectAsync()
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x46F3510", Offset = "0x46F3510", VA = "0x46F3510")]
	public UniTask<BaseEventData> OnSelectAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x46F3620", Offset = "0x46F3620", VA = "0x46F3620")]
	public AsyncSelectTrigger()
	{
	}
}
