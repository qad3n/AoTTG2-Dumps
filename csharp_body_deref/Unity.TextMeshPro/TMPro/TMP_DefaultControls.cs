// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_DefaultControls
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace TMPro;

[Token(Token = "0x2000025")]
public static class TMP_DefaultControls
{
	[Token(Token = "0x2000026")]
	public struct Resources
	{
		[Token(Token = "0x400009E")]
		[FieldOffset(Offset = "0x0")]
		public Sprite standard;

		[Token(Token = "0x400009F")]
		[FieldOffset(Offset = "0x8")]
		public Sprite background;

		[Token(Token = "0x40000A0")]
		[FieldOffset(Offset = "0x10")]
		public Sprite inputField;

		[Token(Token = "0x40000A1")]
		[FieldOffset(Offset = "0x18")]
		public Sprite knob;

		[Token(Token = "0x40000A2")]
		[FieldOffset(Offset = "0x20")]
		public Sprite checkmark;

		[Token(Token = "0x40000A3")]
		[FieldOffset(Offset = "0x28")]
		public Sprite dropdown;

		[Token(Token = "0x40000A4")]
		[FieldOffset(Offset = "0x30")]
		public Sprite mask;
	}

	[Token(Token = "0x4000096")]
	private const float kWidth = 160f;

	[Token(Token = "0x4000097")]
	private const float kThickHeight = 30f;

	[Token(Token = "0x4000098")]
	private const float kThinHeight = 20f;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x0")]
	private static Vector2 s_TextElementSize;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x8")]
	private static Vector2 s_ThickElementSize;

	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x10")]
	private static Vector2 s_ThinElementSize;

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x18")]
	private static Color s_DefaultSelectableColor;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x28")]
	private static Color s_TextColor;

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x2CE21A0", Offset = "0x2CE07A0", VA = "0x182CE21A0")]
	private static GameObject CreateUIElementRoot(string name, Vector2 size)
	{
		return null;
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x2CE2240", Offset = "0x2CE0840", VA = "0x182CE2240")]
	private static GameObject CreateUIObject(string name, GameObject parent)
	{
		return null;
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x2CE2350", Offset = "0x2CE0950", VA = "0x182CE2350")]
	private static void SetDefaultTextValues(TMP_Text lbl)
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x2CE2300", Offset = "0x2CE0900", VA = "0x182CE2300")]
	private static void SetDefaultColorTransitionValues(Selectable slider)
	{
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x2CE24C0", Offset = "0x2CE0AC0", VA = "0x182CE24C0")]
	private static void SetParentAndAlign(GameObject child, GameObject parent)
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x2CE23E0", Offset = "0x2CE09E0", VA = "0x182CE23E0")]
	private static void SetLayerRecursively(GameObject go, int layer)
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x2CE1DD0", Offset = "0x2CE03D0", VA = "0x182CE1DD0")]
	public static GameObject CreateScrollbar(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x2CE0030", Offset = "0x2CDE630", VA = "0x182CE0030")]
	public static GameObject CreateButton(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x2CE2100", Offset = "0x2CE0700", VA = "0x182CE2100")]
	public static GameObject CreateText(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x2CE1610", Offset = "0x2CDFC10", VA = "0x182CE1610")]
	public static GameObject CreateInputField(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x2CE03C0", Offset = "0x2CDE9C0", VA = "0x182CE03C0")]
	public static GameObject CreateDropdown(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x60000BA")]
	private static T AddComponent<T>(GameObject go) where T : Component
	{
		return null;
	}
}
