// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncCollisionExitTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001B1")]
[DisallowMultipleComponent]
public sealed class AsyncCollisionExitTrigger : AsyncTriggerBase<Collision>
{
	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x62F97B0", Offset = "0x62F87B0", VA = "0x62F97B0")]
	private void OnCollisionExit(Collision coll)
	{
	}

	[Token(Token = "0x6000AEA")]
	[Address(RVA = "0x62F9800", Offset = "0x62F8800", VA = "0x62F9800")]
	public IAsyncOnCollisionExitHandler GetOnCollisionExitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AEB")]
	[Address(RVA = "0x62F9870", Offset = "0x62F8870", VA = "0x62F9870")]
	public IAsyncOnCollisionExitHandler GetOnCollisionExitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AEC")]
	[Address(RVA = "0x62F98E0", Offset = "0x62F88E0", VA = "0x62F98E0")]
	public UniTask<Collision> OnCollisionExitAsync()
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x62F99E0", Offset = "0x62F89E0", VA = "0x62F99E0")]
	public UniTask<Collision> OnCollisionExitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x62F9AF0", Offset = "0x62F8AF0", VA = "0x62F9AF0")]
	public AsyncCollisionExitTrigger()
	{
	}
}
