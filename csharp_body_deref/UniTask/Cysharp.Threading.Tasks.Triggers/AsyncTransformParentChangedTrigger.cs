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
	[Address(RVA = "0x29395C0", Offset = "0x2937BC0", VA = "0x1829395C0")]
	private void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x29392B0", Offset = "0x29378B0", VA = "0x1829392B0")]
	public IAsyncOnTransformParentChangedHandler GetOnTransformParentChangedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x2939320", Offset = "0x2937920", VA = "0x182939320")]
	public IAsyncOnTransformParentChangedHandler GetOnTransformParentChangedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x29393A0", Offset = "0x29379A0", VA = "0x1829393A0")]
	public UniTask OnTransformParentChangedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BCD")]
	[Address(RVA = "0x29394B0", Offset = "0x2937AB0", VA = "0x1829394B0")]
	public UniTask OnTransformParentChangedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x2939630", Offset = "0x2937C30", VA = "0x182939630")]
	public AsyncTransformParentChangedTrigger()
	{
	}
}
