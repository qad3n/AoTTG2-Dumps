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

[Token(Token = "0x2000188")]
[DisallowMultipleComponent]
public sealed class AsyncDestroyTrigger : MonoBehaviour
{
	[Token(Token = "0x2000189")]
	private class AwakeMonitor : IPlayerLoopItem
	{
		[Token(Token = "0x4000623")]
		[FieldOffset(Offset = "0x10")]
		private readonly AsyncDestroyTrigger trigger;

		[Token(Token = "0x60009E3")]
		[Address(RVA = "0x4A08B00", Offset = "0x4A08B00", VA = "0x4A08B00")]
		public AwakeMonitor(AsyncDestroyTrigger trigger)
		{
		}

		[Token(Token = "0x60009E4")]
		[Address(RVA = "0x4A08B80", Offset = "0x4A08B80", VA = "0x4A08B80", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4000620")]
	[FieldOffset(Offset = "0x20")]
	private bool awakeCalled;

	[Token(Token = "0x4000621")]
	[FieldOffset(Offset = "0x21")]
	private bool called;

	[Token(Token = "0x4000622")]
	[FieldOffset(Offset = "0x28")]
	private CancellationTokenSource cancellationTokenSource;

	[Token(Token = "0x1700006E")]
	public CancellationToken CancellationToken
	{
		[Token(Token = "0x60009DE")]
		[Address(RVA = "0x4A08A00", Offset = "0x4A08A00", VA = "0x4A08A00")]
		get
		{
			return default(CancellationToken);
		}
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x4A08B30", Offset = "0x4A08B30", VA = "0x4A08B30")]
	private void Awake()
	{
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x4A08B40", Offset = "0x4A08B40", VA = "0x4A08B40")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x4A05A20", Offset = "0x4A05A20", VA = "0x4A05A20")]
	public UniTask OnDestroyAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x60009E2")]
	[Address(RVA = "0x4A08B70", Offset = "0x4A08B70", VA = "0x4A08B70")]
	public AsyncDestroyTrigger()
	{
	}
}
