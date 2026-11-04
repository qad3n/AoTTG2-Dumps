// ==================== AoTTG2 cross-reference ====================
// Type: Characters.DummyTitan
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/DummyTitan.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/DummyTitan.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using CustomSkins;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006BB")]
internal class DummyTitan : DummyCharacter
{
	[Token(Token = "0x4002162")]
	[FieldOffset(Offset = "0x30")]
	public BasicTitanSetup Setup;

	[Token(Token = "0x4002163")]
	[FieldOffset(Offset = "0x38")]
	public BasicTitanComponentCache Cache;

	[Token(Token = "0x4002164")]
	[FieldOffset(Offset = "0x40")]
	protected BasicTitanAnimations BasicAnimations;

	[Token(Token = "0x4002165")]
	[FieldOffset(Offset = "0x48")]
	private TitanCustomSkinLoader _customSkinLoader;

	[Token(Token = "0x4002166")]
	[FieldOffset(Offset = "0x50")]
	private Material _defaultBodyMaterial;

	[Token(Token = "0x600429C")]
	[Address(RVA = "0x21A8AC0", Offset = "0x21A70C0", VA = "0x1821A8AC0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600429D")]
	[Address(RVA = "0x21A8F60", Offset = "0x21A7560", VA = "0x1821A8F60")]
	public void LoadSet(TitanCustomSet set, bool applySkins = true)
	{
	}

	[Token(Token = "0x600429E")]
	[Address(RVA = "0x21A9170", Offset = "0x21A7770", VA = "0x1821A9170")]
	private void LoadSkin(TitanCustomSet set)
	{
	}

	[Token(Token = "0x600429F")]
	[Address(RVA = "0x21A9380", Offset = "0x21A7980", VA = "0x1821A9380")]
	private void RestoreDefaultMaterials()
	{
	}

	[Token(Token = "0x60042A0")]
	[Address(RVA = "0x21A92F0", Offset = "0x21A78F0", VA = "0x1821A92F0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60042A1")]
	[Address(RVA = "0x21A8D40", Offset = "0x21A7340", VA = "0x1821A8D40")]
	private Renderer GetBodyRenderer()
	{
		return null;
	}

	[Token(Token = "0x60042A2")]
	[Address(RVA = "0x21A8F30", Offset = "0x21A7530", VA = "0x1821A8F30", Slot = "5")]
	protected override string GetIdleAnimation()
	{
		return null;
	}

	[Token(Token = "0x60042A3")]
	[Address(RVA = "0x21A8DF0", Offset = "0x21A73F0", VA = "0x1821A8DF0", Slot = "6")]
	protected override string GetEmoteAnimation(string emote)
	{
		return null;
	}

	[Token(Token = "0x60042A4")]
	[Address(RVA = "0x190EDA0", Offset = "0x190D3A0", VA = "0x18190EDA0")]
	public DummyTitan()
	{
	}
}
