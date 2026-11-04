// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncMouseExitTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001CF")]
[DisallowMultipleComponent]
public sealed class AsyncMouseExitTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x2931ED0", Offset = "0x29304D0", VA = "0x182931ED0")]
	private void OnMouseExit()
	{
	}

	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x2931C40", Offset = "0x2930240", VA = "0x182931C40")]
	public IAsyncOnMouseExitHandler GetOnMouseExitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x2931BC0", Offset = "0x29301C0", VA = "0x182931BC0")]
	public IAsyncOnMouseExitHandler GetOnMouseExitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x2931DC0", Offset = "0x29303C0", VA = "0x182931DC0")]
	public UniTask OnMouseExitAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x2931CB0", Offset = "0x29302B0", VA = "0x182931CB0")]
	public UniTask OnMouseExitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x2931F40", Offset = "0x2930540", VA = "0x182931F40")]
	public AsyncMouseExitTrigger()
	{
	}
}
