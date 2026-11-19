// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncDestroyTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200018B")]
[DisallowMultipleComponent]
public sealed class AsyncDestroyTrigger : MonoBehaviour
{
	[Token(Token = "0x200018C")]
	private class AwakeMonitor : IPlayerLoopItem
	{
		[Token(Token = "0x4000636")]
		[FieldOffset(Offset = "0x10")]
		private readonly AsyncDestroyTrigger trigger;

		[Token(Token = "0x6000A07")]
		[Address(RVA = "0x62F64D0", Offset = "0x62F54D0", VA = "0x62F64D0")]
		public AwakeMonitor(AsyncDestroyTrigger trigger)
		{
		}

		[Token(Token = "0x6000A08")]
		[Address(RVA = "0x62F6550", Offset = "0x62F5550", VA = "0x62F6550", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4000633")]
	[FieldOffset(Offset = "0x20")]
	private bool awakeCalled;

	[Token(Token = "0x4000634")]
	[FieldOffset(Offset = "0x21")]
	private bool called;

	[Token(Token = "0x4000635")]
	[FieldOffset(Offset = "0x28")]
	private CancellationTokenSource cancellationTokenSource;

	[Token(Token = "0x17000070")]
	public CancellationToken CancellationToken
	{
		[Token(Token = "0x6000A02")]
		[Address(RVA = "0x62F63D0", Offset = "0x62F53D0", VA = "0x62F63D0")]
		get
		{
			return default(CancellationToken);
		}
	}

	[Token(Token = "0x6000A03")]
	[Address(RVA = "0x62F6500", Offset = "0x62F5500", VA = "0x62F6500")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000A04")]
	[Address(RVA = "0x62F6510", Offset = "0x62F5510", VA = "0x62F6510")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000A05")]
	[Address(RVA = "0x62F33F0", Offset = "0x62F23F0", VA = "0x62F33F0")]
	public UniTask OnDestroyAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x62F6540", Offset = "0x62F5540", VA = "0x62F6540")]
	public AsyncDestroyTrigger()
	{
	}
}
