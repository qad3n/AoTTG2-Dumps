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
	[Address(RVA = "0x2D69430", Offset = "0x2D67A30", VA = "0x182D69430")]
	public static void ON_MATERIAL_PROPERTY_CHANGED(bool isChanged, Material mat)
	{
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x2D693A0", Offset = "0x2D679A0", VA = "0x182D693A0")]
	public static void ON_FONT_PROPERTY_CHANGED(bool isChanged, Object obj)
	{
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x2D69520", Offset = "0x2D67B20", VA = "0x182D69520")]
	public static void ON_SPRITE_ASSET_PROPERTY_CHANGED(bool isChanged, Object obj)
	{
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x2D695B0", Offset = "0x2D67BB0", VA = "0x182D695B0")]
	public static void ON_TEXTMESHPRO_PROPERTY_CHANGED(bool isChanged, Object obj)
	{
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x2D69300", Offset = "0x2D67900", VA = "0x182D69300")]
	public static void ON_DRAG_AND_DROP_MATERIAL_CHANGED(GameObject sender, Material currentMaterial, Material newMaterial)
	{
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x2D69750", Offset = "0x2D67D50", VA = "0x182D69750")]
	public static void ON_TEXT_STYLE_PROPERTY_CHANGED(bool isChanged)
	{
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x2D691F0", Offset = "0x2D677F0", VA = "0x182D691F0")]
	public static void ON_COLOR_GRADIENT_PROPERTY_CHANGED(Object obj)
	{
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x2D696D0", Offset = "0x2D67CD0", VA = "0x182D696D0")]
	public static void ON_TEXT_CHANGED(Object obj)
	{
	}

	[Token(Token = "0x6000635")]
	[Address(RVA = "0x2D697D0", Offset = "0x2D67DD0", VA = "0x182D697D0")]
	public static void ON_TMP_SETTINGS_CHANGED()
	{
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x2D694C0", Offset = "0x2D67AC0", VA = "0x182D694C0")]
	public static void ON_RESOURCES_LOADED()
	{
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x2D69640", Offset = "0x2D67C40", VA = "0x182D69640")]
	public static void ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED(bool isChanged, Object obj)
	{
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x2D69270", Offset = "0x2D67870", VA = "0x182D69270")]
	public static void ON_COMPUTE_DT_EVENT(object Sender, Compute_DT_EventArgs e)
	{
	}
}
