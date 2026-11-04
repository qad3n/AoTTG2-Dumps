// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncFixedUpdateTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000195")]
[DisallowMultipleComponent]
public sealed class AsyncFixedUpdateTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000A87")]
	[Address(RVA = "0x292E540", Offset = "0x292CB40", VA = "0x18292E540")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x6000A88")]
	[Address(RVA = "0x292E630", Offset = "0x292CC30", VA = "0x18292E630")]
	public IAsyncFixedUpdateHandler GetFixedUpdateAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A89")]
	[Address(RVA = "0x292E5B0", Offset = "0x292CBB0", VA = "0x18292E5B0")]
	public IAsyncFixedUpdateHandler GetFixedUpdateAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A8A")]
	[Address(RVA = "0x292E320", Offset = "0x292C920", VA = "0x18292E320")]
	public UniTask FixedUpdateAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x292E430", Offset = "0x292CA30", VA = "0x18292E430")]
	public UniTask FixedUpdateAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A8C")]
	[Address(RVA = "0x292E6A0", Offset = "0x292CCA0", VA = "0x18292E6A0")]
	public AsyncFixedUpdateTrigger()
	{
	}
}
