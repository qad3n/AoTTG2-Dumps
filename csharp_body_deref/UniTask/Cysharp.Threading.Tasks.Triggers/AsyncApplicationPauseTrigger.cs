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
	[Address(RVA = "0x2928B20", Offset = "0x2927120", VA = "0x182928B20")]
	private void OnApplicationPause(bool pauseStatus)
	{
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x2928890", Offset = "0x2926E90", VA = "0x182928890")]
	public IAsyncOnApplicationPauseHandler GetOnApplicationPauseAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x2928810", Offset = "0x2926E10", VA = "0x182928810")]
	public IAsyncOnApplicationPauseHandler GetOnApplicationPauseAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x2928A10", Offset = "0x2927010", VA = "0x182928A10")]
	public UniTask<bool> OnApplicationPauseAsync()
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x2928900", Offset = "0x2926F00", VA = "0x182928900")]
	public UniTask<bool> OnApplicationPauseAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x6000AAF")]
	[Address(RVA = "0x2928B70", Offset = "0x2927170", VA = "0x182928B70")]
	public AsyncApplicationPauseTrigger()
	{
	}
}
