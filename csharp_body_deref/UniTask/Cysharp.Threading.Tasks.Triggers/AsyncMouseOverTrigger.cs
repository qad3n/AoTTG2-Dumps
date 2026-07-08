using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001CE")]
[DisallowMultipleComponent]
public sealed class AsyncMouseOverTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x46EA420", Offset = "0x46EA420", VA = "0x46EA420")]
	private void OnMouseOver()
	{
	}

	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x46EA490", Offset = "0x46EA490", VA = "0x46EA490")]
	public IAsyncOnMouseOverHandler GetOnMouseOverAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x46EA500", Offset = "0x46EA500", VA = "0x46EA500")]
	public IAsyncOnMouseOverHandler GetOnMouseOverAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x46EA570", Offset = "0x46EA570", VA = "0x46EA570")]
	public UniTask OnMouseOverAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x46EA660", Offset = "0x46EA660", VA = "0x46EA660")]
	public UniTask OnMouseOverAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x46EA750", Offset = "0x46EA750", VA = "0x46EA750")]
	public AsyncMouseOverTrigger()
	{
	}
}
