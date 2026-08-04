// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.UnityBindingExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000180")]
public static class UnityBindingExtensions
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000181")]
	[CompilerGenerated]
	private struct _003CBindToCore_003Ed__12<TSource, TObject> : IAsyncStateMachine
	{
		[Token(Token = "0x40005E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40005E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40005EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public IUniTaskAsyncEnumerable<TSource> source;

		[Token(Token = "0x40005EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40005EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool rebindOnError;

		[Token(Token = "0x40005ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Action<TObject, TSource> bindAction;

		[Token(Token = "0x40005EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public TObject bindTarget;

		[Token(Token = "0x40005EF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool _003Crepeat_003E5__2;

		[Token(Token = "0x40005F0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IUniTaskAsyncEnumerator<TSource> _003Ce_003E5__3;

		[Token(Token = "0x40005F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private object _003C_003E7__wrap3;

		[Token(Token = "0x40005F2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E7__wrap4;

		[Token(Token = "0x40005F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<bool>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40005F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask.Awaiter _003C_003Eu__2;

		[Token(Token = "0x600092B")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600092C")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000182")]
	[CompilerGenerated]
	private struct _003CBindToCore_003Ed__2 : IAsyncStateMachine
	{
		[Token(Token = "0x40005F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40005F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40005F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public IUniTaskAsyncEnumerable<string> source;

		[Token(Token = "0x40005F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40005F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool rebindOnError;

		[Token(Token = "0x40005FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Text text;

		[Token(Token = "0x40005FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private bool _003Crepeat_003E5__2;

		[Token(Token = "0x40005FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private IUniTaskAsyncEnumerator<string> _003Ce_003E5__3;

		[Token(Token = "0x40005FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private object _003C_003E7__wrap3;

		[Token(Token = "0x40005FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003C_003E7__wrap4;

		[Token(Token = "0x40005FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTask<bool>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x4000600")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private UniTask.Awaiter _003C_003Eu__2;

		[Token(Token = "0x600092D")]
		[Address(RVA = "0x4A03ED0", Offset = "0x4A03ED0", VA = "0x4A03ED0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600092E")]
		[Address(RVA = "0x4A04B00", Offset = "0x4A04B00", VA = "0x4A04B00", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000183")]
	[CompilerGenerated]
	private struct _003CBindToCore_003Ed__6<T> : IAsyncStateMachine
	{
		[Token(Token = "0x4000601")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000602")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000603")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public IUniTaskAsyncEnumerable<T> source;

		[Token(Token = "0x4000604")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000605")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool rebindOnError;

		[Token(Token = "0x4000606")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Text text;

		[Token(Token = "0x4000607")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool _003Crepeat_003E5__2;

		[Token(Token = "0x4000608")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IUniTaskAsyncEnumerator<T> _003Ce_003E5__3;

		[Token(Token = "0x4000609")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private object _003C_003E7__wrap3;

		[Token(Token = "0x400060A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E7__wrap4;

		[Token(Token = "0x400060B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<bool>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x400060C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask.Awaiter _003C_003Eu__2;

		[Token(Token = "0x600092F")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000930")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000184")]
	[CompilerGenerated]
	private struct _003CBindToCore_003Ed__9 : IAsyncStateMachine
	{
		[Token(Token = "0x400060D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400060E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400060F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public IUniTaskAsyncEnumerable<bool> source;

		[Token(Token = "0x4000610")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000611")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool rebindOnError;

		[Token(Token = "0x4000612")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Selectable selectable;

		[Token(Token = "0x4000613")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private bool _003Crepeat_003E5__2;

		[Token(Token = "0x4000614")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private IUniTaskAsyncEnumerator<bool> _003Ce_003E5__3;

		[Token(Token = "0x4000615")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private object _003C_003E7__wrap3;

		[Token(Token = "0x4000616")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003C_003E7__wrap4;

		[Token(Token = "0x4000617")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTask<bool>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x4000618")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private UniTask.Awaiter _003C_003Eu__2;

		[Token(Token = "0x6000931")]
		[Address(RVA = "0x4A04B10", Offset = "0x4A04B10", VA = "0x4A04B10", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000932")]
		[Address(RVA = "0x4A05740", Offset = "0x4A05740", VA = "0x4A05740", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x600091E")]
	[Address(RVA = "0x4A03990", Offset = "0x4A03990", VA = "0x4A03990")]
	public static void BindTo(this IUniTaskAsyncEnumerable<string> source, Text text, bool rebindOnError = true)
	{
	}

	[Token(Token = "0x600091F")]
	[Address(RVA = "0x4A03B50", Offset = "0x4A03B50", VA = "0x4A03B50")]
	public static void BindTo(this IUniTaskAsyncEnumerable<string> source, Text text, CancellationToken cancellationToken, bool rebindOnError = true)
	{
	}

	[Token(Token = "0x6000920")]
	[Address(RVA = "0x4A03A70", Offset = "0x4A03A70", VA = "0x4A03A70")]
	[AsyncStateMachine(typeof(_003CBindToCore_003Ed__2))]
	private static UniTaskVoid BindToCore(IUniTaskAsyncEnumerable<string> source, Text text, CancellationToken cancellationToken, bool rebindOnError)
	{
		return default(UniTaskVoid);
	}

	[Token(Token = "0x6000921")]
	public static void BindTo<T>(this IUniTaskAsyncEnumerable<T> source, Text text, bool rebindOnError = true)
	{
	}

	[Token(Token = "0x6000922")]
	public static void BindTo<T>(this IUniTaskAsyncEnumerable<T> source, Text text, CancellationToken cancellationToken, bool rebindOnError = true)
	{
	}

	[Token(Token = "0x6000923")]
	public static void BindTo<T>(this AsyncReactiveProperty<T> source, Text text, bool rebindOnError = true)
	{
	}

	[Token(Token = "0x6000924")]
	[AsyncStateMachine(typeof(_003CBindToCore_003Ed__6<>))]
	private static UniTaskVoid BindToCore<T>(IUniTaskAsyncEnumerable<T> source, Text text, CancellationToken cancellationToken, bool rebindOnError)
	{
		return default(UniTaskVoid);
	}

	[Token(Token = "0x6000925")]
	[Address(RVA = "0x4A03C30", Offset = "0x4A03C30", VA = "0x4A03C30")]
	public static void BindTo(this IUniTaskAsyncEnumerable<bool> source, Selectable selectable, bool rebindOnError = true)
	{
	}

	[Token(Token = "0x6000926")]
	[Address(RVA = "0x4A03DF0", Offset = "0x4A03DF0", VA = "0x4A03DF0")]
	public static void BindTo(this IUniTaskAsyncEnumerable<bool> source, Selectable selectable, CancellationToken cancellationToken, bool rebindOnError = true)
	{
	}

	[Token(Token = "0x6000927")]
	[Address(RVA = "0x4A03D10", Offset = "0x4A03D10", VA = "0x4A03D10")]
	[AsyncStateMachine(typeof(_003CBindToCore_003Ed__9))]
	private static UniTaskVoid BindToCore(IUniTaskAsyncEnumerable<bool> source, Selectable selectable, CancellationToken cancellationToken, bool rebindOnError)
	{
		return default(UniTaskVoid);
	}

	[Token(Token = "0x6000928")]
	public static void BindTo<TSource, TObject>(this IUniTaskAsyncEnumerable<TSource> source, TObject monoBehaviour, Action<TObject, TSource> bindAction, bool rebindOnError = true) where TObject : MonoBehaviour
	{
	}

	[Token(Token = "0x6000929")]
	public static void BindTo<TSource, TObject>(this IUniTaskAsyncEnumerable<TSource> source, TObject bindTarget, Action<TObject, TSource> bindAction, CancellationToken cancellationToken, bool rebindOnError = true)
	{
	}

	[Token(Token = "0x600092A")]
	[AsyncStateMachine(typeof(_003CBindToCore_003Ed__12<, >))]
	private static UniTaskVoid BindToCore<TSource, TObject>(IUniTaskAsyncEnumerable<TSource> source, TObject bindTarget, Action<TObject, TSource> bindAction, CancellationToken cancellationToken, bool rebindOnError)
	{
		return default(UniTaskVoid);
	}
}
