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

[Token(Token = "0x20001E5")]
[DisallowMultipleComponent]
public sealed class AsyncRectTransformDimensionsChangeTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x62FF190", Offset = "0x62FE190", VA = "0x62FF190")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x62FF200", Offset = "0x62FE200", VA = "0x62FF200")]
	public IAsyncOnRectTransformDimensionsChangeHandler GetOnRectTransformDimensionsChangeAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BA1")]
	[Address(RVA = "0x62FF270", Offset = "0x62FE270", VA = "0x62FF270")]
	public IAsyncOnRectTransformDimensionsChangeHandler GetOnRectTransformDimensionsChangeAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x62FF2E0", Offset = "0x62FE2E0", VA = "0x62FF2E0")]
	public UniTask OnRectTransformDimensionsChangeAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x62FF3D0", Offset = "0x62FE3D0", VA = "0x62FF3D0")]
	public UniTask OnRectTransformDimensionsChangeAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x62FF4C0", Offset = "0x62FE4C0", VA = "0x62FF4C0")]
	public AsyncRectTransformDimensionsChangeTrigger()
	{
	}
}
