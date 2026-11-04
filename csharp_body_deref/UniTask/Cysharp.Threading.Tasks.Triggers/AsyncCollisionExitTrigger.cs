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
	[Address(RVA = "0x292B5D0", Offset = "0x2929BD0", VA = "0x18292B5D0")]
	private void OnCollisionExit(Collision coll)
	{
	}

	[Token(Token = "0x6000AEA")]
	[Address(RVA = "0x292B330", Offset = "0x2929930", VA = "0x18292B330")]
	public IAsyncOnCollisionExitHandler GetOnCollisionExitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AEB")]
	[Address(RVA = "0x292B2B0", Offset = "0x29298B0", VA = "0x18292B2B0")]
	public IAsyncOnCollisionExitHandler GetOnCollisionExitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AEC")]
	[Address(RVA = "0x292B4B0", Offset = "0x2929AB0", VA = "0x18292B4B0")]
	public UniTask<Collision> OnCollisionExitAsync()
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x292B3A0", Offset = "0x29299A0", VA = "0x18292B3A0")]
	public UniTask<Collision> OnCollisionExitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x292B620", Offset = "0x2929C20", VA = "0x18292B620")]
	public AsyncCollisionExitTrigger()
	{
	}
}
