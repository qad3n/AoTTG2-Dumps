// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_DefaultControls
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace TMPro;

[Token(Token = "0x2000034")]
public static class TMP_DefaultControls
{
	[Token(Token = "0x2000035")]
	public struct Resources
	{
		[Token(Token = "0x4000181")]
		[FieldOffset(Offset = "0x0")]
		public Sprite standard;

		[Token(Token = "0x4000182")]
		[FieldOffset(Offset = "0x8")]
		public Sprite background;

		[Token(Token = "0x4000183")]
		[FieldOffset(Offset = "0x10")]
		public Sprite inputField;

		[Token(Token = "0x4000184")]
		[FieldOffset(Offset = "0x18")]
		public Sprite knob;

		[Token(Token = "0x4000185")]
		[FieldOffset(Offset = "0x20")]
		public Sprite checkmark;

		[Token(Token = "0x4000186")]
		[FieldOffset(Offset = "0x28")]
		public Sprite dropdown;

		[Token(Token = "0x4000187")]
		[FieldOffset(Offset = "0x30")]
		public Sprite mask;
	}

	[Token(Token = "0x4000179")]
	private const float kWidth = 160f;

	[Token(Token = "0x400017A")]
	private const float kThickHeight = 30f;

	[Token(Token = "0x400017B")]
	private const float kThinHeight = 20f;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x0")]
	private static Vector2 s_TextElementSize;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x8")]
	private static Vector2 s_ThickElementSize;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x10")]
	private static Vector2 s_ThinElementSize;

	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0x18")]
	private static Color s_DefaultSelectableColor;

	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0x28")]
	private static Color s_TextColor;

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x4C45A50", Offset = "0x4C45A50", VA = "0x4C45A50")]
	private static GameObject CreateUIElementRoot(string name, Vector2 size)
	{
		return null;
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x4C45AE0", Offset = "0x4C45AE0", VA = "0x4C45AE0")]
	private static GameObject CreateUIObject(string name, GameObject parent)
	{
		return null;
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x4C45C60", Offset = "0x4C45C60", VA = "0x4C45C60")]
	private static void SetDefaultTextValues(TMP_Text lbl)
	{
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x4C45D00", Offset = "0x4C45D00", VA = "0x4C45D00")]
	private static void SetDefaultColorTransitionValues(Selectable slider)
	{
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x4C45B90", Offset = "0x4C45B90", VA = "0x4C45B90")]
	private static void SetParentAndAlign(GameObject child, GameObject parent)
	{
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x4C45D50", Offset = "0x4C45D50", VA = "0x4C45D50")]
	private static void SetLayerRecursively(GameObject go, int layer)
	{
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x4C45E20", Offset = "0x4C45E20", VA = "0x4C45E20")]
	public static GameObject CreateScrollbar(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x4C46130", Offset = "0x4C46130", VA = "0x4C46130")]
	public static GameObject CreateButton(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x4C46480", Offset = "0x4C46480", VA = "0x4C46480")]
	public static GameObject CreateText(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x4C46510", Offset = "0x4C46510", VA = "0x4C46510")]
	public static GameObject CreateInputField(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x4C46E50", Offset = "0x4C46E50", VA = "0x4C46E50")]
	public static GameObject CreateDropdown(Resources resources)
	{
		return null;
	}
}
