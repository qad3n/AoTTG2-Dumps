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
	[Address(RVA = "0x6302940", Offset = "0x6301940", VA = "0x6302940")]
	private void Update()
	{
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x63029B0", Offset = "0x63019B0", VA = "0x63029B0")]
	public IAsyncUpdateHandler GetUpdateAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x6302A20", Offset = "0x6301A20", VA = "0x6302A20")]
	public IAsyncUpdateHandler GetUpdateAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x6302A90", Offset = "0x6301A90", VA = "0x6302A90")]
	public UniTask UpdateAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x6302B80", Offset = "0x6301B80", VA = "0x6302B80")]
	public UniTask UpdateAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x6302C70", Offset = "0x6301C70", VA = "0x6302C70")]
	public AsyncUpdateTrigger()
	{
	}
}
