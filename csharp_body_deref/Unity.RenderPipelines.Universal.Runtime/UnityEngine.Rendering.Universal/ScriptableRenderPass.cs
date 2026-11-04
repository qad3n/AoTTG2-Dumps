// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ScriptableRenderPass
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200009C")]
public abstract class ScriptableRenderPass : IRenderGraphRecorder
{
	[Token(Token = "0x4000303")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public static RTHandle k_CameraTarget;

	[Token(Token = "0x4000306")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private ProfilingSampler m_ProfingSampler;

	[Token(Token = "0x4000307")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string m_PassName;

	[Token(Token = "0x400030A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal NativeArray<int> m_ColorAttachmentIndices;

	[Token(Token = "0x400030B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal NativeArray<int> m_InputAttachmentIndices;

	[Token(Token = "0x400030D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private ScriptableRenderPassInput m_Input;

	[Token(Token = "0x170000E3")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public RTHandle[] colorAttachmentHandles
	{
		[Token(Token = "0x600037F")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E4")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public RTHandle colorAttachmentHandle
	{
		[Token(Token = "0x6000380")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E5")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public RTHandle depthAttachmentHandle
	{
		[Token(Token = "0x6000381")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E6")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public RenderBufferStoreAction[] colorStoreActions
	{
		[Token(Token = "0x6000382")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E7")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public RenderBufferStoreAction depthStoreAction
	{
		[Token(Token = "0x6000383")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return default(RenderBufferStoreAction);
		}
	}

	[Token(Token = "0x170000E8")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public ClearFlag clearFlag
	{
		[Token(Token = "0x6000384")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return default(ClearFlag);
		}
	}

	[Token(Token = "0x170000E9")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public Color clearColor
	{
		[Token(Token = "0x6000385")]
		[Address(RVA = "0x8ED540", Offset = "0x8EBB40", VA = "0x1808ED540")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170000EA")]
	public RenderPassEvent renderPassEvent
	{
		[Token(Token = "0x6000396")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(RenderPassEvent);
		}
		[Token(Token = "0x6000397")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000EB")]
	public ScriptableRenderPassInput input
	{
		[Token(Token = "0x6000398")]
		[Address(RVA = "0x1BD3CB0", Offset = "0x1BD22B0", VA = "0x181BD3CB0")]
		get
		{
			return default(ScriptableRenderPassInput);
		}
	}

	[Token(Token = "0x170000EC")]
	public bool requiresIntermediateTexture
	{
		[Token(Token = "0x6000399")]
		[Address(RVA = "0x1537420", Offset = "0x1535A20", VA = "0x181537420")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600039A")]
		[Address(RVA = "0x1A78710", Offset = "0x1A76D10", VA = "0x181A78710")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000ED")]
	protected internal ProfilingSampler profilingSampler
	{
		[Token(Token = "0x600039B")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600039C")]
		[Address(RVA = "0x2C29F60", Offset = "0x2C28560", VA = "0x182C29F60")]
		set
		{
		}
	}

	[Token(Token = "0x170000EE")]
	protected internal string passName
	{
		[Token(Token = "0x600039D")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EF")]
	internal bool isBlitRenderPass
	{
		[Token(Token = "0x600039E")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600039F")]
		[Address(RVA = "0xF1D940", Offset = "0xF1BF40", VA = "0x180F1D940")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000F0")]
	internal int renderPassQueueIndex
	{
		[Token(Token = "0x60003A0")]
		[Address(RVA = "0xB3E080", Offset = "0xB3C680", VA = "0x180B3E080")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60003A1")]
		[Address(RVA = "0xB3E0E0", Offset = "0xB3C6E0", VA = "0x180B3E0E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000F1")]
	internal GraphicsFormat[] renderTargetFormat
	{
		[Token(Token = "0x60003A2")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60003A3")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x270EA00", Offset = "0x270D000", VA = "0x18270EA00", Slot = "5")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public virtual void FrameCleanup(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000386")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void ConfigureColorStoreAction(RenderBufferStoreAction storeAction, uint attachmentIndex = 0u)
	{
	}

	[Token(Token = "0x6000387")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void ConfigureColorStoreActions(RenderBufferStoreAction[] storeActions)
	{
	}

	[Token(Token = "0x6000388")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void ConfigureDepthStoreAction(RenderBufferStoreAction storeAction)
	{
	}

	[Token(Token = "0x6000389")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void ResetTarget()
	{
	}

	[Token(Token = "0x600038A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void ConfigureTarget(RTHandle colorAttachment, RTHandle depthAttachment)
	{
	}

	[Token(Token = "0x600038B")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void ConfigureTarget(RTHandle[] colorAttachments, RTHandle depthAttachment)
	{
	}

	[Token(Token = "0x600038C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void ConfigureTarget(RTHandle colorAttachment)
	{
	}

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void ConfigureTarget(RTHandle[] colorAttachments)
	{
	}

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void ConfigureClear(ClearFlag clearFlag, Color clearColor)
	{
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public virtual void OnCameraSetup(CommandBuffer cmd, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000390")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public virtual void Configure(CommandBuffer cmd, RenderTextureDescriptor cameraTextureDescriptor)
	{
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public virtual void OnFinishCameraStackRendering(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public virtual void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void Blit(CommandBuffer cmd, RTHandle source, RTHandle destination, [Optional] Material material, int passIndex = 0)
	{
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void Blit(CommandBuffer cmd, ref RenderingData data, Material material, int passIndex = 0)
	{
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void Blit(CommandBuffer cmd, ref RenderingData data, RTHandle source, Material material, int passIndex = 0)
	{
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x2C29BB0", Offset = "0x2C281B0", VA = "0x182C29BB0")]
	internal static DebugHandler GetActiveDebugHandler(UniversalCameraData cameraData)
	{
		return null;
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x2C29E10", Offset = "0x2C28410", VA = "0x182C29E10")]
	public ScriptableRenderPass()
	{
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x1ADFEB0", Offset = "0x1ADE4B0", VA = "0x181ADFEB0")]
	public void ConfigureInput(ScriptableRenderPassInput passInput)
	{
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
	public virtual void OnCameraCleanup(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x2C29D80", Offset = "0x2C28380", VA = "0x182C29D80", Slot = "11")]
	public virtual void RecordRenderGraph(RenderGraph renderGraph, ContextContainer frameData)
	{
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x2C29A10", Offset = "0x2C28010", VA = "0x182C29A10")]
	public DrawingSettings CreateDrawingSettings(ShaderTagId shaderTagId, ref RenderingData renderingData, SortingCriteria sortingCriteria)
	{
		return default(DrawingSettings);
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x2C29620", Offset = "0x2C27C20", VA = "0x182C29620")]
	public DrawingSettings CreateDrawingSettings(ShaderTagId shaderTagId, UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData, SortingCriteria sortingCriteria)
	{
		return default(DrawingSettings);
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x2C29870", Offset = "0x2C27E70", VA = "0x182C29870")]
	public DrawingSettings CreateDrawingSettings(List<ShaderTagId> shaderTagIdList, ref RenderingData renderingData, SortingCriteria sortingCriteria)
	{
		return default(DrawingSettings);
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x2C29740", Offset = "0x2C27D40", VA = "0x182C29740")]
	public DrawingSettings CreateDrawingSettings(List<ShaderTagId> shaderTagIdList, UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData, SortingCriteria sortingCriteria)
	{
		return default(DrawingSettings);
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x2C29F30", Offset = "0x2C28530", VA = "0x182C29F30")]
	public static bool operator <(ScriptableRenderPass lhs, ScriptableRenderPass rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x2C29F00", Offset = "0x2C28500", VA = "0x182C29F00")]
	public static bool operator >(ScriptableRenderPass lhs, ScriptableRenderPass rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x2C29C10", Offset = "0x2C28210", VA = "0x182C29C10")]
	internal static int GetRenderPassEventRange(RenderPassEvent renderPassEvent)
	{
		return default(int);
	}
}
