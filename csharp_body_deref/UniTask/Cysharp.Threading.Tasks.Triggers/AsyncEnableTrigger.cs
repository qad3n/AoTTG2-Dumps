// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncEnableTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001C1")]
[DisallowMultipleComponent]
public sealed class AsyncEnableTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x292DEC0", Offset = "0x292C4C0", VA = "0x18292DEC0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x292DC30", Offset = "0x292C230", VA = "0x18292DC30")]
	public IAsyncOnEnableHandler GetOnEnableAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x292DBB0", Offset = "0x292C1B0", VA = "0x18292DBB0")]
	public IAsyncOnEnableHandler GetOnEnableAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x292DCA0", Offset = "0x292C2A0", VA = "0x18292DCA0")]
	public UniTask OnEnableAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x292DDB0", Offset = "0x292C3B0", VA = "0x18292DDB0")]
	public UniTask OnEnableAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x292DF30", Offset = "0x292C530", VA = "0x18292DF30")]
	public AsyncEnableTrigger()
	{
	}
}
