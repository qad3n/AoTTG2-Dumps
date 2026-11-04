// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.MotionBlur
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/MotionBlur.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x2000107")]
[VolumeComponentMenu("Post-processing/Motion Blur")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
public sealed class MotionBlur : VolumeComponent, IPostProcessComponent
{
	[Token(Token = "0x40005DE")]
	[FieldOffset(Offset = "0x38")]
	[Tooltip("The motion blur technique to use. If you don't need object motion blur, CameraOnly will result in better performance.")]
	public MotionBlurModeParameter mode;

	[Token(Token = "0x40005DF")]
	[FieldOffset(Offset = "0x40")]
	[Tooltip("The quality of the effect. Lower presets will result in better performance at the expense of visual quality.")]
	public MotionBlurQualityParameter quality;

	[Token(Token = "0x40005E0")]
	[FieldOffset(Offset = "0x48")]
	[Tooltip("The strength of the motion blur filter. Acts as a multiplier for velocities.")]
	public ClampedFloatParameter intensity;

	[Token(Token = "0x40005E1")]
	[FieldOffset(Offset = "0x50")]
	[Tooltip("Sets the maximum length, as a fraction of the screen's full resolution, that the velocity resulting from Camera rotation can have. Lower values will improve performance.")]
	public ClampedFloatParameter clamp;

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x2C19050", Offset = "0x2C17650", VA = "0x182C19050", Slot = "8")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
	[Obsolete("Unused. #from(2023.1)")]
	public bool IsTileCompatible()
	{
		return default(bool);
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x2C5ABE0", Offset = "0x2C591E0", VA = "0x182C5ABE0")]
	public MotionBlur()
	{
	}
}
