// ==================== AoTTG2 cross-reference ====================
// Type: PostProcessingManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/PostProcessingManager.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/PostProcessingManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

[Token(Token = "0x2000006")]
public class PostProcessingManager : MonoBehaviour
{
	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x0")]
	public static VolumeProfile DefaultVolumeProfile;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x20")]
	private Volume defaultVolume;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x28")]
	private Volume waterVolume;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x30")]
	private Bloom _bloom;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x38")]
	private ChromaticAberration _chromaticAberration;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x40")]
	private DepthOfField _depthOfField;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x48")]
	private MotionBlur _motionBlur;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x50")]
	private ColorAdjustments _colorAdjustments;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x58")]
	public bool InsideWater;

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x1DAD4E0", Offset = "0x1DABAE0", VA = "0x181DAD4E0")]
	public void Awake()
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x1DAD7E0", Offset = "0x1DABDE0", VA = "0x181DAD7E0")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x1DADA90", Offset = "0x1DAC090", VA = "0x181DADA90")]
	protected void ToggleWaterFX(bool active)
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x1DAD210", Offset = "0x1DAB810", VA = "0x181DAD210")]
	public void Apply()
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x1DAD940", Offset = "0x1DABF40", VA = "0x181DAD940")]
	public void SetColorGradingQuality(ColorGradingLevel quality)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x1DAD870", Offset = "0x1DABE70", VA = "0x181DAD870")]
	public void SetBloomQuality(BloomLevel quality)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x1DAD910", Offset = "0x1DABF10", VA = "0x181DAD910")]
	public void SetChromaticAberrationQuality(ChromaticAberrationLevel quality)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x1DAD970", Offset = "0x1DABF70", VA = "0x181DAD970")]
	public void SetDepthOfFieldQuality(DepthOfFieldLevel quality)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x1DAD9A0", Offset = "0x1DABFA0", VA = "0x181DAD9A0")]
	public void SetMotionBlurQuality(MotionBlurLevel quality)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public PostProcessingManager()
	{
	}
}
