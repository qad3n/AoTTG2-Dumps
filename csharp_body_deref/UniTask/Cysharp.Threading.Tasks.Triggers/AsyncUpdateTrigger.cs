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

[Token(Token = "0x2000205")]
[DisallowMultipleComponent]
public sealed class AsyncUpdateTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x293F0B0", Offset = "0x293D6B0", VA = "0x18293F0B0")]
	private void Update()
	{
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x293EE20", Offset = "0x293D420", VA = "0x18293EE20")]
	public IAsyncUpdateHandler GetUpdateAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x293EDA0", Offset = "0x293D3A0", VA = "0x18293EDA0")]
	public IAsyncUpdateHandler GetUpdateAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x293EE90", Offset = "0x293D490", VA = "0x18293EE90")]
	public UniTask UpdateAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x293EFA0", Offset = "0x293D5A0", VA = "0x18293EFA0")]
	public UniTask UpdateAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x293F120", Offset = "0x293D720", VA = "0x18293F120")]
	public AsyncUpdateTrigger()
	{
	}
}
