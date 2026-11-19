// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRenderPipelineDebugShaders
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Categorization;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x2000166")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
[CategoryInfo(Name = "R: Debug Shaders", Order = 1000)]
[HideInInspector]
public class UniversalRenderPipelineDebugShaders : IRenderPipelineResources, IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x4000835")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[ResourcePath("Shaders/Debug/DebugReplacement.shader", SearchType.ProjectPath)]
	private Shader m_DebugReplacementPS;

	[Token(Token = "0x4000836")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[ResourcePath("Shaders/Debug/HDRDebugView.shader", SearchType.ProjectPath)]
	private Shader m_HdrDebugViewPS;

	[Token(Token = "0x4000837")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[ResourcePath("Shaders/Debug/ProbeVolumeSamplingDebugPositionNormal.compute", SearchType.ProjectPath)]
	private ComputeShader m_ProbeVolumeSamplingDebugComputeShader;

	[Token(Token = "0x170001E8")]
	public int version
	{
		[Token(Token = "0x60007FD")]
		[Address(RVA = "0x667B020", Offset = "0x667A020", VA = "0x667B020", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E9")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x60007FE")]
		[Address(RVA = "0x667B030", Offset = "0x667A030", VA = "0x667B030", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EA")]
	public Shader debugReplacementPS
	{
		[Token(Token = "0x60007FF")]
		[Address(RVA = "0x667B040", Offset = "0x667A040", VA = "0x667B040")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000800")]
		[Address(RVA = "0x667B050", Offset = "0x667A050", VA = "0x667B050")]
		set
		{
		}
	}

	[Token(Token = "0x170001EB")]
	public Shader hdrDebugViewPS
	{
		[Token(Token = "0x6000801")]
		[Address(RVA = "0x667B0B0", Offset = "0x667A0B0", VA = "0x667B0B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000802")]
		[Address(RVA = "0x667B0C0", Offset = "0x667A0C0", VA = "0x667B0C0")]
		set
		{
		}
	}

	[Token(Token = "0x170001EC")]
	public ComputeShader probeVolumeSamplingDebugComputeShader
	{
		[Token(Token = "0x6000803")]
		[Address(RVA = "0x667B120", Offset = "0x667A120", VA = "0x667B120")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000804")]
		[Address(RVA = "0x667B130", Offset = "0x667A130", VA = "0x667B130")]
		set
		{
		}
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x667B190", Offset = "0x667A190", VA = "0x667B190")]
	public UniversalRenderPipelineDebugShaders()
	{
	}
}
