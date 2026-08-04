// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncRectTransformDimensionsChangeTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001E2")]
[DisallowMultipleComponent]
public sealed class AsyncRectTransformDimensionsChangeTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x4A117C0", Offset = "0x4A117C0", VA = "0x4A117C0")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x4A11830", Offset = "0x4A11830", VA = "0x4A11830")]
	public IAsyncOnRectTransformDimensionsChangeHandler GetOnRectTransformDimensionsChangeAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x4A118A0", Offset = "0x4A118A0", VA = "0x4A118A0")]
	public IAsyncOnRectTransformDimensionsChangeHandler GetOnRectTransformDimensionsChangeAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x4A11910", Offset = "0x4A11910", VA = "0x4A11910")]
	public UniTask OnRectTransformDimensionsChangeAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x4A11A00", Offset = "0x4A11A00", VA = "0x4A11A00")]
	public UniTask OnRectTransformDimensionsChangeAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x4A11AF0", Offset = "0x4A11AF0", VA = "0x4A11AF0")]
	public AsyncRectTransformDimensionsChangeTrigger()
	{
	}
}
