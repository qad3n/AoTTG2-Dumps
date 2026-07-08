using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001A6")]
[DisallowMultipleComponent]
public sealed class AsyncBeforeTransformParentChangedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x46E5F00", Offset = "0x46E5F00", VA = "0x46E5F00")]
	private void OnBeforeTransformParentChanged()
	{
	}

	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x46E5F70", Offset = "0x46E5F70", VA = "0x46E5F70")]
	public IAsyncOnBeforeTransformParentChangedHandler GetOnBeforeTransformParentChangedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x46E5FE0", Offset = "0x46E5FE0", VA = "0x46E5FE0")]
	public IAsyncOnBeforeTransformParentChangedHandler GetOnBeforeTransformParentChangedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x46E6050", Offset = "0x46E6050", VA = "0x46E6050")]
	public UniTask OnBeforeTransformParentChangedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x46E6140", Offset = "0x46E6140", VA = "0x46E6140")]
	public UniTask OnBeforeTransformParentChangedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x46E6230", Offset = "0x46E6230", VA = "0x46E6230")]
	public AsyncBeforeTransformParentChangedTrigger()
	{
	}
}
