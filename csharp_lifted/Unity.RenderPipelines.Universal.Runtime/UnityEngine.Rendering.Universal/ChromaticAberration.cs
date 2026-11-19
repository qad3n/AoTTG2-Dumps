// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ChromaticAberration
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x664A230", Offset = "0x6649230", VA = "0x664A230", Slot = "8")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x664A260", Offset = "0x6649260", VA = "0x664A260", Slot = "9")]
	[Obsolete("Unused. #from(2023.1)")]
	public bool IsTileCompatible()
	{
		return default(bool);
	}

	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x664A270", Offset = "0x6649270", VA = "0x664A270")]
	public ChromaticAberration()
	{
	}
}
