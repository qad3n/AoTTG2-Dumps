// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncCollisionStayTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001B5")]
[DisallowMultipleComponent]
public sealed class AsyncCollisionStayTrigger : AsyncTriggerBase<Collision>
{
	[Token(Token = "0x6000AF7")]
	[Address(RVA = "0x292BD30", Offset = "0x292A330", VA = "0x18292BD30")]
	private void OnCollisionStay(Collision coll)
	{
	}

	[Token(Token = "0x6000AF8")]
	[Address(RVA = "0x292BA10", Offset = "0x292A010", VA = "0x18292BA10")]
	public IAsyncOnCollisionStayHandler GetOnCollisionStayAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AF9")]
	[Address(RVA = "0x292BA80", Offset = "0x292A080", VA = "0x18292BA80")]
	public IAsyncOnCollisionStayHandler GetOnCollisionStayAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AFA")]
	[Address(RVA = "0x292BB00", Offset = "0x292A100", VA = "0x18292BB00")]
	public UniTask<Collision> OnCollisionStayAsync()
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000AFB")]
	[Address(RVA = "0x292BC20", Offset = "0x292A220", VA = "0x18292BC20")]
	public UniTask<Collision> OnCollisionStayAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000AFC")]
	[Address(RVA = "0x292BD80", Offset = "0x292A380", VA = "0x18292BD80")]
	public AsyncCollisionStayTrigger()
	{
	}
}
