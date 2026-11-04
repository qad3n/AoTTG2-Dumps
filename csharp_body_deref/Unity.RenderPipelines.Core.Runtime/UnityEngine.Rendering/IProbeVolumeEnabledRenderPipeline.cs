// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IProbeVolumeEnabledRenderPipeline
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000EE")]
public interface IProbeVolumeEnabledRenderPipeline
{
	[Token(Token = "0x170000EE")]
	bool supportProbeVolume
	{
		[Token(Token = "0x6000867")]
		get;
	}

	[Token(Token = "0x170000EF")]
	ProbeVolumeSHBands maxSHBands
	{
		[Token(Token = "0x6000868")]
		get;
	}

	[Token(Token = "0x170000F0")]
	[Obsolete("This field is no longer necessary. #from(2023.3)")]
	ProbeVolumeSceneData probeVolumeSceneData
	{
		[Token(Token = "0x6000869")]
		get;
	}
}
