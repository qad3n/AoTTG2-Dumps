using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001BA")]
[DisallowMultipleComponent]
public sealed class AsyncDrawGizmosTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x46E81D0", Offset = "0x46E81D0", VA = "0x46E81D0")]
	private void OnDrawGizmos()
	{
	}

	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x46E8240", Offset = "0x46E8240", VA = "0x46E8240")]
	public IAsyncOnDrawGizmosHandler GetOnDrawGizmosAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AF1")]
	[Address(RVA = "0x46E82B0", Offset = "0x46E82B0", VA = "0x46E82B0")]
	public IAsyncOnDrawGizmosHandler GetOnDrawGizmosAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x46E8320", Offset = "0x46E8320", VA = "0x46E8320")]
	public UniTask OnDrawGizmosAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x46E8410", Offset = "0x46E8410", VA = "0x46E8410")]
	public UniTask OnDrawGizmosAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AF4")]
	[Address(RVA = "0x46E8500", Offset = "0x46E8500", VA = "0x46E8500")]
	public AsyncDrawGizmosTrigger()
	{
	}
}
