using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001D2")]
[DisallowMultipleComponent]
public sealed class AsyncMouseUpAsButtonTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x46EAB00", Offset = "0x46EAB00", VA = "0x46EAB00")]
	private void OnMouseUpAsButton()
	{
	}

	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x46EAB70", Offset = "0x46EAB70", VA = "0x46EAB70")]
	public IAsyncOnMouseUpAsButtonHandler GetOnMouseUpAsButtonAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x46EABE0", Offset = "0x46EABE0", VA = "0x46EABE0")]
	public IAsyncOnMouseUpAsButtonHandler GetOnMouseUpAsButtonAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x46EAC50", Offset = "0x46EAC50", VA = "0x46EAC50")]
	public UniTask OnMouseUpAsButtonAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x46EAD40", Offset = "0x46EAD40", VA = "0x46EAD40")]
	public UniTask OnMouseUpAsButtonAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x46EAE30", Offset = "0x46EAE30", VA = "0x46EAE30")]
	public AsyncMouseUpAsButtonTrigger()
	{
	}
}
