using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002EF")]
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

	[Token(Token = "0x17000299")]
	public static RenderPipeline currentPipeline
	{
		[Token(Token = "0x6001070")]
		[Address(RVA = "0x4B07F60", Offset = "0x4B07F60", VA = "0x4B07F60")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001071")]
		[Address(RVA = "0x4B07FD0", Offset = "0x4B07FD0", VA = "0x4B07FD0")]
		private set
		{
		}
	}

	[Token(Token = "0x6001072")]
	[Address(RVA = "0x4B080B0", Offset = "0x4B080B0", VA = "0x4B080B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void OnActiveRenderPipelineTypeChanged()
	{
	}

	[Token(Token = "0x6001073")]
	[Address(RVA = "0x4B08130", Offset = "0x4B08130", VA = "0x4B08130")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void OnActiveRenderPipelineAssetChanged(ScriptableObject from, ScriptableObject to)
	{
	}

	[Token(Token = "0x6001074")]
	[Address(RVA = "0x4B08260", Offset = "0x4B08260", VA = "0x4B08260")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void HandleRenderPipelineChange(RenderPipelineAsset pipelineAsset)
	{
	}

	[Token(Token = "0x6001075")]
	[Address(RVA = "0x4B07910", Offset = "0x4B07910", VA = "0x4B07910")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void CleanupRenderPipeline()
	{
	}

	[Token(Token = "0x6001076")]
	[Address(RVA = "0x4B08410", Offset = "0x4B08410", VA = "0x4B08410")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static string GetCurrentPipelineAssetType()
	{
		return null;
	}

	[Token(Token = "0x6001077")]
	[Address(RVA = "0x4B08480", Offset = "0x4B08480", VA = "0x4B08480")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void DoRenderLoop_Internal(RenderPipelineAsset pipe, IntPtr loopPtr, Object renderRequest)
	{
	}

	[Token(Token = "0x6001078")]
	[Address(RVA = "0x4B07D70", Offset = "0x4B07D70", VA = "0x4B07D70")]
	internal static void PrepareRenderPipeline(RenderPipelineAsset pipelineAsset)
	{
	}

	[Token(Token = "0x6001079")]
	[Address(RVA = "0x4B08890", Offset = "0x4B08890", VA = "0x4B08890")]
	private static bool IsPipelineRequireCreation()
	{
		return default(bool);
	}
}
