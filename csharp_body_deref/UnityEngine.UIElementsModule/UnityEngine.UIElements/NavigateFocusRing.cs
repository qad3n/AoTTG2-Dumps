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
		[Address(RVA = "0x4D1A1B0", Offset = "0x4D1A1B0", VA = "0x4D1A1B0")]
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
		[Address(RVA = "0x4D1A200", Offset = "0x4D1A200", VA = "0x4D1A200")]
		private bool ValidateHierarchyTraversal(VisualElement v)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D51")]
		[Address(RVA = "0x4D1A2F0", Offset = "0x4D1A2F0", VA = "0x4D1A2F0")]
		private bool ValidateElement(VisualElement v)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D52")]
		[Address(RVA = "0x4D1A3F0", Offset = "0x4D1A3F0", VA = "0x4D1A3F0")]
		private int Order(VisualElement a, VisualElement b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D53")]
		[Address(RVA = "0x4D1A8C0", Offset = "0x4D1A8C0", VA = "0x4D1A8C0")]
		private int StrictOrder(VisualElement a, VisualElement b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D54")]
		[Address(RVA = "0x4D1A540", Offset = "0x4D1A540", VA = "0x4D1A540")]
		private int StrictOrder(Rect ra, Rect rb)
		{
			return default(int);
		}

		[Token(Token = "0x6000D55")]
		[Address(RVA = "0x4D1A7C0", Offset = "0x4D1A7C0", VA = "0x4D1A7C0")]
		private int TieBreaker(Rect ra, Rect rb)
		{
			return default(int);
		}

		[Token(Token = "0x6000D56")]
		[Address(RVA = "0x4D19B10", Offset = "0x4D19B10", VA = "0x4D19B10")]
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
		[Address(RVA = "0x4D18E00", Offset = "0x4D18E00", VA = "0x4D18E00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D48")]
	[Address(RVA = "0x4D18E30", Offset = "0x4D18E30", VA = "0x4D18E30")]
	public NavigateFocusRing(VisualElement root)
	{
	}

	[Token(Token = "0x6000D49")]
	[Address(RVA = "0x4D18EB0", Offset = "0x4D18EB0", VA = "0x4D18EB0", Slot = "4")]
	public FocusChangeDirection GetFocusChangeDirection(Focusable currentFocusable, EventBase e)
	{
		return null;
	}

	[Token(Token = "0x6000D4A")]
	[Address(RVA = "0x4D191F0", Offset = "0x4D191F0", VA = "0x4D191F0", Slot = "6")]
	public virtual Focusable GetNextFocusable(Focusable currentFocusable, FocusChangeDirection direction)
	{
		return null;
	}

	[Token(Token = "0x6000D4B")]
	[Address(RVA = "0x4D193A0", Offset = "0x4D193A0", VA = "0x4D193A0")]
	private Focusable GetNextFocusable2D(Focusable currentFocusable, ChangeDirection direction)
	{
		return null;
	}

	[Token(Token = "0x6000D4C")]
	[Address(RVA = "0x4D19D90", Offset = "0x4D19D90", VA = "0x4D19D90")]
	private static bool IsActive(VisualElement v)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D4D")]
	[Address(RVA = "0x4D19E70", Offset = "0x4D19E70", VA = "0x4D19E70")]
	private static bool IsNavigable(Focusable focusable)
	{
		return default(bool);
	}
}
