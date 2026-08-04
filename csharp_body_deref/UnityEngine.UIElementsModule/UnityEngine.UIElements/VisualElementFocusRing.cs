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
		[Address(RVA = "0x4F77470", Offset = "0x4F77470", VA = "0x4F77470")]
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
		[Address(RVA = "0x4F767F0", Offset = "0x4F767F0", VA = "0x4F767F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700074B")]
	public DefaultFocusOrder defaultFocusOrder
	{
		[Token(Token = "0x6001BA1")]
		[Address(RVA = "0x4F76820", Offset = "0x4F76820", VA = "0x4F76820")]
		[CompilerGenerated]
		get
		{
			return default(DefaultFocusOrder);
		}
		[Token(Token = "0x6001BA2")]
		[Address(RVA = "0x4F76830", Offset = "0x4F76830", VA = "0x4F76830")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001B9F")]
	[Address(RVA = "0x4F76760", Offset = "0x4F76760", VA = "0x4F76760")]
	public VisualElementFocusRing(VisualElement root, DefaultFocusOrder dfo = DefaultFocusOrder.ChildOrder)
	{
	}

	[Token(Token = "0x6001BA3")]
	[Address(RVA = "0x4F76840", Offset = "0x4F76840", VA = "0x4F76840")]
	private int FocusRingAutoIndexSort(FocusRingRecord a, FocusRingRecord b)
	{
		return default(int);
	}

	[Token(Token = "0x6001BA4")]
	[Address(RVA = "0x4F76BC0", Offset = "0x4F76BC0", VA = "0x4F76BC0")]
	private int FocusRingSort(FocusRingRecord a, FocusRingRecord b)
	{
		return default(int);
	}

	[Token(Token = "0x6001BA5")]
	[Address(RVA = "0x4F76CC0", Offset = "0x4F76CC0", VA = "0x4F76CC0")]
	private void DoUpdate()
	{
	}

	[Token(Token = "0x6001BA6")]
	[Address(RVA = "0x4F76D90", Offset = "0x4F76D90", VA = "0x4F76D90")]
	private void BuildRingForScopeRecursive(VisualElement ve, ref int scopeIndex, List<FocusRingRecord> scopeList)
	{
	}

	[Token(Token = "0x6001BA7")]
	[Address(RVA = "0x4F77120", Offset = "0x4F77120", VA = "0x4F77120")]
	private void SortAndFlattenScopeLists(List<FocusRingRecord> rootScopeList)
	{
	}

	[Token(Token = "0x6001BA8")]
	[Address(RVA = "0x4F77480", Offset = "0x4F77480", VA = "0x4F77480")]
	private int GetFocusableInternalIndex(Focusable f)
	{
		return default(int);
	}

	[Token(Token = "0x6001BA9")]
	[Address(RVA = "0x4F77520", Offset = "0x4F77520", VA = "0x4F77520", Slot = "4")]
	public FocusChangeDirection GetFocusChangeDirection(Focusable currentFocusable, EventBase e)
	{
		return null;
	}

	[Token(Token = "0x6001BAA")]
	[Address(RVA = "0x4F778B0", Offset = "0x4F778B0", VA = "0x4F778B0", Slot = "5")]
	public Focusable GetNextFocusable(Focusable currentFocusable, FocusChangeDirection direction)
	{
		return null;
	}

	[Token(Token = "0x6001BAB")]
	[Address(RVA = "0x4F77F10", Offset = "0x4F77F10", VA = "0x4F77F10")]
	internal static Focusable GetNextFocusableInTree(VisualElement currentFocusable)
	{
		return null;
	}

	[Token(Token = "0x6001BAC")]
	[Address(RVA = "0x4F77FB0", Offset = "0x4F77FB0", VA = "0x4F77FB0")]
	internal static Focusable GetPreviousFocusableInTree(VisualElement currentFocusable)
	{
		return null;
	}
}
