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
		[Address(RVA = "0x46E3A00", Offset = "0x46E3A00", VA = "0x46E3A00")]
		public AwakeMonitor(AsyncDestroyTrigger trigger)
		{
		}

		[Token(Token = "0x60009E4")]
		[Address(RVA = "0x46E3A80", Offset = "0x46E3A80", VA = "0x46E3A80", Slot = "4")]
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
		[Address(RVA = "0x46E3900", Offset = "0x46E3900", VA = "0x46E3900")]
		get
		{
			return default(CancellationToken);
		}
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x46E3A30", Offset = "0x46E3A30", VA = "0x46E3A30")]
	private void Awake()
	{
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x46E3A40", Offset = "0x46E3A40", VA = "0x46E3A40")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x46E0920", Offset = "0x46E0920", VA = "0x46E0920")]
	public UniTask OnDestroyAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x60009E2")]
	[Address(RVA = "0x46E3A70", Offset = "0x46E3A70", VA = "0x46E3A70")]
	public AsyncDestroyTrigger()
	{
	}
}
