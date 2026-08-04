// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.MotionBlur
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/MotionBlur.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x200002F")]
[PostProcess(typeof(MotionBlurRenderer), "Unity/Motion Blur", false)]
public sealed class MotionBlur : PostProcessEffectSettings
{
	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x30")]
	[Range(0f, 360f)]
	[Tooltip("The angle of rotary shutter. Larger values give longer exposure.")]
	public FloatParameter shutterAngle;

	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x38")]
	[Range(4f, 32f)]
	[Tooltip("The amount of sample points. This affects quality and performance.")]
	public IntParameter sampleCount;

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x4B3D930", Offset = "0x4B3D930", VA = "0x4B3D930", Slot = "4")]
	public override bool IsEnabledAndSupported(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x4B3D9E0", Offset = "0x4B3D9E0", VA = "0x4B3D9E0")]
	public MotionBlur()
	{
	}
}
