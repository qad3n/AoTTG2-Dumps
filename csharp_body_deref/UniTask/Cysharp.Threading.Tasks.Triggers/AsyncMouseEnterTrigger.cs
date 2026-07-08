using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001CA")]
[DisallowMultipleComponent]
public sealed class AsyncMouseEnterTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x46E9D40", Offset = "0x46E9D40", VA = "0x46E9D40")]
	private void OnMouseEnter()
	{
	}

	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x46E9DB0", Offset = "0x46E9DB0", VA = "0x46E9DB0")]
	public IAsyncOnMouseEnterHandler GetOnMouseEnterAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x46E9E20", Offset = "0x46E9E20", VA = "0x46E9E20")]
	public IAsyncOnMouseEnterHandler GetOnMouseEnterAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x46E9E90", Offset = "0x46E9E90", VA = "0x46E9E90")]
	public UniTask OnMouseEnterAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x46E9F80", Offset = "0x46E9F80", VA = "0x46E9F80")]
	public UniTask OnMouseEnterAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x46EA070", Offset = "0x46EA070", VA = "0x46EA070")]
	public AsyncMouseEnterTrigger()
	{
	}
}
