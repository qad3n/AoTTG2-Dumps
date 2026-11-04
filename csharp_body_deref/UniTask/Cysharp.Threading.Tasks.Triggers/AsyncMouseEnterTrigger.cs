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
	[Address(RVA = "0x2931B10", Offset = "0x2930110", VA = "0x182931B10")]
	private void OnMouseEnter()
	{
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x2931800", Offset = "0x292FE00", VA = "0x182931800")]
	public IAsyncOnMouseEnterHandler GetOnMouseEnterAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x2931870", Offset = "0x292FE70", VA = "0x182931870")]
	public IAsyncOnMouseEnterHandler GetOnMouseEnterAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x29318F0", Offset = "0x292FEF0", VA = "0x1829318F0")]
	public UniTask OnMouseEnterAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x2931A00", Offset = "0x2930000", VA = "0x182931A00")]
	public UniTask OnMouseEnterAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x2931B80", Offset = "0x2930180", VA = "0x182931B80")]
	public AsyncMouseEnterTrigger()
	{
	}
}
