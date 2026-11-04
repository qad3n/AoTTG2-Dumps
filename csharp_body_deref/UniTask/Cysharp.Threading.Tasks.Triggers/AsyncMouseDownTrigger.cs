// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncMouseDownTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001C9")]
[DisallowMultipleComponent]
public sealed class AsyncMouseDownTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x2931390", Offset = "0x292F990", VA = "0x182931390")]
	private void OnMouseDown()
	{
	}

	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x2931080", Offset = "0x292F680", VA = "0x182931080")]
	public IAsyncOnMouseDownHandler GetOnMouseDownAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x29310F0", Offset = "0x292F6F0", VA = "0x1829310F0")]
	public IAsyncOnMouseDownHandler GetOnMouseDownAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x2931280", Offset = "0x292F880", VA = "0x182931280")]
	public UniTask OnMouseDownAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x2931170", Offset = "0x292F770", VA = "0x182931170")]
	public UniTask OnMouseDownAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x2931400", Offset = "0x292FA00", VA = "0x182931400")]
	public AsyncMouseDownTrigger()
	{
	}
}
