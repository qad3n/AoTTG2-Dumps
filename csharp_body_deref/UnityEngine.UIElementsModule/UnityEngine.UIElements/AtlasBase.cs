// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.AtlasBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000006")]
internal abstract class AtlasBase
{
	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x10")]
	internal TextureRegistry textureRegistry;

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x6A79A40", Offset = "0x6A78A40", VA = "0x6A79A40", Slot = "4")]
	public virtual bool TryGetAtlas(VisualElement ctx, Texture2D src, out TextureId atlas, out RectInt atlasRect)
	{
		return default(bool);
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x6A79AA0", Offset = "0x6A78AA0", VA = "0x6A79AA0", Slot = "5")]
	public virtual void ReturnAtlas(VisualElement ctx, Texture2D src, TextureId atlas)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x6A79AB0", Offset = "0x6A78AB0", VA = "0x6A79AB0", Slot = "6")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x6A79AC0", Offset = "0x6A78AC0", VA = "0x6A79AC0", Slot = "7")]
	protected virtual void OnAssignedToPanel(IPanel panel)
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x6A79AD0", Offset = "0x6A78AD0", VA = "0x6A79AD0", Slot = "8")]
	protected virtual void OnRemovedFromPanel(IPanel panel)
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x6A79AE0", Offset = "0x6A78AE0", VA = "0x6A79AE0", Slot = "9")]
	protected virtual void OnUpdateDynamicTextures(IPanel panel)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x6A79AF0", Offset = "0x6A78AF0", VA = "0x6A79AF0")]
	internal void InvokeAssignedToPanel(IPanel panel)
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x6A79B10", Offset = "0x6A78B10", VA = "0x6A79B10")]
	internal void InvokeRemovedFromPanel(IPanel panel)
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x6A79B30", Offset = "0x6A78B30", VA = "0x6A79B30")]
	internal void InvokeUpdateDynamicTextures(IPanel panel)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x6A79B50", Offset = "0x6A78B50", VA = "0x6A79B50")]
	protected static void RepaintTexturedElements(IPanel panel)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x6A79C10", Offset = "0x6A78C10", VA = "0x6A79C10")]
	protected void SetDynamicTexture(TextureId id, Texture texture)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x6A79C30", Offset = "0x6A78C30", VA = "0x6A79C30")]
	protected AtlasBase()
	{
	}
}
