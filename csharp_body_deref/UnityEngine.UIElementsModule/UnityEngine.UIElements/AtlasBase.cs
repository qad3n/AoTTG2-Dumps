// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.AtlasBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000005")]
internal abstract class AtlasBase
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x10")]
	internal TextureRegistry textureRegistry;

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4F0B8F0", Offset = "0x4F0B8F0", VA = "0x4F0B8F0", Slot = "4")]
	public virtual bool TryGetAtlas(VisualElement ctx, Texture2D src, out TextureId atlas, out RectInt atlasRect)
	{
		return default(bool);
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4F0B950", Offset = "0x4F0B950", VA = "0x4F0B950", Slot = "5")]
	public virtual void ReturnAtlas(VisualElement ctx, Texture2D src, TextureId atlas)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4F0B960", Offset = "0x4F0B960", VA = "0x4F0B960", Slot = "6")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4F0B970", Offset = "0x4F0B970", VA = "0x4F0B970", Slot = "7")]
	protected virtual void OnAssignedToPanel(IPanel panel)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4F0B980", Offset = "0x4F0B980", VA = "0x4F0B980", Slot = "8")]
	protected virtual void OnRemovedFromPanel(IPanel panel)
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x4F0B990", Offset = "0x4F0B990", VA = "0x4F0B990", Slot = "9")]
	protected virtual void OnUpdateDynamicTextures(IPanel panel)
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x4F0B9A0", Offset = "0x4F0B9A0", VA = "0x4F0B9A0")]
	internal void InvokeAssignedToPanel(IPanel panel)
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x4F0B9C0", Offset = "0x4F0B9C0", VA = "0x4F0B9C0")]
	internal void InvokeRemovedFromPanel(IPanel panel)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x4F0B9E0", Offset = "0x4F0B9E0", VA = "0x4F0B9E0")]
	internal void InvokeUpdateDynamicTextures(IPanel panel)
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x4F0BA00", Offset = "0x4F0BA00", VA = "0x4F0BA00")]
	protected static void RepaintTexturedElements(IPanel panel)
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x4F0BAD0", Offset = "0x4F0BAD0", VA = "0x4F0BAD0")]
	protected void SetDynamicTexture(TextureId id, Texture texture)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x4F0BAF0", Offset = "0x4F0BAF0", VA = "0x4F0BAF0")]
	protected AtlasBase()
	{
	}
}
