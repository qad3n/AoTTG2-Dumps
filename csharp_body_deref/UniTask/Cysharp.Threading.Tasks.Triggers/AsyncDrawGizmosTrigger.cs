// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncDrawGizmosTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001BD")]
[DisallowMultipleComponent]
public sealed class AsyncDrawGizmosTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B13")]
	[Address(RVA = "0x292D750", Offset = "0x292BD50", VA = "0x18292D750")]
	private void OnDrawGizmos()
	{
	}

	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x292D440", Offset = "0x292BA40", VA = "0x18292D440")]
	public IAsyncOnDrawGizmosHandler GetOnDrawGizmosAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x292D4B0", Offset = "0x292BAB0", VA = "0x18292D4B0")]
	public IAsyncOnDrawGizmosHandler GetOnDrawGizmosAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x292D530", Offset = "0x292BB30", VA = "0x18292D530")]
	public UniTask OnDrawGizmosAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x292D640", Offset = "0x292BC40", VA = "0x18292D640")]
	public UniTask OnDrawGizmosAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x292D7C0", Offset = "0x292BDC0", VA = "0x18292D7C0")]
	public AsyncDrawGizmosTrigger()
	{
	}
}
