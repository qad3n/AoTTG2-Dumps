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
	[Address(RVA = "0x3C66AE0", Offset = "0x3C66AE0", VA = "0x3C66AE0")]
	private void Start()
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x3C64780", Offset = "0x3C64780", VA = "0x3C64780")]
	public void ApplySettings(WaterFXLevel wfxl)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x3C66D60", Offset = "0x3C66D60", VA = "0x3C66D60")]
	private bool IsInsideBounds(Vector3 worldPos, BoxCollider bc)
	{
		return default(bool);
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x3C66ED0", Offset = "0x3C66ED0", VA = "0x3C66ED0")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x3C66FE0", Offset = "0x3C66FE0", VA = "0x3C66FE0")]
	public WaterEffect()
	{
	}
}
