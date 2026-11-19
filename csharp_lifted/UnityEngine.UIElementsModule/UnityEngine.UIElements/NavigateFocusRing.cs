// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.NavigateFocusRing
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200026B")]
internal class NavigateFocusRing : IFocusRing
{
	[Token(Token = "0x200026C")]
	public class ChangeDirection : FocusChangeDirection
	{
		[Token(Token = "0x6001061")]
		[Address(RVA = "0x6C85150", Offset = "0x6C84150", VA = "0x6C85150")]
		public ChangeDirection(int i)
		{
		}
	}

	[Token(Token = "0x200026D")]
	private struct FocusableHierarchyTraversal
	{
		[Token(Token = "0x40008F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public VisualElement root;

		[Token(Token = "0x40008F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public VisualElement currentFocusable;

		[Token(Token = "0x40008FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public Rect validRect;

		[Token(Token = "0x40008FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool firstPass;

		[Token(Token = "0x40008FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public ChangeDirection direction;

		[Token(Token = "0x6001062")]
		[Address(RVA = "0x6C851A0", Offset = "0x6C841A0", VA = "0x6C851A0")]
		private bool ValidateHierarchyTraversal(VisualElement v)
		{
			return default(bool);
		}

		[Token(Token = "0x6001063")]
		[Address(RVA = "0x6C853A0", Offset = "0x6C843A0", VA = "0x6C853A0")]
		private bool ValidateElement(VisualElement v)
		{
			return default(bool);
		}

		[Token(Token = "0x6001064")]
		[Address(RVA = "0x6C85620", Offset = "0x6C84620", VA = "0x6C85620")]
		private int Order(VisualElement a, VisualElement b)
		{
			return default(int);
		}

		[Token(Token = "0x6001065")]
		[Address(RVA = "0x6C85BE0", Offset = "0x6C84BE0", VA = "0x6C85BE0")]
		private int StrictOrder(VisualElement a, VisualElement b)
		{
			return default(int);
		}

		[Token(Token = "0x6001066")]
		[Address(RVA = "0x6C85760", Offset = "0x6C84760", VA = "0x6C85760")]
		private int StrictOrder(Rect ra, Rect rb)
		{
			return default(int);
		}

		[Token(Token = "0x6001067")]
		[Address(RVA = "0x6C85A30", Offset = "0x6C84A30", VA = "0x6C85A30")]
		private int TieBreaker(Rect ra, Rect rb)
		{
			return default(int);
		}

		[Token(Token = "0x6001068")]
		[Address(RVA = "0x6C84C40", Offset = "0x6C83C40", VA = "0x6C84C40")]
		public VisualElement GetBestOverall(VisualElement candidate, [Optional] VisualElement bestSoFar)
		{
			return null;
		}
	}

	[Token(Token = "0x40008F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly ChangeDirection Left;

	[Token(Token = "0x40008F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly ChangeDirection Right;

	[Token(Token = "0x40008F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly ChangeDirection Up;

	[Token(Token = "0x40008F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static readonly ChangeDirection Down;

	[Token(Token = "0x40008F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static readonly FocusChangeDirection Next;

	[Token(Token = "0x40008F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static readonly FocusChangeDirection Previous;

	[Token(Token = "0x40008F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly VisualElement m_Root;

	[Token(Token = "0x40008F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly VisualElementFocusRing m_Ring;

	[Token(Token = "0x17000337")]
	private FocusController focusController
	{
		[Token(Token = "0x6001058")]
		[Address(RVA = "0x6C83900", Offset = "0x6C82900", VA = "0x6C83900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001059")]
	[Address(RVA = "0x6C83930", Offset = "0x6C82930", VA = "0x6C83930")]
	public NavigateFocusRing(VisualElement root)
	{
	}

	[Token(Token = "0x600105A")]
	[Address(RVA = "0x6C839B0", Offset = "0x6C829B0", VA = "0x6C839B0", Slot = "4")]
	public FocusChangeDirection GetFocusChangeDirection(Focusable currentFocusable, EventBase e)
	{
		return null;
	}

	[Token(Token = "0x600105B")]
	[Address(RVA = "0x6C83CF0", Offset = "0x6C82CF0", VA = "0x6C83CF0", Slot = "6")]
	public virtual Focusable GetNextFocusable(Focusable currentFocusable, FocusChangeDirection direction)
	{
		return null;
	}

	[Token(Token = "0x600105C")]
	[Address(RVA = "0x6C840B0", Offset = "0x6C830B0", VA = "0x6C840B0")]
	private bool IsWorldSpaceNavigationValid(Focusable currentFocusable, out UIDocument document)
	{
		return default(bool);
	}

	[Token(Token = "0x600105D")]
	[Address(RVA = "0x6C841A0", Offset = "0x6C831A0", VA = "0x6C841A0")]
	private Focusable GetNextFocusable2D(Focusable currentFocusable, ChangeDirection direction, VisualElement root)
	{
		return null;
	}

	[Token(Token = "0x600105E")]
	[Address(RVA = "0x6C84D20", Offset = "0x6C83D20", VA = "0x6C84D20")]
	private static bool IsActive(VisualElement v)
	{
		return default(bool);
	}

	[Token(Token = "0x600105F")]
	[Address(RVA = "0x6C84E00", Offset = "0x6C83E00", VA = "0x6C84E00")]
	private static bool IsNavigable(Focusable focusable)
	{
		return default(bool);
	}
}
