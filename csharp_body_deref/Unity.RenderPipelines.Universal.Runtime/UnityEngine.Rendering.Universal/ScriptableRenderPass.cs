// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ScriptableRenderPass
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x661DB60", Offset = "0x661CB60", VA = "0x661DB60")]
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
		[Address(RVA = "0x661DB70", Offset = "0x661CB70", VA = "0x661DB70")]
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
		[Address(RVA = "0x661DB80", Offset = "0x661CB80", VA = "0x661DB80")]
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
		[Address(RVA = "0x661DB90", Offset = "0x661CB90", VA = "0x661DB90")]
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
		[Address(RVA = "0x661DBA0", Offset = "0x661CBA0", VA = "0x661DBA0")]
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
		[Address(RVA = "0x661DBB0", Offset = "0x661CBB0", VA = "0x661DBB0")]
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
		[Address(RVA = "0x661DBC0", Offset = "0x661CBC0", VA = "0x661DBC0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170000EA")]
	public RenderPassEvent renderPassEvent
	{
		[Token(Token = "0x6000396")]
		[Address(RVA = "0x661DCD0", Offset = "0x661CCD0", VA = "0x661DCD0")]
		[CompilerGenerated]
		get
		{
			return default(RenderPassEvent);
		}
		[Token(Token = "0x6000397")]
		[Address(RVA = "0x661DCE0", Offset = "0x661CCE0", VA = "0x661DCE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000EB")]
	public ScriptableRenderPassInput input
	{
		[Token(Token = "0x6000398")]
		[Address(RVA = "0x661DCF0", Offset = "0x661CCF0", VA = "0x661DCF0")]
		get
		{
			return default(ScriptableRenderPassInput);
		}
	}

	[Token(Token = "0x170000EC")]
	public bool requiresIntermediateTexture
	{
		[Token(Token = "0x6000399")]
		[Address(RVA = "0x661DD00", Offset = "0x661CD00", VA = "0x661DD00")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600039A")]
		[Address(RVA = "0x661DD10", Offset = "0x661CD10", VA = "0x661DD10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000ED")]
	protected internal ProfilingSampler profilingSampler
	{
		[Token(Token = "0x600039B")]
		[Address(RVA = "0x660FBB0", Offset = "0x660EBB0", VA = "0x660FBB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600039C")]
		[Address(RVA = "0x660DF10", Offset = "0x660CF10", VA = "0x660DF10")]
		set
		{
		}
	}

	[Token(Token = "0x170000EE")]
	protected internal string passName
	{
		[Token(Token = "0x600039D")]
		[Address(RVA = "0x661DD20", Offset = "0x661CD20", VA = "0x661DD20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EF")]
	internal bool isBlitRenderPass
	{
		[Token(Token = "0x600039E")]
		[Address(RVA = "0x661DD30", Offset = "0x661CD30", VA = "0x661DD30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600039F")]
		[Address(RVA = "0x661DD40", Offset = "0x661CD40", VA = "0x661DD40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000F0")]
	internal int renderPassQueueIndex
	{
		[Token(Token = "0x60003A0")]
		[Address(RVA = "0x661DD50", Offset = "0x661CD50", VA = "0x661DD50")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60003A1")]
		[Address(RVA = "0x661DD60", Offset = "0x661CD60", VA = "0x661DD60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000F1")]
	internal GraphicsFormat[] renderTargetFormat
	{
		[Token(Token = "0x60003A2")]
		[Address(RVA = "0x661DD70", Offset = "0x661CD70", VA = "0x661DD70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60003A3")]
		[Address(RVA = "0x661DD80", Offset = "0x661CD80", VA = "0x661DD80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x661DB40", Offset = "0x661CB40", VA = "0x661DB40", Slot = "5")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public virtual void FrameCleanup(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000386")]
	[Address(RVA = "0x661DBD0", Offset = "0x661CBD0", VA = "0x661DBD0")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void ConfigureColorStoreAction(RenderBufferStoreAction storeAction, uint attachmentIndex = 0u)
	{
	}

	[Token(Token = "0x6000387")]
	[Address(RVA = "0x661DBE0", Offset = "0x661CBE0", VA = "0x661DBE0")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void ConfigureColorStoreActions(RenderBufferStoreAction[] storeActions)
	{
	}

	[Token(Token = "0x6000388")]
	[Address(RVA = "0x661DBF0", Offset = "0x661CBF0", VA = "0x661DBF0")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void ConfigureDepthStoreAction(RenderBufferStoreAction storeAction)
	{
	}

	[Token(Token = "0x6000389")]
	[Address(RVA = "0x661DC00", Offset = "0x661CC00", VA = "0x661DC00")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void ResetTarget()
	{
	}

	[Token(Token = "0x600038A")]
	[Address(RVA = "0x661DC10", Offset = "0x661CC10", VA = "0x661DC10")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void ConfigureTarget(RTHandle colorAttachment, RTHandle depthAttachment)
	{
	}

	[Token(Token = "0x600038B")]
	[Address(RVA = "0x661DC20", Offset = "0x661CC20", VA = "0x661DC20")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void ConfigureTarget(RTHandle[] colorAttachments, RTHandle depthAttachment)
	{
	}

	[Token(Token = "0x600038C")]
	[Address(RVA = "0x661DC30", Offset = "0x661CC30", VA = "0x661DC30")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void ConfigureTarget(RTHandle colorAttachment)
	{
	}

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x661DC40", Offset = "0x661CC40", VA = "0x661DC40")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void ConfigureTarget(RTHandle[] colorAttachments)
	{
	}

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x661DC50", Offset = "0x661CC50", VA = "0x661DC50")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void ConfigureClear(ClearFlag clearFlag, Color clearColor)
	{
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x661DC60", Offset = "0x661CC60", VA = "0x661DC60", Slot = "6")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public virtual void OnCameraSetup(CommandBuffer cmd, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000390")]
	[Address(RVA = "0x661DC70", Offset = "0x661CC70", VA = "0x661DC70", Slot = "7")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public virtual void Configure(CommandBuffer cmd, RenderTextureDescriptor cameraTextureDescriptor)
	{
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x661DC80", Offset = "0x661CC80", VA = "0x661DC80", Slot = "8")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public virtual void OnFinishCameraStackRendering(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x661DC90", Offset = "0x661CC90", VA = "0x661DC90", Slot = "9")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public virtual void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x661DCA0", Offset = "0x661CCA0", VA = "0x661DCA0")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void Blit(CommandBuffer cmd, RTHandle source, RTHandle destination, [Optional] Material material, int passIndex = 0)
	{
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x661DCB0", Offset = "0x661CCB0", VA = "0x661DCB0")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void Blit(CommandBuffer cmd, ref RenderingData data, Material material, int passIndex = 0)
	{
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x661DCC0", Offset = "0x661CCC0", VA = "0x661DCC0")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void Blit(CommandBuffer cmd, ref RenderingData data, RTHandle source, Material material, int passIndex = 0)
	{
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x661DD90", Offset = "0x661CD90", VA = "0x661DD90")]
	internal static DebugHandler GetActiveDebugHandler(UniversalCameraData cameraData)
	{
		return null;
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x660DE30", Offset = "0x660CE30", VA = "0x660DE30")]
	public ScriptableRenderPass()
	{
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x661DDF0", Offset = "0x661CDF0", VA = "0x661DDF0")]
	public void ConfigureInput(ScriptableRenderPassInput passInput)
	{
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x661DE00", Offset = "0x661CE00", VA = "0x661DE00", Slot = "10")]
	public virtual void OnCameraCleanup(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x661DE10", Offset = "0x661CE10", VA = "0x661DE10", Slot = "11")]
	public virtual void RecordRenderGraph(RenderGraph renderGraph, ContextContainer frameData)
	{
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x661DEB0", Offset = "0x661CEB0", VA = "0x661DEB0")]
	public DrawingSettings CreateDrawingSettings(ShaderTagId shaderTagId, ref RenderingData renderingData, SortingCriteria sortingCriteria)
	{
		return default(DrawingSettings);
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x661DFD0", Offset = "0x661CFD0", VA = "0x661DFD0")]
	public DrawingSettings CreateDrawingSettings(ShaderTagId shaderTagId, UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData, SortingCriteria sortingCriteria)
	{
		return default(DrawingSettings);
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x661E080", Offset = "0x661D080", VA = "0x661E080")]
	public DrawingSettings CreateDrawingSettings(List<ShaderTagId> shaderTagIdList, ref RenderingData renderingData, SortingCriteria sortingCriteria)
	{
		return default(DrawingSettings);
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x661E1A0", Offset = "0x661D1A0", VA = "0x661E1A0")]
	public DrawingSettings CreateDrawingSettings(List<ShaderTagId> shaderTagIdList, UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData, SortingCriteria sortingCriteria)
	{
		return default(DrawingSettings);
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x661E250", Offset = "0x661D250", VA = "0x661E250")]
	public static bool operator <(ScriptableRenderPass lhs, ScriptableRenderPass rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x661E270", Offset = "0x661D270", VA = "0x661E270")]
	public static bool operator >(ScriptableRenderPass lhs, ScriptableRenderPass rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x661E290", Offset = "0x661D290", VA = "0x661E290")]
	internal static int GetRenderPassEventRange(RenderPassEvent renderPassEvent)
	{
		return default(int);
	}
}
