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
		[Address(RVA = "0x4F66EE0", Offset = "0x4F66EE0", VA = "0x4F66EE0")]
		protected UQueryMatcher()
		{
		}

		[Token(Token = "0x6001A2C")]
		[Address(RVA = "0x4F66EF0", Offset = "0x4F66EF0", VA = "0x4F66EF0", Slot = "4")]
		public override void Traverse(VisualElement element)
		{
		}

		[Token(Token = "0x6001A2D")]
		[Address(RVA = "0x4F66F00", Offset = "0x4F66F00", VA = "0x4F66F00", Slot = "6")]
		protected virtual bool OnRuleMatchedElement(RuleMatcher matcher, VisualElement element)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A2E")]
		[Address(RVA = "0x4F66F10", Offset = "0x4F66F10", VA = "0x4F66F10")]
		private static void NoProcessResult(VisualElement e, MatchResultInfo i)
		{
		}

		[Token(Token = "0x6001A2F")]
		[Address(RVA = "0x4F66F20", Offset = "0x4F66F20", VA = "0x4F66F20", Slot = "5")]
		public override void TraverseRecursive(VisualElement element, int depth)
		{
		}

		[Token(Token = "0x6001A30")]
		[Address(RVA = "0x4F67150", Offset = "0x4F67150", VA = "0x4F67150", Slot = "7")]
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
			[Address(RVA = "0x4F67220", Offset = "0x4F67220", VA = "0x4F67220")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6001A35")]
			[Address(RVA = "0x4F67230", Offset = "0x4F67230", VA = "0x4F67230")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6001A36")]
		[Address(RVA = "0x4F67240", Offset = "0x4F67240", VA = "0x4F67240", Slot = "7")]
		public override void Run(VisualElement root, List<RuleMatcher> matchers)
		{
		}

		[Token(Token = "0x6001A37")]
		[Address(RVA = "0x4F672B0", Offset = "0x4F672B0", VA = "0x4F672B0")]
		public bool IsInUse()
		{
			return default(bool);
		}

		[Token(Token = "0x6001A38")]
		public abstract SingleQueryMatcher CreateNew();

		[Token(Token = "0x6001A39")]
		[Address(RVA = "0x4F672C0", Offset = "0x4F672C0", VA = "0x4F672C0")]
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
		[Address(RVA = "0x4F672D0", Offset = "0x4F672D0", VA = "0x4F672D0", Slot = "6")]
		protected override bool OnRuleMatchedElement(RuleMatcher matcher, VisualElement element)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A3B")]
		[Address(RVA = "0x4F672F0", Offset = "0x4F672F0", VA = "0x4F672F0", Slot = "8")]
		public override SingleQueryMatcher CreateNew()
		{
			return null;
		}

		[Token(Token = "0x6001A3C")]
		[Address(RVA = "0x4F67330", Offset = "0x4F67330", VA = "0x4F67330")]
		public FirstQueryMatcher()
		{
		}
	}
}
