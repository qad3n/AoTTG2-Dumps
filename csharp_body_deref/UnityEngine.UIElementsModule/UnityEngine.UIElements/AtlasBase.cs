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
	[Address(RVA = "0x307D670", Offset = "0x307BC70", VA = "0x18307D670", Slot = "4")]
	public virtual bool TryGetAtlas(VisualElement ctx, Texture2D src, out TextureId atlas, out RectInt atlasRect)
	{
		return default(bool);
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	public virtual void ReturnAtlas(VisualElement ctx, Texture2D src, TextureId atlas)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	protected virtual void OnAssignedToPanel(IPanel panel)
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	protected virtual void OnRemovedFromPanel(IPanel panel)
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	protected virtual void OnUpdateDynamicTextures(IPanel panel)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x307D560", Offset = "0x307BB60", VA = "0x18307D560")]
	internal void InvokeAssignedToPanel(IPanel panel)
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x25EACE0", Offset = "0x25E92E0", VA = "0x1825EACE0")]
	internal void InvokeRemovedFromPanel(IPanel panel)
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x2845320", Offset = "0x2843920", VA = "0x182845320")]
	internal void InvokeUpdateDynamicTextures(IPanel panel)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x307D580", Offset = "0x307BB80", VA = "0x18307D580")]
	protected static void RepaintTexturedElements(IPanel panel)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x307D650", Offset = "0x307BC50", VA = "0x18307D650")]
	protected void SetDynamicTexture(TextureId id, Texture texture)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x307D6E0", Offset = "0x307BCE0", VA = "0x18307D6E0")]
	protected AtlasBase()
	{
	}
}
