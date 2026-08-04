// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncPreRenderTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001E0")]
[DisallowMultipleComponent]
public sealed class AsyncPreRenderTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x4A11450", Offset = "0x4A11450", VA = "0x4A11450")]
	private void OnPreRender()
	{
	}

	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x4A114C0", Offset = "0x4A114C0", VA = "0x4A114C0")]
	public IAsyncOnPreRenderHandler GetOnPreRenderAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x4A11530", Offset = "0x4A11530", VA = "0x4A11530")]
	public IAsyncOnPreRenderHandler GetOnPreRenderAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x4A115A0", Offset = "0x4A115A0", VA = "0x4A115A0")]
	public UniTask OnPreRenderAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x4A11690", Offset = "0x4A11690", VA = "0x4A11690")]
	public UniTask OnPreRenderAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x4A11780", Offset = "0x4A11780", VA = "0x4A11780")]
	public AsyncPreRenderTrigger()
	{
	}
}
