// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncMouseEnterTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001CA")]
[DisallowMultipleComponent]
public sealed class AsyncMouseEnterTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x4A0EE40", Offset = "0x4A0EE40", VA = "0x4A0EE40")]
	private void OnMouseEnter()
	{
	}

	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x4A0EEB0", Offset = "0x4A0EEB0", VA = "0x4A0EEB0")]
	public IAsyncOnMouseEnterHandler GetOnMouseEnterAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x4A0EF20", Offset = "0x4A0EF20", VA = "0x4A0EF20")]
	public IAsyncOnMouseEnterHandler GetOnMouseEnterAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x4A0EF90", Offset = "0x4A0EF90", VA = "0x4A0EF90")]
	public UniTask OnMouseEnterAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x4A0F080", Offset = "0x4A0F080", VA = "0x4A0F080")]
	public UniTask OnMouseEnterAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x4A0F170", Offset = "0x4A0F170", VA = "0x4A0F170")]
	public AsyncMouseEnterTrigger()
	{
	}
}
