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

[Token(Token = "0x200017C")]
public class UnityEventHandlerAsyncEnumerable : IUniTaskAsyncEnumerable<AsyncUnit>
{
	[Token(Token = "0x200017D")]
	private class UnityEventHandlerAsyncEnumerator : MoveNextSource, IUniTaskAsyncEnumerator<AsyncUnit>, IUniTaskAsyncDisposable
	{
		[Token(Token = "0x40005DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Action<object> cancel1;

		[Token(Token = "0x40005DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private static readonly Action<object> cancel2;

		[Token(Token = "0x40005E0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private readonly UnityEvent unityEvent;

		[Token(Token = "0x40005E1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private CancellationToken cancellationToken1;

		[Token(Token = "0x40005E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private CancellationToken cancellationToken2;

		[Token(Token = "0x40005E3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UnityAction unityAction;

		[Token(Token = "0x40005E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private CancellationTokenRegistration registration1;

		[Token(Token = "0x40005E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private CancellationTokenRegistration registration2;

		[Token(Token = "0x40005E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		private bool isDisposed;

		[Token(Token = "0x17000067")]
		public AsyncUnit Current
		{
			[Token(Token = "0x600092A")]
			[Address(RVA = "0x62F0D80", Offset = "0x62EFD80", VA = "0x62F0D80", Slot = "23")]
			get
			{
				return default(AsyncUnit);
			}
		}

		[Token(Token = "0x6000929")]
		[Address(RVA = "0x62F0D20", Offset = "0x62EFD20", VA = "0x62F0D20")]
		public UnityEventHandlerAsyncEnumerator(UnityEvent unityEvent, CancellationToken cancellationToken1, CancellationToken cancellationToken2)
		{
		}

		[Token(Token = "0x600092B")]
		[Address(RVA = "0x62F0D90", Offset = "0x62EFD90", VA = "0x62F0D90", Slot = "24")]
		public UniTask<bool> MoveNextAsync()
		{
			return default(UniTask<bool>);
		}

		[Token(Token = "0x600092C")]
		[Address(RVA = "0x62F1030", Offset = "0x62F0030", VA = "0x62F1030")]
		private void Invoke()
		{
		}

		[Token(Token = "0x600092D")]
		[Address(RVA = "0x62F1070", Offset = "0x62F0070", VA = "0x62F1070")]
		private static void OnCanceled1(object state)
		{
		}

		[Token(Token = "0x600092E")]
		[Address(RVA = "0x62F11B0", Offset = "0x62F01B0", VA = "0x62F11B0")]
		private static void OnCanceled2(object state)
		{
		}

		[Token(Token = "0x600092F")]
		[Address(RVA = "0x62F12F0", Offset = "0x62F02F0", VA = "0x62F12F0", Slot = "25")]
		public UniTask DisposeAsync()
		{
			return default(UniTask);
		}
	}

	[Token(Token = "0x40005DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly UnityEvent unityEvent;

	[Token(Token = "0x40005DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly CancellationToken cancellationToken1;

	[Token(Token = "0x6000927")]
	[Address(RVA = "0x62E8ED0", Offset = "0x62E7ED0", VA = "0x62E8ED0")]
	public UnityEventHandlerAsyncEnumerable(UnityEvent unityEvent, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000928")]
	[Address(RVA = "0x62F0C30", Offset = "0x62EFC30", VA = "0x62F0C30", Slot = "4")]
	public IUniTaskAsyncEnumerator<AsyncUnit> GetAsyncEnumerator([Optional] CancellationToken cancellationToken)
	{
		return null;
	}
}
[Token(Token = "0x200017E")]
public class UnityEventHandlerAsyncEnumerable<T> : IUniTaskAsyncEnumerable<T>
{
	[Token(Token = "0x200017F")]
	private class UnityEventHandlerAsyncEnumerator : MoveNextSource, IUniTaskAsyncEnumerator<T>, IUniTaskAsyncDisposable
	{
		[Token(Token = "0x40005E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Action<object> cancel1;

		[Token(Token = "0x40005EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Action<object> cancel2;

		[Token(Token = "0x40005EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly UnityEvent<T> unityEvent;

		[Token(Token = "0x40005EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken1;

		[Token(Token = "0x40005ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken2;

		[Token(Token = "0x40005EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UnityAction<T> unityAction;

		[Token(Token = "0x40005EF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration registration1;

		[Token(Token = "0x40005F0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration registration2;

		[Token(Token = "0x40005F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool isDisposed;

		[Token(Token = "0x17000068")]
		public T Current
		{
			[Token(Token = "0x6000934")]
			[CompilerGenerated]
			get
			{
				return (T)null;
			}
			[Token(Token = "0x6000935")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x6000933")]
		public UnityEventHandlerAsyncEnumerator(UnityEvent<T> unityEvent, CancellationToken cancellationToken1, CancellationToken cancellationToken2)
		{
		}

		[Token(Token = "0x6000936")]
		public UniTask<bool> MoveNextAsync()
		{
			return default(UniTask<bool>);
		}

		[Token(Token = "0x6000937")]
		private void Invoke(T value)
		{
		}

		[Token(Token = "0x6000938")]
		private static void OnCanceled1(object state)
		{
		}

		[Token(Token = "0x6000939")]
		private static void OnCanceled2(object state)
		{
		}

		[Token(Token = "0x600093A")]
		public UniTask DisposeAsync()
		{
			return default(UniTask);
		}
	}

	[Token(Token = "0x40005E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly UnityEvent<T> unityEvent;

	[Token(Token = "0x40005E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly CancellationToken cancellationToken1;

	[Token(Token = "0x6000931")]
	public UnityEventHandlerAsyncEnumerable(UnityEvent<T> unityEvent, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000932")]
	public IUniTaskAsyncEnumerator<T> GetAsyncEnumerator([Optional] CancellationToken cancellationToken)
	{
		return null;
	}
}
