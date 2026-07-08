using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001B8")]
[DisallowMultipleComponent]
public sealed class AsyncDisableTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000AE8")]
	[Address(RVA = "0x46E7E60", Offset = "0x46E7E60", VA = "0x46E7E60")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x46E7ED0", Offset = "0x46E7ED0", VA = "0x46E7ED0")]
	public IAsyncOnDisableHandler GetOnDisableAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AEA")]
	[Address(RVA = "0x46E7F40", Offset = "0x46E7F40", VA = "0x46E7F40")]
	public IAsyncOnDisableHandler GetOnDisableAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AEB")]
	[Address(RVA = "0x46E7FB0", Offset = "0x46E7FB0", VA = "0x46E7FB0")]
	public UniTask OnDisableAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AEC")]
	[Address(RVA = "0x46E80A0", Offset = "0x46E80A0", VA = "0x46E80A0")]
	public UniTask OnDisableAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x46E8190", Offset = "0x46E8190", VA = "0x46E8190")]
	public AsyncDisableTrigger()
	{
	}
}
