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
	[Address(RVA = "0x2929BD0", Offset = "0x29281D0", VA = "0x182929BD0")]
	private void OnBecameVisible()
	{
	}

	[Token(Token = "0x6000AC7")]
	[Address(RVA = "0x2929940", Offset = "0x2927F40", VA = "0x182929940")]
	public IAsyncOnBecameVisibleHandler GetOnBecameVisibleAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AC8")]
	[Address(RVA = "0x29298C0", Offset = "0x2927EC0", VA = "0x1829298C0")]
	public IAsyncOnBecameVisibleHandler GetOnBecameVisibleAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AC9")]
	[Address(RVA = "0x2929AC0", Offset = "0x29280C0", VA = "0x182929AC0")]
	public UniTask OnBecameVisibleAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000ACA")]
	[Address(RVA = "0x29299B0", Offset = "0x2927FB0", VA = "0x1829299B0")]
	public UniTask OnBecameVisibleAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000ACB")]
	[Address(RVA = "0x2929C40", Offset = "0x2928240", VA = "0x182929C40")]
	public AsyncBecameVisibleTrigger()
	{
	}
}
