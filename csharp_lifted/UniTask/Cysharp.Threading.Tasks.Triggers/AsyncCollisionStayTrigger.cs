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
	[Address(RVA = "0x62F9EB0", Offset = "0x62F8EB0", VA = "0x62F9EB0")]
	private void OnCollisionStay(Collision coll)
	{
	}

	[Token(Token = "0x6000AF8")]
	[Address(RVA = "0x62F9F00", Offset = "0x62F8F00", VA = "0x62F9F00")]
	public IAsyncOnCollisionStayHandler GetOnCollisionStayAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AF9")]
	[Address(RVA = "0x62F9F70", Offset = "0x62F8F70", VA = "0x62F9F70")]
	public IAsyncOnCollisionStayHandler GetOnCollisionStayAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AFA")]
	[Address(RVA = "0x62F9FE0", Offset = "0x62F8FE0", VA = "0x62F9FE0")]
	public UniTask<Collision> OnCollisionStayAsync()
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000AFB")]
	[Address(RVA = "0x62FA0E0", Offset = "0x62F90E0", VA = "0x62FA0E0")]
	public UniTask<Collision> OnCollisionStayAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000AFC")]
	[Address(RVA = "0x62FA1F0", Offset = "0x62F91F0", VA = "0x62FA1F0")]
	public AsyncCollisionStayTrigger()
	{
	}
}
