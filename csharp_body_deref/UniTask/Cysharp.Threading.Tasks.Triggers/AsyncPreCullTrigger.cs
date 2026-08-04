// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncPreCullTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001DE")]
[DisallowMultipleComponent]
public sealed class AsyncPreCullTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x4A110E0", Offset = "0x4A110E0", VA = "0x4A110E0")]
	private void OnPreCull()
	{
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x4A11150", Offset = "0x4A11150", VA = "0x4A11150")]
	public IAsyncOnPreCullHandler GetOnPreCullAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B6F")]
	[Address(RVA = "0x4A111C0", Offset = "0x4A111C0", VA = "0x4A111C0")]
	public IAsyncOnPreCullHandler GetOnPreCullAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x4A11230", Offset = "0x4A11230", VA = "0x4A11230")]
	public UniTask OnPreCullAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x4A11320", Offset = "0x4A11320", VA = "0x4A11320")]
	public UniTask OnPreCullAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x4A11410", Offset = "0x4A11410", VA = "0x4A11410")]
	public AsyncPreCullTrigger()
	{
	}
}
