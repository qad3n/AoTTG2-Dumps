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
	[Address(RVA = "0x2930FD0", Offset = "0x292F5D0", VA = "0x182930FD0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000A8F")]
	[Address(RVA = "0x2930CC0", Offset = "0x292F2C0", VA = "0x182930CC0")]
	public IAsyncLateUpdateHandler GetLateUpdateAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x2930D30", Offset = "0x292F330", VA = "0x182930D30")]
	public IAsyncLateUpdateHandler GetLateUpdateAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x2930DB0", Offset = "0x292F3B0", VA = "0x182930DB0")]
	public UniTask LateUpdateAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x2930EC0", Offset = "0x292F4C0", VA = "0x182930EC0")]
	public UniTask LateUpdateAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x2931040", Offset = "0x292F640", VA = "0x182931040")]
	public AsyncLateUpdateTrigger()
	{
	}
}
