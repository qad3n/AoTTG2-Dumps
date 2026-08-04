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

[Token(Token = "0x20001FC")]
[DisallowMultipleComponent]
public sealed class AsyncValidateTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000BD6")]
	[Address(RVA = "0x4A14520", Offset = "0x4A14520", VA = "0x4A14520")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x4A14590", Offset = "0x4A14590", VA = "0x4A14590")]
	public IAsyncOnValidateHandler GetOnValidateAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x4A14600", Offset = "0x4A14600", VA = "0x4A14600")]
	public IAsyncOnValidateHandler GetOnValidateAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x4A14670", Offset = "0x4A14670", VA = "0x4A14670")]
	public UniTask OnValidateAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x4A14760", Offset = "0x4A14760", VA = "0x4A14760")]
	public UniTask OnValidateAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x4A14850", Offset = "0x4A14850", VA = "0x4A14850")]
	public AsyncValidateTrigger()
	{
	}
}
