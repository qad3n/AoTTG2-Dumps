// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncPostRenderTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001DF")]
[DisallowMultipleComponent]
public sealed class AsyncPostRenderTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x29362E0", Offset = "0x29348E0", VA = "0x1829362E0")]
	private void OnPostRender()
	{
	}

	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x2936050", Offset = "0x2934650", VA = "0x182936050")]
	public IAsyncOnPostRenderHandler GetOnPostRenderAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B8C")]
	[Address(RVA = "0x2935FD0", Offset = "0x29345D0", VA = "0x182935FD0")]
	public IAsyncOnPostRenderHandler GetOnPostRenderAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B8D")]
	[Address(RVA = "0x29361D0", Offset = "0x29347D0", VA = "0x1829361D0")]
	public UniTask OnPostRenderAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B8E")]
	[Address(RVA = "0x29360C0", Offset = "0x29346C0", VA = "0x1829360C0")]
	public UniTask OnPostRenderAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x2936350", Offset = "0x2934950", VA = "0x182936350")]
	public AsyncPostRenderTrigger()
	{
	}
}
