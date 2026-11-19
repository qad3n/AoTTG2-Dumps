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
	[Address(RVA = "0x62F7540", Offset = "0x62F6540", VA = "0x62F7540")]
	private void OnApplicationFocus(bool hasFocus)
	{
	}

	[Token(Token = "0x6000AA4")]
	[Address(RVA = "0x62F7580", Offset = "0x62F6580", VA = "0x62F7580")]
	public IAsyncOnApplicationFocusHandler GetOnApplicationFocusAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x62F75F0", Offset = "0x62F65F0", VA = "0x62F75F0")]
	public IAsyncOnApplicationFocusHandler GetOnApplicationFocusAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x62F7660", Offset = "0x62F6660", VA = "0x62F7660")]
	public UniTask<bool> OnApplicationFocusAsync()
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x62F7750", Offset = "0x62F6750", VA = "0x62F7750")]
	public UniTask<bool> OnApplicationFocusAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x62F7840", Offset = "0x62F6840", VA = "0x62F7840")]
	public AsyncApplicationFocusTrigger()
	{
	}
}
