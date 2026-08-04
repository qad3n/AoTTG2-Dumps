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

[Token(Token = "0x20001A4")]
[DisallowMultipleComponent]
public sealed class AsyncBecameVisibleTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000AA2")]
	[Address(RVA = "0x4A0AC90", Offset = "0x4A0AC90", VA = "0x4A0AC90")]
	private void OnBecameVisible()
	{
	}

	[Token(Token = "0x6000AA3")]
	[Address(RVA = "0x4A0AD00", Offset = "0x4A0AD00", VA = "0x4A0AD00")]
	public IAsyncOnBecameVisibleHandler GetOnBecameVisibleAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AA4")]
	[Address(RVA = "0x4A0AD70", Offset = "0x4A0AD70", VA = "0x4A0AD70")]
	public IAsyncOnBecameVisibleHandler GetOnBecameVisibleAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x4A0ADE0", Offset = "0x4A0ADE0", VA = "0x4A0ADE0")]
	public UniTask OnBecameVisibleAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x4A0AED0", Offset = "0x4A0AED0", VA = "0x4A0AED0")]
	public UniTask OnBecameVisibleAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x4A0AFC0", Offset = "0x4A0AFC0", VA = "0x4A0AFC0")]
	public AsyncBecameVisibleTrigger()
	{
	}
}
