// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncMouseEnterTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001CD")]
[DisallowMultipleComponent]
public sealed class AsyncMouseEnterTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x62FC810", Offset = "0x62FB810", VA = "0x62FC810")]
	private void OnMouseEnter()
	{
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x62FC880", Offset = "0x62FB880", VA = "0x62FC880")]
	public IAsyncOnMouseEnterHandler GetOnMouseEnterAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x62FC8F0", Offset = "0x62FB8F0", VA = "0x62FC8F0")]
	public IAsyncOnMouseEnterHandler GetOnMouseEnterAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x62FC960", Offset = "0x62FB960", VA = "0x62FC960")]
	public UniTask OnMouseEnterAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x62FCA50", Offset = "0x62FBA50", VA = "0x62FCA50")]
	public UniTask OnMouseEnterAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x62FCB40", Offset = "0x62FBB40", VA = "0x62FCB40")]
	public AsyncMouseEnterTrigger()
	{
	}
}
