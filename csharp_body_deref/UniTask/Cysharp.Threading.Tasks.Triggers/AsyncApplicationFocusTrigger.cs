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

[Token(Token = "0x200019D")]
[DisallowMultipleComponent]
public sealed class AsyncApplicationFocusTrigger : AsyncTriggerBase<bool>
{
	[Token(Token = "0x6000AA3")]
	[Address(RVA = "0x2928780", Offset = "0x2926D80", VA = "0x182928780")]
	private void OnApplicationFocus(bool hasFocus)
	{
	}

	[Token(Token = "0x6000AA4")]
	[Address(RVA = "0x2928470", Offset = "0x2926A70", VA = "0x182928470")]
	public IAsyncOnApplicationFocusHandler GetOnApplicationFocusAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x29284E0", Offset = "0x2926AE0", VA = "0x1829284E0")]
	public IAsyncOnApplicationFocusHandler GetOnApplicationFocusAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x2928670", Offset = "0x2926C70", VA = "0x182928670")]
	public UniTask<bool> OnApplicationFocusAsync()
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x2928560", Offset = "0x2926B60", VA = "0x182928560")]
	public UniTask<bool> OnApplicationFocusAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x29287D0", Offset = "0x2926DD0", VA = "0x1829287D0")]
	public AsyncApplicationFocusTrigger()
	{
	}
}
