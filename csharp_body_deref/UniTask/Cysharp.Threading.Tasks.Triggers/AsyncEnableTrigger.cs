using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001BE")]
[DisallowMultipleComponent]
public sealed class AsyncEnableTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000AFD")]
	[Address(RVA = "0x46E88B0", Offset = "0x46E88B0", VA = "0x46E88B0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000AFE")]
	[Address(RVA = "0x46E8920", Offset = "0x46E8920", VA = "0x46E8920")]
	public IAsyncOnEnableHandler GetOnEnableAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AFF")]
	[Address(RVA = "0x46E8990", Offset = "0x46E8990", VA = "0x46E8990")]
	public IAsyncOnEnableHandler GetOnEnableAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B00")]
	[Address(RVA = "0x46E8A00", Offset = "0x46E8A00", VA = "0x46E8A00")]
	public UniTask OnEnableAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B01")]
	[Address(RVA = "0x46E8AF0", Offset = "0x46E8AF0", VA = "0x46E8AF0")]
	public UniTask OnEnableAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B02")]
	[Address(RVA = "0x46E8BE0", Offset = "0x46E8BE0", VA = "0x46E8BE0")]
	public AsyncEnableTrigger()
	{
	}
}
