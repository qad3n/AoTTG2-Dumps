// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.MergedCollection
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
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200001F")]
public class MergedCollection<T> : IMergedCollection<T>, ICollection<T>, IEnumerable<T>, IEnumerable
{
	[Token(Token = "0x2000020")]
	[CompilerGenerated]
	private sealed class _003CGetEnumerator_003Ed__11 : IEnumerator<T>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400001C")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x400001D")]
		[FieldOffset(Offset = "0x0")]
		private T _003C_003E2__current;

		[Token(Token = "0x400001E")]
		[FieldOffset(Offset = "0x0")]
		public MergedCollection<T> _003C_003E4__this;

		[Token(Token = "0x400001F")]
		[FieldOffset(Offset = "0x0")]
		private Dictionary<Type, ICollection<T>>.ValueCollection.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x4000020")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<T> _003C_003E7__wrap2;

		[Token(Token = "0x17000023")]
		private T System_002ECollections_002EGeneric_002EIEnumerator_003CT_003E_002ECurrent
		{
			[Token(Token = "0x60000CD")]
			[DebuggerHidden]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000024")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000CF")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000C8")]
		[DebuggerHidden]
		public _003CGetEnumerator_003Ed__11(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000C9")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000CA")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000CB")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60000CC")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x60000CE")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x0")]
	private readonly Dictionary<Type, ICollection<T>> collections;

	[Token(Token = "0x17000021")]
	public int Count
	{
		[Token(Token = "0x60000B9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000022")]
	public bool IsReadOnly
	{
		[Token(Token = "0x60000BA")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000B8")]
	public MergedCollection()
	{
	}

	[Token(Token = "0x60000BB")]
	public void Include<TI>(ICollection<TI> collection) where TI : T
	{
	}

	[Token(Token = "0x60000BC")]
	public bool Includes<TI>() where TI : T
	{
		return default(bool);
	}

	[Token(Token = "0x60000BD")]
	public bool Includes(Type implementationType)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BE")]
	public ICollection<TI> ForType<TI>() where TI : T
	{
		return null;
	}

	[Token(Token = "0x60000BF")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000C0")]
	[IteratorStateMachine(typeof(MergedCollection<>._003CGetEnumerator_003Ed__11))]
	public IEnumerator<T> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000C1")]
	private ICollection<T> GetCollectionForItem(T item)
	{
		return null;
	}

	[Token(Token = "0x60000C2")]
	private ICollection<T> GetCollectionForType(Type type, bool throwOnFail = true)
	{
		return null;
	}

	[Token(Token = "0x60000C3")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C4")]
	public virtual void Add(T item)
	{
	}

	[Token(Token = "0x60000C5")]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x60000C6")]
	public virtual bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C7")]
	public void CopyTo(T[] array, int arrayIndex)
	{
	}
}
