// ==================== AoTTG2 cross-reference ====================
// Type: WaterEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/WaterEffect.c
// Prior real C# source (older reference): Assets/Scripts/Effects/WaterEffect.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Rendering.PostProcessing;
using UnityStandardAssets.ImageEffects;

[Token(Token = "0x200000B")]
public class WaterEffect : MonoBehaviour
{
	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private GameObject PostProcessingVolume;

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x28")]
	private PostProcessingManager _postProcessingManager;

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x30")]
	private PostProcessVolume _volume;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x38")]
	private ColorGrading _colorGrading;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x40")]
	private GlobalFog _globalFog;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x48")]
	private BoxCollider _boxCollider;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x50")]
	private bool _fogEnabled;

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x3F5C430", Offset = "0x3F5C430", VA = "0x3F5C430")]
	private void Start()
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x3F5A0D0", Offset = "0x3F5A0D0", VA = "0x3F5A0D0")]
	public void ApplySettings(WaterFXLevel wfxl)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x3F5C6B0", Offset = "0x3F5C6B0", VA = "0x3F5C6B0")]
	private bool IsInsideBounds(Vector3 worldPos, BoxCollider bc)
	{
		return default(bool);
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x3F5C820", Offset = "0x3F5C820", VA = "0x3F5C820")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x3F5C930", Offset = "0x3F5C930", VA = "0x3F5C930")]
	public WaterEffect()
	{
	}
}
