// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.XRPass
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x64A86E0", Offset = "0x64A76E0", VA = "0x64A86E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000C")]
	public bool supportsFoveatedRendering
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x64AD940", Offset = "0x64AC940", VA = "0x64AD940")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000D")]
	public bool copyDepth
	{
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x64ADA40", Offset = "0x64ACA40", VA = "0x64ADA40")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x64ADA50", Offset = "0x64ACA50", VA = "0x64ADA50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public bool hasMotionVectorPass
	{
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x64ADA60", Offset = "0x64ACA60", VA = "0x64ADA60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x64ADA70", Offset = "0x64ACA70", VA = "0x64ADA70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public bool spaceWarpRightHandedNDC
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x64ADA80", Offset = "0x64ACA80", VA = "0x64ADA80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x64ADA90", Offset = "0x64ACA90", VA = "0x64ADA90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public bool isFirstCameraPass
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x64ADAA0", Offset = "0x64ACAA0", VA = "0x64ADAA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000011")]
	public bool isLastCameraPass
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x64ADAB0", Offset = "0x64ACAB0", VA = "0x64ADAB0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x64ADAC0", Offset = "0x64ACAC0", VA = "0x64ADAC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public int multipassId
	{
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x64ADAD0", Offset = "0x64ACAD0", VA = "0x64ADAD0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x64ADAE0", Offset = "0x64ACAE0", VA = "0x64ADAE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public int cullingPassId
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x64ADAF0", Offset = "0x64ACAF0", VA = "0x64ADAF0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x64ADB00", Offset = "0x64ACB00", VA = "0x64ADB00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public int renderTargetScaledWidth
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x64ADB10", Offset = "0x64ACB10", VA = "0x64ADB10")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x64ADB20", Offset = "0x64ACB20", VA = "0x64ADB20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public int renderTargetScaledHeight
	{
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x64ADB30", Offset = "0x64ACB30", VA = "0x64ADB30")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x64ADB40", Offset = "0x64ACB40", VA = "0x64ADB40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public RenderTargetIdentifier renderTarget
	{
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x64ADB50", Offset = "0x64ACB50", VA = "0x64ADB50")]
		[CompilerGenerated]
		get
		{
			return default(RenderTargetIdentifier);
		}
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x64ADB70", Offset = "0x64ACB70", VA = "0x64ADB70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public RenderTextureDescriptor renderTargetDesc
	{
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x64ADB90", Offset = "0x64ACB90", VA = "0x64ADB90")]
		[CompilerGenerated]
		get
		{
			return default(RenderTextureDescriptor);
		}
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x64ADBC0", Offset = "0x64ACBC0", VA = "0x64ADBC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public RenderTargetIdentifier motionVectorRenderTarget
	{
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x64ADBF0", Offset = "0x64ACBF0", VA = "0x64ADBF0")]
		[CompilerGenerated]
		get
		{
			return default(RenderTargetIdentifier);
		}
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x64ADC20", Offset = "0x64ACC20", VA = "0x64ADC20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public RenderTextureDescriptor motionVectorRenderTargetDesc
	{
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x64ADC50", Offset = "0x64ACC50", VA = "0x64ADC50")]
		[CompilerGenerated]
		get
		{
			return default(RenderTextureDescriptor);
		}
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x64ADC80", Offset = "0x64ACC80", VA = "0x64ADC80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public ScriptableCullingParameters cullingParams
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x64ADCB0", Offset = "0x64ACCB0", VA = "0x64ADCB0")]
		[CompilerGenerated]
		get
		{
			return default(ScriptableCullingParameters);
		}
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x64ADCD0", Offset = "0x64ACCD0", VA = "0x64ADCD0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public int viewCount
	{
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x64AA750", Offset = "0x64A9750", VA = "0x64AA750")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700001C")]
	public bool singlePassEnabled
	{
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x64A8840", Offset = "0x64A7840", VA = "0x64A8840")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001D")]
	public IntPtr foveatedRenderingInfo
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x64ADCF0", Offset = "0x64ACCF0", VA = "0x64ADCF0")]
		[CompilerGenerated]
		get
		{
			return default(IntPtr);
		}
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x64ADD00", Offset = "0x64ACD00", VA = "0x64ADD00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public bool isHDRDisplayOutputActive
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x64ADD10", Offset = "0x64ACD10", VA = "0x64ADD10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001F")]
	public ColorGamut hdrDisplayOutputColorGamut
	{
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x64ADDF0", Offset = "0x64ACDF0", VA = "0x64ADDF0")]
		get
		{
			return default(ColorGamut);
		}
	}

	[Token(Token = "0x17000020")]
	public HDROutputUtils.HDRDisplayInformation hdrDisplayOutputInformation
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x64ADED0", Offset = "0x64ACED0", VA = "0x64ADED0")]
		get
		{
			return default(HDROutputUtils.HDRDisplayInformation);
		}
	}

	[Token(Token = "0x17000021")]
	public float occlusionMeshScale
	{
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x64AE1E0", Offset = "0x64AD1E0", VA = "0x64AE1E0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x64AE1F0", Offset = "0x64AD1F0", VA = "0x64AE1F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public bool hasValidOcclusionMesh
	{
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x64AE400", Offset = "0x64AD400", VA = "0x64AE400")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000023")]
	public bool hasValidVisibleMesh
	{
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x64AE420", Offset = "0x64AD420", VA = "0x64AE420")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x64AD320", Offset = "0x64AC320", VA = "0x64AD320")]
	public XRPass()
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x64AD460", Offset = "0x64AC460", VA = "0x64AD460")]
	public static XRPass CreateDefault(XRPassCreateInfo createInfo)
	{
		return null;
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x64AD820", Offset = "0x64AC820", VA = "0x64AD820", Slot = "4")]
	public virtual void Release()
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x64A87B0", Offset = "0x64A77B0", VA = "0x64A87B0")]
	public Matrix4x4 GetProjMatrix(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x64A8720", Offset = "0x64A7720", VA = "0x64A8720")]
	public Matrix4x4 GetViewMatrix(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x64AE200", Offset = "0x64AD200", VA = "0x64AE200")]
	public bool GetPrevViewValid(int viewIndex = 0)
	{
		return default(bool);
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x64AE270", Offset = "0x64AD270", VA = "0x64AE270")]
	public Matrix4x4 GetPrevViewMatrix(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x64AA680", Offset = "0x64A9680", VA = "0x64AA680")]
	public Rect GetViewport(int viewIndex = 0)
	{
		return default(Rect);
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x64AC220", Offset = "0x64AB220", VA = "0x64AC220")]
	public Mesh GetOcclusionMesh(int viewIndex = 0)
	{
		return null;
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x64AE310", Offset = "0x64AD310", VA = "0x64AE310")]
	public Mesh GetVisibleMesh(int viewIndex = 0)
	{
		return null;
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x64AA6F0", Offset = "0x64A96F0", VA = "0x64AA6F0")]
	public int GetTextureArraySlice(int viewIndex = 0)
	{
		return default(int);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x64AC8D0", Offset = "0x64AB8D0", VA = "0x64AC8D0")]
	public void StartSinglePass(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x64AE370", Offset = "0x64AD370", VA = "0x64AE370")]
	public void StartSinglePass(IRasterCommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x64AC7E0", Offset = "0x64AB7E0", VA = "0x64AC7E0")]
	public void StopSinglePass(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x64AE3E0", Offset = "0x64AD3E0", VA = "0x64AE3E0")]
	public void StopSinglePass(BaseCommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x64AE620", Offset = "0x64AD620", VA = "0x64AE620")]
	public void RenderOcclusionMesh(CommandBuffer cmd, bool renderIntoTexture = false)
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x64AE650", Offset = "0x64AD650", VA = "0x64AE650")]
	public void RenderOcclusionMesh(RasterCommandBuffer cmd, bool renderIntoTexture = false)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x64AE690", Offset = "0x64AD690", VA = "0x64AE690")]
	public void RenderVisibleMeshCustomMaterial(RasterCommandBuffer cmd, float occlusionMeshScale, Material material, MaterialPropertyBlock materialBlock, int shaderPass, bool renderIntoTexture = false)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x64AE9E0", Offset = "0x64AD9E0", VA = "0x64AE9E0")]
	public void RenderVisibleMeshCustomMaterial(CommandBuffer cmd, float occlusionMeshScale, Material material, MaterialPropertyBlock materialBlock, int shaderPass = 0, bool renderIntoTexture = false)
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x64AEA10", Offset = "0x64ADA10", VA = "0x64AEA10")]
	public void RenderDebugXRViewsFrustum()
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x64AF0F0", Offset = "0x64AE0F0", VA = "0x64AF0F0")]
	public Vector4 ApplyXRViewCenterOffset(Vector2 center)
	{
		return default(Vector4);
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x64AF290", Offset = "0x64AE290", VA = "0x64AF290")]
	internal void AssignView(int viewId, XRView xrView)
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x64AF340", Offset = "0x64AE340", VA = "0x64AF340")]
	internal void AssignCullingParams(int cullingPassId, ScriptableCullingParameters cullingParams)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x64A9F40", Offset = "0x64A8F40", VA = "0x64A9F40")]
	internal void UpdateCombinedOcclusionMesh()
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x64AD4F0", Offset = "0x64AC4F0", VA = "0x64AD4F0")]
	public void InitBase(XRPassCreateInfo createInfo)
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x64AF4E0", Offset = "0x64AE4E0", VA = "0x64AF4E0")]
	internal void AddView(XRView xrView)
	{
	}
}
