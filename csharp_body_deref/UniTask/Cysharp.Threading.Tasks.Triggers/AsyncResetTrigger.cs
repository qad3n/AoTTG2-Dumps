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

[Token(Token = "0x2000203")]
[DisallowMultipleComponent]
public sealed class AsyncResetTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000C08")]
	[Address(RVA = "0x2937D50", Offset = "0x2936350", VA = "0x182937D50")]
	private void Reset()
	{
	}

	[Token(Token = "0x6000C09")]
	[Address(RVA = "0x2937AC0", Offset = "0x29360C0", VA = "0x182937AC0")]
	public IAsyncResetHandler GetResetAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C0A")]
	[Address(RVA = "0x2937A40", Offset = "0x2936040", VA = "0x182937A40")]
	public IAsyncResetHandler GetResetAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C0B")]
	[Address(RVA = "0x2937C40", Offset = "0x2936240", VA = "0x182937C40")]
	public UniTask ResetAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x2937B30", Offset = "0x2936130", VA = "0x182937B30")]
	public UniTask ResetAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x2937DC0", Offset = "0x29363C0", VA = "0x182937DC0")]
	public AsyncResetTrigger()
	{
	}
}
