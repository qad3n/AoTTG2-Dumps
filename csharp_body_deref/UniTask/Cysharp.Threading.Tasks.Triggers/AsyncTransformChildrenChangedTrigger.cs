// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncTransformChildrenChangedTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001EF")]
[DisallowMultipleComponent]
public sealed class AsyncTransformChildrenChangedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x6300310", Offset = "0x62FF310", VA = "0x6300310")]
	private void OnTransformChildrenChanged()
	{
	}

	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x6300380", Offset = "0x62FF380", VA = "0x6300380")]
	public IAsyncOnTransformChildrenChangedHandler GetOnTransformChildrenChangedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x63003F0", Offset = "0x62FF3F0", VA = "0x63003F0")]
	public IAsyncOnTransformChildrenChangedHandler GetOnTransformChildrenChangedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x6300460", Offset = "0x62FF460", VA = "0x6300460")]
	public UniTask OnTransformChildrenChangedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x6300550", Offset = "0x62FF550", VA = "0x6300550")]
	public UniTask OnTransformChildrenChangedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x6300640", Offset = "0x62FF640", VA = "0x6300640")]
	public AsyncTransformChildrenChangedTrigger()
	{
	}
}
