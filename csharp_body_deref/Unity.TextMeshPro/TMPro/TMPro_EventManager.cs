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

[Token(Token = "0x2000013")]
public static class TMPro_EventManager
{
	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly FastAction<object, Compute_DT_EventArgs> COMPUTE_DT_EVENT;

	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x8")]
	public static readonly FastAction<bool, Material> MATERIAL_PROPERTY_EVENT;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x10")]
	public static readonly FastAction<bool, Object> FONT_PROPERTY_EVENT;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x18")]
	public static readonly FastAction<bool, Object> SPRITE_ASSET_PROPERTY_EVENT;

	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x20")]
	public static readonly FastAction<bool, Object> TEXTMESHPRO_PROPERTY_EVENT;

	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0x28")]
	public static readonly FastAction<GameObject, Material, Material> DRAG_AND_DROP_MATERIAL_EVENT;

	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0x30")]
	public static readonly FastAction<bool> TEXT_STYLE_PROPERTY_EVENT;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x38")]
	public static readonly FastAction<Object> COLOR_GRADIENT_PROPERTY_EVENT;

	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x40")]
	public static readonly FastAction TMP_SETTINGS_PROPERTY_EVENT;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0x48")]
	public static readonly FastAction RESOURCE_LOAD_EVENT;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0x50")]
	public static readonly FastAction<bool, Object> TEXTMESHPRO_UGUI_PROPERTY_EVENT;

	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x58")]
	public static readonly FastAction<Object> TEXT_CHANGED_EVENT;

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x4C42F60", Offset = "0x4C42F60", VA = "0x4C42F60")]
	public static void ON_MATERIAL_PROPERTY_CHANGED(bool isChanged, Material mat)
	{
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x4C43000", Offset = "0x4C43000", VA = "0x4C43000")]
	public static void ON_FONT_PROPERTY_CHANGED(bool isChanged, Object obj)
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x4C430A0", Offset = "0x4C430A0", VA = "0x4C430A0")]
	public static void ON_SPRITE_ASSET_PROPERTY_CHANGED(bool isChanged, Object obj)
	{
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x4C43140", Offset = "0x4C43140", VA = "0x4C43140")]
	public static void ON_TEXTMESHPRO_PROPERTY_CHANGED(bool isChanged, Object obj)
	{
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x4C431E0", Offset = "0x4C431E0", VA = "0x4C431E0")]
	public static void ON_DRAG_AND_DROP_MATERIAL_CHANGED(GameObject sender, Material currentMaterial, Material newMaterial)
	{
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x4C43290", Offset = "0x4C43290", VA = "0x4C43290")]
	public static void ON_TEXT_STYLE_PROPERTY_CHANGED(bool isChanged)
	{
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x4C43330", Offset = "0x4C43330", VA = "0x4C43330")]
	public static void ON_COLOR_GRADIENT_PROPERTY_CHANGED(Object obj)
	{
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x4C433D0", Offset = "0x4C433D0", VA = "0x4C433D0")]
	public static void ON_TEXT_CHANGED(Object obj)
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x4C43470", Offset = "0x4C43470", VA = "0x4C43470")]
	public static void ON_TMP_SETTINGS_CHANGED()
	{
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x4C434F0", Offset = "0x4C434F0", VA = "0x4C434F0")]
	public static void ON_RESOURCES_LOADED()
	{
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x4C43570", Offset = "0x4C43570", VA = "0x4C43570")]
	public static void ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED(bool isChanged, Object obj)
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x4C43610", Offset = "0x4C43610", VA = "0x4C43610")]
	public static void ON_COMPUTE_DT_EVENT(object Sender, Compute_DT_EventArgs e)
	{
	}
}
