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

[Token(Token = "0x2000194")]
[DisallowMultipleComponent]
public sealed class AsyncLateUpdateTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x4A09150", Offset = "0x4A09150", VA = "0x4A09150")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x4A091C0", Offset = "0x4A091C0", VA = "0x4A091C0")]
	public IAsyncLateUpdateHandler GetLateUpdateAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x4A09230", Offset = "0x4A09230", VA = "0x4A09230")]
	public IAsyncLateUpdateHandler GetLateUpdateAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x4A092A0", Offset = "0x4A092A0", VA = "0x4A092A0")]
	public UniTask LateUpdateAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x4A09390", Offset = "0x4A09390", VA = "0x4A09390")]
	public UniTask LateUpdateAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x4A09480", Offset = "0x4A09480", VA = "0x4A09480")]
	public AsyncLateUpdateTrigger()
	{
	}
}
