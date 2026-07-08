using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000202")]
[DisallowMultipleComponent]
public sealed class AsyncUpdateTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x46EFE70", Offset = "0x46EFE70", VA = "0x46EFE70")]
	private void Update()
	{
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x46EFEE0", Offset = "0x46EFEE0", VA = "0x46EFEE0")]
	public IAsyncUpdateHandler GetUpdateAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x46EFF50", Offset = "0x46EFF50", VA = "0x46EFF50")]
	public IAsyncUpdateHandler GetUpdateAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x46EFFC0", Offset = "0x46EFFC0", VA = "0x46EFFC0")]
	public UniTask UpdateAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x46F00B0", Offset = "0x46F00B0", VA = "0x46F00B0")]
	public UniTask UpdateAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x46F01A0", Offset = "0x46F01A0", VA = "0x46F01A0")]
	public AsyncUpdateTrigger()
	{
	}
}
