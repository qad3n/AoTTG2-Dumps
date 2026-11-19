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

[Token(Token = "0x20001C3")]
[DisallowMultipleComponent]
public sealed class AsyncGUITrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x62FB6F0", Offset = "0x62FA6F0", VA = "0x62FB6F0")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x62FB760", Offset = "0x62FA760", VA = "0x62FB760")]
	public IAsyncOnGUIHandler GetOnGUIAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x62FB7D0", Offset = "0x62FA7D0", VA = "0x62FB7D0")]
	public IAsyncOnGUIHandler GetOnGUIAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x62FB840", Offset = "0x62FA840", VA = "0x62FB840")]
	public UniTask OnGUIAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x62FB930", Offset = "0x62FA930", VA = "0x62FB930")]
	public UniTask OnGUIAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x62FBA20", Offset = "0x62FAA20", VA = "0x62FBA20")]
	public AsyncGUITrigger()
	{
	}
}
