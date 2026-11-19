// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Token(Token = "0x20004CB")]
public static class UQuery
{
	[Token(Token = "0x20004CC")]
	internal interface IVisualPredicateWrapper
	{
		[Token(Token = "0x60025DC")]
		bool Predicate(object e);
	}

	[Token(Token = "0x20004CD")]
	internal class IsOfType<T> : IVisualPredicateWrapper where T : VisualElement
	{
		[Token(Token = "0x400109D")]
		[FieldOffset(Offset = "0x0")]
		public static IsOfType<T> s_Instance;

		[Token(Token = "0x60025DD")]
		public bool Predicate(object e)
		{
			return default(bool);
		}

		[Token(Token = "0x60025DE")]
		public IsOfType()
		{
		}
	}

	[Token(Token = "0x20004CE")]
	internal abstract class UQueryMatcher : HierarchyTraversal
	{
		[Token(Token = "0x400109E")]
		[FieldOffset(Offset = "0x10")]
		internal List<RuleMatcher> m_Matchers;

		[Token(Token = "0x60025E0")]
		[Address(RVA = "0x6B55AE0", Offset = "0x6B54AE0", VA = "0x6B55AE0")]
		protected UQueryMatcher()
		{
		}

		[Token(Token = "0x60025E1")]
		[Address(RVA = "0x6B55AF0", Offset = "0x6B54AF0", VA = "0x6B55AF0", Slot = "4")]
		public override void Traverse(VisualElement element)
		{
		}

		[Token(Token = "0x60025E2")]
		[Address(RVA = "0x6B55B00", Offset = "0x6B54B00", VA = "0x6B55B00", Slot = "6")]
		protected virtual bool OnRuleMatchedElement(RuleMatcher matcher, VisualElement element)
		{
			return default(bool);
		}

		[Token(Token = "0x60025E3")]
		[Address(RVA = "0x6B55B10", Offset = "0x6B54B10", VA = "0x6B55B10")]
		private static void NoProcessResult(VisualElement e, MatchResultInfo i)
		{
		}

		[Token(Token = "0x60025E4")]
		[Address(RVA = "0x6B55B20", Offset = "0x6B54B20", VA = "0x6B55B20", Slot = "5")]
		public override void TraverseRecursive(VisualElement element, int depth)
		{
		}

		[Token(Token = "0x60025E5")]
		[Address(RVA = "0x6B55D50", Offset = "0x6B54D50", VA = "0x6B55D50", Slot = "7")]
		public virtual void Run(VisualElement root, List<RuleMatcher> matchers)
		{
		}
	}

	[Token(Token = "0x20004D0")]
	internal abstract class SingleQueryMatcher : UQueryMatcher
	{
		[Token(Token = "0x170009CF")]
		public VisualElement match
		{
			[Token(Token = "0x60025E9")]
			[Address(RVA = "0x6B55E20", Offset = "0x6B54E20", VA = "0x6B55E20")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60025EA")]
			[Address(RVA = "0x6B55E30", Offset = "0x6B54E30", VA = "0x6B55E30")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60025EB")]
		[Address(RVA = "0x6B55E40", Offset = "0x6B54E40", VA = "0x6B55E40", Slot = "7")]
		public override void Run(VisualElement root, List<RuleMatcher> matchers)
		{
		}

		[Token(Token = "0x60025EC")]
		[Address(RVA = "0x6B55EB0", Offset = "0x6B54EB0", VA = "0x6B55EB0")]
		public bool IsInUse()
		{
			return default(bool);
		}

		[Token(Token = "0x60025ED")]
		public abstract SingleQueryMatcher CreateNew();

		[Token(Token = "0x60025EE")]
		[Address(RVA = "0x6B55EC0", Offset = "0x6B54EC0", VA = "0x6B55EC0")]
		protected SingleQueryMatcher()
		{
		}
	}

	[Token(Token = "0x20004D1")]
	internal class FirstQueryMatcher : SingleQueryMatcher
	{
		[Token(Token = "0x40010A2")]
		[FieldOffset(Offset = "0x0")]
		public static readonly FirstQueryMatcher Instance;

		[Token(Token = "0x60025EF")]
		[Address(RVA = "0x6B55ED0", Offset = "0x6B54ED0", VA = "0x6B55ED0", Slot = "6")]
		protected override bool OnRuleMatchedElement(RuleMatcher matcher, VisualElement element)
		{
			return default(bool);
		}

		[Token(Token = "0x60025F0")]
		[Address(RVA = "0x6B55EF0", Offset = "0x6B54EF0", VA = "0x6B55EF0", Slot = "8")]
		public override SingleQueryMatcher CreateNew()
		{
			return null;
		}

		[Token(Token = "0x60025F1")]
		[Address(RVA = "0x6B55F30", Offset = "0x6B54F30", VA = "0x6B55F30")]
		public FirstQueryMatcher()
		{
		}
	}
}
