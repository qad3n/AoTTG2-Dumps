// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncBecameVisibleTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001A7")]
[DisallowMultipleComponent]
public sealed class AsyncBecameVisibleTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000AC6")]
	[Address(RVA = "0x62F8660", Offset = "0x62F7660", VA = "0x62F8660")]
	private void OnBecameVisible()
	{
	}

	[Token(Token = "0x6000AC7")]
	[Address(RVA = "0x62F86D0", Offset = "0x62F76D0", VA = "0x62F86D0")]
	public IAsyncOnBecameVisibleHandler GetOnBecameVisibleAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AC8")]
	[Address(RVA = "0x62F8740", Offset = "0x62F7740", VA = "0x62F8740")]
	public IAsyncOnBecameVisibleHandler GetOnBecameVisibleAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AC9")]
	[Address(RVA = "0x62F87B0", Offset = "0x62F77B0", VA = "0x62F87B0")]
	public UniTask OnBecameVisibleAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000ACA")]
	[Address(RVA = "0x62F88A0", Offset = "0x62F78A0", VA = "0x62F88A0")]
	public UniTask OnBecameVisibleAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000ACB")]
	[Address(RVA = "0x62F8990", Offset = "0x62F7990", VA = "0x62F8990")]
	public AsyncBecameVisibleTrigger()
	{
	}
}
