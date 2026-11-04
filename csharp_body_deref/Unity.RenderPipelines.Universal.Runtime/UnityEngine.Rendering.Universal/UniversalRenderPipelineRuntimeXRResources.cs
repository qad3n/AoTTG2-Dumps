// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRenderPipelineRuntimeXRResources
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
[Token(Token = "0x200016A")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
[CategoryInfo(Name = "R: Runtime XR", Order = 1000)]
[HideInInspector]
public class UniversalRenderPipelineRuntimeXRResources : IRenderPipelineResources, IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x400084A")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[ResourcePath("Shaders/XR/XROcclusionMesh.shader", SearchType.ProjectPath)]
	private Shader m_xrOcclusionMeshPS;

	[Token(Token = "0x400084B")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[ResourcePath("Shaders/XR/XRMirrorView.shader", SearchType.ProjectPath)]
	private Shader m_xrMirrorViewPS;

	[Token(Token = "0x400084C")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[ResourcePath("Shaders/XR/XRMotionVector.shader", SearchType.ProjectPath)]
	private Shader m_xrMotionVector;

	[Token(Token = "0x17000202")]
	public int version
	{
		[Token(Token = "0x6000830")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000203")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x6000831")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000204")]
	public Shader xrOcclusionMeshPS
	{
		[Token(Token = "0x6000832")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000833")]
		[Address(RVA = "0x2C8EA30", Offset = "0x2C8D030", VA = "0x182C8EA30")]
		set
		{
		}
	}

	[Token(Token = "0x17000205")]
	public Shader xrMirrorViewPS
	{
		[Token(Token = "0x6000834")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000835")]
		[Address(RVA = "0x2C8E950", Offset = "0x2C8CF50", VA = "0x182C8E950")]
		set
		{
		}
	}

	[Token(Token = "0x17000206")]
	public Shader xrMotionVector
	{
		[Token(Token = "0x6000836")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000837")]
		[Address(RVA = "0x2C8E9C0", Offset = "0x2C8CFC0", VA = "0x182C8E9C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000207")]
	internal bool valid
	{
		[Token(Token = "0x6000838")]
		[Address(RVA = "0x2C8E880", Offset = "0x2C8CE80", VA = "0x182C8E880")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public UniversalRenderPipelineRuntimeXRResources()
	{
	}
}
