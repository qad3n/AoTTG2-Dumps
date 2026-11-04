// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UQueryState
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20004D2")]
public struct UQueryState<T> : IEnumerable<T>, IEnumerable, IEquatable<UQueryState<T>> where T : VisualElement
{
	[Token(Token = "0x20004D3")]
	private class ListQueryMatcher<TElement> : UQuery.UQueryMatcher where TElement : VisualElement
	{
		[Token(Token = "0x170009D0")]
		public List<TElement> matches
		{
			[Token(Token = "0x6002601")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6002602")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6002603")]
		protected override bool OnRuleMatchedElement(RuleMatcher matcher, VisualElement element)
		{
			return default(bool);
		}

		[Token(Token = "0x6002604")]
		public void Reset()
		{
		}

		[Token(Token = "0x6002605")]
		public ListQueryMatcher()
		{
		}
	}

	[Token(Token = "0x20004D4")]
	private class ActionQueryMatcher : UQuery.UQueryMatcher
	{
		[Token(Token = "0x170009D1")]
		internal Action<T> callBack
		{
			[Token(Token = "0x6002606")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6002607")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6002608")]
		protected override bool OnRuleMatchedElement(RuleMatcher matcher, VisualElement element)
		{
			return default(bool);
		}

		[Token(Token = "0x6002609")]
		public ActionQueryMatcher()
		{
		}
	}

	[Token(Token = "0x20004D5")]
	public struct Enumerator : IEnumerator<T>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40010AA")]
		[FieldOffset(Offset = "0x0")]
		private List<VisualElement> iterationList;

		[Token(Token = "0x40010AB")]
		[FieldOffset(Offset = "0x0")]
		private int currentIndex;

		[Token(Token = "0x170009D2")]
		public T Current
		{
			[Token(Token = "0x600260B")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170009D3")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600260C")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600260A")]
		internal Enumerator(UQueryState<T> queryState)
		{
		}

		[Token(Token = "0x600260D")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600260E")]
		public void Reset()
		{
		}

		[Token(Token = "0x600260F")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x40010A3")]
	[FieldOffset(Offset = "0x0")]
	private static ActionQueryMatcher s_Action;

	[Token(Token = "0x40010A4")]
	[FieldOffset(Offset = "0x0")]
	private readonly VisualElement m_Element;

	[Token(Token = "0x40010A5")]
	[FieldOffset(Offset = "0x0")]
	internal readonly List<RuleMatcher> m_Matchers;

	[Token(Token = "0x40010A6")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ListQueryMatcher<T> s_List;

	[Token(Token = "0x40010A7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ListQueryMatcher<VisualElement> s_EnumerationList;

	[Token(Token = "0x60025F3")]
	internal UQueryState(VisualElement element, List<RuleMatcher> matchers)
	{
	}

	[Token(Token = "0x60025F4")]
	public UQueryState<T> RebuildOn(VisualElement element)
	{
		return default(UQueryState<T>);
	}

	[Token(Token = "0x60025F5")]
	private T Single(UQuery.SingleQueryMatcher matcher)
	{
		return null;
	}

	[Token(Token = "0x60025F6")]
	public T First()
	{
		return null;
	}

	[Token(Token = "0x60025F7")]
	public void ToList(List<T> results)
	{
	}

	[Token(Token = "0x60025F8")]
	public List<T> ToList()
	{
		return null;
	}

	[Token(Token = "0x60025F9")]
	public void ForEach(Action<T> funcCall)
	{
	}

	[Token(Token = "0x60025FA")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x60025FB")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60025FC")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60025FD")]
	public bool Equals(UQueryState<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x60025FE")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60025FF")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
