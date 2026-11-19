// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRenderPipelineRuntimeXRResources
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
		[Address(RVA = "0x667BD50", Offset = "0x667AD50", VA = "0x667BD50", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000203")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x6000831")]
		[Address(RVA = "0x667BD60", Offset = "0x667AD60", VA = "0x667BD60", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000204")]
	public Shader xrOcclusionMeshPS
	{
		[Token(Token = "0x6000832")]
		[Address(RVA = "0x667BD70", Offset = "0x667AD70", VA = "0x667BD70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000833")]
		[Address(RVA = "0x667BD80", Offset = "0x667AD80", VA = "0x667BD80")]
		set
		{
		}
	}

	[Token(Token = "0x17000205")]
	public Shader xrMirrorViewPS
	{
		[Token(Token = "0x6000834")]
		[Address(RVA = "0x667BDE0", Offset = "0x667ADE0", VA = "0x667BDE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000835")]
		[Address(RVA = "0x667BDF0", Offset = "0x667ADF0", VA = "0x667BDF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000206")]
	public Shader xrMotionVector
	{
		[Token(Token = "0x6000836")]
		[Address(RVA = "0x667BE50", Offset = "0x667AE50", VA = "0x667BE50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000837")]
		[Address(RVA = "0x667BE60", Offset = "0x667AE60", VA = "0x667BE60")]
		set
		{
		}
	}

	[Token(Token = "0x17000207")]
	internal bool valid
	{
		[Token(Token = "0x6000838")]
		[Address(RVA = "0x667BEC0", Offset = "0x667AEC0", VA = "0x667BEC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x667BF80", Offset = "0x667AF80", VA = "0x667BF80")]
	public UniversalRenderPipelineRuntimeXRResources()
	{
	}
}
