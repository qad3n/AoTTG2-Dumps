// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncUpdateTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000202")]
[DisallowMultipleComponent]
public sealed class AsyncUpdateTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x4A14F70", Offset = "0x4A14F70", VA = "0x4A14F70")]
	private void Update()
	{
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x4A14FE0", Offset = "0x4A14FE0", VA = "0x4A14FE0")]
	public IAsyncUpdateHandler GetUpdateAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x4A15050", Offset = "0x4A15050", VA = "0x4A15050")]
	public IAsyncUpdateHandler GetUpdateAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x4A150C0", Offset = "0x4A150C0", VA = "0x4A150C0")]
	public UniTask UpdateAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x4A151B0", Offset = "0x4A151B0", VA = "0x4A151B0")]
	public UniTask UpdateAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x4A152A0", Offset = "0x4A152A0", VA = "0x4A152A0")]
	public AsyncUpdateTrigger()
	{
	}
}
