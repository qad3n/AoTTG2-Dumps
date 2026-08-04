// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Il2CppDummyDll;
using UnityEngine.Events;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000179")]
public class UnityEventHandlerAsyncEnumerable : IUniTaskAsyncEnumerable<AsyncUnit>
{
	[Token(Token = "0x200017A")]
	private class UnityEventHandlerAsyncEnumerator : MoveNextSource, IUniTaskAsyncEnumerator<AsyncUnit>, IUniTaskAsyncDisposable
	{
		[Token(Token = "0x40005CB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Action<object> cancel1;

		[Token(Token = "0x40005CC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private static readonly Action<object> cancel2;

		[Token(Token = "0x40005CD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private readonly UnityEvent unityEvent;

		[Token(Token = "0x40005CE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private CancellationToken cancellationToken1;

		[Token(Token = "0x40005CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private CancellationToken cancellationToken2;

		[Token(Token = "0x40005D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UnityAction unityAction;

		[Token(Token = "0x40005D1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private CancellationTokenRegistration registration1;

		[Token(Token = "0x40005D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private CancellationTokenRegistration registration2;

		[Token(Token = "0x40005D3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		private bool isDisposed;

		[Token(Token = "0x17000065")]
		public AsyncUnit Current
		{
			[Token(Token = "0x6000906")]
			[Address(RVA = "0x4A02F10", Offset = "0x4A02F10", VA = "0x4A02F10", Slot = "23")]
			get
			{
				return default(AsyncUnit);
			}
		}

		[Token(Token = "0x6000905")]
		[Address(RVA = "0x4A02EB0", Offset = "0x4A02EB0", VA = "0x4A02EB0")]
		public UnityEventHandlerAsyncEnumerator(UnityEvent unityEvent, CancellationToken cancellationToken1, CancellationToken cancellationToken2)
		{
		}

		[Token(Token = "0x6000907")]
		[Address(RVA = "0x4A02F20", Offset = "0x4A02F20", VA = "0x4A02F20", Slot = "24")]
		public UniTask<bool> MoveNextAsync()
		{
			return default(UniTask<bool>);
		}

		[Token(Token = "0x6000908")]
		[Address(RVA = "0x4A031E0", Offset = "0x4A031E0", VA = "0x4A031E0")]
		private void Invoke()
		{
		}

		[Token(Token = "0x6000909")]
		[Address(RVA = "0x4A03220", Offset = "0x4A03220", VA = "0x4A03220")]
		private static void OnCanceled1(object state)
		{
		}

		[Token(Token = "0x600090A")]
		[Address(RVA = "0x4A03350", Offset = "0x4A03350", VA = "0x4A03350")]
		private static void OnCanceled2(object state)
		{
		}

		[Token(Token = "0x600090B")]
		[Address(RVA = "0x4A03480", Offset = "0x4A03480", VA = "0x4A03480", Slot = "25")]
		public UniTask DisposeAsync()
		{
			return default(UniTask);
		}
	}

	[Token(Token = "0x40005C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly UnityEvent unityEvent;

	[Token(Token = "0x40005CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly CancellationToken cancellationToken1;

	[Token(Token = "0x6000903")]
	[Address(RVA = "0x49FBCC0", Offset = "0x49FBCC0", VA = "0x49FBCC0")]
	public UnityEventHandlerAsyncEnumerable(UnityEvent unityEvent, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000904")]
	[Address(RVA = "0x4A02DD0", Offset = "0x4A02DD0", VA = "0x4A02DD0", Slot = "4")]
	public IUniTaskAsyncEnumerator<AsyncUnit> GetAsyncEnumerator([Optional] CancellationToken cancellationToken)
	{
		return null;
	}
}
[Token(Token = "0x200017B")]
public class UnityEventHandlerAsyncEnumerable<T> : IUniTaskAsyncEnumerable<T>
{
	[Token(Token = "0x200017C")]
	private class UnityEventHandlerAsyncEnumerator : MoveNextSource, IUniTaskAsyncEnumerator<T>, IUniTaskAsyncDisposable
	{
		[Token(Token = "0x40005D6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Action<object> cancel1;

		[Token(Token = "0x40005D7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Action<object> cancel2;

		[Token(Token = "0x40005D8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly UnityEvent<T> unityEvent;

		[Token(Token = "0x40005D9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken1;

		[Token(Token = "0x40005DA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken2;

		[Token(Token = "0x40005DB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UnityAction<T> unityAction;

		[Token(Token = "0x40005DC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration registration1;

		[Token(Token = "0x40005DD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration registration2;

		[Token(Token = "0x40005DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool isDisposed;

		[Token(Token = "0x17000066")]
		public T Current
		{
			[Token(Token = "0x6000910")]
			[CompilerGenerated]
			get
			{
				return (T)null;
			}
			[Token(Token = "0x6000911")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x600090F")]
		public UnityEventHandlerAsyncEnumerator(UnityEvent<T> unityEvent, CancellationToken cancellationToken1, CancellationToken cancellationToken2)
		{
		}

		[Token(Token = "0x6000912")]
		public UniTask<bool> MoveNextAsync()
		{
			return default(UniTask<bool>);
		}

		[Token(Token = "0x6000913")]
		private void Invoke(T value)
		{
		}

		[Token(Token = "0x6000914")]
		private static void OnCanceled1(object state)
		{
		}

		[Token(Token = "0x6000915")]
		private static void OnCanceled2(object state)
		{
		}

		[Token(Token = "0x6000916")]
		public UniTask DisposeAsync()
		{
			return default(UniTask);
		}
	}

	[Token(Token = "0x40005D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly UnityEvent<T> unityEvent;

	[Token(Token = "0x40005D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly CancellationToken cancellationToken1;

	[Token(Token = "0x600090D")]
	public UnityEventHandlerAsyncEnumerable(UnityEvent<T> unityEvent, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x600090E")]
	public IUniTaskAsyncEnumerator<T> GetAsyncEnumerator([Optional] CancellationToken cancellationToken)
	{
		return null;
	}
}
