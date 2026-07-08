using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001E2")]
[DisallowMultipleComponent]
public sealed class AsyncRectTransformDimensionsChangeTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x46EC6C0", Offset = "0x46EC6C0", VA = "0x46EC6C0")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x46EC730", Offset = "0x46EC730", VA = "0x46EC730")]
	public IAsyncOnRectTransformDimensionsChangeHandler GetOnRectTransformDimensionsChangeAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x46EC7A0", Offset = "0x46EC7A0", VA = "0x46EC7A0")]
	public IAsyncOnRectTransformDimensionsChangeHandler GetOnRectTransformDimensionsChangeAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x46EC810", Offset = "0x46EC810", VA = "0x46EC810")]
	public UniTask OnRectTransformDimensionsChangeAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x46EC900", Offset = "0x46EC900", VA = "0x46EC900")]
	public UniTask OnRectTransformDimensionsChangeAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x46EC9F0", Offset = "0x46EC9F0", VA = "0x46EC9F0")]
	public AsyncRectTransformDimensionsChangeTrigger()
	{
	}
}
