using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x2000092")]
public static class TMPro_EventManager
{
	[Token(Token = "0x400051C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly FastAction<object, Compute_DT_EventArgs> COMPUTE_DT_EVENT;

	[Token(Token = "0x400051D")]
	[FieldOffset(Offset = "0x8")]
	public static readonly FastAction<bool, Material> MATERIAL_PROPERTY_EVENT;

	[Token(Token = "0x400051E")]
	[FieldOffset(Offset = "0x10")]
	public static readonly FastAction<bool, Object> FONT_PROPERTY_EVENT;

	[Token(Token = "0x400051F")]
	[FieldOffset(Offset = "0x18")]
	public static readonly FastAction<bool, Object> SPRITE_ASSET_PROPERTY_EVENT;

	[Token(Token = "0x4000520")]
	[FieldOffset(Offset = "0x20")]
	public static readonly FastAction<bool, Object> TEXTMESHPRO_PROPERTY_EVENT;

	[Token(Token = "0x4000521")]
	[FieldOffset(Offset = "0x28")]
	public static readonly FastAction<GameObject, Material, Material> DRAG_AND_DROP_MATERIAL_EVENT;

	[Token(Token = "0x4000522")]
	[FieldOffset(Offset = "0x30")]
	public static readonly FastAction<bool> TEXT_STYLE_PROPERTY_EVENT;

	[Token(Token = "0x4000523")]
	[FieldOffset(Offset = "0x38")]
	public static readonly FastAction<Object> COLOR_GRADIENT_PROPERTY_EVENT;

	[Token(Token = "0x4000524")]
	[FieldOffset(Offset = "0x40")]
	public static readonly FastAction TMP_SETTINGS_PROPERTY_EVENT;

	[Token(Token = "0x4000525")]
	[FieldOffset(Offset = "0x48")]
	public static readonly FastAction RESOURCE_LOAD_EVENT;

	[Token(Token = "0x4000526")]
	[FieldOffset(Offset = "0x50")]
	public static readonly FastAction<bool, Object> TEXTMESHPRO_UGUI_PROPERTY_EVENT;

	[Token(Token = "0x4000527")]
	[FieldOffset(Offset = "0x58")]
	public static readonly FastAction<Object> TEXT_CHANGED_EVENT;

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x4965E30", Offset = "0x4965E30", VA = "0x4965E30")]
	public static void ON_MATERIAL_PROPERTY_CHANGED(bool isChanged, Material mat)
	{
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x4965ED0", Offset = "0x4965ED0", VA = "0x4965ED0")]
	public static void ON_FONT_PROPERTY_CHANGED(bool isChanged, Object obj)
	{
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x4965F70", Offset = "0x4965F70", VA = "0x4965F70")]
	public static void ON_SPRITE_ASSET_PROPERTY_CHANGED(bool isChanged, Object obj)
	{
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x4966010", Offset = "0x4966010", VA = "0x4966010")]
	public static void ON_TEXTMESHPRO_PROPERTY_CHANGED(bool isChanged, Object obj)
	{
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x49660B0", Offset = "0x49660B0", VA = "0x49660B0")]
	public static void ON_DRAG_AND_DROP_MATERIAL_CHANGED(GameObject sender, Material currentMaterial, Material newMaterial)
	{
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x4966160", Offset = "0x4966160", VA = "0x4966160")]
	public static void ON_TEXT_STYLE_PROPERTY_CHANGED(bool isChanged)
	{
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x4966200", Offset = "0x4966200", VA = "0x4966200")]
	public static void ON_COLOR_GRADIENT_PROPERTY_CHANGED(Object obj)
	{
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x49662A0", Offset = "0x49662A0", VA = "0x49662A0")]
	public static void ON_TEXT_CHANGED(Object obj)
	{
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x4966340", Offset = "0x4966340", VA = "0x4966340")]
	public static void ON_TMP_SETTINGS_CHANGED()
	{
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x49663C0", Offset = "0x49663C0", VA = "0x49663C0")]
	public static void ON_RESOURCES_LOADED()
	{
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x4966440", Offset = "0x4966440", VA = "0x4966440")]
	public static void ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED(bool isChanged, Object obj)
	{
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x49664E0", Offset = "0x49664E0", VA = "0x49664E0")]
	public static void ON_COMPUTE_DT_EVENT(object Sender, Compute_DT_EventArgs e)
	{
	}
}
