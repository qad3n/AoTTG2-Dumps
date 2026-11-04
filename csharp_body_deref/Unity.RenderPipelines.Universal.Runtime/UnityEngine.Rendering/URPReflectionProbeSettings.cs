// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.URPReflectionProbeSettings
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Categorization;
using UnityEngine.Rendering.Universal;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x200000D")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
[CategoryInfo(Name = "Lighting", Order = 21)]
public class URPReflectionProbeSettings : IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[HideInInspector]
	private int version;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	[Tooltip("Use ReflectionProbe rotation. Enabling this will improve the appearance of reflections when the ReflectionProbe isn't axis aligned, but may worsen performance on lower end platforms.")]
	private bool useReflectionProbeRotation;

	[Token(Token = "0x17000004")]
	private int UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002Eversion
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000005")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000006")]
	public bool UseReflectionProbeRotation
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x1537420", Offset = "0x1535A20", VA = "0x181537420")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x2C0FFD0", Offset = "0x2C0E5D0", VA = "0x182C0FFD0")]
	public URPReflectionProbeSettings()
	{
	}
}
