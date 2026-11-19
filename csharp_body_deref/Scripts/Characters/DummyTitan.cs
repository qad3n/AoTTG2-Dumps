// ==================== AoTTG2 cross-reference ====================
// Type: Characters.DummyTitan
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/DummyTitan.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/DummyTitan.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using CustomSkins;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace Characters;

[Token(Token = "0x200071A")]
internal class DummyTitan : DummyCharacter
{
	[Token(Token = "0x400232F")]
	[FieldOffset(Offset = "0x30")]
	public BasicTitanSetup Setup;

	[Token(Token = "0x4002330")]
	[FieldOffset(Offset = "0x38")]
	public BasicTitanComponentCache Cache;

	[Token(Token = "0x4002331")]
	[FieldOffset(Offset = "0x40")]
	protected BasicTitanAnimations BasicAnimations;

	[Token(Token = "0x4002332")]
	[FieldOffset(Offset = "0x48")]
	private TitanCustomSkinLoader _customSkinLoader;

	[Token(Token = "0x4002333")]
	[FieldOffset(Offset = "0x50")]
	private Material _defaultBodyMaterial;

	[Token(Token = "0x600454D")]
	[Address(RVA = "0x5B45570", Offset = "0x5B44570", VA = "0x5B45570", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600454E")]
	[Address(RVA = "0x5B458A0", Offset = "0x5B448A0", VA = "0x5B458A0")]
	public void LoadSet(TitanCustomSet set, bool applySkins = true)
	{
	}

	[Token(Token = "0x600454F")]
	[Address(RVA = "0x5B45990", Offset = "0x5B44990", VA = "0x5B45990")]
	private void LoadSkin(TitanCustomSet set)
	{
	}

	[Token(Token = "0x6004550")]
	[Address(RVA = "0x5B458E0", Offset = "0x5B448E0", VA = "0x5B458E0")]
	private void RestoreDefaultMaterials()
	{
	}

	[Token(Token = "0x6004551")]
	[Address(RVA = "0x5B45AE0", Offset = "0x5B44AE0", VA = "0x5B45AE0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6004552")]
	[Address(RVA = "0x5B457F0", Offset = "0x5B447F0", VA = "0x5B457F0")]
	private Renderer GetBodyRenderer()
	{
		return null;
	}

	[Token(Token = "0x6004553")]
	[Address(RVA = "0x5B45B60", Offset = "0x5B44B60", VA = "0x5B45B60", Slot = "5")]
	protected override string GetIdleAnimation()
	{
		return null;
	}

	[Token(Token = "0x6004554")]
	[Address(RVA = "0x5B45B90", Offset = "0x5B44B90", VA = "0x5B45B90", Slot = "6")]
	protected override string GetEmoteAnimation(string emote)
	{
		return null;
	}

	[Token(Token = "0x6004555")]
	[Address(RVA = "0x5B45CB0", Offset = "0x5B44CB0", VA = "0x5B45CB0")]
	public DummyTitan()
	{
	}
}
