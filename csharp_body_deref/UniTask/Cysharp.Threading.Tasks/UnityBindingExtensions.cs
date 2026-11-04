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

[Token(Token = "0x2000183")]
public static class UnityBindingExtensions
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000184")]
	[CompilerGenerated]
	private struct _003CBindToCore_003Ed__12<TSource, TObject> : IAsyncStateMachine
	{
		[Token(Token = "0x40005FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40005FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40005FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public IUniTaskAsyncEnumerable<TSource> source;

		[Token(Token = "0x40005FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40005FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool rebindOnError;

		[Token(Token = "0x4000600")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Action<TObject, TSource> bindAction;

		[Token(Token = "0x4000601")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public TObject bindTarget;

		[Token(Token = "0x4000602")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool _003Crepeat_003E5__2;

		[Token(Token = "0x4000603")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IUniTaskAsyncEnumerator<TSource> _003Ce_003E5__3;

		[Token(Token = "0x4000604")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private object _003C_003E7__wrap3;

		[Token(Token = "0x4000605")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E7__wrap4;

		[Token(Token = "0x4000606")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<bool>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x4000607")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask.Awaiter _003C_003Eu__2;

		[Token(Token = "0x600094F")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000950")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000185")]
	[CompilerGenerated]
	private struct _003CBindToCore_003Ed__2 : IAsyncStateMachine
	{
		[Token(Token = "0x4000608")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000609")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400060A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public IUniTaskAsyncEnumerable<string> source;

		[Token(Token = "0x400060B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400060C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool rebindOnError;

		[Token(Token = "0x400060D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Text text;

		[Token(Token = "0x400060E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private bool _003Crepeat_003E5__2;

		[Token(Token = "0x400060F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private IUniTaskAsyncEnumerator<string> _003Ce_003E5__3;

		[Token(Token = "0x4000610")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private object _003C_003E7__wrap3;

		[Token(Token = "0x4000611")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003C_003E7__wrap4;

		[Token(Token = "0x4000612")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTask<bool>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x4000613")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private UniTask.Awaiter _003C_003Eu__2;

		[Token(Token = "0x6000951")]
		[Address(RVA = "0x29452D0", Offset = "0x29438D0", VA = "0x1829452D0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000952")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000186")]
	[CompilerGenerated]
	private struct _003CBindToCore_003Ed__6<T> : IAsyncStateMachine
	{
		[Token(Token = "0x4000614")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000615")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000616")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public IUniTaskAsyncEnumerable<T> source;

		[Token(Token = "0x4000617")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000618")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool rebindOnError;

		[Token(Token = "0x4000619")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Text text;

		[Token(Token = "0x400061A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool _003Crepeat_003E5__2;

		[Token(Token = "0x400061B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IUniTaskAsyncEnumerator<T> _003Ce_003E5__3;

		[Token(Token = "0x400061C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private object _003C_003E7__wrap3;

		[Token(Token = "0x400061D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E7__wrap4;

		[Token(Token = "0x400061E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<bool>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x400061F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask.Awaiter _003C_003Eu__2;

		[Token(Token = "0x6000953")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000954")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000187")]
	[CompilerGenerated]
	private struct _003CBindToCore_003Ed__9 : IAsyncStateMachine
	{
		[Token(Token = "0x4000620")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000621")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000622")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public IUniTaskAsyncEnumerable<bool> source;

		[Token(Token = "0x4000623")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000624")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool rebindOnError;

		[Token(Token = "0x4000625")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Selectable selectable;

		[Token(Token = "0x4000626")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private bool _003Crepeat_003E5__2;

		[Token(Token = "0x4000627")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private IUniTaskAsyncEnumerator<bool> _003Ce_003E5__3;

		[Token(Token = "0x4000628")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private object _003C_003E7__wrap3;

		[Token(Token = "0x4000629")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003C_003E7__wrap4;

		[Token(Token = "0x400062A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTask<bool>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x400062B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private UniTask.Awaiter _003C_003Eu__2;

		[Token(Token = "0x6000955")]
		[Address(RVA = "0x2945D20", Offset = "0x2944320", VA = "0x182945D20", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000956")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x6000942")]
	[Address(RVA = "0x294DA50", Offset = "0x294C050", VA = "0x18294DA50")]
	public static void BindTo(this IUniTaskAsyncEnumerable<string> source, Text text, bool rebindOnError = true)
	{
	}

	[Token(Token = "0x6000943")]
	[Address(RVA = "0x294DA40", Offset = "0x294C040", VA = "0x18294DA40")]
	public static void BindTo(this IUniTaskAsyncEnumerable<string> source, Text text, CancellationToken cancellationToken, bool rebindOnError = true)
	{
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x294D840", Offset = "0x294BE40", VA = "0x18294D840")]
	[AsyncStateMachine(typeof(_003CBindToCore_003Ed__2))]
	private static UniTaskVoid BindToCore(IUniTaskAsyncEnumerable<string> source, Text text, CancellationToken cancellationToken, bool rebindOnError)
	{
		return default(UniTaskVoid);
	}

	[Token(Token = "0x6000945")]
	public static void BindTo<T>(this IUniTaskAsyncEnumerable<T> source, Text text, bool rebindOnError = true)
	{
	}

	[Token(Token = "0x6000946")]
	public static void BindTo<T>(this IUniTaskAsyncEnumerable<T> source, Text text, CancellationToken cancellationToken, bool rebindOnError = true)
	{
	}

	[Token(Token = "0x6000947")]
	public static void BindTo<T>(this AsyncReactiveProperty<T> source, Text text, bool rebindOnError = true)
	{
	}

	[Token(Token = "0x6000948")]
	[AsyncStateMachine(typeof(_003CBindToCore_003Ed__6<>))]
	private static UniTaskVoid BindToCore<T>(IUniTaskAsyncEnumerable<T> source, Text text, CancellationToken cancellationToken, bool rebindOnError)
	{
		return default(UniTaskVoid);
	}

	[Token(Token = "0x6000949")]
	[Address(RVA = "0x294D9E0", Offset = "0x294BFE0", VA = "0x18294D9E0")]
	public static void BindTo(this IUniTaskAsyncEnumerable<bool> source, Selectable selectable, bool rebindOnError = true)
	{
	}

	[Token(Token = "0x600094A")]
	[Address(RVA = "0x294DA30", Offset = "0x294C030", VA = "0x18294DA30")]
	public static void BindTo(this IUniTaskAsyncEnumerable<bool> source, Selectable selectable, CancellationToken cancellationToken, bool rebindOnError = true)
	{
	}

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x294D910", Offset = "0x294BF10", VA = "0x18294D910")]
	[AsyncStateMachine(typeof(_003CBindToCore_003Ed__9))]
	private static UniTaskVoid BindToCore(IUniTaskAsyncEnumerable<bool> source, Selectable selectable, CancellationToken cancellationToken, bool rebindOnError)
	{
		return default(UniTaskVoid);
	}

	[Token(Token = "0x600094C")]
	public static void BindTo<TSource, TObject>(this IUniTaskAsyncEnumerable<TSource> source, TObject monoBehaviour, Action<TObject, TSource> bindAction, bool rebindOnError = true) where TObject : MonoBehaviour
	{
	}

	[Token(Token = "0x600094D")]
	public static void BindTo<TSource, TObject>(this IUniTaskAsyncEnumerable<TSource> source, TObject bindTarget, Action<TObject, TSource> bindAction, CancellationToken cancellationToken, bool rebindOnError = true)
	{
	}

	[Token(Token = "0x600094E")]
	[AsyncStateMachine(typeof(_003CBindToCore_003Ed__12<, >))]
	private static UniTaskVoid BindToCore<TSource, TObject>(IUniTaskAsyncEnumerable<TSource> source, TObject bindTarget, Action<TObject, TSource> bindAction, CancellationToken cancellationToken, bool rebindOnError)
	{
		return default(UniTaskVoid);
	}
}
