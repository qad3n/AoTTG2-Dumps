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

[Token(Token = "0x20001A1")]
[DisallowMultipleComponent]
public sealed class AsyncApplicationQuitTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x62F7BC0", Offset = "0x62F6BC0", VA = "0x62F7BC0")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x62F7C30", Offset = "0x62F6C30", VA = "0x62F7C30")]
	public IAsyncOnApplicationQuitHandler GetOnApplicationQuitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x62F7CA0", Offset = "0x62F6CA0", VA = "0x62F7CA0")]
	public IAsyncOnApplicationQuitHandler GetOnApplicationQuitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x62F7D10", Offset = "0x62F6D10", VA = "0x62F7D10")]
	public UniTask OnApplicationQuitAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AB5")]
	[Address(RVA = "0x62F7E00", Offset = "0x62F6E00", VA = "0x62F7E00")]
	public UniTask OnApplicationQuitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AB6")]
	[Address(RVA = "0x62F7EF0", Offset = "0x62F6EF0", VA = "0x62F7EF0")]
	public AsyncApplicationQuitTrigger()
	{
	}
}
