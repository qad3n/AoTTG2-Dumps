// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncApplicationQuitTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200019E")]
[DisallowMultipleComponent]
public sealed class AsyncApplicationQuitTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000A8D")]
	[Address(RVA = "0x4A0A1F0", Offset = "0x4A0A1F0", VA = "0x4A0A1F0")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x6000A8E")]
	[Address(RVA = "0x4A0A260", Offset = "0x4A0A260", VA = "0x4A0A260")]
	public IAsyncOnApplicationQuitHandler GetOnApplicationQuitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A8F")]
	[Address(RVA = "0x4A0A2D0", Offset = "0x4A0A2D0", VA = "0x4A0A2D0")]
	public IAsyncOnApplicationQuitHandler GetOnApplicationQuitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x4A0A340", Offset = "0x4A0A340", VA = "0x4A0A340")]
	public UniTask OnApplicationQuitAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x4A0A430", Offset = "0x4A0A430", VA = "0x4A0A430")]
	public UniTask OnApplicationQuitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x4A0A520", Offset = "0x4A0A520", VA = "0x4A0A520")]
	public AsyncApplicationQuitTrigger()
	{
	}
}
