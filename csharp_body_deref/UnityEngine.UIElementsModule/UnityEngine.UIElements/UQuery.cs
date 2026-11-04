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
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		protected UQueryMatcher()
		{
		}

		[Token(Token = "0x60025E1")]
		[Address(RVA = "0x3154190", Offset = "0x3152790", VA = "0x183154190", Slot = "4")]
		public override void Traverse(VisualElement element)
		{
		}

		[Token(Token = "0x60025E2")]
		[Address(RVA = "0x795DE0", Offset = "0x7943E0", VA = "0x180795DE0", Slot = "6")]
		protected virtual bool OnRuleMatchedElement(RuleMatcher matcher, VisualElement element)
		{
			return default(bool);
		}

		[Token(Token = "0x60025E3")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		private static void NoProcessResult(VisualElement e, MatchResultInfo i)
		{
		}

		[Token(Token = "0x60025E4")]
		[Address(RVA = "0x3153F50", Offset = "0x3152550", VA = "0x183153F50", Slot = "5")]
		public override void TraverseRecursive(VisualElement element, int depth)
		{
		}

		[Token(Token = "0x60025E5")]
		[Address(RVA = "0x3153F00", Offset = "0x3152500", VA = "0x183153F00", Slot = "7")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60025EA")]
			[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60025EB")]
		[Address(RVA = "0x313D910", Offset = "0x313BF10", VA = "0x18313D910", Slot = "7")]
		public override void Run(VisualElement root, List<RuleMatcher> matchers)
		{
		}

		[Token(Token = "0x60025EC")]
		[Address(RVA = "0x313D900", Offset = "0x313BF00", VA = "0x18313D900")]
		public bool IsInUse()
		{
			return default(bool);
		}

		[Token(Token = "0x60025ED")]
		public abstract SingleQueryMatcher CreateNew();

		[Token(Token = "0x60025EE")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
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
		[Address(RVA = "0x313C730", Offset = "0x313AD30", VA = "0x18313C730", Slot = "6")]
		protected override bool OnRuleMatchedElement(RuleMatcher matcher, VisualElement element)
		{
			return default(bool);
		}

		[Token(Token = "0x60025F0")]
		[Address(RVA = "0x313C6E0", Offset = "0x313ACE0", VA = "0x18313C6E0", Slot = "8")]
		public override SingleQueryMatcher CreateNew()
		{
			return null;
		}

		[Token(Token = "0x60025F1")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public FirstQueryMatcher()
		{
		}
	}
}
