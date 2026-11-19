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
	[Address(RVA = "0x62FACA0", Offset = "0x62F9CA0", VA = "0x62FACA0")]
	private void OnDrawGizmos()
	{
	}

	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x62FAD10", Offset = "0x62F9D10", VA = "0x62FAD10")]
	public IAsyncOnDrawGizmosHandler GetOnDrawGizmosAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x62FAD80", Offset = "0x62F9D80", VA = "0x62FAD80")]
	public IAsyncOnDrawGizmosHandler GetOnDrawGizmosAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x62FADF0", Offset = "0x62F9DF0", VA = "0x62FADF0")]
	public UniTask OnDrawGizmosAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x62FAEE0", Offset = "0x62F9EE0", VA = "0x62FAEE0")]
	public UniTask OnDrawGizmosAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x62FAFD0", Offset = "0x62F9FD0", VA = "0x62FAFD0")]
	public AsyncDrawGizmosTrigger()
	{
	}
}
