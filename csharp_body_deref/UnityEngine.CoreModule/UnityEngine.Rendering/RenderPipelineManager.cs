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

[Token(Token = "0x20002F2")]
public static class RenderPipelineManager
{
	[Token(Token = "0x40008D7")]
	[FieldOffset(Offset = "0x0")]
	internal static RenderPipelineAsset s_CurrentPipelineAsset;

	[Token(Token = "0x40008D8")]
	[FieldOffset(Offset = "0x8")]
	private static List<Camera> s_Cameras;

	[Token(Token = "0x40008D9")]
	[FieldOffset(Offset = "0x10")]
	private static string s_CurrentPipelineType;

	[Token(Token = "0x40008DA")]
	[FieldOffset(Offset = "0x18")]
	private static RenderPipeline s_CurrentPipeline;

	[Token(Token = "0x40008DB")]
	[FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action activeRenderPipelineTypeChanged;

	[Token(Token = "0x40008DC")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<RenderPipelineAsset, RenderPipelineAsset> activeRenderPipelineAssetChanged;

	[Token(Token = "0x40008DD")]
	[FieldOffset(Offset = "0x30")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action activeRenderPipelineCreated;

	[Token(Token = "0x40008DE")]
	[FieldOffset(Offset = "0x38")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action activeRenderPipelineDisposed;

	[Token(Token = "0x1700029A")]
	public static RenderPipeline currentPipeline
	{
		[Token(Token = "0x6001072")]
		[Address(RVA = "0x4E2F890", Offset = "0x4E2F890", VA = "0x4E2F890")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001073")]
		[Address(RVA = "0x4E2F900", Offset = "0x4E2F900", VA = "0x4E2F900")]
		private set
		{
		}
	}

	[Token(Token = "0x6001074")]
	[Address(RVA = "0x4E2F9E0", Offset = "0x4E2F9E0", VA = "0x4E2F9E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void OnActiveRenderPipelineTypeChanged()
	{
	}

	[Token(Token = "0x6001075")]
	[Address(RVA = "0x4E2FA60", Offset = "0x4E2FA60", VA = "0x4E2FA60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void OnActiveRenderPipelineAssetChanged(ScriptableObject from, ScriptableObject to)
	{
	}

	[Token(Token = "0x6001076")]
	[Address(RVA = "0x4E2FB90", Offset = "0x4E2FB90", VA = "0x4E2FB90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void HandleRenderPipelineChange(RenderPipelineAsset pipelineAsset)
	{
	}

	[Token(Token = "0x6001077")]
	[Address(RVA = "0x4E2F240", Offset = "0x4E2F240", VA = "0x4E2F240")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void CleanupRenderPipeline()
	{
	}

	[Token(Token = "0x6001078")]
	[Address(RVA = "0x4E2FD40", Offset = "0x4E2FD40", VA = "0x4E2FD40")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static string GetCurrentPipelineAssetType()
	{
		return null;
	}

	[Token(Token = "0x6001079")]
	[Address(RVA = "0x4E2FDB0", Offset = "0x4E2FDB0", VA = "0x4E2FDB0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void DoRenderLoop_Internal(RenderPipelineAsset pipe, IntPtr loopPtr, Object renderRequest)
	{
	}

	[Token(Token = "0x600107A")]
	[Address(RVA = "0x4E2F6A0", Offset = "0x4E2F6A0", VA = "0x4E2F6A0")]
	internal static void PrepareRenderPipeline(RenderPipelineAsset pipelineAsset)
	{
	}

	[Token(Token = "0x600107B")]
	[Address(RVA = "0x4E301C0", Offset = "0x4E301C0", VA = "0x4E301C0")]
	private static bool IsPipelineRequireCreation()
	{
		return default(bool);
	}
}
