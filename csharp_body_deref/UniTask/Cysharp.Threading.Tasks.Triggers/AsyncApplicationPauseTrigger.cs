// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncApplicationPauseTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200019F")]
[DisallowMultipleComponent]
public sealed class AsyncApplicationPauseTrigger : AsyncTriggerBase<bool>
{
	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x62F7880", Offset = "0x62F6880", VA = "0x62F7880")]
	private void OnApplicationPause(bool pauseStatus)
	{
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x62F78C0", Offset = "0x62F68C0", VA = "0x62F78C0")]
	public IAsyncOnApplicationPauseHandler GetOnApplicationPauseAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x62F7930", Offset = "0x62F6930", VA = "0x62F7930")]
	public IAsyncOnApplicationPauseHandler GetOnApplicationPauseAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x62F79A0", Offset = "0x62F69A0", VA = "0x62F79A0")]
	public UniTask<bool> OnApplicationPauseAsync()
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x62F7A90", Offset = "0x62F6A90", VA = "0x62F7A90")]
	public UniTask<bool> OnApplicationPauseAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x6000AAF")]
	[Address(RVA = "0x62F7B80", Offset = "0x62F6B80", VA = "0x62F7B80")]
	public AsyncApplicationPauseTrigger()
	{
	}
}
