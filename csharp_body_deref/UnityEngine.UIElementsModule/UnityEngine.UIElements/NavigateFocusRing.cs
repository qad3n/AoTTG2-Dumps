// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.NavigateFocusRing
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x3273780", Offset = "0x3271D80", VA = "0x183273780")]
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
		[Address(RVA = "0x3274870", Offset = "0x3272E70", VA = "0x183274870")]
		private bool ValidateHierarchyTraversal(VisualElement v)
		{
			return default(bool);
		}

		[Token(Token = "0x6001063")]
		[Address(RVA = "0x32745A0", Offset = "0x3272BA0", VA = "0x1832745A0")]
		private bool ValidateElement(VisualElement v)
		{
			return default(bool);
		}

		[Token(Token = "0x6001064")]
		[Address(RVA = "0x3273E30", Offset = "0x3272430", VA = "0x183273E30")]
		private int Order(VisualElement a, VisualElement b)
		{
			return default(int);
		}

		[Token(Token = "0x6001065")]
		[Address(RVA = "0x3273FD0", Offset = "0x32725D0", VA = "0x183273FD0")]
		private int StrictOrder(VisualElement a, VisualElement b)
		{
			return default(int);
		}

		[Token(Token = "0x6001066")]
		[Address(RVA = "0x3274150", Offset = "0x3272750", VA = "0x183274150")]
		private int StrictOrder(Rect ra, Rect rb)
		{
			return default(int);
		}

		[Token(Token = "0x6001067")]
		[Address(RVA = "0x3274380", Offset = "0x3272980", VA = "0x183274380")]
		private int TieBreaker(Rect ra, Rect rb)
		{
			return default(int);
		}

		[Token(Token = "0x6001068")]
		[Address(RVA = "0x3273D00", Offset = "0x3272300", VA = "0x183273D00")]
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
		[Address(RVA = "0x1A1F3C0", Offset = "0x1A1D9C0", VA = "0x181A1F3C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001059")]
	[Address(RVA = "0x3280DF0", Offset = "0x327F3F0", VA = "0x183280DF0")]
	public NavigateFocusRing(VisualElement root)
	{
	}

	[Token(Token = "0x600105A")]
	[Address(RVA = "0x327F8D0", Offset = "0x327DED0", VA = "0x18327F8D0", Slot = "4")]
	public FocusChangeDirection GetFocusChangeDirection(Focusable currentFocusable, EventBase e)
	{
		return null;
	}

	[Token(Token = "0x600105B")]
	[Address(RVA = "0x32804C0", Offset = "0x327EAC0", VA = "0x1832804C0", Slot = "6")]
	public virtual Focusable GetNextFocusable(Focusable currentFocusable, FocusChangeDirection direction)
	{
		return null;
	}

	[Token(Token = "0x600105C")]
	[Address(RVA = "0x32809E0", Offset = "0x327EFE0", VA = "0x1832809E0")]
	private bool IsWorldSpaceNavigationValid(Focusable currentFocusable, out UIDocument document)
	{
		return default(bool);
	}

	[Token(Token = "0x600105D")]
	[Address(RVA = "0x327FC80", Offset = "0x327E280", VA = "0x18327FC80")]
	private Focusable GetNextFocusable2D(Focusable currentFocusable, ChangeDirection direction, VisualElement root)
	{
		return null;
	}

	[Token(Token = "0x600105E")]
	[Address(RVA = "0x3280910", Offset = "0x327EF10", VA = "0x183280910")]
	private static bool IsActive(VisualElement v)
	{
		return default(bool);
	}

	[Token(Token = "0x600105F")]
	[Address(RVA = "0x3280980", Offset = "0x327EF80", VA = "0x183280980")]
	private static bool IsNavigable(Focusable focusable)
	{
		return default(bool);
	}
}
