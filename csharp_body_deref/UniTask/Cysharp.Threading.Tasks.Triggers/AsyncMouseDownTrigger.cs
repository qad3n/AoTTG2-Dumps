using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001C6")]
[DisallowMultipleComponent]
public sealed class AsyncMouseDownTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x46E9660", Offset = "0x46E9660", VA = "0x46E9660")]
	private void OnMouseDown()
	{
	}

	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x46E96D0", Offset = "0x46E96D0", VA = "0x46E96D0")]
	public IAsyncOnMouseDownHandler GetOnMouseDownAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x46E9740", Offset = "0x46E9740", VA = "0x46E9740")]
	public IAsyncOnMouseDownHandler GetOnMouseDownAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x46E97B0", Offset = "0x46E97B0", VA = "0x46E97B0")]
	public UniTask OnMouseDownAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x46E98A0", Offset = "0x46E98A0", VA = "0x46E98A0")]
	public UniTask OnMouseDownAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x46E9990", Offset = "0x46E9990", VA = "0x46E9990")]
	public AsyncMouseDownTrigger()
	{
	}
}
