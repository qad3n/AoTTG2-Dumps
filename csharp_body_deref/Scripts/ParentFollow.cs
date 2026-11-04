// ==================== AoTTG2 cross-reference ====================
// Type: ParentFollow
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/ParentFollow.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/ParentFollow.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Characters;
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000009")]
public class ParentFollow : MonoBehaviour
{
	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x20")]
	private Transform bTransform;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x28")]
	public bool isActiveInScene;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x30")]
	private Transform parent;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x38")]
	private BaseCharacter owner;

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x40")]
	private SkinnedMeshRenderer ownRenderer;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x48")]
	private int appliedRenderStateVersion;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x50")]
	private Material tintedMaterial;

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x1DABFA0", Offset = "0x1DAA5A0", VA = "0x181DABFA0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x1DAC1D0", Offset = "0x1DAA7D0", VA = "0x181DAC1D0")]
	public void SetMaterial(Material material, Color? tint)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x1DAC100", Offset = "0x1DAA700", VA = "0x181DAC100")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x1DAC190", Offset = "0x1DAA790", VA = "0x181DAC190")]
	public void RemoveParent()
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x1DAC2F0", Offset = "0x1DAA8F0", VA = "0x181DAC2F0")]
	public void SetParent(Transform transform)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x1DAC3F0", Offset = "0x1DAA9F0", VA = "0x181DAC3F0")]
	private void Update()
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x1DAC010", Offset = "0x1DAA610", VA = "0x181DAC010")]
	private void FollowRenderState()
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x1DAC4F0", Offset = "0x1DAAAF0", VA = "0x181DAC4F0")]
	public ParentFollow()
	{
	}
}
