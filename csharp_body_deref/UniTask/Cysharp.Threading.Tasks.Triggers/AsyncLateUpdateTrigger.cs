// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncLateUpdateTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000197")]
[DisallowMultipleComponent]
public sealed class AsyncLateUpdateTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000A8E")]
	[Address(RVA = "0x62F6B20", Offset = "0x62F5B20", VA = "0x62F6B20")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000A8F")]
	[Address(RVA = "0x62F6B90", Offset = "0x62F5B90", VA = "0x62F6B90")]
	public IAsyncLateUpdateHandler GetLateUpdateAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x62F6C00", Offset = "0x62F5C00", VA = "0x62F6C00")]
	public IAsyncLateUpdateHandler GetLateUpdateAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x62F6C70", Offset = "0x62F5C70", VA = "0x62F6C70")]
	public UniTask LateUpdateAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x62F6D60", Offset = "0x62F5D60", VA = "0x62F6D60")]
	public UniTask LateUpdateAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x62F6E50", Offset = "0x62F5E50", VA = "0x62F6E50")]
	public AsyncLateUpdateTrigger()
	{
	}
}
