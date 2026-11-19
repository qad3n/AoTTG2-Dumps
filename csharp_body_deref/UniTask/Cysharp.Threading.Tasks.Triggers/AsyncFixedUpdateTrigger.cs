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

[Token(Token = "0x2000195")]
[DisallowMultipleComponent]
public sealed class AsyncFixedUpdateTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000A87")]
	[Address(RVA = "0x62F67B0", Offset = "0x62F57B0", VA = "0x62F67B0")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x6000A88")]
	[Address(RVA = "0x62F6820", Offset = "0x62F5820", VA = "0x62F6820")]
	public IAsyncFixedUpdateHandler GetFixedUpdateAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A89")]
	[Address(RVA = "0x62F6890", Offset = "0x62F5890", VA = "0x62F6890")]
	public IAsyncFixedUpdateHandler GetFixedUpdateAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A8A")]
	[Address(RVA = "0x62F6900", Offset = "0x62F5900", VA = "0x62F6900")]
	public UniTask FixedUpdateAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x62F69F0", Offset = "0x62F59F0", VA = "0x62F69F0")]
	public UniTask FixedUpdateAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A8C")]
	[Address(RVA = "0x62F6AE0", Offset = "0x62F5AE0", VA = "0x62F6AE0")]
	public AsyncFixedUpdateTrigger()
	{
	}
}
