using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001CC")]
[DisallowMultipleComponent]
public sealed class AsyncMouseExitTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x46EA0B0", Offset = "0x46EA0B0", VA = "0x46EA0B0")]
	private void OnMouseExit()
	{
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x46EA120", Offset = "0x46EA120", VA = "0x46EA120")]
	public IAsyncOnMouseExitHandler GetOnMouseExitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x46EA190", Offset = "0x46EA190", VA = "0x46EA190")]
	public IAsyncOnMouseExitHandler GetOnMouseExitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x46EA200", Offset = "0x46EA200", VA = "0x46EA200")]
	public UniTask OnMouseExitAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x46EA2F0", Offset = "0x46EA2F0", VA = "0x46EA2F0")]
	public UniTask OnMouseExitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x46EA3E0", Offset = "0x46EA3E0", VA = "0x46EA3E0")]
	public AsyncMouseExitTrigger()
	{
	}
}
