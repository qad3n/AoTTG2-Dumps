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

[Token(Token = "0x2000208")]
internal class NavigateFocusRing : IFocusRing
{
	[Token(Token = "0x2000209")]
	public class ChangeDirection : FocusChangeDirection
	{
		[Token(Token = "0x6000D4F")]
		[Address(RVA = "0x5041AE0", Offset = "0x5041AE0", VA = "0x5041AE0")]
		public ChangeDirection(int i)
		{
		}
	}

	[Token(Token = "0x200020A")]
	private struct FocusableHierarchyTraversal
	{
		[Token(Token = "0x400073D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public VisualElement currentFocusable;

		[Token(Token = "0x400073E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public Rect validRect;

		[Token(Token = "0x400073F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public bool firstPass;

		[Token(Token = "0x4000740")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ChangeDirection direction;

		[Token(Token = "0x6000D50")]
		[Address(RVA = "0x5041B30", Offset = "0x5041B30", VA = "0x5041B30")]
		private bool ValidateHierarchyTraversal(VisualElement v)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D51")]
		[Address(RVA = "0x5041C20", Offset = "0x5041C20", VA = "0x5041C20")]
		private bool ValidateElement(VisualElement v)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D52")]
		[Address(RVA = "0x5041D20", Offset = "0x5041D20", VA = "0x5041D20")]
		private int Order(VisualElement a, VisualElement b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D53")]
		[Address(RVA = "0x50421F0", Offset = "0x50421F0", VA = "0x50421F0")]
		private int StrictOrder(VisualElement a, VisualElement b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D54")]
		[Address(RVA = "0x5041E70", Offset = "0x5041E70", VA = "0x5041E70")]
		private int StrictOrder(Rect ra, Rect rb)
		{
			return default(int);
		}

		[Token(Token = "0x6000D55")]
		[Address(RVA = "0x50420F0", Offset = "0x50420F0", VA = "0x50420F0")]
		private int TieBreaker(Rect ra, Rect rb)
		{
			return default(int);
		}

		[Token(Token = "0x6000D56")]
		[Address(RVA = "0x5041440", Offset = "0x5041440", VA = "0x5041440")]
		public VisualElement GetBestOverall(VisualElement candidate, [Optional] VisualElement bestSoFar)
		{
			return null;
		}
	}

	[Token(Token = "0x4000735")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly ChangeDirection Left;

	[Token(Token = "0x4000736")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly ChangeDirection Right;

	[Token(Token = "0x4000737")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly ChangeDirection Up;

	[Token(Token = "0x4000738")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static readonly ChangeDirection Down;

	[Token(Token = "0x4000739")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static readonly FocusChangeDirection Next;

	[Token(Token = "0x400073A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static readonly FocusChangeDirection Previous;

	[Token(Token = "0x400073B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly VisualElement m_Root;

	[Token(Token = "0x400073C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly VisualElementFocusRing m_Ring;

	[Token(Token = "0x17000275")]
	private FocusController focusController
	{
		[Token(Token = "0x6000D47")]
		[Address(RVA = "0x5040730", Offset = "0x5040730", VA = "0x5040730")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D48")]
	[Address(RVA = "0x5040760", Offset = "0x5040760", VA = "0x5040760")]
	public NavigateFocusRing(VisualElement root)
	{
	}

	[Token(Token = "0x6000D49")]
	[Address(RVA = "0x50407E0", Offset = "0x50407E0", VA = "0x50407E0", Slot = "4")]
	public FocusChangeDirection GetFocusChangeDirection(Focusable currentFocusable, EventBase e)
	{
		return null;
	}

	[Token(Token = "0x6000D4A")]
	[Address(RVA = "0x5040B20", Offset = "0x5040B20", VA = "0x5040B20", Slot = "6")]
	public virtual Focusable GetNextFocusable(Focusable currentFocusable, FocusChangeDirection direction)
	{
		return null;
	}

	[Token(Token = "0x6000D4B")]
	[Address(RVA = "0x5040CD0", Offset = "0x5040CD0", VA = "0x5040CD0")]
	private Focusable GetNextFocusable2D(Focusable currentFocusable, ChangeDirection direction)
	{
		return null;
	}

	[Token(Token = "0x6000D4C")]
	[Address(RVA = "0x50416C0", Offset = "0x50416C0", VA = "0x50416C0")]
	private static bool IsActive(VisualElement v)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D4D")]
	[Address(RVA = "0x50417A0", Offset = "0x50417A0", VA = "0x50417A0")]
	private static bool IsNavigable(Focusable focusable)
	{
		return default(bool);
	}
}
