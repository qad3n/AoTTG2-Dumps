// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncBecameInvisibleTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001A5")]
[DisallowMultipleComponent]
public sealed class AsyncBecameInvisibleTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x62F82F0", Offset = "0x62F72F0", VA = "0x62F82F0")]
	private void OnBecameInvisible()
	{
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x62F8360", Offset = "0x62F7360", VA = "0x62F8360")]
	public IAsyncOnBecameInvisibleHandler GetOnBecameInvisibleAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x62F83D0", Offset = "0x62F73D0", VA = "0x62F83D0")]
	public IAsyncOnBecameInvisibleHandler GetOnBecameInvisibleAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x62F8440", Offset = "0x62F7440", VA = "0x62F8440")]
	public UniTask OnBecameInvisibleAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AC3")]
	[Address(RVA = "0x62F8530", Offset = "0x62F7530", VA = "0x62F8530")]
	public UniTask OnBecameInvisibleAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AC4")]
	[Address(RVA = "0x62F8620", Offset = "0x62F7620", VA = "0x62F8620")]
	public AsyncBecameInvisibleTrigger()
	{
	}
}
