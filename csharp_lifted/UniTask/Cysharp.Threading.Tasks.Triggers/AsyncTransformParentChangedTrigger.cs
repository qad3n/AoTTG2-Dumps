// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncTransformParentChangedTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001F1")]
[DisallowMultipleComponent]
public sealed class AsyncTransformParentChangedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x6300680", Offset = "0x62FF680", VA = "0x6300680")]
	private void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x63006F0", Offset = "0x62FF6F0", VA = "0x63006F0")]
	public IAsyncOnTransformParentChangedHandler GetOnTransformParentChangedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x6300760", Offset = "0x62FF760", VA = "0x6300760")]
	public IAsyncOnTransformParentChangedHandler GetOnTransformParentChangedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x63007D0", Offset = "0x62FF7D0", VA = "0x63007D0")]
	public UniTask OnTransformParentChangedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BCD")]
	[Address(RVA = "0x63008C0", Offset = "0x62FF8C0", VA = "0x63008C0")]
	public UniTask OnTransformParentChangedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x63009B0", Offset = "0x62FF9B0", VA = "0x63009B0")]
	public AsyncTransformParentChangedTrigger()
	{
	}
}
