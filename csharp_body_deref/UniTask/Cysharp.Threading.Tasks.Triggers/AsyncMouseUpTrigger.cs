using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001D0")]
[DisallowMultipleComponent]
public sealed class AsyncMouseUpTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x46EA790", Offset = "0x46EA790", VA = "0x46EA790")]
	private void OnMouseUp()
	{
	}

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x46EA800", Offset = "0x46EA800", VA = "0x46EA800")]
	public IAsyncOnMouseUpHandler GetOnMouseUpAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x46EA870", Offset = "0x46EA870", VA = "0x46EA870")]
	public IAsyncOnMouseUpHandler GetOnMouseUpAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x46EA8E0", Offset = "0x46EA8E0", VA = "0x46EA8E0")]
	public UniTask OnMouseUpAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x46EA9D0", Offset = "0x46EA9D0", VA = "0x46EA9D0")]
	public UniTask OnMouseUpAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x46EAAC0", Offset = "0x46EAAC0", VA = "0x46EAAC0")]
	public AsyncMouseUpTrigger()
	{
	}
}
