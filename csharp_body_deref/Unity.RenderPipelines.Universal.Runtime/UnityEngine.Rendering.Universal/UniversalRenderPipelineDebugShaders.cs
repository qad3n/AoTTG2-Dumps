// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRenderPipelineDebugShaders
// Update status: NEW in this game update
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
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E9")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x60007FE")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EA")]
	public Shader debugReplacementPS
	{
		[Token(Token = "0x60007FF")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000800")]
		[Address(RVA = "0x2C8DC10", Offset = "0x2C8C210", VA = "0x182C8DC10")]
		set
		{
		}
	}

	[Token(Token = "0x170001EB")]
	public Shader hdrDebugViewPS
	{
		[Token(Token = "0x6000801")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000802")]
		[Address(RVA = "0x2C8DC80", Offset = "0x2C8C280", VA = "0x182C8DC80")]
		set
		{
		}
	}

	[Token(Token = "0x170001EC")]
	public ComputeShader probeVolumeSamplingDebugComputeShader
	{
		[Token(Token = "0x6000803")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000804")]
		[Address(RVA = "0x2C8DCF0", Offset = "0x2C8C2F0", VA = "0x182C8DCF0")]
		set
		{
		}
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public UniversalRenderPipelineDebugShaders()
	{
	}
}
