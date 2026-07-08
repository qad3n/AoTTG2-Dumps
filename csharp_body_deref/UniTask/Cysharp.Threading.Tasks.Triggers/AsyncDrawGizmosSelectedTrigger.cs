using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001BC")]
[DisallowMultipleComponent]
public sealed class AsyncDrawGizmosSelectedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000AF6")]
	[Address(RVA = "0x46E8540", Offset = "0x46E8540", VA = "0x46E8540")]
	private void OnDrawGizmosSelected()
	{
	}

	[Token(Token = "0x6000AF7")]
	[Address(RVA = "0x46E85B0", Offset = "0x46E85B0", VA = "0x46E85B0")]
	public IAsyncOnDrawGizmosSelectedHandler GetOnDrawGizmosSelectedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AF8")]
	[Address(RVA = "0x46E8620", Offset = "0x46E8620", VA = "0x46E8620")]
	public IAsyncOnDrawGizmosSelectedHandler GetOnDrawGizmosSelectedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AF9")]
	[Address(RVA = "0x46E8690", Offset = "0x46E8690", VA = "0x46E8690")]
	public UniTask OnDrawGizmosSelectedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AFA")]
	[Address(RVA = "0x46E8780", Offset = "0x46E8780", VA = "0x46E8780")]
	public UniTask OnDrawGizmosSelectedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AFB")]
	[Address(RVA = "0x46E8870", Offset = "0x46E8870", VA = "0x46E8870")]
	public AsyncDrawGizmosSelectedTrigger()
	{
	}
}
