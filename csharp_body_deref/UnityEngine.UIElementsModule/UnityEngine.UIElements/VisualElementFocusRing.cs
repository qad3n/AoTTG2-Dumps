using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000471")]
public class VisualElementFocusRing : IFocusRing
{
	[Token(Token = "0x2000472")]
	public enum DefaultFocusOrder
	{
		[Token(Token = "0x4000D5A")]
		ChildOrder,
		[Token(Token = "0x4000D5B")]
		PositionXY,
		[Token(Token = "0x4000D5C")]
		PositionYX
	}

	[Token(Token = "0x2000473")]
	private class FocusRingRecord
	{
		[Token(Token = "0x4000D5D")]
		[FieldOffset(Offset = "0x10")]
		public int m_AutoIndex;

		[Token(Token = "0x4000D5E")]
		[FieldOffset(Offset = "0x18")]
		public Focusable m_Focusable;

		[Token(Token = "0x4000D5F")]
		[FieldOffset(Offset = "0x20")]
		public bool m_IsSlot;

		[Token(Token = "0x4000D60")]
		[FieldOffset(Offset = "0x28")]
		public List<FocusRingRecord> m_ScopeNavigationOrder;

		[Token(Token = "0x6001BAD")]
		[Address(RVA = "0x4C4FB40", Offset = "0x4C4FB40", VA = "0x4C4FB40")]
		public FocusRingRecord()
		{
		}
	}

	[Token(Token = "0x4000D56")]
	[FieldOffset(Offset = "0x10")]
	private readonly VisualElement root;

	[Token(Token = "0x4000D58")]
	[FieldOffset(Offset = "0x20")]
	private List<FocusRingRecord> m_FocusRing;

	[Token(Token = "0x1700074A")]
	private FocusController focusController
	{
		[Token(Token = "0x6001BA0")]
		[Address(RVA = "0x4C4EEC0", Offset = "0x4C4EEC0", VA = "0x4C4EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700074B")]
	public DefaultFocusOrder defaultFocusOrder
	{
		[Token(Token = "0x6001BA1")]
		[Address(RVA = "0x4C4EEF0", Offset = "0x4C4EEF0", VA = "0x4C4EEF0")]
		[CompilerGenerated]
		get
		{
			return default(DefaultFocusOrder);
		}
		[Token(Token = "0x6001BA2")]
		[Address(RVA = "0x4C4EF00", Offset = "0x4C4EF00", VA = "0x4C4EF00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001B9F")]
	[Address(RVA = "0x4C4EE30", Offset = "0x4C4EE30", VA = "0x4C4EE30")]
	public VisualElementFocusRing(VisualElement root, DefaultFocusOrder dfo = DefaultFocusOrder.ChildOrder)
	{
	}

	[Token(Token = "0x6001BA3")]
	[Address(RVA = "0x4C4EF10", Offset = "0x4C4EF10", VA = "0x4C4EF10")]
	private int FocusRingAutoIndexSort(FocusRingRecord a, FocusRingRecord b)
	{
		return default(int);
	}

	[Token(Token = "0x6001BA4")]
	[Address(RVA = "0x4C4F290", Offset = "0x4C4F290", VA = "0x4C4F290")]
	private int FocusRingSort(FocusRingRecord a, FocusRingRecord b)
	{
		return default(int);
	}

	[Token(Token = "0x6001BA5")]
	[Address(RVA = "0x4C4F390", Offset = "0x4C4F390", VA = "0x4C4F390")]
	private void DoUpdate()
	{
	}

	[Token(Token = "0x6001BA6")]
	[Address(RVA = "0x4C4F460", Offset = "0x4C4F460", VA = "0x4C4F460")]
	private void BuildRingForScopeRecursive(VisualElement ve, ref int scopeIndex, List<FocusRingRecord> scopeList)
	{
	}

	[Token(Token = "0x6001BA7")]
	[Address(RVA = "0x4C4F7F0", Offset = "0x4C4F7F0", VA = "0x4C4F7F0")]
	private void SortAndFlattenScopeLists(List<FocusRingRecord> rootScopeList)
	{
	}

	[Token(Token = "0x6001BA8")]
	[Address(RVA = "0x4C4FB50", Offset = "0x4C4FB50", VA = "0x4C4FB50")]
	private int GetFocusableInternalIndex(Focusable f)
	{
		return default(int);
	}

	[Token(Token = "0x6001BA9")]
	[Address(RVA = "0x4C4FBF0", Offset = "0x4C4FBF0", VA = "0x4C4FBF0", Slot = "4")]
	public FocusChangeDirection GetFocusChangeDirection(Focusable currentFocusable, EventBase e)
	{
		return null;
	}

	[Token(Token = "0x6001BAA")]
	[Address(RVA = "0x4C4FF80", Offset = "0x4C4FF80", VA = "0x4C4FF80", Slot = "5")]
	public Focusable GetNextFocusable(Focusable currentFocusable, FocusChangeDirection direction)
	{
		return null;
	}

	[Token(Token = "0x6001BAB")]
	[Address(RVA = "0x4C505E0", Offset = "0x4C505E0", VA = "0x4C505E0")]
	internal static Focusable GetNextFocusableInTree(VisualElement currentFocusable)
	{
		return null;
	}

	[Token(Token = "0x6001BAC")]
	[Address(RVA = "0x4C50680", Offset = "0x4C50680", VA = "0x4C50680")]
	internal static Focusable GetPreviousFocusableInTree(VisualElement currentFocusable)
	{
		return null;
	}
}
