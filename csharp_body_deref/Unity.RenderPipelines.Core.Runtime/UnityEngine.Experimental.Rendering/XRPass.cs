// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.XRPass
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x2000010")]
public class XRPass
{
	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<XRView> m_Views;

	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x18")]
	private readonly XROcclusionMesh m_OcclusionMesh;

	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0x20")]
	private readonly XRVisibleMesh m_VisibleMesh;

	[Token(Token = "0x1700000B")]
	public bool enabled
	{
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x2ACD240", Offset = "0x2ACB840", VA = "0x182ACD240")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000C")]
	public bool supportsFoveatedRendering
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x2ACD9C0", Offset = "0x2ACBFC0", VA = "0x182ACD9C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000D")]
	public bool copyDepth
	{
		[Token(Token = "0x6000046")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000047")]
		[Address(RVA = "0xF1D940", Offset = "0xF1BF40", VA = "0x180F1D940")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public bool hasMotionVectorPass
	{
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x1573470", Offset = "0x1571A70", VA = "0x181573470")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x15736C0", Offset = "0x1571CC0", VA = "0x1815736C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public bool spaceWarpRightHandedNDC
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x1573430", Offset = "0x1571A30", VA = "0x181573430")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x15736B0", Offset = "0x1571CB0", VA = "0x1815736B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public bool isFirstCameraPass
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x2ACD7F0", Offset = "0x2ACBDF0", VA = "0x182ACD7F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000011")]
	public bool isLastCameraPass
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x20FB1B0", Offset = "0x20F97B0", VA = "0x1820FB1B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x20FB210", Offset = "0x20F9810", VA = "0x1820FB210")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public int multipassId
	{
		[Token(Token = "0x600004F")]
		[Address(RVA = "0xB3E080", Offset = "0xB3C680", VA = "0x180B3E080")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000050")]
		[Address(RVA = "0xB3E0E0", Offset = "0xB3C6E0", VA = "0x180B3E0E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public int cullingPassId
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x1826560", Offset = "0x1824B60", VA = "0x181826560")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public int renderTargetScaledWidth
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x16EF8A0", Offset = "0x16EDEA0", VA = "0x1816EF8A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x16EFA10", Offset = "0x16EE010", VA = "0x1816EFA10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public int renderTargetScaledHeight
	{
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x1A40490", Offset = "0x1A3EA90", VA = "0x181A40490")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public RenderTargetIdentifier renderTarget
	{
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x2ACD950", Offset = "0x2ACBF50", VA = "0x182ACD950")]
		[CompilerGenerated]
		get
		{
			return default(RenderTargetIdentifier);
		}
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x2ACDBA0", Offset = "0x2ACC1A0", VA = "0x182ACDBA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public RenderTextureDescriptor renderTargetDesc
	{
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x2ACD920", Offset = "0x2ACBF20", VA = "0x182ACD920")]
		[CompilerGenerated]
		get
		{
			return default(RenderTextureDescriptor);
		}
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x2ACDB70", Offset = "0x2ACC170", VA = "0x182ACDB70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public RenderTargetIdentifier motionVectorRenderTarget
	{
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x2ACD8E0", Offset = "0x2ACBEE0", VA = "0x182ACD8E0")]
		[CompilerGenerated]
		get
		{
			return default(RenderTargetIdentifier);
		}
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x2ACDB30", Offset = "0x2ACC130", VA = "0x182ACDB30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public RenderTextureDescriptor motionVectorRenderTargetDesc
	{
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x2ACD8B0", Offset = "0x2ACBEB0", VA = "0x182ACD8B0")]
		[CompilerGenerated]
		get
		{
			return default(RenderTextureDescriptor);
		}
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x2ACDB00", Offset = "0x2ACC100", VA = "0x182ACDB00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public ScriptableCullingParameters cullingParams
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x2ACD210", Offset = "0x2ACB810", VA = "0x182ACD210")]
		[CompilerGenerated]
		get
		{
			return default(ScriptableCullingParameters);
		}
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x2ACDAD0", Offset = "0x2ACC0D0", VA = "0x182ACDAD0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public int viewCount
	{
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x2ACDA90", Offset = "0x2ACC090", VA = "0x182ACDA90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700001C")]
	public bool singlePassEnabled
	{
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x2ACD970", Offset = "0x2ACBF70", VA = "0x182ACD970")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001D")]
	public IntPtr foveatedRenderingInfo
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x2ACD290", Offset = "0x2ACB890", VA = "0x182ACD290")]
		[CompilerGenerated]
		get
		{
			return default(IntPtr);
		}
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x2ACDAF0", Offset = "0x2ACC0F0", VA = "0x182ACDAF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public bool isHDRDisplayOutputActive
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x2ACD800", Offset = "0x2ACBE00", VA = "0x182ACD800")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001F")]
	public ColorGamut hdrDisplayOutputColorGamut
	{
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x2ACD4D0", Offset = "0x2ACBAD0", VA = "0x182ACD4D0")]
		get
		{
			return default(ColorGamut);
		}
	}

	[Token(Token = "0x17000020")]
	public HDROutputUtils.HDRDisplayInformation hdrDisplayOutputInformation
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x2ACD580", Offset = "0x2ACBB80", VA = "0x182ACD580")]
		get
		{
			return default(HDROutputUtils.HDRDisplayInformation);
		}
	}

	[Token(Token = "0x17000021")]
	public float occlusionMeshScale
	{
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x2ACD910", Offset = "0x2ACBF10", VA = "0x182ACD910")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x2ACDB60", Offset = "0x2ACC160", VA = "0x182ACDB60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public bool hasValidOcclusionMesh
	{
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x2ACD2A0", Offset = "0x2ACB8A0", VA = "0x182ACD2A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000023")]
	public bool hasValidVisibleMesh
	{
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x2ACD370", Offset = "0x2ACB970", VA = "0x182ACD370")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x2ACD100", Offset = "0x2ACB700", VA = "0x182ACD100")]
	public XRPass()
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x2ACBDA0", Offset = "0x2ACA3A0", VA = "0x182ACBDA0")]
	public static XRPass CreateDefault(XRPassCreateInfo createInfo)
	{
		return null;
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x2ACC680", Offset = "0x2ACAC80", VA = "0x182ACC680", Slot = "4")]
	public virtual void Release()
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x2ACBFD0", Offset = "0x2ACA5D0", VA = "0x182ACBFD0")]
	public Matrix4x4 GetProjMatrix(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x2ACC0E0", Offset = "0x2ACA6E0", VA = "0x182ACC0E0")]
	public Matrix4x4 GetViewMatrix(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x2ACBF60", Offset = "0x2ACA560", VA = "0x182ACBF60")]
	public bool GetPrevViewValid(int viewIndex = 0)
	{
		return default(bool);
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x2ACBEB0", Offset = "0x2ACA4B0", VA = "0x182ACBEB0")]
	public Matrix4x4 GetPrevViewMatrix(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x2ACC180", Offset = "0x2ACA780", VA = "0x182ACC180")]
	public Rect GetViewport(int viewIndex = 0)
	{
		return default(Rect);
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x2ACBE40", Offset = "0x2ACA440", VA = "0x182ACBE40")]
	public Mesh GetOcclusionMesh(int viewIndex = 0)
	{
		return null;
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x2ACC200", Offset = "0x2ACA800", VA = "0x182ACC200")]
	public Mesh GetVisibleMesh(int viewIndex = 0)
	{
		return null;
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x2ACC070", Offset = "0x2ACA670", VA = "0x182ACC070")]
	public int GetTextureArraySlice(int viewIndex = 0)
	{
		return default(int);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x2ACCD80", Offset = "0x2ACB380", VA = "0x182ACCD80")]
	public void StartSinglePass(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x2ACCCE0", Offset = "0x2ACB2E0", VA = "0x182ACCCE0")]
	public void StartSinglePass(IRasterCommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x2ACCFD0", Offset = "0x2ACB5D0", VA = "0x182ACCFD0")]
	public void StopSinglePass(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x2ACCFB0", Offset = "0x2ACB5B0", VA = "0x182ACCFB0")]
	public void StopSinglePass(BaseCommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x2ACCC00", Offset = "0x2ACB200", VA = "0x182ACCC00")]
	public void RenderOcclusionMesh(CommandBuffer cmd, bool renderIntoTexture = false)
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x2ACCBB0", Offset = "0x2ACB1B0", VA = "0x182ACCBB0")]
	public void RenderOcclusionMesh(RasterCommandBuffer cmd, bool renderIntoTexture = false)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x2ACCC90", Offset = "0x2ACB290", VA = "0x182ACCC90")]
	public void RenderVisibleMeshCustomMaterial(RasterCommandBuffer cmd, float occlusionMeshScale, Material material, MaterialPropertyBlock materialBlock, int shaderPass, bool renderIntoTexture = false)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x2ACCC40", Offset = "0x2ACB240", VA = "0x182ACCC40")]
	public void RenderVisibleMeshCustomMaterial(CommandBuffer cmd, float occlusionMeshScale, Material material, MaterialPropertyBlock materialBlock, int shaderPass = 0, bool renderIntoTexture = false)
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x2ACC790", Offset = "0x2ACAD90", VA = "0x182ACC790")]
	public void RenderDebugXRViewsFrustum()
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x2ACB9B0", Offset = "0x2AC9FB0", VA = "0x182ACB9B0")]
	public Vector4 ApplyXRViewCenterOffset(Vector2 center)
	{
		return default(Vector4);
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x2ACBC10", Offset = "0x2ACA210", VA = "0x182ACBC10")]
	internal void AssignView(int viewId, XRView xrView)
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x2ACBB80", Offset = "0x2ACA180", VA = "0x182ACBB80")]
	internal void AssignCullingParams(int cullingPassId, ScriptableCullingParameters cullingParams)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x2ACD0C0", Offset = "0x2ACB6C0", VA = "0x182ACD0C0")]
	internal void UpdateCombinedOcclusionMesh()
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x2ACC270", Offset = "0x2ACA870", VA = "0x182ACC270")]
	public void InitBase(XRPassCreateInfo createInfo)
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x2ACB640", Offset = "0x2AC9C40", VA = "0x182ACB640")]
	internal void AddView(XRView xrView)
	{
	}
}
