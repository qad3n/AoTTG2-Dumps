// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualElementFocusRing
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x1A1F3C0", Offset = "0x1A1D9C0", VA = "0x181A1F3C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A33")]
	public DefaultFocusOrder defaultFocusOrder
	{
		[Token(Token = "0x6002804")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		[CompilerGenerated]
		get
		{
			return default(DefaultFocusOrder);
		}
		[Token(Token = "0x6002805")]
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002802")]
	[Address(RVA = "0x31699B0", Offset = "0x3167FB0", VA = "0x1831699B0")]
	public VisualElementFocusRing(VisualElement root, DefaultFocusOrder dfo = DefaultFocusOrder.ChildOrder)
	{
	}

	[Token(Token = "0x6002806")]
	[Address(RVA = "0x3168310", Offset = "0x3166910", VA = "0x183168310")]
	private int FocusRingAutoIndexSort(FocusRingRecord a, FocusRingRecord b)
	{
		return default(int);
	}

	[Token(Token = "0x6002807")]
	[Address(RVA = "0x31686C0", Offset = "0x3166CC0", VA = "0x1831686C0")]
	private int FocusRingSort(FocusRingRecord a, FocusRingRecord b)
	{
		return default(int);
	}

	[Token(Token = "0x6002808")]
	[Address(RVA = "0x3168230", Offset = "0x3166830", VA = "0x183168230")]
	private void DoUpdate()
	{
	}

	[Token(Token = "0x6002809")]
	[Address(RVA = "0x3167F70", Offset = "0x3166570", VA = "0x183167F70")]
	private void BuildRingForScopeRecursive(VisualElement ve, ref int scopeIndex, List<FocusRingRecord> scopeList)
	{
	}

	[Token(Token = "0x600280A")]
	[Address(RVA = "0x3169770", Offset = "0x3167D70", VA = "0x183169770")]
	private void SortAndFlattenScopeLists(List<FocusRingRecord> rootScopeList)
	{
	}

	[Token(Token = "0x600280B")]
	[Address(RVA = "0x3168B00", Offset = "0x3167100", VA = "0x183168B00")]
	private int GetFocusableInternalIndex(Focusable f)
	{
		return default(int);
	}

	[Token(Token = "0x600280C")]
	[Address(RVA = "0x31687E0", Offset = "0x3166DE0", VA = "0x1831687E0", Slot = "4")]
	public FocusChangeDirection GetFocusChangeDirection(Focusable currentFocusable, EventBase e)
	{
		return null;
	}

	[Token(Token = "0x600280D")]
	[Address(RVA = "0x31694A0", Offset = "0x3167AA0", VA = "0x1831694A0", Slot = "5")]
	public Focusable GetNextFocusable(Focusable currentFocusable, FocusChangeDirection direction)
	{
		return null;
	}

	[Token(Token = "0x600280E")]
	[Address(RVA = "0x3168C10", Offset = "0x3167210", VA = "0x183168C10")]
	internal Focusable GetNextFocusableInSequence(Focusable currentFocusable, FocusChangeDirection direction)
	{
		return null;
	}

	[Token(Token = "0x600280F")]
	[Address(RVA = "0x31693A0", Offset = "0x31679A0", VA = "0x1831693A0")]
	internal VisualElement GetNextFocusableInTree(VisualElement currentFocusable)
	{
		return null;
	}

	[Token(Token = "0x6002810")]
	[Address(RVA = "0x31696C0", Offset = "0x3167CC0", VA = "0x1831696C0")]
	internal VisualElement GetPreviousFocusableInTree(VisualElement currentFocusable)
	{
		return null;
	}

	[Token(Token = "0x6002811")]
	[Address(RVA = "0x3168BB0", Offset = "0x31671B0", VA = "0x183168BB0")]
	private VisualElement GetNextElementDepthFirst(VisualElement ve)
	{
		return null;
	}

	[Token(Token = "0x6002812")]
	[Address(RVA = "0x3169610", Offset = "0x3167C10", VA = "0x183169610")]
	private VisualElement GetPreviousElementDepthFirst(VisualElement ve)
	{
		return null;
	}
}
