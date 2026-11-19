// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMPro_EventManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x20000A4")]
public static class TMPro_EventManager
{
	[Token(Token = "0x400059D")]
	[FieldOffset(Offset = "0x0")]
	public static readonly FastAction<object, Compute_DT_EventArgs> COMPUTE_DT_EVENT;

	[Token(Token = "0x400059E")]
	[FieldOffset(Offset = "0x8")]
	public static readonly FastAction<bool, Material> MATERIAL_PROPERTY_EVENT;

	[Token(Token = "0x400059F")]
	[FieldOffset(Offset = "0x10")]
	public static readonly FastAction<bool, Object> FONT_PROPERTY_EVENT;

	[Token(Token = "0x40005A0")]
	[FieldOffset(Offset = "0x18")]
	public static readonly FastAction<bool, Object> SPRITE_ASSET_PROPERTY_EVENT;

	[Token(Token = "0x40005A1")]
	[FieldOffset(Offset = "0x20")]
	public static readonly FastAction<bool, Object> TEXTMESHPRO_PROPERTY_EVENT;

	[Token(Token = "0x40005A2")]
	[FieldOffset(Offset = "0x28")]
	public static readonly FastAction<GameObject, Material, Material> DRAG_AND_DROP_MATERIAL_EVENT;

	[Token(Token = "0x40005A3")]
	[FieldOffset(Offset = "0x30")]
	public static readonly FastAction<bool> TEXT_STYLE_PROPERTY_EVENT;

	[Token(Token = "0x40005A4")]
	[FieldOffset(Offset = "0x38")]
	public static readonly FastAction<Object> COLOR_GRADIENT_PROPERTY_EVENT;

	[Token(Token = "0x40005A5")]
	[FieldOffset(Offset = "0x40")]
	public static readonly FastAction TMP_SETTINGS_PROPERTY_EVENT;

	[Token(Token = "0x40005A6")]
	[FieldOffset(Offset = "0x48")]
	public static readonly FastAction RESOURCE_LOAD_EVENT;

	[Token(Token = "0x40005A7")]
	[FieldOffset(Offset = "0x50")]
	public static readonly FastAction<bool, Object> TEXTMESHPRO_UGUI_PROPERTY_EVENT;

	[Token(Token = "0x40005A8")]
	[FieldOffset(Offset = "0x58")]
	public static readonly FastAction<Object> TEXT_CHANGED_EVENT;

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x675F240", Offset = "0x675E240", VA = "0x675F240")]
	public static void ON_MATERIAL_PROPERTY_CHANGED(bool isChanged, Material mat)
	{
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x675F2E0", Offset = "0x675E2E0", VA = "0x675F2E0")]
	public static void ON_FONT_PROPERTY_CHANGED(bool isChanged, Object obj)
	{
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x675F380", Offset = "0x675E380", VA = "0x675F380")]
	public static void ON_SPRITE_ASSET_PROPERTY_CHANGED(bool isChanged, Object obj)
	{
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x675F420", Offset = "0x675E420", VA = "0x675F420")]
	public static void ON_TEXTMESHPRO_PROPERTY_CHANGED(bool isChanged, Object obj)
	{
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x675F4C0", Offset = "0x675E4C0", VA = "0x675F4C0")]
	public static void ON_DRAG_AND_DROP_MATERIAL_CHANGED(GameObject sender, Material currentMaterial, Material newMaterial)
	{
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x675F570", Offset = "0x675E570", VA = "0x675F570")]
	public static void ON_TEXT_STYLE_PROPERTY_CHANGED(bool isChanged)
	{
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x675F610", Offset = "0x675E610", VA = "0x675F610")]
	public static void ON_COLOR_GRADIENT_PROPERTY_CHANGED(Object obj)
	{
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x675F6B0", Offset = "0x675E6B0", VA = "0x675F6B0")]
	public static void ON_TEXT_CHANGED(Object obj)
	{
	}

	[Token(Token = "0x6000635")]
	[Address(RVA = "0x675F750", Offset = "0x675E750", VA = "0x675F750")]
	public static void ON_TMP_SETTINGS_CHANGED()
	{
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x675F7D0", Offset = "0x675E7D0", VA = "0x675F7D0")]
	public static void ON_RESOURCES_LOADED()
	{
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x675F850", Offset = "0x675E850", VA = "0x675F850")]
	public static void ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED(bool isChanged, Object obj)
	{
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x675F8F0", Offset = "0x675E8F0", VA = "0x675F8F0")]
	public static void ON_COMPUTE_DT_EVENT(object Sender, Compute_DT_EventArgs e)
	{
	}
}
