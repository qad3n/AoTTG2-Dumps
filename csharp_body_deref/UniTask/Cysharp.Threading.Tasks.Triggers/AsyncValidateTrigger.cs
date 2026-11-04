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
	[Address(RVA = "0x293F470", Offset = "0x293DA70", VA = "0x18293F470")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x293F1E0", Offset = "0x293D7E0", VA = "0x18293F1E0")]
	public IAsyncOnValidateHandler GetOnValidateAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x293F160", Offset = "0x293D760", VA = "0x18293F160")]
	public IAsyncOnValidateHandler GetOnValidateAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x293F250", Offset = "0x293D850", VA = "0x18293F250")]
	public UniTask OnValidateAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x293F360", Offset = "0x293D960", VA = "0x18293F360")]
	public UniTask OnValidateAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x293F4E0", Offset = "0x293DAE0", VA = "0x18293F4E0")]
	public AsyncValidateTrigger()
	{
	}
}
