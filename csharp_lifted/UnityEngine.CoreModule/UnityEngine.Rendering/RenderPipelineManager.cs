// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderPipelineManager
// Update status: unchanged since the previous dump
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

[Token(Token = "0x200038F")]
public static class RenderPipelineManager
{
	[Token(Token = "0x4000AB6")]
	[FieldOffset(Offset = "0x0")]
	private static bool s_CleanUpPipeline;

	[Token(Token = "0x4000AB7")]
	[FieldOffset(Offset = "0x8")]
	private static RenderPipelineAsset s_CurrentPipelineAsset;

	[Token(Token = "0x4000AB8")]
	[FieldOffset(Offset = "0x10")]
	private static RenderPipeline s_CurrentPipeline;

	[Token(Token = "0x4000AB9")]
	[FieldOffset(Offset = "0x18")]
	private static bool s_PendingRPAssignationToRaise;

	[Token(Token = "0x4000ABA")]
	[FieldOffset(Offset = "0x20")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<ScriptableRenderContext, List<Camera>> m_beginContextRendering;

	[Token(Token = "0x4000ABB")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<ScriptableRenderContext, List<Camera>> m_endContextRendering;

	[Token(Token = "0x4000ABC")]
	[FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<ScriptableRenderContext, Camera> m_beginCameraRendering;

	[Token(Token = "0x4000ABD")]
	[FieldOffset(Offset = "0x38")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<ScriptableRenderContext, Camera> m_endCameraRendering;

	[Token(Token = "0x4000ABE")]
	[FieldOffset(Offset = "0x40")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action activeRenderPipelineTypeChanged;

	[Token(Token = "0x4000ABF")]
	[FieldOffset(Offset = "0x48")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<RenderPipelineAsset, RenderPipelineAsset> activeRenderPipelineAssetChanged;

	[Token(Token = "0x4000AC0")]
	[FieldOffset(Offset = "0x50")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action activeRenderPipelineCreated;

	[Token(Token = "0x4000AC1")]
	[FieldOffset(Offset = "0x58")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action m_activeRenderPipelineDisposed;

	[Token(Token = "0x4000AC2")]
	[FieldOffset(Offset = "0x60")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<ScriptableRenderContext, Camera[]> beginFrameRendering;

	[Token(Token = "0x4000AC3")]
	[FieldOffset(Offset = "0x68")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<ScriptableRenderContext, Camera[]> endFrameRendering;

	[Token(Token = "0x17000373")]
	internal static RenderPipelineAsset currentPipelineAsset
	{
		[Token(Token = "0x600162C")]
		[Address(RVA = "0x695C9A0", Offset = "0x695B9A0", VA = "0x695C9A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000374")]
	public static RenderPipeline currentPipeline
	{
		[Token(Token = "0x600162D")]
		[Address(RVA = "0x695C9E0", Offset = "0x695B9E0", VA = "0x695C9E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600162E")]
		[Address(RVA = "0x695CA20", Offset = "0x695BA20", VA = "0x695CA20")]
		private set
		{
		}
	}

	[Token(Token = "0x1400000C")]
	public static event Action<ScriptableRenderContext, List<Camera>> beginContextRendering
	{
		[Token(Token = "0x600162F")]
		[Address(RVA = "0x695CAA0", Offset = "0x695BAA0", VA = "0x695CAA0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001630")]
		[Address(RVA = "0x695CB70", Offset = "0x695BB70", VA = "0x695CB70")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000D")]
	public static event Action<ScriptableRenderContext, List<Camera>> endContextRendering
	{
		[Token(Token = "0x6001631")]
		[Address(RVA = "0x695CC40", Offset = "0x695BC40", VA = "0x695CC40")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001632")]
		[Address(RVA = "0x695CD10", Offset = "0x695BD10", VA = "0x695CD10")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000E")]
	public static event Action<ScriptableRenderContext, Camera> beginCameraRendering
	{
		[Token(Token = "0x6001633")]
		[Address(RVA = "0x695CDE0", Offset = "0x695BDE0", VA = "0x695CDE0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001634")]
		[Address(RVA = "0x695CEB0", Offset = "0x695BEB0", VA = "0x695CEB0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000F")]
	public static event Action<ScriptableRenderContext, Camera> endCameraRendering
	{
		[Token(Token = "0x6001635")]
		[Address(RVA = "0x695CF80", Offset = "0x695BF80", VA = "0x695CF80")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001636")]
		[Address(RVA = "0x695D050", Offset = "0x695C050", VA = "0x695D050")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000010")]
	public static event Action activeRenderPipelineDisposed
	{
		[Token(Token = "0x6001637")]
		[Address(RVA = "0x695D120", Offset = "0x695C120", VA = "0x695D120")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001638")]
		[Address(RVA = "0x695D1D0", Offset = "0x695C1D0", VA = "0x695D1D0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6001639")]
	[Address(RVA = "0x695B740", Offset = "0x695A740", VA = "0x695B740")]
	internal static void BeginContextRendering(ScriptableRenderContext context, List<Camera> cameras)
	{
	}

	[Token(Token = "0x600163A")]
	[Address(RVA = "0x695B860", Offset = "0x695A860", VA = "0x695B860")]
	internal static void BeginCameraRendering(ScriptableRenderContext context, Camera camera)
	{
	}

	[Token(Token = "0x600163B")]
	[Address(RVA = "0x695B8E0", Offset = "0x695A8E0", VA = "0x695B8E0")]
	internal static void EndContextRendering(ScriptableRenderContext context, List<Camera> cameras)
	{
	}

	[Token(Token = "0x600163C")]
	[Address(RVA = "0x695BA10", Offset = "0x695AA10", VA = "0x695BA10")]
	internal static void EndCameraRendering(ScriptableRenderContext context, Camera camera)
	{
	}

	[Token(Token = "0x600163D")]
	[Address(RVA = "0x695D280", Offset = "0x695C280", VA = "0x695D280")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnActiveRenderPipelineAssetChanged(ScriptableObject from, ScriptableObject to, bool raiseTypeChanged)
	{
	}

	[Token(Token = "0x600163E")]
	[Address(RVA = "0x695D470", Offset = "0x695C470", VA = "0x695D470")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void HandleRenderPipelineChange(RenderPipelineAsset pipelineAsset)
	{
	}

	[Token(Token = "0x600163F")]
	[Address(RVA = "0x695C010", Offset = "0x695B010", VA = "0x695C010")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RecreateCurrentPipeline(RenderPipelineAsset pipelineAsset)
	{
	}

	[Token(Token = "0x6001640")]
	[Address(RVA = "0x695C0E0", Offset = "0x695B0E0", VA = "0x695C0E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void CleanupRenderPipeline()
	{
	}

	[Token(Token = "0x6001641")]
	[Address(RVA = "0x695D5B0", Offset = "0x695C5B0", VA = "0x695D5B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void DoRenderLoop_Internal(RenderPipelineAsset pipelineAsset, IntPtr loopPtr, Object renderRequest)
	{
	}

	[Token(Token = "0x6001642")]
	[Address(RVA = "0x695D850", Offset = "0x695C850", VA = "0x695D850")]
	internal static bool TryPrepareRenderPipeline(RenderPipelineAsset pipelineAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6001643")]
	[Address(RVA = "0x695DBB0", Offset = "0x695CBB0", VA = "0x695DBB0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InitializeGlobalRenderPipelineTag()
	{
	}

	[Token(Token = "0x6001644")]
	[Address(RVA = "0x695D4F0", Offset = "0x695C4F0", VA = "0x695D4F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool IsCurrentRenderPipelineValid()
	{
		return default(bool);
	}

	[Token(Token = "0x6001645")]
	[Address(RVA = "0x695DB00", Offset = "0x695CB00", VA = "0x695DB00")]
	private static bool IsPipelineRequireCreation()
	{
		return default(bool);
	}
}
