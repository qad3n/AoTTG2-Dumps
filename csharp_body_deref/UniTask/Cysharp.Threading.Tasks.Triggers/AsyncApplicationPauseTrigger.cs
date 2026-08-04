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

[Token(Token = "0x200019C")]
[DisallowMultipleComponent]
public sealed class AsyncApplicationPauseTrigger : AsyncTriggerBase<bool>
{
	[Token(Token = "0x6000A86")]
	[Address(RVA = "0x4A09EB0", Offset = "0x4A09EB0", VA = "0x4A09EB0")]
	private void OnApplicationPause(bool pauseStatus)
	{
	}

	[Token(Token = "0x6000A87")]
	[Address(RVA = "0x4A09EF0", Offset = "0x4A09EF0", VA = "0x4A09EF0")]
	public IAsyncOnApplicationPauseHandler GetOnApplicationPauseAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A88")]
	[Address(RVA = "0x4A09F60", Offset = "0x4A09F60", VA = "0x4A09F60")]
	public IAsyncOnApplicationPauseHandler GetOnApplicationPauseAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A89")]
	[Address(RVA = "0x4A09FD0", Offset = "0x4A09FD0", VA = "0x4A09FD0")]
	public UniTask<bool> OnApplicationPauseAsync()
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x6000A8A")]
	[Address(RVA = "0x4A0A0C0", Offset = "0x4A0A0C0", VA = "0x4A0A0C0")]
	public UniTask<bool> OnApplicationPauseAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x4A0A1B0", Offset = "0x4A0A1B0", VA = "0x4A0A1B0")]
	public AsyncApplicationPauseTrigger()
	{
	}
}
