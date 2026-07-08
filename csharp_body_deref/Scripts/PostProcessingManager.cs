using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000005")]
public class PostProcessingManager : MonoBehaviour
{
	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x20")]
	private PostProcessVolume _postProcessingVolume;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x28")]
	private AmbientOcclusion _ambientOcclusion;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x30")]
	private Bloom _bloom;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x38")]
	private ChromaticAberration _chromaticAberration;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x40")]
	private ColorGrading _colorGrading;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x48")]
	private DepthOfField _depthOfField;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x50")]
	private MotionBlur _motionBlur;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x58")]
	private AutoExposure _autoExposure;

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x3C63EE0", Offset = "0x3C63EE0", VA = "0x3C63EE0")]
	public void Awake()
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x3C64460", Offset = "0x3C64460", VA = "0x3C64460")]
	public void SetState(bool state)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x3C64240", Offset = "0x3C64240", VA = "0x3C64240")]
	public void ApplySettings(AmbientOcclusionLevel aol, BloomLevel bl, ChromaticAberrationLevel cal, ColorGradingLevel cgl, AutoExposureLevel ael, DepthOfFieldLevel dofl, MotionBlurLevel mbl, WaterFXLevel wfxl)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x3C64520", Offset = "0x3C64520", VA = "0x3C64520")]
	public void SetAmbientOcclusionQuality(AmbientOcclusionLevel quality)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x3C64560", Offset = "0x3C64560", VA = "0x3C64560")]
	public void SetBloomQuality(BloomLevel quality)
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x3C645E0", Offset = "0x3C645E0", VA = "0x3C645E0")]
	public void SetChromaticAberrationQuality(ChromaticAberrationLevel quality)
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x3C64660", Offset = "0x3C64660", VA = "0x3C64660")]
	public void SetColorGradingQuality(ColorGradingLevel quality)
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x3C64680", Offset = "0x3C64680", VA = "0x3C64680")]
	public void SetAutoExposureQuality(AutoExposureLevel quality)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x3C646A0", Offset = "0x3C646A0", VA = "0x3C646A0")]
	public void SetDepthOfFieldQuality(DepthOfFieldLevel quality)
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x3C646C0", Offset = "0x3C646C0", VA = "0x3C646C0")]
	public void SetMotionBlurQuality(MotionBlurLevel quality)
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x3C64860", Offset = "0x3C64860", VA = "0x3C64860")]
	public PostProcessingManager()
	{
	}
}
