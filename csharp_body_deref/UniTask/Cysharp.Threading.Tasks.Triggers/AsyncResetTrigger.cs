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
	[Address(RVA = "0x63025D0", Offset = "0x63015D0", VA = "0x63025D0")]
	private void Reset()
	{
	}

	[Token(Token = "0x6000C09")]
	[Address(RVA = "0x6302640", Offset = "0x6301640", VA = "0x6302640")]
	public IAsyncResetHandler GetResetAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C0A")]
	[Address(RVA = "0x63026B0", Offset = "0x63016B0", VA = "0x63026B0")]
	public IAsyncResetHandler GetResetAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C0B")]
	[Address(RVA = "0x6302720", Offset = "0x6301720", VA = "0x6302720")]
	public UniTask ResetAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x6302810", Offset = "0x6301810", VA = "0x6302810")]
	public UniTask ResetAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x6302900", Offset = "0x6301900", VA = "0x6302900")]
	public AsyncResetTrigger()
	{
	}
}
