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
	[Address(RVA = "0x292F4E0", Offset = "0x292DAE0", VA = "0x18292F4E0")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x292F1D0", Offset = "0x292D7D0", VA = "0x18292F1D0")]
	public IAsyncOnGUIHandler GetOnGUIAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x292F240", Offset = "0x292D840", VA = "0x18292F240")]
	public IAsyncOnGUIHandler GetOnGUIAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x292F2C0", Offset = "0x292D8C0", VA = "0x18292F2C0")]
	public UniTask OnGUIAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x292F3D0", Offset = "0x292D9D0", VA = "0x18292F3D0")]
	public UniTask OnGUIAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x292F550", Offset = "0x292DB50", VA = "0x18292F550")]
	public AsyncGUITrigger()
	{
	}
}
