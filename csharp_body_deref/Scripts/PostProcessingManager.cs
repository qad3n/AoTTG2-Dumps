// ==================== AoTTG2 cross-reference ====================
// Type: PostProcessingManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/PostProcessingManager.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/PostProcessingManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3F59830", Offset = "0x3F59830", VA = "0x3F59830")]
	public void Awake()
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x3F59DB0", Offset = "0x3F59DB0", VA = "0x3F59DB0")]
	public void SetState(bool state)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x3F59B90", Offset = "0x3F59B90", VA = "0x3F59B90")]
	public void ApplySettings(AmbientOcclusionLevel aol, BloomLevel bl, ChromaticAberrationLevel cal, ColorGradingLevel cgl, AutoExposureLevel ael, DepthOfFieldLevel dofl, MotionBlurLevel mbl, WaterFXLevel wfxl)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x3F59E70", Offset = "0x3F59E70", VA = "0x3F59E70")]
	public void SetAmbientOcclusionQuality(AmbientOcclusionLevel quality)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x3F59EB0", Offset = "0x3F59EB0", VA = "0x3F59EB0")]
	public void SetBloomQuality(BloomLevel quality)
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x3F59F30", Offset = "0x3F59F30", VA = "0x3F59F30")]
	public void SetChromaticAberrationQuality(ChromaticAberrationLevel quality)
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x3F59FB0", Offset = "0x3F59FB0", VA = "0x3F59FB0")]
	public void SetColorGradingQuality(ColorGradingLevel quality)
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x3F59FD0", Offset = "0x3F59FD0", VA = "0x3F59FD0")]
	public void SetAutoExposureQuality(AutoExposureLevel quality)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x3F59FF0", Offset = "0x3F59FF0", VA = "0x3F59FF0")]
	public void SetDepthOfFieldQuality(DepthOfFieldLevel quality)
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x3F5A010", Offset = "0x3F5A010", VA = "0x3F5A010")]
	public void SetMotionBlurQuality(MotionBlurLevel quality)
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x3F5A1B0", Offset = "0x3F5A1B0", VA = "0x3F5A1B0")]
	public PostProcessingManager()
	{
	}
}
