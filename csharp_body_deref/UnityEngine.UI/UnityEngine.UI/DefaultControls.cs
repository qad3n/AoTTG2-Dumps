// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.DefaultControls
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x200000F")]
public static class DefaultControls
{
	[Token(Token = "0x2000010")]
	public interface IFactoryControls
	{
		[Token(Token = "0x600006C")]
		GameObject CreateGameObject(string name, params Type[] components);
	}

	[Token(Token = "0x2000011")]
	private class DefaultRuntimeFactory : IFactoryControls
	{
		[Token(Token = "0x4000036")]
		[FieldOffset(Offset = "0x0")]
		public static IFactoryControls Default;

		[Token(Token = "0x600006D")]
		[Address(RVA = "0x30698B0", Offset = "0x3067EB0", VA = "0x1830698B0", Slot = "4")]
		public GameObject CreateGameObject(string name, params Type[] components)
		{
			return null;
		}

		[Token(Token = "0x600006E")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public DefaultRuntimeFactory()
		{
		}
	}

	[Token(Token = "0x2000012")]
	public struct Resources
	{
		[Token(Token = "0x4000037")]
		[FieldOffset(Offset = "0x0")]
		public Sprite standard;

		[Token(Token = "0x4000038")]
		[FieldOffset(Offset = "0x8")]
		public Sprite background;

		[Token(Token = "0x4000039")]
		[FieldOffset(Offset = "0x10")]
		public Sprite inputField;

		[Token(Token = "0x400003A")]
		[FieldOffset(Offset = "0x18")]
		public Sprite knob;

		[Token(Token = "0x400003B")]
		[FieldOffset(Offset = "0x20")]
		public Sprite checkmark;

		[Token(Token = "0x400003C")]
		[FieldOffset(Offset = "0x28")]
		public Sprite dropdown;

		[Token(Token = "0x400003D")]
		[FieldOffset(Offset = "0x30")]
		public Sprite mask;
	}

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x0")]
	private static IFactoryControls m_CurrentFactory;

	[Token(Token = "0x400002D")]
	private const float kWidth = 160f;

	[Token(Token = "0x400002E")]
	private const float kThickHeight = 30f;

	[Token(Token = "0x400002F")]
	private const float kThinHeight = 20f;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x8")]
	private static Vector2 s_ThickElementSize;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x10")]
	private static Vector2 s_ThinElementSize;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x18")]
	private static Vector2 s_ImageElementSize;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x20")]
	private static Color s_DefaultSelectableColor;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x30")]
	private static Color s_PanelColor;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x40")]
	private static Color s_TextColor;

	[Token(Token = "0x17000015")]
	public static IFactoryControls factory
	{
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x3069860", Offset = "0x3067E60", VA = "0x183069860")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x3069230", Offset = "0x3067830", VA = "0x183069230")]
	private static GameObject CreateUIElementRoot(string name, Vector2 size, params Type[] components)
	{
		return null;
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x3069340", Offset = "0x3067940", VA = "0x183069340")]
	private static GameObject CreateUIObject(string name, GameObject parent, params Type[] components)
	{
		return null;
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x3069470", Offset = "0x3067A70", VA = "0x183069470")]
	private static void SetDefaultTextValues(Text lbl)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x3069420", Offset = "0x3067A20", VA = "0x183069420")]
	private static void SetDefaultColorTransitionValues(Selectable slider)
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x3069630", Offset = "0x3067C30", VA = "0x183069630")]
	private static void SetParentAndAlign(GameObject child, GameObject parent)
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x3069550", Offset = "0x3067B50", VA = "0x183069550")]
	private static void SetLayerRecursively(GameObject go, int layer)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x3066A70", Offset = "0x3065070", VA = "0x183066A70")]
	public static GameObject CreatePanel(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x30644B0", Offset = "0x3062AB0", VA = "0x1830644B0")]
	public static GameObject CreateButton(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x3068950", Offset = "0x3066F50", VA = "0x183068950")]
	public static GameObject CreateText(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x3066170", Offset = "0x3064770", VA = "0x183066170")]
	public static GameObject CreateImage(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x3066DA0", Offset = "0x30653A0", VA = "0x183066DA0")]
	public static GameObject CreateRawImage(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x3068000", Offset = "0x3066600", VA = "0x183068000")]
	public static GameObject CreateSlider(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x3067A00", Offset = "0x3066000", VA = "0x183067A00")]
	public static GameObject CreateScrollbar(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x3068B00", Offset = "0x3067100", VA = "0x183068B00")]
	public static GameObject CreateToggle(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x30662B0", Offset = "0x30648B0", VA = "0x1830662B0")]
	public static GameObject CreateInputField(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x3064990", Offset = "0x3062F90", VA = "0x183064990")]
	public static GameObject CreateDropdown(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x3066EE0", Offset = "0x30654E0", VA = "0x183066EE0")]
	public static GameObject CreateScrollView(Resources resources)
	{
		return null;
	}
}
