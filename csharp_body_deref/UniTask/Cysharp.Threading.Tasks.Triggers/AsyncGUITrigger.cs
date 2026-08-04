// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncGUITrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001C0")]
[DisallowMultipleComponent]
public sealed class AsyncGUITrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x4A0DD20", Offset = "0x4A0DD20", VA = "0x4A0DD20")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x6000B05")]
	[Address(RVA = "0x4A0DD90", Offset = "0x4A0DD90", VA = "0x4A0DD90")]
	public IAsyncOnGUIHandler GetOnGUIAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x4A0DE00", Offset = "0x4A0DE00", VA = "0x4A0DE00")]
	public IAsyncOnGUIHandler GetOnGUIAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B07")]
	[Address(RVA = "0x4A0DE70", Offset = "0x4A0DE70", VA = "0x4A0DE70")]
	public UniTask OnGUIAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x4A0DF60", Offset = "0x4A0DF60", VA = "0x4A0DF60")]
	public UniTask OnGUIAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x4A0E050", Offset = "0x4A0E050", VA = "0x4A0E050")]
	public AsyncGUITrigger()
	{
	}
}
