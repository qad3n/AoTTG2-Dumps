using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001C8")]
[DisallowMultipleComponent]
public sealed class AsyncMouseDragTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x46E99D0", Offset = "0x46E99D0", VA = "0x46E99D0")]
	private void OnMouseDrag()
	{
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x46E9A40", Offset = "0x46E9A40", VA = "0x46E9A40")]
	public IAsyncOnMouseDragHandler GetOnMouseDragAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x46E9AB0", Offset = "0x46E9AB0", VA = "0x46E9AB0")]
	public IAsyncOnMouseDragHandler GetOnMouseDragAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x46E9B20", Offset = "0x46E9B20", VA = "0x46E9B20")]
	public UniTask OnMouseDragAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x46E9C10", Offset = "0x46E9C10", VA = "0x46E9C10")]
	public UniTask OnMouseDragAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x46E9D00", Offset = "0x46E9D00", VA = "0x46E9D00")]
	public AsyncMouseDragTrigger()
	{
	}
}
