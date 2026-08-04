// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncResetTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000200")]
[DisallowMultipleComponent]
public sealed class AsyncResetTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x4A14C00", Offset = "0x4A14C00", VA = "0x4A14C00")]
	private void Reset()
	{
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x4A14C70", Offset = "0x4A14C70", VA = "0x4A14C70")]
	public IAsyncResetHandler GetResetAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x4A14CE0", Offset = "0x4A14CE0", VA = "0x4A14CE0")]
	public IAsyncResetHandler GetResetAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x4A14D50", Offset = "0x4A14D50", VA = "0x4A14D50")]
	public UniTask ResetAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x4A14E40", Offset = "0x4A14E40", VA = "0x4A14E40")]
	public UniTask ResetAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x4A14F30", Offset = "0x4A14F30", VA = "0x4A14F30")]
	public AsyncResetTrigger()
	{
	}
}
