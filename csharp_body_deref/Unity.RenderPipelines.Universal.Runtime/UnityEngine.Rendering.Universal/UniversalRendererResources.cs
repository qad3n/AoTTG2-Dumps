// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRendererResources
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
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000209")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x600083B")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020A")]
	public Shader copyDepthPS
	{
		[Token(Token = "0x600083C")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x600083D")]
		[Address(RVA = "0x2C8EB80", Offset = "0x2C8D180", VA = "0x182C8EB80")]
		set
		{
		}
	}

	[Token(Token = "0x1700020B")]
	public Shader cameraMotionVector
	{
		[Token(Token = "0x600083E")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600083F")]
		[Address(RVA = "0x2C8EAA0", Offset = "0x2C8D0A0", VA = "0x182C8EAA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700020C")]
	public Shader stencilDeferredPS
	{
		[Token(Token = "0x6000840")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000841")]
		[Address(RVA = "0x2C8EC60", Offset = "0x2C8D260", VA = "0x182C8EC60")]
		set
		{
		}
	}

	[Token(Token = "0x1700020D")]
	public Shader clusterDeferred
	{
		[Token(Token = "0x6000842")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000843")]
		[Address(RVA = "0x2C8EB10", Offset = "0x2C8D110", VA = "0x182C8EB10")]
		set
		{
		}
	}

	[Token(Token = "0x1700020E")]
	public Shader stencilDitherMaskSeedPS
	{
		[Token(Token = "0x6000844")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000845")]
		[Address(RVA = "0x2C8ECD0", Offset = "0x2C8D2D0", VA = "0x182C8ECD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700020F")]
	public Shader decalDBufferClear
	{
		[Token(Token = "0x6000846")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000847")]
		[Address(RVA = "0x2C8EBF0", Offset = "0x2C8D1F0", VA = "0x182C8EBF0")]
		set
		{
		}
	}

	[Token(Token = "0x6000848")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public UniversalRendererResources()
	{
	}
}
