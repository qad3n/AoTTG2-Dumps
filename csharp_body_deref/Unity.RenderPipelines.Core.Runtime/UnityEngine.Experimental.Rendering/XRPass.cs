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
		[Address(RVA = "0x484DF40", Offset = "0x484DF40", VA = "0x484DF40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000D")]
	public bool supportsFoveatedRendering
	{
		[Token(Token = "0x60002E7")]
		[Address(RVA = "0x4852C90", Offset = "0x4852C90", VA = "0x4852C90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000E")]
	public bool copyDepth
	{
		[Token(Token = "0x60002E8")]
		[Address(RVA = "0x4852D90", Offset = "0x4852D90", VA = "0x4852D90")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002E9")]
		[Address(RVA = "0x4852DA0", Offset = "0x4852DA0", VA = "0x4852DA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public int multipassId
	{
		[Token(Token = "0x60002EA")]
		[Address(RVA = "0x4852DB0", Offset = "0x4852DB0", VA = "0x4852DB0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002EB")]
		[Address(RVA = "0x4852DC0", Offset = "0x4852DC0", VA = "0x4852DC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public int cullingPassId
	{
		[Token(Token = "0x60002EC")]
		[Address(RVA = "0x4852DD0", Offset = "0x4852DD0", VA = "0x4852DD0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002ED")]
		[Address(RVA = "0x4852DE0", Offset = "0x4852DE0", VA = "0x4852DE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public RenderTargetIdentifier renderTarget
	{
		[Token(Token = "0x60002EE")]
		[Address(RVA = "0x4852DF0", Offset = "0x4852DF0", VA = "0x4852DF0")]
		[CompilerGenerated]
		get
		{
			return default(RenderTargetIdentifier);
		}
		[Token(Token = "0x60002EF")]
		[Address(RVA = "0x4852E10", Offset = "0x4852E10", VA = "0x4852E10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public RenderTextureDescriptor renderTargetDesc
	{
		[Token(Token = "0x60002F0")]
		[Address(RVA = "0x4852E30", Offset = "0x4852E30", VA = "0x4852E30")]
		[CompilerGenerated]
		get
		{
			return default(RenderTextureDescriptor);
		}
		[Token(Token = "0x60002F1")]
		[Address(RVA = "0x4852E60", Offset = "0x4852E60", VA = "0x4852E60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public ScriptableCullingParameters cullingParams
	{
		[Token(Token = "0x60002F2")]
		[Address(RVA = "0x4852E90", Offset = "0x4852E90", VA = "0x4852E90")]
		[CompilerGenerated]
		get
		{
			return default(ScriptableCullingParameters);
		}
		[Token(Token = "0x60002F3")]
		[Address(RVA = "0x4852EB0", Offset = "0x4852EB0", VA = "0x4852EB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public int viewCount
	{
		[Token(Token = "0x60002F4")]
		[Address(RVA = "0x484FDB0", Offset = "0x484FDB0", VA = "0x484FDB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000015")]
	public bool singlePassEnabled
	{
		[Token(Token = "0x60002F5")]
		[Address(RVA = "0x484E0C0", Offset = "0x484E0C0", VA = "0x484E0C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000016")]
	public IntPtr foveatedRenderingInfo
	{
		[Token(Token = "0x60002F6")]
		[Address(RVA = "0x4852ED0", Offset = "0x4852ED0", VA = "0x4852ED0")]
		[CompilerGenerated]
		get
		{
			return default(IntPtr);
		}
		[Token(Token = "0x60002F7")]
		[Address(RVA = "0x4852EE0", Offset = "0x4852EE0", VA = "0x4852EE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public bool isHDRDisplayOutputActive
	{
		[Token(Token = "0x60002F8")]
		[Address(RVA = "0x4852EF0", Offset = "0x4852EF0", VA = "0x4852EF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000018")]
	public ColorGamut hdrDisplayOutputColorGamut
	{
		[Token(Token = "0x60002F9")]
		[Address(RVA = "0x4852FD0", Offset = "0x4852FD0", VA = "0x4852FD0")]
		get
		{
			return default(ColorGamut);
		}
	}

	[Token(Token = "0x17000019")]
	public HDROutputUtils.HDRDisplayInformation hdrDisplayOutputInformation
	{
		[Token(Token = "0x60002FA")]
		[Address(RVA = "0x48530B0", Offset = "0x48530B0", VA = "0x48530B0")]
		get
		{
			return default(HDROutputUtils.HDRDisplayInformation);
		}
	}

	[Token(Token = "0x1700001A")]
	public bool hasValidOcclusionMesh
	{
		[Token(Token = "0x6000304")]
		[Address(RVA = "0x4853470", Offset = "0x4853470", VA = "0x4853470")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x48528B0", Offset = "0x48528B0", VA = "0x48528B0")]
	public XRPass()
	{
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x4852980", Offset = "0x4852980", VA = "0x4852980")]
	public static XRPass CreateDefault(XRPassCreateInfo createInfo)
	{
		return null;
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x4852C30", Offset = "0x4852C30", VA = "0x4852C30", Slot = "4")]
	public virtual void Release()
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x484E020", Offset = "0x484E020", VA = "0x484E020")]
	public Matrix4x4 GetProjMatrix(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x484DF80", Offset = "0x484DF80", VA = "0x484DF80")]
	public Matrix4x4 GetViewMatrix(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x484FCE0", Offset = "0x484FCE0", VA = "0x484FCE0")]
	public Rect GetViewport(int viewIndex = 0)
	{
		return default(Rect);
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x48518B0", Offset = "0x48518B0", VA = "0x48518B0")]
	public Mesh GetOcclusionMesh(int viewIndex = 0)
	{
		return null;
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x484FD50", Offset = "0x484FD50", VA = "0x484FD50")]
	public int GetTextureArraySlice(int viewIndex = 0)
	{
		return default(int);
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x4851EA0", Offset = "0x4851EA0", VA = "0x4851EA0")]
	public void StartSinglePass(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x4853430", Offset = "0x4853430", VA = "0x4853430")]
	public void StartSinglePass(RasterCommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x4851DC0", Offset = "0x4851DC0", VA = "0x4851DC0")]
	public void StopSinglePass(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x4853450", Offset = "0x4853450", VA = "0x4853450")]
	public void StopSinglePass(RasterCommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x4853490", Offset = "0x4853490", VA = "0x4853490")]
	public void RenderOcclusionMesh(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x48534B0", Offset = "0x48534B0", VA = "0x48534B0")]
	public void RenderOcclusionMesh(RasterCommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x48534D0", Offset = "0x48534D0", VA = "0x48534D0")]
	public Vector4 ApplyXRViewCenterOffset(Vector2 center)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x4853660", Offset = "0x4853660", VA = "0x4853660")]
	internal void AssignView(int viewId, XRView xrView)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x4853710", Offset = "0x4853710", VA = "0x4853710")]
	internal void AssignCullingParams(int cullingPassId, ScriptableCullingParameters cullingParams)
	{
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x484F5E0", Offset = "0x484F5E0", VA = "0x484F5E0")]
	internal void UpdateCombinedOcclusionMesh()
	{
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x4852A30", Offset = "0x4852A30", VA = "0x4852A30")]
	public void InitBase(XRPassCreateInfo createInfo)
	{
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x4853790", Offset = "0x4853790", VA = "0x4853790")]
	internal void AddView(XRView xrView)
	{
	}
}
