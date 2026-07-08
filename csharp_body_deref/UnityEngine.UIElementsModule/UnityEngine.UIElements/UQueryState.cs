using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200040B")]
public struct UQueryState<T> : IEnumerable<T>, IEnumerable, IEquatable<UQueryState<T>> where T : VisualElement
{
	[Token(Token = "0x200040C")]
	private class ListQueryMatcher<TElement> : UQuery.UQueryMatcher where TElement : VisualElement
	{
		[Token(Token = "0x17000702")]
		public List<TElement> matches
		{
			[Token(Token = "0x6001A49")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6001A4A")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6001A4B")]
		protected override bool OnRuleMatchedElement(RuleMatcher matcher, VisualElement element)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A4C")]
		public void Reset()
		{
		}

		[Token(Token = "0x6001A4D")]
		public ListQueryMatcher()
		{
		}
	}

	[Token(Token = "0x200040D")]
	private class ActionQueryMatcher : UQuery.UQueryMatcher
	{
		[Token(Token = "0x17000703")]
		internal Action<T> callBack
		{
			[Token(Token = "0x6001A4E")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001A4F")]
		protected override bool OnRuleMatchedElement(RuleMatcher matcher, VisualElement element)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A50")]
		public ActionQueryMatcher()
		{
		}
	}

	[Token(Token = "0x200040E")]
	public struct Enumerator : IEnumerator<T>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000C60")]
		[FieldOffset(Offset = "0x0")]
		private List<VisualElement> iterationList;

		[Token(Token = "0x4000C61")]
		[FieldOffset(Offset = "0x0")]
		private int currentIndex;

		[Token(Token = "0x17000704")]
		public T Current
		{
			[Token(Token = "0x6001A52")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000705")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001A53")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001A51")]
		internal Enumerator(UQueryState<T> queryState)
		{
		}

		[Token(Token = "0x6001A54")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001A55")]
		public void Reset()
		{
		}

		[Token(Token = "0x6001A56")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x4000C59")]
	[FieldOffset(Offset = "0x0")]
	private static ActionQueryMatcher s_Action;

	[Token(Token = "0x4000C5A")]
	[FieldOffset(Offset = "0x0")]
	private readonly VisualElement m_Element;

	[Token(Token = "0x4000C5B")]
	[FieldOffset(Offset = "0x0")]
	internal readonly List<RuleMatcher> m_Matchers;

	[Token(Token = "0x4000C5C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ListQueryMatcher<T> s_List;

	[Token(Token = "0x4000C5D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ListQueryMatcher<VisualElement> s_EnumerationList;

	[Token(Token = "0x6001A3E")]
	internal UQueryState(VisualElement element, List<RuleMatcher> matchers)
	{
	}

	[Token(Token = "0x6001A3F")]
	public UQueryState<T> RebuildOn(VisualElement element)
	{
		return default(UQueryState<T>);
	}

	[Token(Token = "0x6001A40")]
	private T Single(UQuery.SingleQueryMatcher matcher)
	{
		return null;
	}

	[Token(Token = "0x6001A41")]
	public T First()
	{
		return null;
	}

	[Token(Token = "0x6001A42")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6001A43")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001A44")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001A45")]
	public bool Equals(UQueryState<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A46")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A47")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
