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
			[Token(Token = "0x60000A9")]
			get
			{
				return (TSource)null;
			}
		}

		[Token(Token = "0x1700000E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000A8")]
		public Iterator()
		{
		}

		[Token(Token = "0x60000AA")]
		public abstract Iterator<TSource> Clone();

		[Token(Token = "0x60000AB")]
		public virtual void Dispose()
		{
		}

		[Token(Token = "0x60000AC")]
		public IEnumerator<TSource> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000AD")]
		public abstract bool MoveNext();

		[Token(Token = "0x60000AE")]
		public abstract IEnumerable<TResult> Select<TResult>(Func<TSource, TResult> selector);

		[Token(Token = "0x60000AF")]
		public abstract IEnumerable<TSource> Where(Func<TSource, bool> predicate);

		[Token(Token = "0x60000B1")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000B2")]
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

		[Token(Token = "0x60000B3")]
		public WhereEnumerableIterator(IEnumerable<TSource> source, Func<TSource, bool> predicate)
		{
		}

		[Token(Token = "0x60000B4")]
		public override Iterator<TSource> Clone()
		{
			return null;
		}

		[Token(Token = "0x60000B5")]
		public override void Dispose()
		{
		}

		[Token(Token = "0x60000B6")]
		public override bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000B7")]
		public override IEnumerable<TResult> Select<TResult>(Func<TSource, TResult> selector)
		{
			return null;
		}

		[Token(Token = "0x60000B8")]
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

		[Token(Token = "0x60000B9")]
		public WhereArrayIterator(TSource[] source, Func<TSource, bool> predicate)
		{
		}

		[Token(Token = "0x60000BA")]
		public override Iterator<TSource> Clone()
		{
			return null;
		}

		[Token(Token = "0x60000BB")]
		public override bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000BC")]
		public override IEnumerable<TResult> Select<TResult>(Func<TSource, TResult> selector)
		{
			return null;
		}

		[Token(Token = "0x60000BD")]
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

		[Token(Token = "0x60000BE")]
		public WhereListIterator(List<TSource> source, Func<TSource, bool> predicate)
		{
		}

		[Token(Token = "0x60000BF")]
		public override Iterator<TSource> Clone()
		{
			return null;
		}

		[Token(Token = "0x60000C0")]
		public override bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000C1")]
		public override IEnumerable<TResult> Select<TResult>(Func<TSource, TResult> selector)
		{
			return null;
		}

		[Token(Token = "0x60000C2")]
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

		[Token(Token = "0x60000C3")]
		public WhereSelectEnumerableIterator(IEnumerable<TSource> source, Func<TSource, bool> predicate, Func<TSource, TResult> selector)
		{
		}

		[Token(Token = "0x60000C4")]
		public override Iterator<TResult> Clone()
		{
			return null;
		}

		[Token(Token = "0x60000C5")]
		public override void Dispose()
		{
		}

		[Token(Token = "0x60000C6")]
		public override bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000C7")]
		public override IEnumerable<TResult2> Select<TResult2>(Func<TResult, TResult2> selector)
		{
			return null;
		}

		[Token(Token = "0x60000C8")]
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

		[Token(Token = "0x60000C9")]
		public WhereSelectArrayIterator(TSource[] source, Func<TSource, bool> predicate, Func<TSource, TResult> selector)
		{
		}

		[Token(Token = "0x60000CA")]
		public override Iterator<TResult> Clone()
		{
			return null;
		}

		[Token(Token = "0x60000CB")]
		public override bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000CC")]
		public override IEnumerable<TResult2> Select<TResult2>(Func<TResult, TResult2> selector)
		{
			return null;
		}

		[Token(Token = "0x60000CD")]
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

		[Token(Token = "0x60000CE")]
		public WhereSelectListIterator(List<TSource> source, Func<TSource, bool> predicate, Func<TSource, TResult> selector)
		{
		}

		[Token(Token = "0x60000CF")]
		public override Iterator<TResult> Clone()
		{
			return null;
		}

		[Token(Token = "0x60000D0")]
		public override bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000D1")]
		public override IEnumerable<TResult2> Select<TResult2>(Func<TResult, TResult2> selector)
		{
			return null;
		}

		[Token(Token = "0x60000D2")]
		public override IEnumerable<TResult> Where(Func<TResult, bool> predicate)
		{
			return null;
		}
	}

	[Token(Token = "0x2000020")]
	[CompilerGenerated]
	private sealed class _003CSelectIterator_003Ed__5<TSource, TResult> : IEnumerable<TResult>, IEnumerable, IEnumerator<TResult>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000028")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000029")]
		[FieldOffset(Offset = "0x0")]
		private TResult _003C_003E2__current;

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
		private Func<TSource, int, TResult> selector;

		[Token(Token = "0x400002E")]
		[FieldOffset(Offset = "0x0")]
		public Func<TSource, int, TResult> _003C_003E3__selector;

		[Token(Token = "0x400002F")]
		[FieldOffset(Offset = "0x0")]
		private int _003Cindex_003E5__2;

		[Token(Token = "0x4000030")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TSource> _003C_003E7__wrap2;

		[Token(Token = "0x1700000F")]
		private TResult System_002ECollections_002EGeneric_002EIEnumerator_003CTResult_003E_002ECurrent
		{
			[Token(Token = "0x60000D7")]
			[DebuggerHidden]
			get
			{
				return (TResult)null;
			}
		}

		[Token(Token = "0x17000010")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000D9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000D3")]
		[DebuggerHidden]
		public _003CSelectIterator_003Ed__5(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000D4")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000D5")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000D6")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60000D8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000DA")]
		[DebuggerHidden]
		private IEnumerator<TResult> System_002ECollections_002EGeneric_002EIEnumerable_003CTResult_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000DB")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000023")]
	[CompilerGenerated]
	private sealed class _003CSelectManyIterator_003Ed__17<TSource, TResult> : IEnumerable<TResult>, IEnumerable, IEnumerator<TResult>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000035")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000036")]
		[FieldOffset(Offset = "0x0")]
		private TResult _003C_003E2__current;

		[Token(Token = "0x4000037")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000038")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> source;

		[Token(Token = "0x4000039")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__source;

		[Token(Token = "0x400003A")]
		[FieldOffset(Offset = "0x0")]
		private Func<TSource, IEnumerable<TResult>> selector;

		[Token(Token = "0x400003B")]
		[FieldOffset(Offset = "0x0")]
		public Func<TSource, IEnumerable<TResult>> _003C_003E3__selector;

		[Token(Token = "0x400003C")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TSource> _003C_003E7__wrap1;

		[Token(Token = "0x400003D")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TResult> _003C_003E7__wrap2;

		[Token(Token = "0x17000011")]
		private TResult System_002ECollections_002EGeneric_002EIEnumerator_003CTResult_003E_002ECurrent
		{
			[Token(Token = "0x60000E5")]
			[DebuggerHidden]
			get
			{
				return (TResult)null;
			}
		}

		[Token(Token = "0x17000012")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000E7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000E0")]
		[DebuggerHidden]
		public _003CSelectManyIterator_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000E1")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000E2")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000E3")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60000E4")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x60000E6")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000E8")]
		[DebuggerHidden]
		private IEnumerator<TResult> System_002ECollections_002EGeneric_002EIEnumerable_003CTResult_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000E9")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000024")]
	[CompilerGenerated]
	private sealed class _003CTakeIterator_003Ed__25<TSource> : IEnumerable<TSource>, IEnumerable, IEnumerator<TSource>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400003E")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x400003F")]
		[FieldOffset(Offset = "0x0")]
		private TSource _003C_003E2__current;

		[Token(Token = "0x4000040")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000041")]
		[FieldOffset(Offset = "0x0")]
		private int count;

		[Token(Token = "0x4000042")]
		[FieldOffset(Offset = "0x0")]
		public int _003C_003E3__count;

		[Token(Token = "0x4000043")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> source;

		[Token(Token = "0x4000044")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__source;

		[Token(Token = "0x4000045")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TSource> _003C_003E7__wrap1;

		[Token(Token = "0x17000013")]
		private TSource System_002ECollections_002EGeneric_002EIEnumerator_003CTSource_003E_002ECurrent
		{
			[Token(Token = "0x60000EE")]
			[DebuggerHidden]
			get
			{
				return (TSource)null;
			}
		}

		[Token(Token = "0x17000014")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000F0")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000EA")]
		[DebuggerHidden]
		public _003CTakeIterator_003Ed__25(int _003C_003E1__state)
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

		[Token(Token = "0x60000EF")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000F1")]
		[DebuggerHidden]
		private IEnumerator<TSource> System_002ECollections_002EGeneric_002EIEnumerable_003CTSource_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000F2")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000025")]
	[CompilerGenerated]
	private sealed class _003CTakeWhileIterator_003Ed__27<TSource> : IEnumerable<TSource>, IEnumerable, IEnumerator<TSource>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000046")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000047")]
		[FieldOffset(Offset = "0x0")]
		private TSource _003C_003E2__current;

		[Token(Token = "0x4000048")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000049")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> source;

		[Token(Token = "0x400004A")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__source;

		[Token(Token = "0x400004B")]
		[FieldOffset(Offset = "0x0")]
		private Func<TSource, bool> predicate;

		[Token(Token = "0x400004C")]
		[FieldOffset(Offset = "0x0")]
		public Func<TSource, bool> _003C_003E3__predicate;

		[Token(Token = "0x400004D")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TSource> _003C_003E7__wrap1;

		[Token(Token = "0x17000015")]
		private TSource System_002ECollections_002EGeneric_002EIEnumerator_003CTSource_003E_002ECurrent
		{
			[Token(Token = "0x60000F7")]
			[DebuggerHidden]
			get
			{
				return (TSource)null;
			}
		}

		[Token(Token = "0x17000016")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000F9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000F3")]
		[DebuggerHidden]
		public _003CTakeWhileIterator_003Ed__27(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000F4")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000F5")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000F6")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60000F8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000FA")]
		[DebuggerHidden]
		private IEnumerator<TSource> System_002ECollections_002EGeneric_002EIEnumerable_003CTSource_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000FB")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000026")]
	[CompilerGenerated]
	private sealed class _003CSkipIterator_003Ed__31<TSource> : IEnumerable<TSource>, IEnumerable, IEnumerator<TSource>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400004E")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x400004F")]
		[FieldOffset(Offset = "0x0")]
		private TSource _003C_003E2__current;

		[Token(Token = "0x4000050")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000051")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> source;

		[Token(Token = "0x4000052")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__source;

		[Token(Token = "0x4000053")]
		[FieldOffset(Offset = "0x0")]
		private int count;

		[Token(Token = "0x4000054")]
		[FieldOffset(Offset = "0x0")]
		public int _003C_003E3__count;

		[Token(Token = "0x4000055")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TSource> _003Ce_003E5__2;

		[Token(Token = "0x17000017")]
		private TSource System_002ECollections_002EGeneric_002EIEnumerator_003CTSource_003E_002ECurrent
		{
			[Token(Token = "0x6000100")]
			[DebuggerHidden]
			get
			{
				return (TSource)null;
			}
		}

		[Token(Token = "0x17000018")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000102")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000FC")]
		[DebuggerHidden]
		public _003CSkipIterator_003Ed__31(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000FD")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000FE")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000FF")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000101")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000103")]
		[DebuggerHidden]
		private IEnumerator<TSource> System_002ECollections_002EGeneric_002EIEnumerable_003CTSource_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000104")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000027")]
	[CompilerGenerated]
	private sealed class _003CConcatIterator_003Ed__59<TSource> : IEnumerable<TSource>, IEnumerable, IEnumerator<TSource>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000056")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000057")]
		[FieldOffset(Offset = "0x0")]
		private TSource _003C_003E2__current;

		[Token(Token = "0x4000058")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000059")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> first;

		[Token(Token = "0x400005A")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__first;

		[Token(Token = "0x400005B")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> second;

		[Token(Token = "0x400005C")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__second;

		[Token(Token = "0x400005D")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TSource> _003C_003E7__wrap1;

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

		[Token(Token = "0x6000105")]
		[DebuggerHidden]
		public _003CConcatIterator_003Ed__59(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000106")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000107")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000108")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000109")]
		private void _003C_003Em__Finally2()
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
	private sealed class _003CAppendIterator_003Ed__61<TSource> : IEnumerable<TSource>, IEnumerable, IEnumerator<TSource>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400005E")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x400005F")]
		[FieldOffset(Offset = "0x0")]
		private TSource _003C_003E2__current;

		[Token(Token = "0x4000060")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000061")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> source;

		[Token(Token = "0x4000062")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__source;

		[Token(Token = "0x4000063")]
		[FieldOffset(Offset = "0x0")]
		private TSource element;

		[Token(Token = "0x4000064")]
		[FieldOffset(Offset = "0x0")]
		public TSource _003C_003E3__element;

		[Token(Token = "0x4000065")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TSource> _003C_003E7__wrap1;

		[Token(Token = "0x1700001B")]
		private TSource System_002ECollections_002EGeneric_002EIEnumerator_003CTSource_003E_002ECurrent
		{
			[Token(Token = "0x6000113")]
			[DebuggerHidden]
			get
			{
				return (TSource)null;
			}
		}

		[Token(Token = "0x1700001C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000115")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600010F")]
		[DebuggerHidden]
		public _003CAppendIterator_003Ed__61(int _003C_003E1__state)
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

		[Token(Token = "0x6000114")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000116")]
		[DebuggerHidden]
		private IEnumerator<TSource> System_002ECollections_002EGeneric_002EIEnumerable_003CTSource_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000117")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000029")]
	[CompilerGenerated]
	private sealed class _003CDistinctIterator_003Ed__68<TSource> : IEnumerable<TSource>, IEnumerable, IEnumerator<TSource>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000066")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000067")]
		[FieldOffset(Offset = "0x0")]
		private TSource _003C_003E2__current;

		[Token(Token = "0x4000068")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000069")]
		[FieldOffset(Offset = "0x0")]
		private IEqualityComparer<TSource> comparer;

		[Token(Token = "0x400006A")]
		[FieldOffset(Offset = "0x0")]
		public IEqualityComparer<TSource> _003C_003E3__comparer;

		[Token(Token = "0x400006B")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> source;

		[Token(Token = "0x400006C")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__source;

		[Token(Token = "0x400006D")]
		[FieldOffset(Offset = "0x0")]
		private Set<TSource> _003Cset_003E5__2;

		[Token(Token = "0x400006E")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TSource> _003C_003E7__wrap2;

		[Token(Token = "0x1700001D")]
		private TSource System_002ECollections_002EGeneric_002EIEnumerator_003CTSource_003E_002ECurrent
		{
			[Token(Token = "0x600011C")]
			[DebuggerHidden]
			get
			{
				return (TSource)null;
			}
		}

		[Token(Token = "0x1700001E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600011E")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000118")]
		[DebuggerHidden]
		public _003CDistinctIterator_003Ed__68(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000119")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600011A")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600011B")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x600011D")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600011F")]
		[DebuggerHidden]
		private IEnumerator<TSource> System_002ECollections_002EGeneric_002EIEnumerable_003CTSource_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000120")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200002A")]
	[CompilerGenerated]
	private sealed class _003CUnionIterator_003Ed__71<TSource> : IEnumerable<TSource>, IEnumerable, IEnumerator<TSource>, IDisposable, IEnumerator
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
		private IEnumerable<TSource> first;

		[Token(Token = "0x4000075")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__first;

		[Token(Token = "0x4000076")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> second;

		[Token(Token = "0x4000077")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__second;

		[Token(Token = "0x4000078")]
		[FieldOffset(Offset = "0x0")]
		private Set<TSource> _003Cset_003E5__2;

		[Token(Token = "0x4000079")]
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

		[Token(Token = "0x6000121")]
		[DebuggerHidden]
		public _003CUnionIterator_003Ed__71(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000122")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000123")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000124")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000125")]
		private void _003C_003Em__Finally2()
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
	private sealed class _003CExceptIterator_003Ed__77<TSource> : IEnumerable<TSource>, IEnumerable, IEnumerator<TSource>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400007A")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x400007B")]
		[FieldOffset(Offset = "0x0")]
		private TSource _003C_003E2__current;

		[Token(Token = "0x400007C")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400007D")]
		[FieldOffset(Offset = "0x0")]
		private IEqualityComparer<TSource> comparer;

		[Token(Token = "0x400007E")]
		[FieldOffset(Offset = "0x0")]
		public IEqualityComparer<TSource> _003C_003E3__comparer;

		[Token(Token = "0x400007F")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> second;

		[Token(Token = "0x4000080")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__second;

		[Token(Token = "0x4000081")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> first;

		[Token(Token = "0x4000082")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__first;

		[Token(Token = "0x4000083")]
		[FieldOffset(Offset = "0x0")]
		private Set<TSource> _003Cset_003E5__2;

		[Token(Token = "0x4000084")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<TSource> _003C_003E7__wrap2;

		[Token(Token = "0x17000021")]
		private TSource System_002ECollections_002EGeneric_002EIEnumerator_003CTSource_003E_002ECurrent
		{
			[Token(Token = "0x600012F")]
			[DebuggerHidden]
			get
			{
				return (TSource)null;
			}
		}

		[Token(Token = "0x17000022")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000131")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600012B")]
		[DebuggerHidden]
		public _003CExceptIterator_003Ed__77(int _003C_003E1__state)
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

		[Token(Token = "0x6000130")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000132")]
		[DebuggerHidden]
		private IEnumerator<TSource> System_002ECollections_002EGeneric_002EIEnumerable_003CTSource_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000133")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200002C")]
	[CompilerGenerated]
	private sealed class _003CReverseIterator_003Ed__79<TSource> : IEnumerable<TSource>, IEnumerable, IEnumerator<TSource>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000085")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000086")]
		[FieldOffset(Offset = "0x0")]
		private TSource _003C_003E2__current;

		[Token(Token = "0x4000087")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000088")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<TSource> source;

		[Token(Token = "0x4000089")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<TSource> _003C_003E3__source;

		[Token(Token = "0x400008A")]
		[FieldOffset(Offset = "0x0")]
		private Buffer<TSource> _003Cbuffer_003E5__2;

		[Token(Token = "0x400008B")]
		[FieldOffset(Offset = "0x0")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x17000023")]
		private TSource System_002ECollections_002EGeneric_002EIEnumerator_003CTSource_003E_002ECurrent
		{
			[Token(Token = "0x6000137")]
			[DebuggerHidden]
			get
			{
				return (TSource)null;
			}
		}

		[Token(Token = "0x17000024")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000139")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000134")]
		[DebuggerHidden]
		public _003CReverseIterator_003Ed__79(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000135")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000136")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000138")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600013A")]
		[DebuggerHidden]
		private IEnumerator<TSource> System_002ECollections_002EGeneric_002EIEnumerable_003CTSource_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600013B")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200002D")]
	[CompilerGenerated]
	private sealed class _003COfTypeIterator_003Ed__97<TResult> : IEnumerable<TResult>, IEnumerable, IEnumerator<TResult>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400008C")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x400008D")]
		[FieldOffset(Offset = "0x0")]
		private TResult _003C_003E2__current;

		[Token(Token = "0x400008E")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400008F")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable source;

		[Token(Token = "0x4000090")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable _003C_003E3__source;

		[Token(Token = "0x4000091")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator _003C_003E7__wrap1;

		[Token(Token = "0x17000025")]
		private TResult System_002ECollections_002EGeneric_002EIEnumerator_003CTResult_003E_002ECurrent
		{
			[Token(Token = "0x6000140")]
			[DebuggerHidden]
			get
			{
				return (TResult)null;
			}
		}

		[Token(Token = "0x17000026")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000142")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600013C")]
		[DebuggerHidden]
		public _003COfTypeIterator_003Ed__97(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600013D")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600013E")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600013F")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000141")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000143")]
		[DebuggerHidden]
		private IEnumerator<TResult> System_002ECollections_002EGeneric_002EIEnumerable_003CTResult_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000144")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200002E")]
	[CompilerGenerated]
	private sealed class _003CCastIterator_003Ed__99<TResult> : IEnumerable<TResult>, IEnumerable, IEnumerator<TResult>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000092")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000093")]
		[FieldOffset(Offset = "0x0")]
		private TResult _003C_003E2__current;

		[Token(Token = "0x4000094")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000095")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable source;

		[Token(Token = "0x4000096")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable _003C_003E3__source;

		[Token(Token = "0x4000097")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator _003C_003E7__wrap1;

		[Token(Token = "0x17000027")]
		private TResult System_002ECollections_002EGeneric_002EIEnumerator_003CTResult_003E_002ECurrent
		{
			[Token(Token = "0x6000149")]
			[DebuggerHidden]
			get
			{
				return (TResult)null;
			}
		}

		[Token(Token = "0x17000028")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600014B")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000145")]
		[DebuggerHidden]
		public _003CCastIterator_003Ed__99(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000146")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000147")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000148")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x600014A")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600014C")]
		[DebuggerHidden]
		private IEnumerator<TResult> System_002ECollections_002EGeneric_002EIEnumerable_003CTResult_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600014D")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200002F")]
	[CompilerGenerated]
	private sealed class _003CRangeIterator_003Ed__115 : IEnumerable<int>, IEnumerable, IEnumerator<int>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000098")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000099")]
		[FieldOffset(Offset = "0x14")]
		private int _003C_003E2__current;

		[Token(Token = "0x400009A")]
		[FieldOffset(Offset = "0x18")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400009B")]
		[FieldOffset(Offset = "0x1C")]
		private int start;

		[Token(Token = "0x400009C")]
		[FieldOffset(Offset = "0x20")]
		public int _003C_003E3__start;

		[Token(Token = "0x400009D")]
		[FieldOffset(Offset = "0x24")]
		private int count;

		[Token(Token = "0x400009E")]
		[FieldOffset(Offset = "0x28")]
		public int _003C_003E3__count;

		[Token(Token = "0x400009F")]
		[FieldOffset(Offset = "0x2C")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x17000029")]
		private int System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EInt32_003E_002ECurrent
		{
			[Token(Token = "0x6000151")]
			[Address(RVA = "0x416CE30", Offset = "0x416CE30", VA = "0x416CE30", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700002A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000153")]
			[Address(RVA = "0x416CE80", Offset = "0x416CE80", VA = "0x416CE80", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600014E")]
		[Address(RVA = "0x416C340", Offset = "0x416C340", VA = "0x416C340")]
		[DebuggerHidden]
		public _003CRangeIterator_003Ed__115(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600014F")]
		[Address(RVA = "0x416CDD0", Offset = "0x416CDD0", VA = "0x416CDD0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000150")]
		[Address(RVA = "0x416CDE0", Offset = "0x416CDE0", VA = "0x416CDE0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000152")]
		[Address(RVA = "0x416CE40", Offset = "0x416CE40", VA = "0x416CE40", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000154")]
		[Address(RVA = "0x416CEA0", Offset = "0x416CEA0", VA = "0x416CEA0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<int> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EInt32_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000155")]
		[Address(RVA = "0x416CF40", Offset = "0x416CF40", VA = "0x416CF40", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000030")]
	[CompilerGenerated]
	private sealed class _003CRepeatIterator_003Ed__117<TResult> : IEnumerable<TResult>, IEnumerable, IEnumerator<TResult>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40000A0")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000A1")]
		[FieldOffset(Offset = "0x0")]
		private TResult _003C_003E2__current;

		[Token(Token = "0x40000A2")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40000A3")]
		[FieldOffset(Offset = "0x0")]
		private TResult element;

		[Token(Token = "0x40000A4")]
		[FieldOffset(Offset = "0x0")]
		public TResult _003C_003E3__element;

		[Token(Token = "0x40000A5")]
		[FieldOffset(Offset = "0x0")]
		private int count;

		[Token(Token = "0x40000A6")]
		[FieldOffset(Offset = "0x0")]
		public int _003C_003E3__count;

		[Token(Token = "0x40000A7")]
		[FieldOffset(Offset = "0x0")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x1700002B")]
		private TResult System_002ECollections_002EGeneric_002EIEnumerator_003CTResult_003E_002ECurrent
		{
			[Token(Token = "0x6000159")]
			[DebuggerHidden]
			get
			{
				return (TResult)null;
			}
		}

		[Token(Token = "0x1700002C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600015B")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000156")]
		[DebuggerHidden]
		public _003CRepeatIterator_003Ed__117(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000157")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000158")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600015A")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600015C")]
		[DebuggerHidden]
		private IEnumerator<TResult> System_002ECollections_002EGeneric_002EIEnumerable_003CTResult_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600015D")]
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
	public static IEnumerable<TResult> Select<TSource, TResult>(this IEnumerable<TSource> source, Func<TSource, TResult> selector)
	{
		return null;
	}

	[Token(Token = "0x600005E")]
	public static IEnumerable<TResult> Select<TSource, TResult>(this IEnumerable<TSource> source, Func<TSource, int, TResult> selector)
	{
		return null;
	}

	[Token(Token = "0x600005F")]
	[IteratorStateMachine(typeof(_003CSelectIterator_003Ed__5<, >))]
	private static IEnumerable<TResult> SelectIterator<TSource, TResult>(IEnumerable<TSource> source, Func<TSource, int, TResult> selector)
	{
		return null;
	}

	[Token(Token = "0x6000060")]
	private static Func<TSource, bool> CombinePredicates<TSource>(Func<TSource, bool> predicate1, Func<TSource, bool> predicate2)
	{
		return null;
	}

	[Token(Token = "0x6000061")]
	private static Func<TSource, TResult> CombineSelectors<TSource, TMiddle, TResult>(Func<TSource, TMiddle> selector1, Func<TMiddle, TResult> selector2)
	{
		return null;
	}

	[Token(Token = "0x6000062")]
	public static IEnumerable<TResult> SelectMany<TSource, TResult>(this IEnumerable<TSource> source, Func<TSource, IEnumerable<TResult>> selector)
	{
		return null;
	}

	[Token(Token = "0x6000063")]
	[IteratorStateMachine(typeof(_003CSelectManyIterator_003Ed__17<, >))]
	private static IEnumerable<TResult> SelectManyIterator<TSource, TResult>(IEnumerable<TSource> source, Func<TSource, IEnumerable<TResult>> selector)
	{
		return null;
	}

	[Token(Token = "0x6000064")]
	public static IEnumerable<TSource> Take<TSource>(this IEnumerable<TSource> source, int count)
	{
		return null;
	}

	[Token(Token = "0x6000065")]
	[IteratorStateMachine(typeof(_003CTakeIterator_003Ed__25<>))]
	private static IEnumerable<TSource> TakeIterator<TSource>(IEnumerable<TSource> source, int count)
	{
		return null;
	}

	[Token(Token = "0x6000066")]
	public static IEnumerable<TSource> TakeWhile<TSource>(this IEnumerable<TSource> source, Func<TSource, bool> predicate)
	{
		return null;
	}

	[Token(Token = "0x6000067")]
	[IteratorStateMachine(typeof(_003CTakeWhileIterator_003Ed__27<>))]
	private static IEnumerable<TSource> TakeWhileIterator<TSource>(IEnumerable<TSource> source, Func<TSource, bool> predicate)
	{
		return null;
	}

	[Token(Token = "0x6000068")]
	public static IEnumerable<TSource> Skip<TSource>(this IEnumerable<TSource> source, int count)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[IteratorStateMachine(typeof(_003CSkipIterator_003Ed__31<>))]
	private static IEnumerable<TSource> SkipIterator<TSource>(IEnumerable<TSource> source, int count)
	{
		return null;
	}

	[Token(Token = "0x600006A")]
	public static IOrderedEnumerable<TSource> OrderBy<TSource, TKey>(this IEnumerable<TSource> source, Func<TSource, TKey> keySelector)
	{
		return null;
	}

	[Token(Token = "0x600006B")]
	public static IOrderedEnumerable<TSource> OrderBy<TSource, TKey>(this IEnumerable<TSource> source, Func<TSource, TKey> keySelector, IComparer<TKey> comparer)
	{
		return null;
	}

	[Token(Token = "0x600006C")]
	public static IOrderedEnumerable<TSource> OrderByDescending<TSource, TKey>(this IEnumerable<TSource> source, Func<TSource, TKey> keySelector)
	{
		return null;
	}

	[Token(Token = "0x600006D")]
	public static IOrderedEnumerable<TSource> ThenBy<TSource, TKey>(this IOrderedEnumerable<TSource> source, Func<TSource, TKey> keySelector)
	{
		return null;
	}

	[Token(Token = "0x600006E")]
	public static IEnumerable<IGrouping<TKey, TSource>> GroupBy<TSource, TKey>(this IEnumerable<TSource> source, Func<TSource, TKey> keySelector)
	{
		return null;
	}

	[Token(Token = "0x600006F")]
	public static IEnumerable<TSource> Concat<TSource>(this IEnumerable<TSource> first, IEnumerable<TSource> second)
	{
		return null;
	}

	[Token(Token = "0x6000070")]
	[IteratorStateMachine(typeof(_003CConcatIterator_003Ed__59<>))]
	private static IEnumerable<TSource> ConcatIterator<TSource>(IEnumerable<TSource> first, IEnumerable<TSource> second)
	{
		return null;
	}

	[Token(Token = "0x6000071")]
	public static IEnumerable<TSource> Append<TSource>(this IEnumerable<TSource> source, TSource element)
	{
		return null;
	}

	[Token(Token = "0x6000072")]
	[IteratorStateMachine(typeof(_003CAppendIterator_003Ed__61<>))]
	private static IEnumerable<TSource> AppendIterator<TSource>(IEnumerable<TSource> source, TSource element)
	{
		return null;
	}

	[Token(Token = "0x6000073")]
	public static IEnumerable<TSource> Distinct<TSource>(this IEnumerable<TSource> source)
	{
		return null;
	}

	[Token(Token = "0x6000074")]
	public static IEnumerable<TSource> Distinct<TSource>(this IEnumerable<TSource> source, IEqualityComparer<TSource> comparer)
	{
		return null;
	}

	[Token(Token = "0x6000075")]
	[IteratorStateMachine(typeof(_003CDistinctIterator_003Ed__68<>))]
	private static IEnumerable<TSource> DistinctIterator<TSource>(IEnumerable<TSource> source, IEqualityComparer<TSource> comparer)
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	public static IEnumerable<TSource> Union<TSource>(this IEnumerable<TSource> first, IEnumerable<TSource> second)
	{
		return null;
	}

	[Token(Token = "0x6000077")]
	[IteratorStateMachine(typeof(_003CUnionIterator_003Ed__71<>))]
	private static IEnumerable<TSource> UnionIterator<TSource>(IEnumerable<TSource> first, IEnumerable<TSource> second, IEqualityComparer<TSource> comparer)
	{
		return null;
	}

	[Token(Token = "0x6000078")]
	public static IEnumerable<TSource> Except<TSource>(this IEnumerable<TSource> first, IEnumerable<TSource> second)
	{
		return null;
	}

	[Token(Token = "0x6000079")]
	[IteratorStateMachine(typeof(_003CExceptIterator_003Ed__77<>))]
	private static IEnumerable<TSource> ExceptIterator<TSource>(IEnumerable<TSource> first, IEnumerable<TSource> second, IEqualityComparer<TSource> comparer)
	{
		return null;
	}

	[Token(Token = "0x600007A")]
	public static IEnumerable<TSource> Reverse<TSource>(this IEnumerable<TSource> source)
	{
		return null;
	}

	[Token(Token = "0x600007B")]
	[IteratorStateMachine(typeof(_003CReverseIterator_003Ed__79<>))]
	private static IEnumerable<TSource> ReverseIterator<TSource>(IEnumerable<TSource> source)
	{
		return null;
	}

	[Token(Token = "0x600007C")]
	public static bool SequenceEqual<TSource>(this IEnumerable<TSource> first, IEnumerable<TSource> second)
	{
		return default(bool);
	}

	[Token(Token = "0x600007D")]
	public static bool SequenceEqual<TSource>(this IEnumerable<TSource> first, IEnumerable<TSource> second, IEqualityComparer<TSource> comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x600007E")]
	public static IEnumerable<TSource> AsEnumerable<TSource>(this IEnumerable<TSource> source)
	{
		return null;
	}

	[Token(Token = "0x600007F")]
	public static TSource[] ToArray<TSource>(this IEnumerable<TSource> source)
	{
		return null;
	}

	[Token(Token = "0x6000080")]
	public static List<TSource> ToList<TSource>(this IEnumerable<TSource> source)
	{
		return null;
	}

	[Token(Token = "0x6000081")]
	public static Dictionary<TKey, TElement> ToDictionary<TSource, TKey, TElement>(this IEnumerable<TSource> source, Func<TSource, TKey> keySelector, Func<TSource, TElement> elementSelector)
	{
		return null;
	}

	[Token(Token = "0x6000082")]
	public static Dictionary<TKey, TElement> ToDictionary<TSource, TKey, TElement>(this IEnumerable<TSource> source, Func<TSource, TKey> keySelector, Func<TSource, TElement> elementSelector, IEqualityComparer<TKey> comparer)
	{
		return null;
	}

	[Token(Token = "0x6000083")]
	public static IEnumerable<TResult> OfType<TResult>(this IEnumerable source)
	{
		return null;
	}

	[Token(Token = "0x6000084")]
	[IteratorStateMachine(typeof(_003COfTypeIterator_003Ed__97<>))]
	private static IEnumerable<TResult> OfTypeIterator<TResult>(IEnumerable source)
	{
		return null;
	}

	[Token(Token = "0x6000085")]
	public static IEnumerable<TResult> Cast<TResult>(this IEnumerable source)
	{
		return null;
	}

	[Token(Token = "0x6000086")]
	[IteratorStateMachine(typeof(_003CCastIterator_003Ed__99<>))]
	private static IEnumerable<TResult> CastIterator<TResult>(IEnumerable source)
	{
		return null;
	}

	[Token(Token = "0x6000087")]
	public static TSource First<TSource>(this IEnumerable<TSource> source)
	{
		return (TSource)null;
	}

	[Token(Token = "0x6000088")]
	public static TSource First<TSource>(this IEnumerable<TSource> source, Func<TSource, bool> predicate)
	{
		return (TSource)null;
	}

	[Token(Token = "0x6000089")]
	public static TSource FirstOrDefault<TSource>(this IEnumerable<TSource> source)
	{
		return (TSource)null;
	}

	[Token(Token = "0x600008A")]
	public static TSource FirstOrDefault<TSource>(this IEnumerable<TSource> source, Func<TSource, bool> predicate)
	{
		return (TSource)null;
	}

	[Token(Token = "0x600008B")]
	public static TSource Last<TSource>(this IEnumerable<TSource> source)
	{
		return (TSource)null;
	}

	[Token(Token = "0x600008C")]
	public static TSource LastOrDefault<TSource>(this IEnumerable<TSource> source)
	{
		return (TSource)null;
	}

	[Token(Token = "0x600008D")]
	public static TSource LastOrDefault<TSource>(this IEnumerable<TSource> source, Func<TSource, bool> predicate)
	{
		return (TSource)null;
	}

	[Token(Token = "0x600008E")]
	public static TSource Single<TSource>(this IEnumerable<TSource> source)
	{
		return (TSource)null;
	}

	[Token(Token = "0x600008F")]
	public static TSource Single<TSource>(this IEnumerable<TSource> source, Func<TSource, bool> predicate)
	{
		return (TSource)null;
	}

	[Token(Token = "0x6000090")]
	public static TSource SingleOrDefault<TSource>(this IEnumerable<TSource> source)
	{
		return (TSource)null;
	}

	[Token(Token = "0x6000091")]
	public static TSource SingleOrDefault<TSource>(this IEnumerable<TSource> source, Func<TSource, bool> predicate)
	{
		return (TSource)null;
	}

	[Token(Token = "0x6000092")]
	public static TSource ElementAt<TSource>(this IEnumerable<TSource> source, int index)
	{
		return (TSource)null;
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x416C220", Offset = "0x416C220", VA = "0x416C220")]
	public static IEnumerable<int> Range(int start, int count)
	{
		return null;
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x416C2D0", Offset = "0x416C2D0", VA = "0x416C2D0")]
	[IteratorStateMachine(typeof(_003CRangeIterator_003Ed__115))]
	private static IEnumerable<int> RangeIterator(int start, int count)
	{
		return null;
	}

	[Token(Token = "0x6000095")]
	public static IEnumerable<TResult> Repeat<TResult>(TResult element, int count)
	{
		return null;
	}

	[Token(Token = "0x6000096")]
	[IteratorStateMachine(typeof(_003CRepeatIterator_003Ed__117<>))]
	private static IEnumerable<TResult> RepeatIterator<TResult>(TResult element, int count)
	{
		return null;
	}

	[Token(Token = "0x6000097")]
	public static IEnumerable<TResult> Empty<TResult>()
	{
		return null;
	}

	[Token(Token = "0x6000098")]
	public static bool Any<TSource>(this IEnumerable<TSource> source)
	{
		return default(bool);
	}

	[Token(Token = "0x6000099")]
	public static bool Any<TSource>(this IEnumerable<TSource> source, Func<TSource, bool> predicate)
	{
		return default(bool);
	}

	[Token(Token = "0x600009A")]
	public static bool All<TSource>(this IEnumerable<TSource> source, Func<TSource, bool> predicate)
	{
		return default(bool);
	}

	[Token(Token = "0x600009B")]
	public static int Count<TSource>(this IEnumerable<TSource> source)
	{
		return default(int);
	}

	[Token(Token = "0x600009C")]
	public static int Count<TSource>(this IEnumerable<TSource> source, Func<TSource, bool> predicate)
	{
		return default(int);
	}

	[Token(Token = "0x600009D")]
	public static bool Contains<TSource>(this IEnumerable<TSource> source, TSource value)
	{
		return default(bool);
	}

	[Token(Token = "0x600009E")]
	public static bool Contains<TSource>(this IEnumerable<TSource> source, TSource value, IEqualityComparer<TSource> comparer)
	{
		return default(bool);
	}

	[Token(Token = "0x600009F")]
	public static TAccumulate Aggregate<TSource, TAccumulate>(this IEnumerable<TSource> source, TAccumulate seed, Func<TAccumulate, TSource, TAccumulate> func)
	{
		return (TAccumulate)null;
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x416C370", Offset = "0x416C370", VA = "0x416C370")]
	public static int Sum(this IEnumerable<int> source)
	{
		return default(int);
	}

	[Token(Token = "0x60000A1")]
	public static int Sum<TSource>(this IEnumerable<TSource> source, Func<TSource, int> selector)
	{
		return default(int);
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x416C6F0", Offset = "0x416C6F0", VA = "0x416C6F0")]
	public static int Min(this IEnumerable<int> source)
	{
		return default(int);
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x416CA60", Offset = "0x416CA60", VA = "0x416CA60")]
	public static int Max(this IEnumerable<int> source)
	{
		return default(int);
	}

	[Token(Token = "0x60000A4")]
	public static TSource Max<TSource>(this IEnumerable<TSource> source)
	{
		return (TSource)null;
	}

	[Token(Token = "0x60000A5")]
	public static int Max<TSource>(this IEnumerable<TSource> source, Func<TSource, int> selector)
	{
		return default(int);
	}

	[Token(Token = "0x60000A6")]
	public static HashSet<TSource> ToHashSet<TSource>(this IEnumerable<TSource> source)
	{
		return null;
	}

	[Token(Token = "0x60000A7")]
	public static HashSet<TSource> ToHashSet<TSource>(this IEnumerable<TSource> source, IEqualityComparer<TSource> comparer)
	{
		return null;
	}
}
