// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncValidateTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001FF")]
[DisallowMultipleComponent]
public sealed class AsyncValidateTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x6301EF0", Offset = "0x6300EF0", VA = "0x6301EF0")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x6301F60", Offset = "0x6300F60", VA = "0x6301F60")]
	public IAsyncOnValidateHandler GetOnValidateAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x6301FD0", Offset = "0x6300FD0", VA = "0x6301FD0")]
	public IAsyncOnValidateHandler GetOnValidateAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x6302040", Offset = "0x6301040", VA = "0x6302040")]
	public UniTask OnValidateAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x6302130", Offset = "0x6301130", VA = "0x6302130")]
	public UniTask OnValidateAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x6302220", Offset = "0x6301220", VA = "0x6302220")]
	public AsyncValidateTrigger()
	{
	}
}
