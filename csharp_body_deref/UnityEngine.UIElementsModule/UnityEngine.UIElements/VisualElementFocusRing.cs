// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualElementFocusRing
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200054B")]
public class VisualElementFocusRing : IFocusRing
{
	[Token(Token = "0x200054C")]
	public enum DefaultFocusOrder
	{
		[Token(Token = "0x40011F7")]
		ChildOrder,
		[Token(Token = "0x40011F8")]
		PositionXY,
		[Token(Token = "0x40011F9")]
		PositionYX
	}

	[Token(Token = "0x200054D")]
	internal class FocusRingRecord
	{
		[Token(Token = "0x40011FA")]
		[FieldOffset(Offset = "0x10")]
		public int m_AutoIndex;

		[Token(Token = "0x40011FB")]
		[FieldOffset(Offset = "0x18")]
		public Focusable m_Focusable;

		[Token(Token = "0x40011FC")]
		[FieldOffset(Offset = "0x20")]
		public bool m_IsSlot;

		[Token(Token = "0x40011FD")]
		[FieldOffset(Offset = "0x28")]
		public List<FocusRingRecord> m_ScopeNavigationOrder;

		[Token(Token = "0x6002813")]
		[Address(RVA = "0x6B6DAF0", Offset = "0x6B6CAF0", VA = "0x6B6DAF0")]
		public FocusRingRecord()
		{
		}
	}

	[Token(Token = "0x40011F3")]
	[FieldOffset(Offset = "0x10")]
	private readonly VisualElement root;

	[Token(Token = "0x40011F5")]
	[FieldOffset(Offset = "0x20")]
	internal List<FocusRingRecord> m_FocusRing;

	[Token(Token = "0x17000A32")]
	private FocusController focusController
	{
		[Token(Token = "0x6002803")]
		[Address(RVA = "0x6B6CEB0", Offset = "0x6B6BEB0", VA = "0x6B6CEB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A33")]
	public DefaultFocusOrder defaultFocusOrder
	{
		[Token(Token = "0x6002804")]
		[Address(RVA = "0x6B6CEE0", Offset = "0x6B6BEE0", VA = "0x6B6CEE0")]
		[CompilerGenerated]
		get
		{
			return default(DefaultFocusOrder);
		}
		[Token(Token = "0x6002805")]
		[Address(RVA = "0x6B6CEF0", Offset = "0x6B6BEF0", VA = "0x6B6CEF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002802")]
	[Address(RVA = "0x6B6CE20", Offset = "0x6B6BE20", VA = "0x6B6CE20")]
	public VisualElementFocusRing(VisualElement root, DefaultFocusOrder dfo = DefaultFocusOrder.ChildOrder)
	{
	}

	[Token(Token = "0x6002806")]
	[Address(RVA = "0x6B6CF00", Offset = "0x6B6BF00", VA = "0x6B6CF00")]
	private int FocusRingAutoIndexSort(FocusRingRecord a, FocusRingRecord b)
	{
		return default(int);
	}

	[Token(Token = "0x6002807")]
	[Address(RVA = "0x6B6D2C0", Offset = "0x6B6C2C0", VA = "0x6B6D2C0")]
	private int FocusRingSort(FocusRingRecord a, FocusRingRecord b)
	{
		return default(int);
	}

	[Token(Token = "0x6002808")]
	[Address(RVA = "0x6B6D3C0", Offset = "0x6B6C3C0", VA = "0x6B6D3C0")]
	private void DoUpdate()
	{
	}

	[Token(Token = "0x6002809")]
	[Address(RVA = "0x6B6D490", Offset = "0x6B6C490", VA = "0x6B6D490")]
	private void BuildRingForScopeRecursive(VisualElement ve, ref int scopeIndex, List<FocusRingRecord> scopeList)
	{
	}

	[Token(Token = "0x600280A")]
	[Address(RVA = "0x6B6D810", Offset = "0x6B6C810", VA = "0x6B6D810")]
	private void SortAndFlattenScopeLists(List<FocusRingRecord> rootScopeList)
	{
	}

	[Token(Token = "0x600280B")]
	[Address(RVA = "0x6B6DB00", Offset = "0x6B6CB00", VA = "0x6B6DB00")]
	private int GetFocusableInternalIndex(Focusable f)
	{
		return default(int);
	}

	[Token(Token = "0x600280C")]
	[Address(RVA = "0x6B6DBA0", Offset = "0x6B6CBA0", VA = "0x6B6DBA0", Slot = "4")]
	public FocusChangeDirection GetFocusChangeDirection(Focusable currentFocusable, EventBase e)
	{
		return null;
	}

	[Token(Token = "0x600280D")]
	[Address(RVA = "0x6B6DEF0", Offset = "0x6B6CEF0", VA = "0x6B6DEF0", Slot = "5")]
	public Focusable GetNextFocusable(Focusable currentFocusable, FocusChangeDirection direction)
	{
		return null;
	}

	[Token(Token = "0x600280E")]
	[Address(RVA = "0x6B6E0A0", Offset = "0x6B6D0A0", VA = "0x6B6E0A0")]
	internal Focusable GetNextFocusableInSequence(Focusable currentFocusable, FocusChangeDirection direction)
	{
		return null;
	}

	[Token(Token = "0x600280F")]
	[Address(RVA = "0x6B6E6A0", Offset = "0x6B6D6A0", VA = "0x6B6E6A0")]
	internal VisualElement GetNextFocusableInTree(VisualElement currentFocusable)
	{
		return null;
	}

	[Token(Token = "0x6002810")]
	[Address(RVA = "0x6B6E770", Offset = "0x6B6D770", VA = "0x6B6E770")]
	internal VisualElement GetPreviousFocusableInTree(VisualElement currentFocusable)
	{
		return null;
	}

	[Token(Token = "0x6002811")]
	[Address(RVA = "0x6B6E7F0", Offset = "0x6B6D7F0", VA = "0x6B6E7F0")]
	private VisualElement GetNextElementDepthFirst(VisualElement ve)
	{
		return null;
	}

	[Token(Token = "0x6002812")]
	[Address(RVA = "0x6B6E840", Offset = "0x6B6D840", VA = "0x6B6E840")]
	private VisualElement GetPreviousElementDepthFirst(VisualElement ve)
	{
		return null;
	}
}
