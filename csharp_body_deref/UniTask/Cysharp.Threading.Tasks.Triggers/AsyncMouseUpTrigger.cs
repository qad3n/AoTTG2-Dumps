// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncMouseUpTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001D0")]
[DisallowMultipleComponent]
public sealed class AsyncMouseUpTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x4A0F890", Offset = "0x4A0F890", VA = "0x4A0F890")]
	private void OnMouseUp()
	{
	}

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x4A0F900", Offset = "0x4A0F900", VA = "0x4A0F900")]
	public IAsyncOnMouseUpHandler GetOnMouseUpAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x4A0F970", Offset = "0x4A0F970", VA = "0x4A0F970")]
	public IAsyncOnMouseUpHandler GetOnMouseUpAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x4A0F9E0", Offset = "0x4A0F9E0", VA = "0x4A0F9E0")]
	public UniTask OnMouseUpAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x4A0FAD0", Offset = "0x4A0FAD0", VA = "0x4A0FAD0")]
	public UniTask OnMouseUpAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x4A0FBC0", Offset = "0x4A0FBC0", VA = "0x4A0FBC0")]
	public AsyncMouseUpTrigger()
	{
	}
}
