// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Enumerable
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq;

[Token(Token = "0x2000018")]
public static class Enumerable
{
	[Token(Token = "0x2000019")]
	private abstract class Iterator<TSource> : IEnumerable<TSource>, IEnumerable, IEnumerator<TSource>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000010")]
		[FieldOffset(Offset = "0x0")]
		private int threadId;

		[Token(Token = "0x4000011")]
		[FieldOffset(Offset = "0x0")]
		internal int state;

		[Token(Token = "0x4000012")]
		[FieldOffset(Offset = "0x0")]
		internal TSource current;

		[Token(Token = "0x1700000D")]
		public TSource Current
		{
			[Token(Token = "0x60000AA")]
			get
			{
				return (TSource)null;
			}
		}

		[Token(Token = "0x1700000E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000B1")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000A9")]
		public Iterator()
		{
		}

		[Token(Token = "0x60000AB")]
		public abstract Iterator<TSource> Clone();

		[Token(Token = "0x60000AC")]
		public virtual void Dispose()
		{
		}

		[Token(Token = "0x60000AD")]
		public IEnumerator<TSource> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000AE")]
		public abstract bool MoveNext();

		[Token(Token = "0x60000AF")]
		public abstract IEnumerable<TResult> Select<TResult>(Func<TSource, TResult> selector);

		[Token(Token = "0x60000B0")]
		public abstract IEnumerable<TSource> Where(Func<TSource, bool> predicate);

		[Token(Token = "0x60000B2")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000B3")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200001A")]
	private class WhereEnumerableIterator<TSource> : Iterator<TSource>
	{
		[Token(Token = "0x4000013")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> source;

		[Token(Token = "0x4000014")]
		[FieldOffset(Offset = "0x0")]
		private Func<TSource, bool> predicate;

		[Token(Token = "0x4000015")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TSource> enumerator;

		[Token(Token = "0x60000B4")]
		public WhereEnumerableIterator(IEnumerable<TSource> source, Func<TSource, bool> predicate)
		{
		}

		[Token(Token = "0x60000B5")]
		public override Iterator<TSource> Clone()
		{
			return null;
		}

		[Token(Token = "0x60000B6")]
		public override void Dispose()
		{
		}

		[Token(Token = "0x60000B7")]
		public override bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000B8")]
		public override IEnumerable<TResult> Select<TResult>(Func<TSource, TResult> selector)
		{
			return null;
		}

		[Token(Token = "0x60000B9")]
		public override IEnumerable<TSource> Where(Func<TSource, bool> predicate)
		{
			return null;
		}
	}

	[Token(Token = "0x200001B")]
	private class WhereArrayIterator<TSource> : Iterator<TSource>
	{
		[Token(Token = "0x4000016")]
		[FieldOffset(Offset = "0x0")]
		private TSource[] source;

		[Token(Token = "0x4000017")]
		[FieldOffset(Offset = "0x0")]
		private Func<TSource, bool> predicate;

		[Token(Token = "0x4000018")]
		[FieldOffset(Offset = "0x0")]
		private int index;

		[Token(Token = "0x60000BA")]
		public WhereArrayIterator(TSource[] source, Func<TSource, bool> predicate)
		{
		}

		[Token(Token = "0x60000BB")]
		public override Iterator<TSource> Clone()
		{
			return null;
		}

		[Token(Token = "0x60000BC")]
		public override bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000BD")]
		public override IEnumerable<TResult> Select<TResult>(Func<TSource, TResult> selector)
		{
			return null;
		}

		[Token(Token = "0x60000BE")]
		public override IEnumerable<TSource> Where(Func<TSource, bool> predicate)
		{
			return null;
		}
	}

	[Token(Token = "0x200001C")]
	private class WhereListIterator<TSource> : Iterator<TSource>
	{
		[Token(Token = "0x4000019")]
		[FieldOffset(Offset = "0x0")]
		private List<TSource> source;

		[Token(Token = "0x400001A")]
		[FieldOffset(Offset = "0x0")]
		private Func<TSource, bool> predicate;

		[Token(Token = "0x400001B")]
		[FieldOffset(Offset = "0x0")]
		private List<TSource>.Enumerator enumerator;

		[Token(Token = "0x60000BF")]
		public WhereListIterator(List<TSource> source, Func<TSource, bool> predicate)
		{
		}

		[Token(Token = "0x60000C0")]
		public override Iterator<TSource> Clone()
		{
			return null;
		}

		[Token(Token = "0x60000C1")]
		public override bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000C2")]
		public override IEnumerable<TResult> Select<TResult>(Func<TSource, TResult> selector)
		{
			return null;
		}

		[Token(Token = "0x60000C3")]
		public override IEnumerable<TSource> Where(Func<TSource, bool> predicate)
		{
			return null;
		}
	}

	[Token(Token = "0x200001D")]
	private class WhereSelectEnumerableIterator<TSource, TResult> : Iterator<TResult>
	{
		[Token(Token = "0x400001C")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> source;

		[Token(Token = "0x400001D")]
		[FieldOffset(Offset = "0x0")]
		private Func<TSource, bool> predicate;

		[Token(Token = "0x400001E")]
		[FieldOffset(Offset = "0x0")]
		private Func<TSource, TResult> selector;

		[Token(Token = "0x400001F")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TSource> enumerator;

		[Token(Token = "0x60000C4")]
		public WhereSelectEnumerableIterator(IEnumerable<TSource> source, Func<TSource, bool> predicate, Func<TSource, TResult> selector)
		{
		}

		[Token(Token = "0x60000C5")]
		public override Iterator<TResult> Clone()
		{
			return null;
		}

		[Token(Token = "0x60000C6")]
		public override void Dispose()
		{
		}

		[Token(Token = "0x60000C7")]
		public override bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000C8")]
		public override IEnumerable<TResult2> Select<TResult2>(Func<TResult, TResult2> selector)
		{
			return null;
		}

		[Token(Token = "0x60000C9")]
		public override IEnumerable<TResult> Where(Func<TResult, bool> predicate)
		{
			return null;
		}
	}

	[Token(Token = "0x200001E")]
	private class WhereSelectArrayIterator<TSource, TResult> : Iterator<TResult>
	{
		[Token(Token = "0x4000020")]
		[FieldOffset(Offset = "0x0")]
		private TSource[] source;

		[Token(Token = "0x4000021")]
		[FieldOffset(Offset = "0x0")]
		private Func<TSource, bool> predicate;

		[Token(Token = "0x4000022")]
		[FieldOffset(Offset = "0x0")]
		private Func<TSource, TResult> selector;

		[Token(Token = "0x4000023")]
		[FieldOffset(Offset = "0x0")]
		private int index;

		[Token(Token = "0x60000CA")]
		public WhereSelectArrayIterator(TSource[] source, Func<TSource, bool> predicate, Func<TSource, TResult> selector)
		{
		}

		[Token(Token = "0x60000CB")]
		public override Iterator<TResult> Clone()
		{
			return null;
		}

		[Token(Token = "0x60000CC")]
		public override bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000CD")]
		public override IEnumerable<TResult2> Select<TResult2>(Func<TResult, TResult2> selector)
		{
			return null;
		}

		[Token(Token = "0x60000CE")]
		public override IEnumerable<TResult> Where(Func<TResult, bool> predicate)
		{
			return null;
		}
	}

	[Token(Token = "0x200001F")]
	private class WhereSelectListIterator<TSource, TResult> : Iterator<TResult>
	{
		[Token(Token = "0x4000024")]
		[FieldOffset(Offset = "0x0")]
		private List<TSource> source;

		[Token(Token = "0x4000025")]
		[FieldOffset(Offset = "0x0")]
		private Func<TSource, bool> predicate;

		[Token(Token = "0x4000026")]
		[FieldOffset(Offset = "0x0")]
		private Func<TSource, TResult> selector;

		[Token(Token = "0x4000027")]
		[FieldOffset(Offset = "0x0")]
		private List<TSource>.Enumerator enumerator;

		[Token(Token = "0x60000CF")]
		public WhereSelectListIterator(List<TSource> source, Func<TSource, bool> predicate, Func<TSource, TResult> selector)
		{
		}

		[Token(Token = "0x60000D0")]
		public override Iterator<TResult> Clone()
		{
			return null;
		}

		[Token(Token = "0x60000D1")]
		public override bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000D2")]
		public override IEnumerable<TResult2> Select<TResult2>(Func<TResult, TResult2> selector)
		{
			return null;
		}

		[Token(Token = "0x60000D3")]
		public override IEnumerable<TResult> Where(Func<TResult, bool> predicate)
		{
			return null;
		}
	}

	[Token(Token = "0x2000020")]
	[CompilerGenerated]
	private sealed class _003CWhereIterator_003Ed__2<TSource> : IEnumerable<TSource>, IEnumerable, IEnumerator<TSource>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000028")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000029")]
		[FieldOffset(Offset = "0x0")]
		private TSource _003C_003E2__current;

		[Token(Token = "0x400002A")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400002B")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> source;

		[Token(Token = "0x400002C")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__source;

		[Token(Token = "0x400002D")]
		[FieldOffset(Offset = "0x0")]
		private Func<TSource, int, bool> predicate;

		[Token(Token = "0x400002E")]
		[FieldOffset(Offset = "0x0")]
		public Func<TSource, int, bool> _003C_003E3__predicate;

		[Token(Token = "0x400002F")]
		[FieldOffset(Offset = "0x0")]
		private int _003Cindex_003E5__2;

		[Token(Token = "0x4000030")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TSource> _003C_003E7__wrap2;

		[Token(Token = "0x1700000F")]
		private TSource System_002ECollections_002EGeneric_002EIEnumerator_003CTSource_003E_002ECurrent
		{
			[Token(Token = "0x60000D8")]
			[DebuggerHidden]
			get
			{
				return (TSource)null;
			}
		}

		[Token(Token = "0x17000010")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000DA")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000D4")]
		[DebuggerHidden]
		public _003CWhereIterator_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000D5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000D6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000D7")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60000D9")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000DB")]
		[DebuggerHidden]
		private IEnumerator<TSource> System_002ECollections_002EGeneric_002EIEnumerable_003CTSource_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000DC")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000021")]
	[CompilerGenerated]
	private sealed class _003CSelectIterator_003Ed__5<TSource, TResult> : IEnumerable<TResult>, IEnumerable, IEnumerator<TResult>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000031")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000032")]
		[FieldOffset(Offset = "0x0")]
		private TResult _003C_003E2__current;

		[Token(Token = "0x4000033")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000034")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> source;

		[Token(Token = "0x4000035")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__source;

		[Token(Token = "0x4000036")]
		[FieldOffset(Offset = "0x0")]
		private Func<TSource, int, TResult> selector;

		[Token(Token = "0x4000037")]
		[FieldOffset(Offset = "0x0")]
		public Func<TSource, int, TResult> _003C_003E3__selector;

		[Token(Token = "0x4000038")]
		[FieldOffset(Offset = "0x0")]
		private int _003Cindex_003E5__2;

		[Token(Token = "0x4000039")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TSource> _003C_003E7__wrap2;

		[Token(Token = "0x17000011")]
		private TResult System_002ECollections_002EGeneric_002EIEnumerator_003CTResult_003E_002ECurrent
		{
			[Token(Token = "0x60000E1")]
			[DebuggerHidden]
			get
			{
				return (TResult)null;
			}
		}

		[Token(Token = "0x17000012")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000E3")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000DD")]
		[DebuggerHidden]
		public _003CSelectIterator_003Ed__5(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000DE")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000DF")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000E0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60000E2")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000E4")]
		[DebuggerHidden]
		private IEnumerator<TResult> System_002ECollections_002EGeneric_002EIEnumerable_003CTResult_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000E5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000024")]
	[CompilerGenerated]
	private sealed class _003CSelectManyIterator_003Ed__17<TSource, TResult> : IEnumerable<TResult>, IEnumerable, IEnumerator<TResult>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400003E")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x400003F")]
		[FieldOffset(Offset = "0x0")]
		private TResult _003C_003E2__current;

		[Token(Token = "0x4000040")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000041")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> source;

		[Token(Token = "0x4000042")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__source;

		[Token(Token = "0x4000043")]
		[FieldOffset(Offset = "0x0")]
		private Func<TSource, IEnumerable<TResult>> selector;

		[Token(Token = "0x4000044")]
		[FieldOffset(Offset = "0x0")]
		public Func<TSource, IEnumerable<TResult>> _003C_003E3__selector;

		[Token(Token = "0x4000045")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TSource> _003C_003E7__wrap1;

		[Token(Token = "0x4000046")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TResult> _003C_003E7__wrap2;

		[Token(Token = "0x17000013")]
		private TResult System_002ECollections_002EGeneric_002EIEnumerator_003CTResult_003E_002ECurrent
		{
			[Token(Token = "0x60000EF")]
			[DebuggerHidden]
			get
			{
				return (TResult)null;
			}
		}

		[Token(Token = "0x17000014")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000F1")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000EA")]
		[DebuggerHidden]
		public _003CSelectManyIterator_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000EB")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000EC")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000ED")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60000EE")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x60000F0")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000F2")]
		[DebuggerHidden]
		private IEnumerator<TResult> System_002ECollections_002EGeneric_002EIEnumerable_003CTResult_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000F3")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000025")]
	[CompilerGenerated]
	private sealed class _003CTakeIterator_003Ed__25<TSource> : IEnumerable<TSource>, IEnumerable, IEnumerator<TSource>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000047")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000048")]
		[FieldOffset(Offset = "0x0")]
		private TSource _003C_003E2__current;

		[Token(Token = "0x4000049")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400004A")]
		[FieldOffset(Offset = "0x0")]
		private int count;

		[Token(Token = "0x400004B")]
		[FieldOffset(Offset = "0x0")]
		public int _003C_003E3__count;

		[Token(Token = "0x400004C")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> source;

		[Token(Token = "0x400004D")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__source;

		[Token(Token = "0x400004E")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TSource> _003C_003E7__wrap1;

		[Token(Token = "0x17000015")]
		private TSource System_002ECollections_002EGeneric_002EIEnumerator_003CTSource_003E_002ECurrent
		{
			[Token(Token = "0x60000F8")]
			[DebuggerHidden]
			get
			{
				return (TSource)null;
			}
		}

		[Token(Token = "0x17000016")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000FA")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000F4")]
		[DebuggerHidden]
		public _003CTakeIterator_003Ed__25(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000F5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000F6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000F7")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60000F9")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000FB")]
		[DebuggerHidden]
		private IEnumerator<TSource> System_002ECollections_002EGeneric_002EIEnumerable_003CTSource_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000FC")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000026")]
	[CompilerGenerated]
	private sealed class _003CTakeWhileIterator_003Ed__27<TSource> : IEnumerable<TSource>, IEnumerable, IEnumerator<TSource>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400004F")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000050")]
		[FieldOffset(Offset = "0x0")]
		private TSource _003C_003E2__current;

		[Token(Token = "0x4000051")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000052")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> source;

		[Token(Token = "0x4000053")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__source;

		[Token(Token = "0x4000054")]
		[FieldOffset(Offset = "0x0")]
		private Func<TSource, bool> predicate;

		[Token(Token = "0x4000055")]
		[FieldOffset(Offset = "0x0")]
		public Func<TSource, bool> _003C_003E3__predicate;

		[Token(Token = "0x4000056")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TSource> _003C_003E7__wrap1;

		[Token(Token = "0x17000017")]
		private TSource System_002ECollections_002EGeneric_002EIEnumerator_003CTSource_003E_002ECurrent
		{
			[Token(Token = "0x6000101")]
			[DebuggerHidden]
			get
			{
				return (TSource)null;
			}
		}

		[Token(Token = "0x17000018")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000103")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000FD")]
		[DebuggerHidden]
		public _003CTakeWhileIterator_003Ed__27(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000FE")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000FF")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000100")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000102")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000104")]
		[DebuggerHidden]
		private IEnumerator<TSource> System_002ECollections_002EGeneric_002EIEnumerable_003CTSource_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000105")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000027")]
	[CompilerGenerated]
	private sealed class _003CSkipIterator_003Ed__31<TSource> : IEnumerable<TSource>, IEnumerable, IEnumerator<TSource>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000057")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000058")]
		[FieldOffset(Offset = "0x0")]
		private TSource _003C_003E2__current;

		[Token(Token = "0x4000059")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400005A")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> source;

		[Token(Token = "0x400005B")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__source;

		[Token(Token = "0x400005C")]
		[FieldOffset(Offset = "0x0")]
		private int count;

		[Token(Token = "0x400005D")]
		[FieldOffset(Offset = "0x0")]
		public int _003C_003E3__count;

		[Token(Token = "0x400005E")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TSource> _003Ce_003E5__2;

		[Token(Token = "0x17000019")]
		private TSource System_002ECollections_002EGeneric_002EIEnumerator_003CTSource_003E_002ECurrent
		{
			[Token(Token = "0x600010A")]
			[DebuggerHidden]
			get
			{
				return (TSource)null;
			}
		}

		[Token(Token = "0x1700001A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600010C")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000106")]
		[DebuggerHidden]
		public _003CSkipIterator_003Ed__31(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000107")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000108")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000109")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x600010B")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600010D")]
		[DebuggerHidden]
		private IEnumerator<TSource> System_002ECollections_002EGeneric_002EIEnumerable_003CTSource_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600010E")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000028")]
	[CompilerGenerated]
	private sealed class _003CConcatIterator_003Ed__59<TSource> : IEnumerable<TSource>, IEnumerable, IEnumerator<TSource>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400005F")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000060")]
		[FieldOffset(Offset = "0x0")]
		private TSource _003C_003E2__current;

		[Token(Token = "0x4000061")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000062")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> first;

		[Token(Token = "0x4000063")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__first;

		[Token(Token = "0x4000064")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> second;

		[Token(Token = "0x4000065")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__second;

		[Token(Token = "0x4000066")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TSource> _003C_003E7__wrap1;

		[Token(Token = "0x1700001B")]
		private TSource System_002ECollections_002EGeneric_002EIEnumerator_003CTSource_003E_002ECurrent
		{
			[Token(Token = "0x6000114")]
			[DebuggerHidden]
			get
			{
				return (TSource)null;
			}
		}

		[Token(Token = "0x1700001C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000116")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600010F")]
		[DebuggerHidden]
		public _003CConcatIterator_003Ed__59(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000110")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000111")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000112")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000113")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000115")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000117")]
		[DebuggerHidden]
		private IEnumerator<TSource> System_002ECollections_002EGeneric_002EIEnumerable_003CTSource_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000118")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000029")]
	[CompilerGenerated]
	private sealed class _003CPrependIterator_003Ed__63<TSource> : IEnumerable<TSource>, IEnumerable, IEnumerator<TSource>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000067")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000068")]
		[FieldOffset(Offset = "0x0")]
		private TSource _003C_003E2__current;

		[Token(Token = "0x4000069")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400006A")]
		[FieldOffset(Offset = "0x0")]
		private TSource element;

		[Token(Token = "0x400006B")]
		[FieldOffset(Offset = "0x0")]
		public TSource _003C_003E3__element;

		[Token(Token = "0x400006C")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> source;

		[Token(Token = "0x400006D")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__source;

		[Token(Token = "0x400006E")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TSource> _003C_003E7__wrap1;

		[Token(Token = "0x1700001D")]
		private TSource System_002ECollections_002EGeneric_002EIEnumerator_003CTSource_003E_002ECurrent
		{
			[Token(Token = "0x600011D")]
			[DebuggerHidden]
			get
			{
				return (TSource)null;
			}
		}

		[Token(Token = "0x1700001E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600011F")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000119")]
		[DebuggerHidden]
		public _003CPrependIterator_003Ed__63(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600011A")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600011B")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600011C")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x600011E")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000120")]
		[DebuggerHidden]
		private IEnumerator<TSource> System_002ECollections_002EGeneric_002EIEnumerable_003CTSource_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000121")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200002A")]
	[CompilerGenerated]
	private sealed class _003CDistinctIterator_003Ed__68<TSource> : IEnumerable<TSource>, IEnumerable, IEnumerator<TSource>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400006F")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000070")]
		[FieldOffset(Offset = "0x0")]
		private TSource _003C_003E2__current;

		[Token(Token = "0x4000071")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000072")]
		[FieldOffset(Offset = "0x0")]
		private IEqualityComparer<TSource> comparer;

		[Token(Token = "0x4000073")]
		[FieldOffset(Offset = "0x0")]
		public IEqualityComparer<TSource> _003C_003E3__comparer;

		[Token(Token = "0x4000074")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> source;

		[Token(Token = "0x4000075")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__source;

		[Token(Token = "0x4000076")]
		[FieldOffset(Offset = "0x0")]
		private Set<TSource> _003Cset_003E5__2;

		[Token(Token = "0x4000077")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TSource> _003C_003E7__wrap2;

		[Token(Token = "0x1700001F")]
		private TSource System_002ECollections_002EGeneric_002EIEnumerator_003CTSource_003E_002ECurrent
		{
			[Token(Token = "0x6000126")]
			[DebuggerHidden]
			get
			{
				return (TSource)null;
			}
		}

		[Token(Token = "0x17000020")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000128")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000122")]
		[DebuggerHidden]
		public _003CDistinctIterator_003Ed__68(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000123")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000124")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000125")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000127")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000129")]
		[DebuggerHidden]
		private IEnumerator<TSource> System_002ECollections_002EGeneric_002EIEnumerable_003CTSource_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600012A")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200002B")]
	[CompilerGenerated]
	private sealed class _003CUnionIterator_003Ed__71<TSource> : IEnumerable<TSource>, IEnumerable, IEnumerator<TSource>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000078")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000079")]
		[FieldOffset(Offset = "0x0")]
		private TSource _003C_003E2__current;

		[Token(Token = "0x400007A")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400007B")]
		[FieldOffset(Offset = "0x0")]
		private IEqualityComparer<TSource> comparer;

		[Token(Token = "0x400007C")]
		[FieldOffset(Offset = "0x0")]
		public IEqualityComparer<TSource> _003C_003E3__comparer;

		[Token(Token = "0x400007D")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> first;

		[Token(Token = "0x400007E")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__first;

		[Token(Token = "0x400007F")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> second;

		[Token(Token = "0x4000080")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__second;

		[Token(Token = "0x4000081")]
		[FieldOffset(Offset = "0x0")]
		private Set<TSource> _003Cset_003E5__2;

		[Token(Token = "0x4000082")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TSource> _003C_003E7__wrap2;

		[Token(Token = "0x17000021")]
		private TSource System_002ECollections_002EGeneric_002EIEnumerator_003CTSource_003E_002ECurrent
		{
			[Token(Token = "0x6000130")]
			[DebuggerHidden]
			get
			{
				return (TSource)null;
			}
		}

		[Token(Token = "0x17000022")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000132")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600012B")]
		[DebuggerHidden]
		public _003CUnionIterator_003Ed__71(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600012C")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600012D")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600012E")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x600012F")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000131")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000133")]
		[DebuggerHidden]
		private IEnumerator<TSource> System_002ECollections_002EGeneric_002EIEnumerable_003CTSource_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000134")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200002C")]
	[CompilerGenerated]
	private sealed class _003CExceptIterator_003Ed__77<TSource> : IEnumerable<TSource>, IEnumerable, IEnumerator<TSource>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000083")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000084")]
		[FieldOffset(Offset = "0x0")]
		private TSource _003C_003E2__current;

		[Token(Token = "0x4000085")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000086")]
		[FieldOffset(Offset = "0x0")]
		private IEqualityComparer<TSource> comparer;

		[Token(Token = "0x4000087")]
		[FieldOffset(Offset = "0x0")]
		public IEqualityComparer<TSource> _003C_003E3__comparer;

		[Token(Token = "0x4000088")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> second;

		[Token(Token = "0x4000089")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__second;

		[Token(Token = "0x400008A")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> first;

		[Token(Token = "0x400008B")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__first;

		[Token(Token = "0x400008C")]
		[FieldOffset(Offset = "0x0")]
		private Set<TSource> _003Cset_003E5__2;

		[Token(Token = "0x400008D")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TSource> _003C_003E7__wrap2;

		[Token(Token = "0x17000023")]
		private TSource System_002ECollections_002EGeneric_002EIEnumerator_003CTSource_003E_002ECurrent
		{
			[Token(Token = "0x6000139")]
			[DebuggerHidden]
			get
			{
				return (TSource)null;
			}
		}

		[Token(Token = "0x17000024")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600013B")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000135")]
		[DebuggerHidden]
		public _003CExceptIterator_003Ed__77(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000136")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000137")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000138")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x600013A")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600013C")]
		[DebuggerHidden]
		private IEnumerator<TSource> System_002ECollections_002EGeneric_002EIEnumerable_003CTSource_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600013D")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200002D")]
	[CompilerGenerated]
	private sealed class _003CReverseIterator_003Ed__79<TSource> : IEnumerable<TSource>, IEnumerable, IEnumerator<TSource>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400008E")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x400008F")]
		[FieldOffset(Offset = "0x0")]
		private TSource _003C_003E2__current;

		[Token(Token = "0x4000090")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000091")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> source;

		[Token(Token = "0x4000092")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__source;

		[Token(Token = "0x4000093")]
		[FieldOffset(Offset = "0x0")]
		private Buffer<TSource> _003Cbuffer_003E5__2;

		[Token(Token = "0x4000094")]
		[FieldOffset(Offset = "0x0")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x17000025")]
		private TSource System_002ECollections_002EGeneric_002EIEnumerator_003CTSource_003E_002ECurrent
		{
			[Token(Token = "0x6000141")]
			[DebuggerHidden]
			get
			{
				return (TSource)null;
			}
		}

		[Token(Token = "0x17000026")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000143")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600013E")]
		[DebuggerHidden]
		public _003CReverseIterator_003Ed__79(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600013F")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000140")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000142")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000144")]
		[DebuggerHidden]
		private IEnumerator<TSource> System_002ECollections_002EGeneric_002EIEnumerable_003CTSource_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000145")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200002E")]
	[CompilerGenerated]
	private sealed class _003COfTypeIterator_003Ed__97<TResult> : IEnumerable<TResult>, IEnumerable, IEnumerator<TResult>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000095")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000096")]
		[FieldOffset(Offset = "0x0")]
		private TResult _003C_003E2__current;

		[Token(Token = "0x4000097")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000098")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable source;

		[Token(Token = "0x4000099")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable _003C_003E3__source;

		[Token(Token = "0x400009A")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator _003C_003E7__wrap1;

		[Token(Token = "0x17000027")]
		private TResult System_002ECollections_002EGeneric_002EIEnumerator_003CTResult_003E_002ECurrent
		{
			[Token(Token = "0x600014A")]
			[DebuggerHidden]
			get
			{
				return (TResult)null;
			}
		}

		[Token(Token = "0x17000028")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600014C")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000146")]
		[DebuggerHidden]
		public _003COfTypeIterator_003Ed__97(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000147")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000148")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000149")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x600014B")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600014D")]
		[DebuggerHidden]
		private IEnumerator<TResult> System_002ECollections_002EGeneric_002EIEnumerable_003CTResult_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600014E")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200002F")]
	[CompilerGenerated]
	private sealed class _003CCastIterator_003Ed__99<TResult> : IEnumerable<TResult>, IEnumerable, IEnumerator<TResult>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400009B")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x400009C")]
		[FieldOffset(Offset = "0x0")]
		private TResult _003C_003E2__current;

		[Token(Token = "0x400009D")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400009E")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable source;

		[Token(Token = "0x400009F")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable _003C_003E3__source;

		[Token(Token = "0x40000A0")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator _003C_003E7__wrap1;

		[Token(Token = "0x17000029")]
		private TResult System_002ECollections_002EGeneric_002EIEnumerator_003CTResult_003E_002ECurrent
		{
			[Token(Token = "0x6000153")]
			[DebuggerHidden]
			get
			{
				return (TResult)null;
			}
		}

		[Token(Token = "0x1700002A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000155")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600014F")]
		[DebuggerHidden]
		public _003CCastIterator_003Ed__99(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000150")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000151")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000152")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000154")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000156")]
		[DebuggerHidden]
		private IEnumerator<TResult> System_002ECollections_002EGeneric_002EIEnumerable_003CTResult_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000157")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000030")]
	[CompilerGenerated]
	private sealed class _003CRangeIterator_003Ed__115 : IEnumerable<int>, IEnumerable, IEnumerator<int>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40000A1")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000A2")]
		[FieldOffset(Offset = "0x14")]
		private int _003C_003E2__current;

		[Token(Token = "0x40000A3")]
		[FieldOffset(Offset = "0x18")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40000A4")]
		[FieldOffset(Offset = "0x1C")]
		private int start;

		[Token(Token = "0x40000A5")]
		[FieldOffset(Offset = "0x20")]
		public int _003C_003E3__start;

		[Token(Token = "0x40000A6")]
		[FieldOffset(Offset = "0x24")]
		private int count;

		[Token(Token = "0x40000A7")]
		[FieldOffset(Offset = "0x28")]
		public int _003C_003E3__count;

		[Token(Token = "0x40000A8")]
		[FieldOffset(Offset = "0x2C")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x1700002B")]
		private int System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EInt32_003E_002ECurrent
		{
			[Token(Token = "0x600015B")]
			[Address(RVA = "0x5DA8380", Offset = "0x5DA7380", VA = "0x5DA8380", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700002C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600015D")]
			[Address(RVA = "0x5DA83D0", Offset = "0x5DA73D0", VA = "0x5DA83D0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000158")]
		[Address(RVA = "0x5DA7960", Offset = "0x5DA6960", VA = "0x5DA7960")]
		[DebuggerHidden]
		public _003CRangeIterator_003Ed__115(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000159")]
		[Address(RVA = "0x5DA8320", Offset = "0x5DA7320", VA = "0x5DA8320", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600015A")]
		[Address(RVA = "0x5DA8330", Offset = "0x5DA7330", VA = "0x5DA8330", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600015C")]
		[Address(RVA = "0x5DA8390", Offset = "0x5DA7390", VA = "0x5DA8390", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600015E")]
		[Address(RVA = "0x5DA83F0", Offset = "0x5DA73F0", VA = "0x5DA83F0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<int> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EInt32_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600015F")]
		[Address(RVA = "0x5DA8480", Offset = "0x5DA7480", VA = "0x5DA8480", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000031")]
	[CompilerGenerated]
	private sealed class _003CRepeatIterator_003Ed__117<TResult> : IEnumerable<TResult>, IEnumerable, IEnumerator<TResult>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40000A9")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000AA")]
		[FieldOffset(Offset = "0x0")]
		private TResult _003C_003E2__current;

		[Token(Token = "0x40000AB")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40000AC")]
		[FieldOffset(Offset = "0x0")]
		private TResult element;

		[Token(Token = "0x40000AD")]
		[FieldOffset(Offset = "0x0")]
		public TResult _003C_003E3__element;

		[Token(Token = "0x40000AE")]
		[FieldOffset(Offset = "0x0")]
		private int count;

		[Token(Token = "0x40000AF")]
		[FieldOffset(Offset = "0x0")]
		public int _003C_003E3__count;

		[Token(Token = "0x40000B0")]
		[FieldOffset(Offset = "0x0")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x1700002D")]
		private TResult System_002ECollections_002EGeneric_002EIEnumerator_003CTResult_003E_002ECurrent
		{
			[Token(Token = "0x6000163")]
			[DebuggerHidden]
			get
			{
				return (TResult)null;
			}
		}

		[Token(Token = "0x1700002E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000165")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000160")]
		[DebuggerHidden]
		public _003CRepeatIterator_003Ed__117(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000161")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000162")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000164")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000166")]
		[DebuggerHidden]
		private IEnumerator<TResult> System_002ECollections_002EGeneric_002EIEnumerable_003CTResult_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000167")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x600005C")]
	public static IEnumerable<TSource> Where<TSource>(this IEnumerable<TSource> source, Func<TSource, bool> predicate)
	{
		return null;
	}

	[Token(Token = "0x600005D")]
	public static IEnumerable<TSource> Where<TSource>(this IEnumerable<TSource> source, Func<TSource, int, bool> predicate)
	{
		return null;
	}

	[Token(Token = "0x600005E")]
	[IteratorStateMachine(typeof(_003CWhereIterator_003Ed__2<>))]
	private static IEnumerable<TSource> WhereIterator<TSource>(IEnumerable<TSource> source, Func<TSource, int, bool> predicate)
	{
		return null;
	}

	[Token(Token = "0x600005F")]
	public static IEnumerable<TResult> Select<TSource, TResult>(this IEnumerable<TSource> source, Func<TSource, TResult> selector)
	{
		return null;
	}

	[Token(Token = "0x6000060")]
	public static IEnumerable<TResult> Select<TSource, TResult>(this IEnumerable<TSource> source, Func<TSource, int, TResult> selector)
	{
		return null;
	}

	[Token(Token = "0x6000061")]
	[IteratorStateMachine(typeof(_003CSelectIterator_003Ed__5<, >))]
	private static IEnumerable<TResult> SelectIterator<TSource, TResult>(IEnumerable<TSource> source, Func<TSource, int, TResult> selector)
	{
		return null;
	}

	[Token(Token = "0x6000062")]
	private static Func<TSource, bool> CombinePredicates<TSource>(Func<TSource, bool> predicate1, Func<TSource, bool> predicate2)
	{
		return null;
	}

	[Token(Token = "0x6000063")]
	private static Func<TSource, TResult> CombineSelectors<TSource, TMiddle, TResult>(Func<TSource, TMiddle> selector1, Func<TMiddle, TResult> selector2)
	{
		return null;
	}

	[Token(Token = "0x6000064")]
	public static IEnumerable<TResult> SelectMany<TSource, TResult>(this IEnumerable<TSource> source, Func<TSource, IEnumerable<TResult>> selector)
	{
		return null;
	}

	[Token(Token = "0x6000065")]
	[IteratorStateMachine(typeof(_003CSelectManyIterator_003Ed__17<, >))]
	private static IEnumerable<TResult> SelectManyIterator<TSource, TResult>(IEnumerable<TSource> source, Func<TSource, IEnumerable<TResult>> selector)
	{
		return null;
	}

	[Token(Token = "0x6000066")]
	public static IEnumerable<TSource> Take<TSource>(this IEnumerable<TSource> source, int count)
	{
		return null;
	}

	[Token(Token = "0x6000067")]
	[IteratorStateMachine(typeof(_003CTakeIterator_003Ed__25<>))]
	private static IEnumerable<TSource> TakeIterator<TSource>(IEnumerable<TSource> source, int count)
	{
		return null;
	}

	[Token(Token = "0x6000068")]
	public static IEnumerable<TSource> TakeWhile<TSource>(this IEnumerable<TSource> source, Func<TSource, bool> predicate)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[IteratorStateMachine(typeof(_003CTakeWhileIterator_003Ed__27<>))]
	private static IEnumerable<TSource> TakeWhileIterator<TSource>(IEnumerable<TSource> source, Func<TSource, bool> predicate)
	{
		return null;
	}

	[Token(Token = "0x600006A")]
	public static IEnumerable<TSource> Skip<TSource>(this IEnumerable<TSource> source, int count)
	{
		return null;
	}

	[Token(Token = "0x600006B")]
	[IteratorStateMachine(typeof(_003CSkipIterator_003Ed__31<>))]
	private static IEnumerable<TSource> SkipIterator<TSource>(IEnumerable<TSource> source, int count)
	{
		return null;
	}

	[Token(Token = "0x600006C")]
	public static IOrderedEnumerable<TSource> OrderBy<TSource, TKey>(this IEnumerable<TSource> source, Func<TSource, TKey> keySelector)
	{
		return null;
	}

	[Token(Token = "0x600006D")]
	public static IOrderedEnumerable<TSource> OrderBy<TSource, TKey>(this IEnumerable<TSource> source, Func<TSource, TKey> keySelector, IComparer<TKey> comparer)
	{
		return null;
	}

	[Token(Token = "0x600006E")]
	public static IOrderedEnumerable<TSource> OrderByDescending<TSource, TKey>(this IEnumerable<TSource> source, Func<TSource, TKey> keySelector)
	{
		return null;
	}

	[Token(Token = "0x600006F")]
	public static IOrderedEnumerable<TSource> ThenBy<TSource, TKey>(this IOrderedEnumerable<TSource> source, Func<TSource, TKey> keySelector)
	{
		return null;
	}

	[Token(Token = "0x6000070")]
	public static IEnumerable<IGrouping<TKey, TSource>> GroupBy<TSource, TKey>(this IEnumerable<TSource> source, Func<TSource, TKey> keySelector)
	{
		return null;
	}

	[Token(Token = "0x6000071")]
	public static IEnumerable<TSource> Concat<TSource>(this IEnumerable<TSource> first, IEnumerable<TSource> second)
	{
		return null;
	}

	[Token(Token = "0x6000072")]
	[IteratorStateMachine(typeof(_003CConcatIterator_003Ed__59<>))]
	private static IEnumerable<TSource> ConcatIterator<TSource>(IEnumerable<TSource> first, IEnumerable<TSource> second)
	{
		return null;
	}

	[Token(Token = "0x6000073")]
	public static IEnumerable<TSource> Prepend<TSource>(this IEnumerable<TSource> source, TSource element)
	{
		return null;
	}

	[Token(Token = "0x6000074")]
	[IteratorStateMachine(typeof(_003CPrependIterator_003Ed__63<>))]
	private static IEnumerable<TSource> PrependIterator<TSource>(IEnumerable<TSource> source, TSource element)
	{
		return null;
	}

	[Token(Token = "0x6000075")]
	public static IEnumerable<TSource> Distinct<TSource>(this IEnumerable<TSource> source)
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	public static IEnumerable<TSource> Distinct<TSource>(this IEnumerable<TSource> source, IEqualityComparer<TSource> comparer)
	{
		return null;
	}

	[Token(Token = "0x6000077")]
	[IteratorStateMachine(typeof(_003CDistinctIterator_003Ed__68<>))]
	private static IEnumerable<TSource> DistinctIterator<TSource>(IEnumerable<TSource> source, IEqualityComparer<TSource> comparer)
	{
		return null;
	}

	[Token(Token = "0x6000078")]
	public static IEnumerable<TSource> Union<TSource>(this IEnumerable<TSource> first, IEnumerable<TSource> second)
	{
		return null;
	}

	[Token(Token = "0x6000079")]
	[IteratorStateMachine(typeof(_003CUnionIterator_003Ed__71<>))]
	private static IEnumerable<TSource> UnionIterator<TSource>(IEnumerable<TSource> first, IEnumerable<TSource> second, IEqualityComparer<TSource> comparer)
	{
		return null;
	}

	[Token(Token = "0x600007A")]
	public static IEnumerable<TSource> Except<TSource>(this IEnumerable<TSource> first, IEnumerable<TSource> second)
	{
		return null;
	}

	[Token(Token = "0x600007B")]
	[IteratorStateMachine(typeof(_003CExceptIterator_003Ed__77<>))]
	private static IEnumerable<TSource> ExceptIterator<TSource>(IEnumerable<TSource> first, IEnumerable<TSource> second, IEqualityComparer<TSource> comparer)
	{
		return null;
	}

	[Token(Token = "0x600007C")]
	public static IEnumerable<TSource> Reverse<TSource>(this IEnumerable<TSource> source)
	{
		return null;
	}

	[Token(Token = "0x600007D")]
	[IteratorStateMachine(typeof(_003CReverseIterator_003Ed__79<>))]
	private static IEnumerable<TSource> ReverseIterator<TSource>(IEnumerable<TSource> source)
	{
		return null;
	}

	[Token(Token = "0x600007E")]
	public static bool SequenceEqual<TSource>(this IEnumerable<TSource> first, IEnumerable<TSource> second)
	{
		return default(bool);
	}

	[Token(Token = "0x600007F")]
	public static bool SequenceEqual<TSource>(this IEnumerable<TSource> first, IEnumerable<TSource> second, IEqualityComparer<TSource> comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000080")]
	public static IEnumerable<TSource> AsEnumerable<TSource>(this IEnumerable<TSource> source)
	{
		return null;
	}

	[Token(Token = "0x6000081")]
	public static TSource[] ToArray<TSource>(this IEnumerable<TSource> source)
	{
		return null;
	}

	[Token(Token = "0x6000082")]
	public static List<TSource> ToList<TSource>(this IEnumerable<TSource> source)
	{
		return null;
	}

	[Token(Token = "0x6000083")]
	public static Dictionary<TKey, TElement> ToDictionary<TSource, TKey, TElement>(this IEnumerable<TSource> source, Func<TSource, TKey> keySelector, Func<TSource, TElement> elementSelector)
	{
		return null;
	}

	[Token(Token = "0x6000084")]
	public static Dictionary<TKey, TElement> ToDictionary<TSource, TKey, TElement>(this IEnumerable<TSource> source, Func<TSource, TKey> keySelector, Func<TSource, TElement> elementSelector, IEqualityComparer<TKey> comparer)
	{
		return null;
	}

	[Token(Token = "0x6000085")]
	public static IEnumerable<TResult> OfType<TResult>(this IEnumerable source)
	{
		return null;
	}

	[Token(Token = "0x6000086")]
	[IteratorStateMachine(typeof(_003COfTypeIterator_003Ed__97<>))]
	private static IEnumerable<TResult> OfTypeIterator<TResult>(IEnumerable source)
	{
		return null;
	}

	[Token(Token = "0x6000087")]
	public static IEnumerable<TResult> Cast<TResult>(this IEnumerable source)
	{
		return null;
	}

	[Token(Token = "0x6000088")]
	[IteratorStateMachine(typeof(_003CCastIterator_003Ed__99<>))]
	private static IEnumerable<TResult> CastIterator<TResult>(IEnumerable source)
	{
		return null;
	}

	[Token(Token = "0x6000089")]
	public static TSource First<TSource>(this IEnumerable<TSource> source)
	{
		return (TSource)null;
	}

	[Token(Token = "0x600008A")]
	public static TSource First<TSource>(this IEnumerable<TSource> source, Func<TSource, bool> predicate)
	{
		return (TSource)null;
	}

	[Token(Token = "0x600008B")]
	public static TSource FirstOrDefault<TSource>(this IEnumerable<TSource> source)
	{
		return (TSource)null;
	}

	[Token(Token = "0x600008C")]
	public static TSource FirstOrDefault<TSource>(this IEnumerable<TSource> source, Func<TSource, bool> predicate)
	{
		return (TSource)null;
	}

	[Token(Token = "0x600008D")]
	public static TSource Last<TSource>(this IEnumerable<TSource> source)
	{
		return (TSource)null;
	}

	[Token(Token = "0x600008E")]
	public static TSource LastOrDefault<TSource>(this IEnumerable<TSource> source)
	{
		return (TSource)null;
	}

	[Token(Token = "0x600008F")]
	public static TSource LastOrDefault<TSource>(this IEnumerable<TSource> source, Func<TSource, bool> predicate)
	{
		return (TSource)null;
	}

	[Token(Token = "0x6000090")]
	public static TSource Single<TSource>(this IEnumerable<TSource> source)
	{
		return (TSource)null;
	}

	[Token(Token = "0x6000091")]
	public static TSource Single<TSource>(this IEnumerable<TSource> source, Func<TSource, bool> predicate)
	{
		return (TSource)null;
	}

	[Token(Token = "0x6000092")]
	public static TSource SingleOrDefault<TSource>(this IEnumerable<TSource> source)
	{
		return (TSource)null;
	}

	[Token(Token = "0x6000093")]
	public static TSource SingleOrDefault<TSource>(this IEnumerable<TSource> source, Func<TSource, bool> predicate)
	{
		return (TSource)null;
	}

	[Token(Token = "0x6000094")]
	public static TSource ElementAt<TSource>(this IEnumerable<TSource> source, int index)
	{
		return (TSource)null;
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x5DA7840", Offset = "0x5DA6840", VA = "0x5DA7840")]
	public static IEnumerable<int> Range(int start, int count)
	{
		return null;
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x5DA78F0", Offset = "0x5DA68F0", VA = "0x5DA78F0")]
	[IteratorStateMachine(typeof(_003CRangeIterator_003Ed__115))]
	private static IEnumerable<int> RangeIterator(int start, int count)
	{
		return null;
	}

	[Token(Token = "0x6000097")]
	public static IEnumerable<TResult> Repeat<TResult>(TResult element, int count)
	{
		return null;
	}

	[Token(Token = "0x6000098")]
	[IteratorStateMachine(typeof(_003CRepeatIterator_003Ed__117<>))]
	private static IEnumerable<TResult> RepeatIterator<TResult>(TResult element, int count)
	{
		return null;
	}

	[Token(Token = "0x6000099")]
	public static IEnumerable<TResult> Empty<TResult>()
	{
		return null;
	}

	[Token(Token = "0x600009A")]
	public static bool Any<TSource>(this IEnumerable<TSource> source)
	{
		return default(bool);
	}

	[Token(Token = "0x600009B")]
	public static bool Any<TSource>(this IEnumerable<TSource> source, Func<TSource, bool> predicate)
	{
		return default(bool);
	}

	[Token(Token = "0x600009C")]
	public static bool All<TSource>(this IEnumerable<TSource> source, Func<TSource, bool> predicate)
	{
		return default(bool);
	}

	[Token(Token = "0x600009D")]
	public static int Count<TSource>(this IEnumerable<TSource> source)
	{
		return default(int);
	}

	[Token(Token = "0x600009E")]
	public static int Count<TSource>(this IEnumerable<TSource> source, Func<TSource, bool> predicate)
	{
		return default(int);
	}

	[Token(Token = "0x600009F")]
	public static bool Contains<TSource>(this IEnumerable<TSource> source, TSource value)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A0")]
	public static bool Contains<TSource>(this IEnumerable<TSource> source, TSource value, IEqualityComparer<TSource> comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A1")]
	public static TAccumulate Aggregate<TSource, TAccumulate>(this IEnumerable<TSource> source, TAccumulate seed, Func<TAccumulate, TSource, TAccumulate> func)
	{
		return (TAccumulate)null;
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x5DA7990", Offset = "0x5DA6990", VA = "0x5DA7990")]
	public static float Sum(this IEnumerable<float> source)
	{
		return default(float);
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x5DA7CC0", Offset = "0x5DA6CC0", VA = "0x5DA7CC0")]
	public static int Min(this IEnumerable<int> source)
	{
		return default(int);
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x5DA7FF0", Offset = "0x5DA6FF0", VA = "0x5DA7FF0")]
	public static int Max(this IEnumerable<int> source)
	{
		return default(int);
	}

	[Token(Token = "0x60000A5")]
	public static TSource Max<TSource>(this IEnumerable<TSource> source)
	{
		return (TSource)null;
	}

	[Token(Token = "0x60000A6")]
	public static int Max<TSource>(this IEnumerable<TSource> source, Func<TSource, int> selector)
	{
		return default(int);
	}

	[Token(Token = "0x60000A7")]
	public static HashSet<TSource> ToHashSet<TSource>(this IEnumerable<TSource> source)
	{
		return null;
	}

	[Token(Token = "0x60000A8")]
	public static HashSet<TSource> ToHashSet<TSource>(this IEnumerable<TSource> source, IEqualityComparer<TSource> comparer)
	{
		return null;
	}
}
