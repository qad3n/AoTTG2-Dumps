// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncCollisionStay2DTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001B7")]
[DisallowMultipleComponent]
public sealed class AsyncCollisionStay2DTrigger : AsyncTriggerBase<Collision2D>
{
	[Token(Token = "0x6000AFE")]
	[Address(RVA = "0x62FA230", Offset = "0x62F9230", VA = "0x62FA230")]
	private void OnCollisionStay2D(Collision2D coll)
	{
	}

	[Token(Token = "0x6000AFF")]
	[Address(RVA = "0x62FA280", Offset = "0x62F9280", VA = "0x62FA280")]
	public IAsyncOnCollisionStay2DHandler GetOnCollisionStay2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B00")]
	[Address(RVA = "0x62FA2F0", Offset = "0x62F92F0", VA = "0x62FA2F0")]
	public IAsyncOnCollisionStay2DHandler GetOnCollisionStay2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B01")]
	[Address(RVA = "0x62FA360", Offset = "0x62F9360", VA = "0x62FA360")]
	public UniTask<Collision2D> OnCollisionStay2DAsync()
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000B02")]
	[Address(RVA = "0x62FA460", Offset = "0x62F9460", VA = "0x62FA460")]
	public UniTask<Collision2D> OnCollisionStay2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000B03")]
	[Address(RVA = "0x62FA570", Offset = "0x62F9570", VA = "0x62FA570")]
	public AsyncCollisionStay2DTrigger()
	{
	}
}
