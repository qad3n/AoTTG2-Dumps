// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRendererResources
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
[Token(Token = "0x200016B")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
[CategoryInfo(Name = "R: Universal Renderer Shaders", Order = 1000)]
[HideInInspector]
public class UniversalRendererResources : IRenderPipelineResources, IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x400084D")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[HideInInspector]
	private int m_Version;

	[Token(Token = "0x400084E")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[ResourcePath("Shaders/Utils/CopyDepth.shader", SearchType.ProjectPath)]
	private Shader m_CopyDepthPS;

	[Token(Token = "0x400084F")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[ResourcePath("Shaders/CameraMotionVectors.shader", SearchType.ProjectPath)]
	private Shader m_CameraMotionVector;

	[Token(Token = "0x4000850")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[ResourcePath("Shaders/Utils/StencilDeferred.shader", SearchType.ProjectPath)]
	private Shader m_StencilDeferredPS;

	[Token(Token = "0x4000851")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	[ResourcePath("Shaders/Utils/ClusterDeferred.shader", SearchType.ProjectPath)]
	private Shader m_ClusterDeferred;

	[Token(Token = "0x4000852")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	[ResourcePath("Shaders/Utils/StencilDitherMaskSeed.shader", SearchType.ProjectPath)]
	private Shader m_StencilDitherMaskSeedPS;

	[Token(Token = "0x4000853")]
	[FieldOffset(Offset = "0x40")]
	[Header("Decal Renderer Feature Specific")]
	[SerializeField]
	[ResourcePath("Runtime/Decal/DBuffer/DBufferClear.shader", SearchType.ProjectPath)]
	private Shader m_DBufferClear;

	[Token(Token = "0x17000208")]
	public int version
	{
		[Token(Token = "0x600083A")]
		[Address(RVA = "0x667BF90", Offset = "0x667AF90", VA = "0x667BF90", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000209")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x600083B")]
		[Address(RVA = "0x667BFA0", Offset = "0x667AFA0", VA = "0x667BFA0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020A")]
	public Shader copyDepthPS
	{
		[Token(Token = "0x600083C")]
		[Address(RVA = "0x667BFB0", Offset = "0x667AFB0", VA = "0x667BFB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600083D")]
		[Address(RVA = "0x667BFC0", Offset = "0x667AFC0", VA = "0x667BFC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700020B")]
	public Shader cameraMotionVector
	{
		[Token(Token = "0x600083E")]
		[Address(RVA = "0x667C020", Offset = "0x667B020", VA = "0x667C020")]
		get
		{
			return null;
		}
		[Token(Token = "0x600083F")]
		[Address(RVA = "0x667C030", Offset = "0x667B030", VA = "0x667C030")]
		set
		{
		}
	}

	[Token(Token = "0x1700020C")]
	public Shader stencilDeferredPS
	{
		[Token(Token = "0x6000840")]
		[Address(RVA = "0x667C090", Offset = "0x667B090", VA = "0x667C090")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000841")]
		[Address(RVA = "0x667C0A0", Offset = "0x667B0A0", VA = "0x667C0A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700020D")]
	public Shader clusterDeferred
	{
		[Token(Token = "0x6000842")]
		[Address(RVA = "0x667C100", Offset = "0x667B100", VA = "0x667C100")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000843")]
		[Address(RVA = "0x667C110", Offset = "0x667B110", VA = "0x667C110")]
		set
		{
		}
	}

	[Token(Token = "0x1700020E")]
	public Shader stencilDitherMaskSeedPS
	{
		[Token(Token = "0x6000844")]
		[Address(RVA = "0x667C170", Offset = "0x667B170", VA = "0x667C170")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000845")]
		[Address(RVA = "0x667C180", Offset = "0x667B180", VA = "0x667C180")]
		set
		{
		}
	}

	[Token(Token = "0x1700020F")]
	public Shader decalDBufferClear
	{
		[Token(Token = "0x6000846")]
		[Address(RVA = "0x667C1E0", Offset = "0x667B1E0", VA = "0x667C1E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000847")]
		[Address(RVA = "0x667C1F0", Offset = "0x667B1F0", VA = "0x667C1F0")]
		set
		{
		}
	}

	[Token(Token = "0x6000848")]
	[Address(RVA = "0x667C250", Offset = "0x667B250", VA = "0x667C250")]
	public UniversalRendererResources()
	{
	}
}
