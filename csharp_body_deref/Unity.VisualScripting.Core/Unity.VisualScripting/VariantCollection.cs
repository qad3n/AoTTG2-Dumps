using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200002A")]
public class VariantCollection<TBase, TImplementation> : ICollection<TBase>, IEnumerable<TBase>, IEnumerable where TImplementation : TBase
{
	[Token(Token = "0x200002B")]
	[CompilerGenerated]
	private sealed class _003CGetEnumerator_003Ed__10 : IEnumerator<TBase>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400003A")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x400003B")]
		[FieldOffset(Offset = "0x0")]
		private TBase _003C_003E2__current;

		[Token(Token = "0x400003C")]
		[FieldOffset(Offset = "0x0")]
		public VariantCollection<TBase, TImplementation> _003C_003E4__this;

		[Token(Token = "0x400003D")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TImplementation> _003C_003E7__wrap1;

		[Token(Token = "0x17000046")]
		private TBase System_002ECollections_002EGeneric_002EIEnumerator_003CTBase_003E_002ECurrent
		{
			[Token(Token = "0x6000171")]
			[DebuggerHidden]
			get
			{
				return (TBase)null;
			}
		}

		[Token(Token = "0x17000047")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000173")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600016D")]
		[DebuggerHidden]
		public _003CGetEnumerator_003Ed__10(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600016E")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600016F")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000170")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000172")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x17000043")]
	public ICollection<TImplementation> implementation
	{
		[Token(Token = "0x6000162")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000163")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public int Count
	{
		[Token(Token = "0x6000164")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000045")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000165")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000161")]
	public VariantCollection(ICollection<TImplementation> implementation)
	{
	}

	[Token(Token = "0x6000166")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000167")]
	[IteratorStateMachine(typeof(VariantCollection<, >._003CGetEnumerator_003Ed__10))]
	public IEnumerator<TBase> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000168")]
	public void Add(TBase item)
	{
	}

	[Token(Token = "0x6000169")]
	public void Clear()
	{
	}

	[Token(Token = "0x600016A")]
	public bool Contains(TBase item)
	{
		return default(bool);
	}

	[Token(Token = "0x600016B")]
	public bool Remove(TBase item)
	{
		return default(bool);
	}

	[Token(Token = "0x600016C")]
	public void CopyTo(TBase[] array, int arrayIndex)
	{
	}
}
