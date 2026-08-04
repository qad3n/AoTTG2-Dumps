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

[Token(Token = "0x2000017")]
public class XRPass
{
	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<XRView> m_Views;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x18")]
	private readonly XROcclusionMesh m_OcclusionMesh;

	[Token(Token = "0x1700000C")]
	public bool enabled
	{
		[Token(Token = "0x60002E6")]
		[Address(RVA = "0x4B73030", Offset = "0x4B73030", VA = "0x4B73030")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000D")]
	public bool supportsFoveatedRendering
	{
		[Token(Token = "0x60002E7")]
		[Address(RVA = "0x4B77D80", Offset = "0x4B77D80", VA = "0x4B77D80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000E")]
	public bool copyDepth
	{
		[Token(Token = "0x60002E8")]
		[Address(RVA = "0x4B77E80", Offset = "0x4B77E80", VA = "0x4B77E80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002E9")]
		[Address(RVA = "0x4B77E90", Offset = "0x4B77E90", VA = "0x4B77E90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public int multipassId
	{
		[Token(Token = "0x60002EA")]
		[Address(RVA = "0x4B77EA0", Offset = "0x4B77EA0", VA = "0x4B77EA0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002EB")]
		[Address(RVA = "0x4B77EB0", Offset = "0x4B77EB0", VA = "0x4B77EB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public int cullingPassId
	{
		[Token(Token = "0x60002EC")]
		[Address(RVA = "0x4B77EC0", Offset = "0x4B77EC0", VA = "0x4B77EC0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002ED")]
		[Address(RVA = "0x4B77ED0", Offset = "0x4B77ED0", VA = "0x4B77ED0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public RenderTargetIdentifier renderTarget
	{
		[Token(Token = "0x60002EE")]
		[Address(RVA = "0x4B77EE0", Offset = "0x4B77EE0", VA = "0x4B77EE0")]
		[CompilerGenerated]
		get
		{
			return default(RenderTargetIdentifier);
		}
		[Token(Token = "0x60002EF")]
		[Address(RVA = "0x4B77F00", Offset = "0x4B77F00", VA = "0x4B77F00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public RenderTextureDescriptor renderTargetDesc
	{
		[Token(Token = "0x60002F0")]
		[Address(RVA = "0x4B77F20", Offset = "0x4B77F20", VA = "0x4B77F20")]
		[CompilerGenerated]
		get
		{
			return default(RenderTextureDescriptor);
		}
		[Token(Token = "0x60002F1")]
		[Address(RVA = "0x4B77F50", Offset = "0x4B77F50", VA = "0x4B77F50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public ScriptableCullingParameters cullingParams
	{
		[Token(Token = "0x60002F2")]
		[Address(RVA = "0x4B77F80", Offset = "0x4B77F80", VA = "0x4B77F80")]
		[CompilerGenerated]
		get
		{
			return default(ScriptableCullingParameters);
		}
		[Token(Token = "0x60002F3")]
		[Address(RVA = "0x4B77FA0", Offset = "0x4B77FA0", VA = "0x4B77FA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public int viewCount
	{
		[Token(Token = "0x60002F4")]
		[Address(RVA = "0x4B74EA0", Offset = "0x4B74EA0", VA = "0x4B74EA0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000015")]
	public bool singlePassEnabled
	{
		[Token(Token = "0x60002F5")]
		[Address(RVA = "0x4B731B0", Offset = "0x4B731B0", VA = "0x4B731B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000016")]
	public IntPtr foveatedRenderingInfo
	{
		[Token(Token = "0x60002F6")]
		[Address(RVA = "0x4B77FC0", Offset = "0x4B77FC0", VA = "0x4B77FC0")]
		[CompilerGenerated]
		get
		{
			return default(IntPtr);
		}
		[Token(Token = "0x60002F7")]
		[Address(RVA = "0x4B77FD0", Offset = "0x4B77FD0", VA = "0x4B77FD0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public bool isHDRDisplayOutputActive
	{
		[Token(Token = "0x60002F8")]
		[Address(RVA = "0x4B77FE0", Offset = "0x4B77FE0", VA = "0x4B77FE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000018")]
	public ColorGamut hdrDisplayOutputColorGamut
	{
		[Token(Token = "0x60002F9")]
		[Address(RVA = "0x4B780C0", Offset = "0x4B780C0", VA = "0x4B780C0")]
		get
		{
			return default(ColorGamut);
		}
	}

	[Token(Token = "0x17000019")]
	public HDROutputUtils.HDRDisplayInformation hdrDisplayOutputInformation
	{
		[Token(Token = "0x60002FA")]
		[Address(RVA = "0x4B781A0", Offset = "0x4B781A0", VA = "0x4B781A0")]
		get
		{
			return default(HDROutputUtils.HDRDisplayInformation);
		}
	}

	[Token(Token = "0x1700001A")]
	public bool hasValidOcclusionMesh
	{
		[Token(Token = "0x6000304")]
		[Address(RVA = "0x4B78560", Offset = "0x4B78560", VA = "0x4B78560")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x4B779A0", Offset = "0x4B779A0", VA = "0x4B779A0")]
	public XRPass()
	{
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x4B77A70", Offset = "0x4B77A70", VA = "0x4B77A70")]
	public static XRPass CreateDefault(XRPassCreateInfo createInfo)
	{
		return null;
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x4B77D20", Offset = "0x4B77D20", VA = "0x4B77D20", Slot = "4")]
	public virtual void Release()
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x4B73110", Offset = "0x4B73110", VA = "0x4B73110")]
	public Matrix4x4 GetProjMatrix(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x4B73070", Offset = "0x4B73070", VA = "0x4B73070")]
	public Matrix4x4 GetViewMatrix(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x4B74DD0", Offset = "0x4B74DD0", VA = "0x4B74DD0")]
	public Rect GetViewport(int viewIndex = 0)
	{
		return default(Rect);
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x4B769A0", Offset = "0x4B769A0", VA = "0x4B769A0")]
	public Mesh GetOcclusionMesh(int viewIndex = 0)
	{
		return null;
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x4B74E40", Offset = "0x4B74E40", VA = "0x4B74E40")]
	public int GetTextureArraySlice(int viewIndex = 0)
	{
		return default(int);
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x4B76F90", Offset = "0x4B76F90", VA = "0x4B76F90")]
	public void StartSinglePass(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x4B78520", Offset = "0x4B78520", VA = "0x4B78520")]
	public void StartSinglePass(RasterCommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x4B76EB0", Offset = "0x4B76EB0", VA = "0x4B76EB0")]
	public void StopSinglePass(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x4B78540", Offset = "0x4B78540", VA = "0x4B78540")]
	public void StopSinglePass(RasterCommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x4B78580", Offset = "0x4B78580", VA = "0x4B78580")]
	public void RenderOcclusionMesh(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x4B785A0", Offset = "0x4B785A0", VA = "0x4B785A0")]
	public void RenderOcclusionMesh(RasterCommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x4B785C0", Offset = "0x4B785C0", VA = "0x4B785C0")]
	public Vector4 ApplyXRViewCenterOffset(Vector2 center)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x4B78750", Offset = "0x4B78750", VA = "0x4B78750")]
	internal void AssignView(int viewId, XRView xrView)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x4B78800", Offset = "0x4B78800", VA = "0x4B78800")]
	internal void AssignCullingParams(int cullingPassId, ScriptableCullingParameters cullingParams)
	{
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x4B746D0", Offset = "0x4B746D0", VA = "0x4B746D0")]
	internal void UpdateCombinedOcclusionMesh()
	{
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x4B77B20", Offset = "0x4B77B20", VA = "0x4B77B20")]
	public void InitBase(XRPassCreateInfo createInfo)
	{
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x4B78880", Offset = "0x4B78880", VA = "0x4B78880")]
	internal void AddView(XRView xrView)
	{
	}
}
