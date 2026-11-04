// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderPipelineManager
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003BE")]
public static class RenderPipelineManager
{
	[Token(Token = "0x4000BE9")]
	[FieldOffset(Offset = "0x0")]
	private static bool s_CleanUpPipeline;

	[Token(Token = "0x4000BEA")]
	[FieldOffset(Offset = "0x8")]
	private static RenderPipelineAsset s_CurrentPipelineAsset;

	[Token(Token = "0x4000BEB")]
	[FieldOffset(Offset = "0x10")]
	private static RenderPipeline s_CurrentPipeline;

	[Token(Token = "0x4000BEC")]
	[FieldOffset(Offset = "0x18")]
	private static bool s_PendingRPAssignationToRaise;

	[Token(Token = "0x4000BED")]
	[FieldOffset(Offset = "0x20")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<ScriptableRenderContext, List<Camera>> m_beginContextRendering;

	[Token(Token = "0x4000BEE")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<ScriptableRenderContext, List<Camera>> m_endContextRendering;

	[Token(Token = "0x4000BEF")]
	[FieldOffset(Offset = "0x30")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<ScriptableRenderContext, Camera> m_beginCameraRendering;

	[Token(Token = "0x4000BF0")]
	[FieldOffset(Offset = "0x38")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<ScriptableRenderContext, Camera> m_endCameraRendering;

	[Token(Token = "0x4000BF1")]
	[FieldOffset(Offset = "0x40")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action activeRenderPipelineTypeChanged;

	[Token(Token = "0x4000BF2")]
	[FieldOffset(Offset = "0x48")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<RenderPipelineAsset, RenderPipelineAsset> activeRenderPipelineAssetChanged;

	[Token(Token = "0x4000BF3")]
	[FieldOffset(Offset = "0x50")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action activeRenderPipelineCreated;

	[Token(Token = "0x4000BF4")]
	[FieldOffset(Offset = "0x58")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action m_activeRenderPipelineDisposed;

	[Token(Token = "0x4000BF5")]
	[FieldOffset(Offset = "0x60")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<ScriptableRenderContext, Camera[]> beginFrameRendering;

	[Token(Token = "0x4000BF6")]
	[FieldOffset(Offset = "0x68")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<ScriptableRenderContext, Camera[]> endFrameRendering;

	[Token(Token = "0x17000389")]
	internal static RenderPipelineAsset currentPipelineAsset
	{
		[Token(Token = "0x6001693")]
		[Address(RVA = "0x2F6A700", Offset = "0x2F68D00", VA = "0x182F6A700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700038A")]
	public static RenderPipeline currentPipeline
	{
		[Token(Token = "0x6001694")]
		[Address(RVA = "0x2F6A740", Offset = "0x2F68D40", VA = "0x182F6A740")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001695")]
		[Address(RVA = "0x2F6AB80", Offset = "0x2F69180", VA = "0x182F6AB80")]
		private set
		{
		}
	}

	[Token(Token = "0x1400000C")]
	public static event Action<ScriptableRenderContext, List<Camera>> beginContextRendering
	{
		[Token(Token = "0x6001696")]
		[Address(RVA = "0x2F6A490", Offset = "0x2F68A90", VA = "0x182F6A490")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001697")]
		[Address(RVA = "0x2F6A910", Offset = "0x2F68F10", VA = "0x182F6A910")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000D")]
	public static event Action<ScriptableRenderContext, List<Camera>> endContextRendering
	{
		[Token(Token = "0x6001698")]
		[Address(RVA = "0x2F6A630", Offset = "0x2F68C30", VA = "0x182F6A630")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001699")]
		[Address(RVA = "0x2F6AAB0", Offset = "0x2F690B0", VA = "0x182F6AAB0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000E")]
	public static event Action<ScriptableRenderContext, Camera> beginCameraRendering
	{
		[Token(Token = "0x600169A")]
		[Address(RVA = "0x2F6A3C0", Offset = "0x2F689C0", VA = "0x182F6A3C0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600169B")]
		[Address(RVA = "0x2F6A840", Offset = "0x2F68E40", VA = "0x182F6A840")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000F")]
	public static event Action<ScriptableRenderContext, Camera> endCameraRendering
	{
		[Token(Token = "0x600169C")]
		[Address(RVA = "0x2F6A560", Offset = "0x2F68B60", VA = "0x182F6A560")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600169D")]
		[Address(RVA = "0x2F6A9E0", Offset = "0x2F68FE0", VA = "0x182F6A9E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000010")]
	public static event Action activeRenderPipelineDisposed
	{
		[Token(Token = "0x600169E")]
		[Address(RVA = "0x2F6A300", Offset = "0x2F68900", VA = "0x182F6A300")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600169F")]
		[Address(RVA = "0x2F6A780", Offset = "0x2F68D80", VA = "0x182F6A780")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60016A0")]
	[Address(RVA = "0x2F69540", Offset = "0x2F67B40", VA = "0x182F69540")]
	internal static void BeginContextRendering(ScriptableRenderContext context, List<Camera> cameras)
	{
	}

	[Token(Token = "0x60016A1")]
	[Address(RVA = "0x2F694E0", Offset = "0x2F67AE0", VA = "0x182F694E0")]
	internal static void BeginCameraRendering(ScriptableRenderContext context, Camera camera)
	{
	}

	[Token(Token = "0x60016A2")]
	[Address(RVA = "0x2F69BA0", Offset = "0x2F681A0", VA = "0x182F69BA0")]
	internal static void EndContextRendering(ScriptableRenderContext context, List<Camera> cameras)
	{
	}

	[Token(Token = "0x60016A3")]
	[Address(RVA = "0x2F69B40", Offset = "0x2F68140", VA = "0x182F69B40")]
	internal static void EndCameraRendering(ScriptableRenderContext context, Camera camera)
	{
	}

	[Token(Token = "0x60016A4")]
	[Address(RVA = "0x2F69E80", Offset = "0x2F68480", VA = "0x182F69E80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnActiveRenderPipelineAssetChanged(ScriptableObject from, ScriptableObject to, bool raiseTypeChanged)
	{
	}

	[Token(Token = "0x60016A5")]
	[Address(RVA = "0x2F69C60", Offset = "0x2F68260", VA = "0x182F69C60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void HandleRenderPipelineChange(RenderPipelineAsset pipelineAsset)
	{
	}

	[Token(Token = "0x60016A6")]
	[Address(RVA = "0x2F68CA0", Offset = "0x2F672A0", VA = "0x182F68CA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RecreateCurrentPipeline(RenderPipelineAsset pipelineAsset)
	{
	}

	[Token(Token = "0x60016A7")]
	[Address(RVA = "0x2F69600", Offset = "0x2F67C00", VA = "0x182F69600")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void CleanupRenderPipeline()
	{
	}

	[Token(Token = "0x60016A8")]
	[Address(RVA = "0x2F69860", Offset = "0x2F67E60", VA = "0x182F69860")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void DoRenderLoop_Internal(RenderPipelineAsset pipelineAsset, IntPtr loopPtr, Object renderRequest)
	{
	}

	[Token(Token = "0x60016A9")]
	[Address(RVA = "0x2F6A090", Offset = "0x2F68690", VA = "0x182F6A090")]
	internal static bool TryPrepareRenderPipeline(RenderPipelineAsset pipelineAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x60016AA")]
	[Address(RVA = "0x2F69CE0", Offset = "0x2F682E0", VA = "0x182F69CE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InitializeGlobalRenderPipelineTag()
	{
	}

	[Token(Token = "0x60016AB")]
	[Address(RVA = "0x2F69D70", Offset = "0x2F68370", VA = "0x182F69D70")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool IsCurrentRenderPipelineValid()
	{
		return default(bool);
	}

	[Token(Token = "0x60016AC")]
	[Address(RVA = "0x2F69DC0", Offset = "0x2F683C0", VA = "0x182F69DC0")]
	private static bool IsPipelineRequireCreation()
	{
		return default(bool);
	}
}
