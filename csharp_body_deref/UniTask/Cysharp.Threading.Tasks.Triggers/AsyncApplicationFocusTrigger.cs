// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncApplicationFocusTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200019A")]
[DisallowMultipleComponent]
public sealed class AsyncApplicationFocusTrigger : AsyncTriggerBase<bool>
{
	[Token(Token = "0x6000A7F")]
	[Address(RVA = "0x4A09B70", Offset = "0x4A09B70", VA = "0x4A09B70")]
	private void OnApplicationFocus(bool hasFocus)
	{
	}

	[Token(Token = "0x6000A80")]
	[Address(RVA = "0x4A09BB0", Offset = "0x4A09BB0", VA = "0x4A09BB0")]
	public IAsyncOnApplicationFocusHandler GetOnApplicationFocusAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A81")]
	[Address(RVA = "0x4A09C20", Offset = "0x4A09C20", VA = "0x4A09C20")]
	public IAsyncOnApplicationFocusHandler GetOnApplicationFocusAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A82")]
	[Address(RVA = "0x4A09C90", Offset = "0x4A09C90", VA = "0x4A09C90")]
	public UniTask<bool> OnApplicationFocusAsync()
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x6000A83")]
	[Address(RVA = "0x4A09D80", Offset = "0x4A09D80", VA = "0x4A09D80")]
	public UniTask<bool> OnApplicationFocusAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x6000A84")]
	[Address(RVA = "0x4A09E70", Offset = "0x4A09E70", VA = "0x4A09E70")]
	public AsyncApplicationFocusTrigger()
	{
	}
}
