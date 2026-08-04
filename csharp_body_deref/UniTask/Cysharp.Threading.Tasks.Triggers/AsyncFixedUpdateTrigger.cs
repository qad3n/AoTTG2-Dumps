// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncFixedUpdateTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000192")]
[DisallowMultipleComponent]
public sealed class AsyncFixedUpdateTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x4A08DE0", Offset = "0x4A08DE0", VA = "0x4A08DE0")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x6000A64")]
	[Address(RVA = "0x4A08E50", Offset = "0x4A08E50", VA = "0x4A08E50")]
	public IAsyncFixedUpdateHandler GetFixedUpdateAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x4A08EC0", Offset = "0x4A08EC0", VA = "0x4A08EC0")]
	public IAsyncFixedUpdateHandler GetFixedUpdateAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x4A08F30", Offset = "0x4A08F30", VA = "0x4A08F30")]
	public UniTask FixedUpdateAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x4A09020", Offset = "0x4A09020", VA = "0x4A09020")]
	public UniTask FixedUpdateAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x4A09110", Offset = "0x4A09110", VA = "0x4A09110")]
	public AsyncFixedUpdateTrigger()
	{
	}
}
