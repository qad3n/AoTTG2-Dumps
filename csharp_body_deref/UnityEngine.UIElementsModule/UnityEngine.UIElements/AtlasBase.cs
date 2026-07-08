using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000005")]
internal abstract class AtlasBase
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x10")]
	internal TextureRegistry textureRegistry;

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4BE3FC0", Offset = "0x4BE3FC0", VA = "0x4BE3FC0", Slot = "4")]
	public virtual bool TryGetAtlas(VisualElement ctx, Texture2D src, out TextureId atlas, out RectInt atlasRect)
	{
		return default(bool);
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4BE4020", Offset = "0x4BE4020", VA = "0x4BE4020", Slot = "5")]
	public virtual void ReturnAtlas(VisualElement ctx, Texture2D src, TextureId atlas)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4BE4030", Offset = "0x4BE4030", VA = "0x4BE4030", Slot = "6")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4BE4040", Offset = "0x4BE4040", VA = "0x4BE4040", Slot = "7")]
	protected virtual void OnAssignedToPanel(IPanel panel)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4BE4050", Offset = "0x4BE4050", VA = "0x4BE4050", Slot = "8")]
	protected virtual void OnRemovedFromPanel(IPanel panel)
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x4BE4060", Offset = "0x4BE4060", VA = "0x4BE4060", Slot = "9")]
	protected virtual void OnUpdateDynamicTextures(IPanel panel)
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x4BE4070", Offset = "0x4BE4070", VA = "0x4BE4070")]
	internal void InvokeAssignedToPanel(IPanel panel)
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x4BE4090", Offset = "0x4BE4090", VA = "0x4BE4090")]
	internal void InvokeRemovedFromPanel(IPanel panel)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x4BE40B0", Offset = "0x4BE40B0", VA = "0x4BE40B0")]
	internal void InvokeUpdateDynamicTextures(IPanel panel)
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x4BE40D0", Offset = "0x4BE40D0", VA = "0x4BE40D0")]
	protected static void RepaintTexturedElements(IPanel panel)
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x4BE41A0", Offset = "0x4BE41A0", VA = "0x4BE41A0")]
	protected void SetDynamicTexture(TextureId id, Texture texture)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x4BE41C0", Offset = "0x4BE41C0", VA = "0x4BE41C0")]
	protected AtlasBase()
	{
	}
}
