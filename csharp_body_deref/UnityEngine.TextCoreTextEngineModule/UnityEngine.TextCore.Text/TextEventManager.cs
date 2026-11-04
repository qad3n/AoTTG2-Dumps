// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextEventManager
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000047")]
public static class TextEventManager
{
	[Token(Token = "0x4000215")]
	[FieldOffset(Offset = "0x0")]
	public static readonly FastAction<bool, Material> MATERIAL_PROPERTY_EVENT;

	[Token(Token = "0x4000216")]
	[FieldOffset(Offset = "0x8")]
	public static readonly FastAction<bool, Object> FONT_PROPERTY_EVENT;

	[Token(Token = "0x4000217")]
	[FieldOffset(Offset = "0x10")]
	public static readonly FastAction<bool, Object> SPRITE_ASSET_PROPERTY_EVENT;

	[Token(Token = "0x4000218")]
	[FieldOffset(Offset = "0x18")]
	public static readonly FastAction<bool, Object> TEXTMESHPRO_PROPERTY_EVENT;

	[Token(Token = "0x4000219")]
	[FieldOffset(Offset = "0x20")]
	public static readonly FastAction<GameObject, Material, Material> DRAG_AND_DROP_MATERIAL_EVENT;

	[Token(Token = "0x400021A")]
	[FieldOffset(Offset = "0x28")]
	public static readonly FastAction<bool> TEXT_STYLE_PROPERTY_EVENT;

	[Token(Token = "0x400021B")]
	[FieldOffset(Offset = "0x30")]
	public static readonly FastAction<Object> COLOR_GRADIENT_PROPERTY_EVENT;

	[Token(Token = "0x400021C")]
	[FieldOffset(Offset = "0x38")]
	public static readonly FastAction TMP_SETTINGS_PROPERTY_EVENT;

	[Token(Token = "0x400021D")]
	[FieldOffset(Offset = "0x40")]
	public static readonly FastAction RESOURCE_LOAD_EVENT;

	[Token(Token = "0x400021E")]
	[FieldOffset(Offset = "0x48")]
	public static readonly FastAction<bool, Object> TEXTMESHPRO_UGUI_PROPERTY_EVENT;

	[Token(Token = "0x400021F")]
	[FieldOffset(Offset = "0x50")]
	public static readonly FastAction OnPreRenderObject_Event;

	[Token(Token = "0x4000220")]
	[FieldOffset(Offset = "0x58")]
	public static readonly FastAction<Object> TEXT_CHANGED_EVENT;

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x30480A0", Offset = "0x30466A0", VA = "0x1830480A0")]
	public static void ON_FONT_PROPERTY_CHANGED(bool isChanged, Object font)
	{
	}
}
