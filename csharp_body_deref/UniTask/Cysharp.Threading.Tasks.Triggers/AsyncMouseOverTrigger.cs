// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncMouseOverTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001CE")]
[DisallowMultipleComponent]
public sealed class AsyncMouseOverTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x4A0F520", Offset = "0x4A0F520", VA = "0x4A0F520")]
	private void OnMouseOver()
	{
	}

	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x4A0F590", Offset = "0x4A0F590", VA = "0x4A0F590")]
	public IAsyncOnMouseOverHandler GetOnMouseOverAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x4A0F600", Offset = "0x4A0F600", VA = "0x4A0F600")]
	public IAsyncOnMouseOverHandler GetOnMouseOverAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x4A0F670", Offset = "0x4A0F670", VA = "0x4A0F670")]
	public UniTask OnMouseOverAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x4A0F760", Offset = "0x4A0F760", VA = "0x4A0F760")]
	public UniTask OnMouseOverAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x4A0F850", Offset = "0x4A0F850", VA = "0x4A0F850")]
	public AsyncMouseOverTrigger()
	{
	}
}
