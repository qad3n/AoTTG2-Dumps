// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.TaskPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200006B")]
public static class TaskPool
{
	[Token(Token = "0x200006C")]
	[CompilerGenerated]
	private sealed class _003CGetCacheSizeInfo_003Ed__4 : IEnumerable<(Type, int)>, IEnumerable, IEnumerator<(Type, int)>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000E3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private (Type, int) _003C_003E2__current;

		[Token(Token = "0x40000E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40000E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private Dictionary<Type, Func<int>> _003C_003E7__wrap1;

		[Token(Token = "0x40000E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private bool _003C_003E7__wrap2;

		[Token(Token = "0x40000E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private Dictionary<Type, Func<int>>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x1700002A")]
		private (Type, int) System_002ECollections_002EGeneric_002EIEnumerator_003C_0028System_002EType_002CSystem_002EInt32_0029_003E_002ECurrent
		{
			[Token(Token = "0x6000176")]
			[Address(RVA = "0x8E7990", Offset = "0x8E5F90", VA = "0x1808E7990", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default((Type, int));
			}
		}

		[Token(Token = "0x1700002B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000178")]
			[Address(RVA = "0x2914C00", Offset = "0x2913200", VA = "0x182914C00", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000171")]
		[Address(RVA = "0x8E81C0", Offset = "0x8E67C0", VA = "0x1808E81C0")]
		[DebuggerHidden]
		public _003CGetCacheSizeInfo_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000172")]
		[Address(RVA = "0x2914C50", Offset = "0x2913250", VA = "0x182914C50", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000173")]
		[Address(RVA = "0x2914800", Offset = "0x2912E00", VA = "0x182914800", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000174")]
		[Address(RVA = "0x2914D60", Offset = "0x2913360", VA = "0x182914D60")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000175")]
		[Address(RVA = "0x2914D80", Offset = "0x2913380", VA = "0x182914D80")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000177")]
		[Address(RVA = "0x2914BC0", Offset = "0x29131C0", VA = "0x182914BC0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000179")]
		[Address(RVA = "0x2914B30", Offset = "0x2913130", VA = "0x182914B30", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<(Type, int)> System_002ECollections_002EGeneric_002EIEnumerable_003C_0028System_002EType_002CSystem_002EInt32_0029_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600017A")]
		[Address(RVA = "0x2914B30", Offset = "0x2913130", VA = "0x182914B30", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40000E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static int MaxPoolSize;

	[Token(Token = "0x40000E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Dictionary<Type, Func<int>> sizes;

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x2912010", Offset = "0x2910610", VA = "0x182912010")]
	static TaskPool()
	{
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x2911FB0", Offset = "0x29105B0", VA = "0x182911FB0")]
	public static void SetMaxPoolSize(int maxPoolSize)
	{
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x2911E10", Offset = "0x2910410", VA = "0x182911E10")]
	[IteratorStateMachine(typeof(_003CGetCacheSizeInfo_003Ed__4))]
	public static IEnumerable<(Type, int)> GetCacheSizeInfo()
	{
		return null;
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x2911E70", Offset = "0x2910470", VA = "0x182911E70")]
	public static void RegisterSizeGetter(Type type, Func<int> getSize)
	{
	}
}
[StructLayout((LayoutKind)3)]
[Token(Token = "0x200006E")]
public struct TaskPool<T> where T : class, ITaskPoolNode<T>
{
	[Token(Token = "0x40000E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private int gate;

	[Token(Token = "0x40000EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private int size;

	[Token(Token = "0x40000EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private T root;

	[Token(Token = "0x1700002D")]
	public int Size
	{
		[Token(Token = "0x600017C")]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017D")]
	public bool TryPop(out T result)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017E")]
	public bool TryPush(T item)
	{
		return default(bool);
	}
}
