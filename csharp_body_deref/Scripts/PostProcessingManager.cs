// ==================== AoTTG2 cross-reference ====================
// Type: PostProcessingManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/PostProcessingManager.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/PostProcessingManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using ApplicationManagers;
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
	[FieldOffset(Offset = "0x8")]
	private static PostProcessingManager _instance;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x20")]
	private bool _customVolumes;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x28")]
	private Volume defaultVolume;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x30")]
	private Volume waterVolume;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x38")]
	private Bloom _bloom;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x40")]
	private ChromaticAberration _chromaticAberration;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x48")]
	private DepthOfField _depthOfField;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x50")]
	private MotionBlur _motionBlur;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x58")]
	private ColorAdjustments _colorAdjustments;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x60")]
	public bool InsideWater;

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x5743360", Offset = "0x5742360", VA = "0x5743360")]
	public void Awake()
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x5743810", Offset = "0x5742810", VA = "0x5743810")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x5743880", Offset = "0x5742880", VA = "0x5743880")]
	private void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x57439A0", Offset = "0x57429A0", VA = "0x57439A0")]
	public static void EnableCustomVolumes()
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x5743A40", Offset = "0x5742A40", VA = "0x5743A40")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x5743B00", Offset = "0x5742B00", VA = "0x5743B00")]
	protected void ToggleWaterFX(bool active)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x5743890", Offset = "0x5742890", VA = "0x5743890")]
	private void ApplyCamera()
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x57436C0", Offset = "0x57426C0", VA = "0x57436C0")]
	public void Apply()
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x5743CD0", Offset = "0x5742CD0", VA = "0x5743CD0")]
	public void SetColorGradingQuality(ColorGradingLevel quality)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x5743B50", Offset = "0x5742B50", VA = "0x5743B50")]
	public void SetBloomQuality(BloomLevel quality)
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x5743BD0", Offset = "0x5742BD0", VA = "0x5743BD0")]
	public void SetChromaticAberrationQuality(ChromaticAberrationLevel quality)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x5743BF0", Offset = "0x5742BF0", VA = "0x5743BF0")]
	public void SetDepthOfFieldQuality(DepthOfFieldLevel quality)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x5743C10", Offset = "0x5742C10", VA = "0x5743C10")]
	public void SetMotionBlurQuality(MotionBlurLevel quality)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x5743CF0", Offset = "0x5742CF0", VA = "0x5743CF0")]
	public PostProcessingManager()
	{
	}
}
