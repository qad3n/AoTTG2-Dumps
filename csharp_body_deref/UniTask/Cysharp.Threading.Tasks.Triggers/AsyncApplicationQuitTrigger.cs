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
	[Address(RVA = "0x2928EC0", Offset = "0x29274C0", VA = "0x182928EC0")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x2928BB0", Offset = "0x29271B0", VA = "0x182928BB0")]
	public IAsyncOnApplicationQuitHandler GetOnApplicationQuitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x2928C20", Offset = "0x2927220", VA = "0x182928C20")]
	public IAsyncOnApplicationQuitHandler GetOnApplicationQuitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x2928CA0", Offset = "0x29272A0", VA = "0x182928CA0")]
	public UniTask OnApplicationQuitAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AB5")]
	[Address(RVA = "0x2928DB0", Offset = "0x29273B0", VA = "0x182928DB0")]
	public UniTask OnApplicationQuitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AB6")]
	[Address(RVA = "0x2928F30", Offset = "0x2927530", VA = "0x182928F30")]
	public AsyncApplicationQuitTrigger()
	{
	}
}
