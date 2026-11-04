// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ChromaticAberration
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x20000F9")]
[VolumeComponentMenu("Post-processing/Chromatic Aberration")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
public sealed class ChromaticAberration : VolumeComponent, IPostProcessComponent
{
	[Token(Token = "0x40005A0")]
	[FieldOffset(Offset = "0x38")]
	[Tooltip("Use the slider to set the strength of the Chromatic Aberration effect.")]
	public ClampedFloatParameter intensity;

	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x2C55830", Offset = "0x2C53E30", VA = "0x182C55830", Slot = "8")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
	[Obsolete("Unused. #from(2023.1)")]
	public bool IsTileCompatible()
	{
		return default(bool);
	}

	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x2C55870", Offset = "0x2C53E70", VA = "0x182C55870")]
	public ChromaticAberration()
	{
	}
}
