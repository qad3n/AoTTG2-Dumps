using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000404")]
public static class UQuery
{
	[Token(Token = "0x2000405")]
	internal interface IVisualPredicateWrapper
	{
		[Token(Token = "0x6001A27")]
		bool Predicate(object e);
	}

	[Token(Token = "0x2000406")]
	internal class IsOfType<T> : IVisualPredicateWrapper where T : VisualElement
	{
		[Token(Token = "0x4000C53")]
		[FieldOffset(Offset = "0x0")]
		public static IsOfType<T> s_Instance;

		[Token(Token = "0x6001A28")]
		public bool Predicate(object e)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A29")]
		public IsOfType()
		{
		}
	}

	[Token(Token = "0x2000407")]
	internal abstract class UQueryMatcher : HierarchyTraversal
	{
		[Token(Token = "0x4000C54")]
		[FieldOffset(Offset = "0x10")]
		internal List<RuleMatcher> m_Matchers;

		[Token(Token = "0x6001A2B")]
		[Address(RVA = "0x4C3F5B0", Offset = "0x4C3F5B0", VA = "0x4C3F5B0")]
		protected UQueryMatcher()
		{
		}

		[Token(Token = "0x6001A2C")]
		[Address(RVA = "0x4C3F5C0", Offset = "0x4C3F5C0", VA = "0x4C3F5C0", Slot = "4")]
		public override void Traverse(VisualElement element)
		{
		}

		[Token(Token = "0x6001A2D")]
		[Address(RVA = "0x4C3F5D0", Offset = "0x4C3F5D0", VA = "0x4C3F5D0", Slot = "6")]
		protected virtual bool OnRuleMatchedElement(RuleMatcher matcher, VisualElement element)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A2E")]
		[Address(RVA = "0x4C3F5E0", Offset = "0x4C3F5E0", VA = "0x4C3F5E0")]
		private static void NoProcessResult(VisualElement e, MatchResultInfo i)
		{
		}

		[Token(Token = "0x6001A2F")]
		[Address(RVA = "0x4C3F5F0", Offset = "0x4C3F5F0", VA = "0x4C3F5F0", Slot = "5")]
		public override void TraverseRecursive(VisualElement element, int depth)
		{
		}

		[Token(Token = "0x6001A30")]
		[Address(RVA = "0x4C3F820", Offset = "0x4C3F820", VA = "0x4C3F820", Slot = "7")]
		public virtual void Run(VisualElement root, List<RuleMatcher> matchers)
		{
		}
	}

	[Token(Token = "0x2000409")]
	internal abstract class SingleQueryMatcher : UQueryMatcher
	{
		[Token(Token = "0x17000701")]
		public VisualElement match
		{
			[Token(Token = "0x6001A34")]
			[Address(RVA = "0x4C3F8F0", Offset = "0x4C3F8F0", VA = "0x4C3F8F0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6001A35")]
			[Address(RVA = "0x4C3F900", Offset = "0x4C3F900", VA = "0x4C3F900")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6001A36")]
		[Address(RVA = "0x4C3F910", Offset = "0x4C3F910", VA = "0x4C3F910", Slot = "7")]
		public override void Run(VisualElement root, List<RuleMatcher> matchers)
		{
		}

		[Token(Token = "0x6001A37")]
		[Address(RVA = "0x4C3F980", Offset = "0x4C3F980", VA = "0x4C3F980")]
		public bool IsInUse()
		{
			return default(bool);
		}

		[Token(Token = "0x6001A38")]
		public abstract SingleQueryMatcher CreateNew();

		[Token(Token = "0x6001A39")]
		[Address(RVA = "0x4C3F990", Offset = "0x4C3F990", VA = "0x4C3F990")]
		protected SingleQueryMatcher()
		{
		}
	}

	[Token(Token = "0x200040A")]
	internal class FirstQueryMatcher : SingleQueryMatcher
	{
		[Token(Token = "0x4000C58")]
		[FieldOffset(Offset = "0x0")]
		public static readonly FirstQueryMatcher Instance;

		[Token(Token = "0x6001A3A")]
		[Address(RVA = "0x4C3F9A0", Offset = "0x4C3F9A0", VA = "0x4C3F9A0", Slot = "6")]
		protected override bool OnRuleMatchedElement(RuleMatcher matcher, VisualElement element)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A3B")]
		[Address(RVA = "0x4C3F9C0", Offset = "0x4C3F9C0", VA = "0x4C3F9C0", Slot = "8")]
		public override SingleQueryMatcher CreateNew()
		{
			return null;
		}

		[Token(Token = "0x6001A3C")]
		[Address(RVA = "0x4C3FA00", Offset = "0x4C3FA00", VA = "0x4C3FA00")]
		public FirstQueryMatcher()
		{
		}
	}
}
