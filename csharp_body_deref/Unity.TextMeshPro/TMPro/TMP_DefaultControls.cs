using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace TMPro;

[Token(Token = "0x200001E")]
public static class TMP_DefaultControls
{
	[Token(Token = "0x200001F")]
	public struct Resources
	{
		[Token(Token = "0x400008D")]
		[FieldOffset(Offset = "0x0")]
		public Sprite standard;

		[Token(Token = "0x400008E")]
		[FieldOffset(Offset = "0x8")]
		public Sprite background;

		[Token(Token = "0x400008F")]
		[FieldOffset(Offset = "0x10")]
		public Sprite inputField;

		[Token(Token = "0x4000090")]
		[FieldOffset(Offset = "0x18")]
		public Sprite knob;

		[Token(Token = "0x4000091")]
		[FieldOffset(Offset = "0x20")]
		public Sprite checkmark;

		[Token(Token = "0x4000092")]
		[FieldOffset(Offset = "0x28")]
		public Sprite dropdown;

		[Token(Token = "0x4000093")]
		[FieldOffset(Offset = "0x30")]
		public Sprite mask;
	}

	[Token(Token = "0x4000085")]
	private const float kWidth = 160f;

	[Token(Token = "0x4000086")]
	private const float kThickHeight = 30f;

	[Token(Token = "0x4000087")]
	private const float kThinHeight = 20f;

	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x0")]
	private static Vector2 s_TextElementSize;

	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x8")]
	private static Vector2 s_ThickElementSize;

	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x10")]
	private static Vector2 s_ThinElementSize;

	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0x18")]
	private static Color s_DefaultSelectableColor;

	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x28")]
	private static Color s_TextColor;

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x48F84D0", Offset = "0x48F84D0", VA = "0x48F84D0")]
	private static GameObject CreateUIElementRoot(string name, Vector2 size)
	{
		return null;
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x48F8560", Offset = "0x48F8560", VA = "0x48F8560")]
	private static GameObject CreateUIObject(string name, GameObject parent)
	{
		return null;
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x48F86E0", Offset = "0x48F86E0", VA = "0x48F86E0")]
	private static void SetDefaultTextValues(TMP_Text lbl)
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x48F8780", Offset = "0x48F8780", VA = "0x48F8780")]
	private static void SetDefaultColorTransitionValues(Selectable slider)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x48F8610", Offset = "0x48F8610", VA = "0x48F8610")]
	private static void SetParentAndAlign(GameObject child, GameObject parent)
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x48F87D0", Offset = "0x48F87D0", VA = "0x48F87D0")]
	private static void SetLayerRecursively(GameObject go, int layer)
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x48F88A0", Offset = "0x48F88A0", VA = "0x48F88A0")]
	public static GameObject CreateScrollbar(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x48F8BB0", Offset = "0x48F8BB0", VA = "0x48F8BB0")]
	public static GameObject CreateButton(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x48F8F00", Offset = "0x48F8F00", VA = "0x48F8F00")]
	public static GameObject CreateText(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x48F8F90", Offset = "0x48F8F90", VA = "0x48F8F90")]
	public static GameObject CreateInputField(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x48F98D0", Offset = "0x48F98D0", VA = "0x48F98D0")]
	public static GameObject CreateDropdown(Resources resources)
	{
		return null;
	}
}
