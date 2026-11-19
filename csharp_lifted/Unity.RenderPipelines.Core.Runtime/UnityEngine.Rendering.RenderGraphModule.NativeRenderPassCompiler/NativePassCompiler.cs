// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativePassCompiler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler;

[Token(Token = "0x20002B8")]
internal class NativePassCompiler : IDisposable
{
	[Token(Token = "0x20002B9")]
	internal struct RenderGraphInputInfo
	{
		[Token(Token = "0x4000C6A")]
		[FieldOffset(Offset = "0x0")]
		public RenderGraphResourceRegistry m_ResourcesForDebugOnly;

		[Token(Token = "0x4000C6B")]
		[FieldOffset(Offset = "0x8")]
		public List<RenderGraphPass> m_RenderPasses;

		[Token(Token = "0x4000C6C")]
		[FieldOffset(Offset = "0x10")]
		public string debugName;

		[Token(Token = "0x4000C6D")]
		[FieldOffset(Offset = "0x18")]
		public bool disablePassCulling;

		[Token(Token = "0x4000C6E")]
		[FieldOffset(Offset = "0x19")]
		public bool disablePassMerging;

		[Token(Token = "0x4000C6F")]
		[FieldOffset(Offset = "0x1C")]
		public RenderTextureUVOriginStrategy renderTextureUVOriginStrategy;
	}

	[Token(Token = "0x20002BA")]
	internal enum NativeCompilerProfileId
	{
		[Token(Token = "0x4000C71")]
		NRPRGComp_PrepareNativePass,
		[Token(Token = "0x4000C72")]
		NRPRGComp_SetupContextData,
		[Token(Token = "0x4000C73")]
		NRPRGComp_BuildGraph,
		[Token(Token = "0x4000C74")]
		NRPRGComp_CullNodes,
		[Token(Token = "0x4000C75")]
		NRPRGComp_TryMergeNativePasses,
		[Token(Token = "0x4000C76")]
		NRPRGComp_FindResourceUsageRanges,
		[Token(Token = "0x4000C77")]
		NRPRGComp_DetectMemorylessResources,
		[Token(Token = "0x4000C78")]
		NRPRGComp_PropagateTextureUVOrigin,
		[Token(Token = "0x4000C79")]
		NRPRGComp_ExecuteInitializeResources,
		[Token(Token = "0x4000C7A")]
		NRPRGComp_ExecuteBeginRenderpassCommand,
		[Token(Token = "0x4000C7B")]
		NRPRGComp_ExecuteDestroyResources
	}

	[Token(Token = "0x4000C5B")]
	[FieldOffset(Offset = "0x10")]
	internal RenderGraphInputInfo graph;

	[Token(Token = "0x4000C5C")]
	[FieldOffset(Offset = "0x30")]
	internal CompilerContextData contextData;

	[Token(Token = "0x4000C5D")]
	[FieldOffset(Offset = "0x38")]
	internal CompilerContextData defaultContextData;

	[Token(Token = "0x4000C5E")]
	[FieldOffset(Offset = "0x40")]
	internal CommandBuffer previousCommandBuffer;

	[Token(Token = "0x4000C5F")]
	[FieldOffset(Offset = "0x48")]
	private Stack<int> m_HasSideEffectPassIdCullingStack;

	[Token(Token = "0x4000C60")]
	[FieldOffset(Offset = "0x50")]
	private List<Stack<ResourceHandle>> m_UnusedVersionedResourceIdCullingStacks;

	[Token(Token = "0x4000C61")]
	[FieldOffset(Offset = "0x58")]
	private Dictionary<int, List<ResourceHandle>> m_DelayedLastUseListPerPassMap;

	[Token(Token = "0x4000C62")]
	[FieldOffset(Offset = "0x60")]
	private RenderGraphCompilationCache m_CompilationCache;

	[Token(Token = "0x4000C63")]
	[FieldOffset(Offset = "0x68")]
	private RenderTargetIdentifier[][] m_TempMRTArrays;

	[Token(Token = "0x4000C64")]
	internal const int k_EstimatedPassCount = 100;

	[Token(Token = "0x4000C65")]
	internal const int k_MaxSubpass = 8;

	[Token(Token = "0x4000C66")]
	[FieldOffset(Offset = "0x70")]
	private NativeList<AttachmentDescriptor> m_BeginRenderPassAttachments;

	[Token(Token = "0x4000C67")]
	[FieldOffset(Offset = "0x0")]
	internal static bool s_ForceGenerateAuditsForTests;

	[Token(Token = "0x4000C68")]
	private const int ArbitraryMaxNbMergedPasses = 16;

	[Token(Token = "0x4000C69")]
	[FieldOffset(Offset = "0x78")]
	private DynamicArray<Name> graphPassNamesForDebug;

	[Token(Token = "0x6001366")]
	[Address(RVA = "0x658D220", Offset = "0x658C220", VA = "0x658D220")]
	private static RenderGraph.DebugData.PassData.NRPInfo.NativeRenderPassInfo.AttachmentInfo MakeAttachmentInfo(CompilerContextData ctx, in NativePassData nativePass, int attachmentIndex)
	{
		return null;
	}

	[Token(Token = "0x6001367")]
	[Address(RVA = "0x658D7D0", Offset = "0x658C7D0", VA = "0x658D7D0")]
	internal static string MakePassBreakInfoMessage(CompilerContextData ctx, in NativePassData nativePass)
	{
		return null;
	}

	[Token(Token = "0x6001368")]
	[Address(RVA = "0x658D8F0", Offset = "0x658C8F0", VA = "0x658D8F0")]
	internal static string MakePassMergeMessage(CompilerContextData ctx, in PassData pass, in PassData prevPass, in PassBreakAudit mergeResult)
	{
		return null;
	}

	[Token(Token = "0x6001369")]
	[Address(RVA = "0x658E2A0", Offset = "0x658D2A0", VA = "0x658E2A0")]
	private static string InjectSpaces(string camelCaseString)
	{
		return null;
	}

	[Token(Token = "0x600136A")]
	[Address(RVA = "0x658E450", Offset = "0x658D450", VA = "0x658E450")]
	internal void GenerateNativeCompilerDebugData(ref RenderGraph.DebugData debugData)
	{
	}

	[Token(Token = "0x600136B")]
	[Address(RVA = "0x6591530", Offset = "0x6590530", VA = "0x6591530")]
	public NativePassCompiler(RenderGraphCompilationCache cache)
	{
	}

	[Token(Token = "0x600136C")]
	[Address(RVA = "0x6591A20", Offset = "0x6590A20", VA = "0x6591A20", Slot = "1")]
	~NativePassCompiler()
	{
	}

	[Token(Token = "0x600136D")]
	[Address(RVA = "0x6591BB0", Offset = "0x6590BB0", VA = "0x6591BB0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600136E")]
	[Address(RVA = "0x6591AB0", Offset = "0x6590AB0", VA = "0x6591AB0")]
	public void Cleanup()
	{
	}

	[Token(Token = "0x600136F")]
	[Address(RVA = "0x6591C10", Offset = "0x6590C10", VA = "0x6591C10")]
	public bool Initialize(RenderGraphResourceRegistry resources, List<RenderGraphPass> renderPasses, RenderGraphDebugParams debugParams, string debugName, bool useCompilationCaching, int graphHash, int frameIndex, RenderTextureUVOriginStrategy renderTextureUVOriginStrategy)
	{
		return default(bool);
	}

	[Token(Token = "0x6001370")]
	[Address(RVA = "0x6591F60", Offset = "0x6590F60", VA = "0x6591F60")]
	private void HandleExtendedFeatureFlags()
	{
	}

	[Token(Token = "0x6001371")]
	[Address(RVA = "0x65922B0", Offset = "0x65912B0", VA = "0x65922B0")]
	public void Compile(RenderGraphResourceRegistry resources)
	{
	}

	[Token(Token = "0x6001372")]
	[Address(RVA = "0x6591CF0", Offset = "0x6590CF0", VA = "0x6591CF0")]
	public void Clear(bool clearContextData)
	{
	}

	[Token(Token = "0x6001373")]
	[Address(RVA = "0x6595660", Offset = "0x6594660", VA = "0x6595660")]
	private void SetPassStatesForNativePass(int nativePassId)
	{
	}

	[Token(Token = "0x6001374")]
	[Address(RVA = "0x6595670", Offset = "0x6594670", VA = "0x6595670")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void ValidatePasses()
	{
	}

	[Token(Token = "0x6001375")]
	[Address(RVA = "0x6592310", Offset = "0x6591310", VA = "0x6592310")]
	private void SetupContextData(RenderGraphResourceRegistry resources)
	{
	}

	[Token(Token = "0x6001376")]
	[Address(RVA = "0x6595930", Offset = "0x6594930", VA = "0x6595930")]
	private bool TrySetupRasterFragmentList(ref PassData ctxPass, ref RenderGraphPass inputPass, out string errorMessage)
	{
		return default(bool);
	}

	[Token(Token = "0x6001377")]
	[Address(RVA = "0x6592450", Offset = "0x6591450", VA = "0x6592450")]
	private void BuildGraph()
	{
	}

	[Token(Token = "0x6001378")]
	[Address(RVA = "0x6592F90", Offset = "0x6591F90", VA = "0x6592F90")]
	private void CullUnusedRenderGraphPasses()
	{
	}

	[Token(Token = "0x6001379")]
	[Address(RVA = "0x65966A0", Offset = "0x65956A0", VA = "0x65966A0")]
	private void CullRenderGraphPassesWritingOnlyUnusedResources()
	{
	}

	[Token(Token = "0x600137A")]
	[Address(RVA = "0x6593370", Offset = "0x6592370", VA = "0x6593370")]
	private void TryMergeNativePasses()
	{
	}

	[Token(Token = "0x600137B")]
	[Address(RVA = "0x6596C30", Offset = "0x6595C30", VA = "0x6596C30")]
	private bool FindFirstPassIdOnGraphicsQueueAwaitingFenceGoingForward(ref PassData startAsyncPass, out int firstPassIdAwaiting)
	{
		return default(bool);
	}

	[Token(Token = "0x600137C")]
	[Address(RVA = "0x6596D60", Offset = "0x6595D60", VA = "0x6596D60")]
	private int FindFirstNonCulledPassIdGoingBackward(int startPassId, bool startPassIsIncluded)
	{
		return default(int);
	}

	[Token(Token = "0x600137D")]
	[Address(RVA = "0x6593720", Offset = "0x6592720", VA = "0x6593720")]
	private void FindResourceUsageRangeAndSynchronization()
	{
	}

	[Token(Token = "0x600137E")]
	[Address(RVA = "0x6596E50", Offset = "0x6595E50", VA = "0x6596E50")]
	private void ClearDelayedLastUseListAtPass(int passId)
	{
	}

	[Token(Token = "0x600137F")]
	[Address(RVA = "0x6596ED0", Offset = "0x6595ED0", VA = "0x6596ED0")]
	private void AddDelayedLastUseToPass(in ResourceHandle releaseResource, int passId)
	{
	}

	[Token(Token = "0x6001380")]
	[Address(RVA = "0x6597010", Offset = "0x6596010", VA = "0x6597010")]
	public void AddLastUseFromDelayedList(ref PassData passData)
	{
	}

	[Token(Token = "0x6001381")]
	[Address(RVA = "0x6594E20", Offset = "0x6593E20", VA = "0x6594E20")]
	private void PrepareNativeRenderPasses()
	{
	}

	[Token(Token = "0x6001382")]
	[Address(RVA = "0x6594ED0", Offset = "0x6593ED0", VA = "0x6594ED0")]
	private void PropagateTextureUVOrigin()
	{
	}

	[Token(Token = "0x6001383")]
	[Address(RVA = "0x65978B0", Offset = "0x65968B0", VA = "0x65978B0")]
	private static bool IsGlobalTextureInPass(RenderGraphPass pass, in ResourceHandle handle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001384")]
	[Address(RVA = "0x6594700", Offset = "0x6593700", VA = "0x6594700")]
	private void DetectMemoryLessResources()
	{
	}

	[Token(Token = "0x6001385")]
	[Address(RVA = "0x6597A50", Offset = "0x6596A50", VA = "0x6597A50")]
	internal static bool IsSameNativeSubPass(ref SubPassDescriptor a, ref SubPassDescriptor b)
	{
		return default(bool);
	}

	[Token(Token = "0x6001386")]
	[Address(RVA = "0x6597C00", Offset = "0x6596C00", VA = "0x6597C00")]
	private bool ExecuteInitializeResource(InternalRenderGraphContext rgContext, RenderGraphResourceRegistry resources, in PassData pass)
	{
		return default(bool);
	}

	[Token(Token = "0x6001387")]
	[Address(RVA = "0x65971E0", Offset = "0x65961E0", VA = "0x65971E0")]
	private void DetermineLoadStoreActions(ref NativePassData nativePass)
	{
	}

	[Token(Token = "0x6001388")]
	[Address(RVA = "0x6598390", Offset = "0x6597390", VA = "0x6598390")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void ValidateNativePass(in NativePassData nativePass, int width, int height, int depth, int samples, int attachmentCount)
	{
	}

	[Token(Token = "0x6001389")]
	[Address(RVA = "0x6598540", Offset = "0x6597540", VA = "0x6598540")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void ValidateAttachment(in RenderTargetInfo attRenderTargetInfo, RenderGraphResourceRegistry resources, int nativePassWidth, int nativePassHeight, int nativePassMSAASamples, bool isVrs, bool isShaderResolve)
	{
	}

	[Token(Token = "0x600138A")]
	[Address(RVA = "0x65986C0", Offset = "0x65976C0", VA = "0x65986C0")]
	internal void ExecuteBeginRenderPass(InternalRenderGraphContext rgContext, RenderGraphResourceRegistry resources, ref NativePassData nativePass)
	{
	}

	[Token(Token = "0x600138B")]
	[Address(RVA = "0x6599420", Offset = "0x6598420", VA = "0x6599420")]
	private void ExecuteDestroyResource(InternalRenderGraphContext rgContext, RenderGraphResourceRegistry resources, ref PassData pass)
	{
	}

	[Token(Token = "0x600138C")]
	[Address(RVA = "0x6599A50", Offset = "0x6598A50", VA = "0x6599A50")]
	private void ExecuteSetRenderTargets(RenderGraphPass pass, InternalRenderGraphContext rgContext)
	{
	}

	[Token(Token = "0x600138D")]
	[Address(RVA = "0x659A0F0", Offset = "0x65990F0", VA = "0x659A0F0")]
	internal void ExecuteSetRandomWriteTarget(in CommandBuffer cmd, RenderGraphResourceRegistry resources, int index, in ResourceHandle resource, bool preserveCounterValue = true)
	{
	}

	[Token(Token = "0x600138E")]
	[Address(RVA = "0x659A330", Offset = "0x6599330", VA = "0x659A330")]
	internal void ExecuteRenderGraphPass(ref InternalRenderGraphContext rgContext, RenderGraphResourceRegistry resources, RenderGraphPass pass)
	{
	}

	[Token(Token = "0x600138F")]
	[Address(RVA = "0x659A6E0", Offset = "0x65996E0", VA = "0x659A6E0")]
	public void ExecuteGraph(InternalRenderGraphContext rgContext, RenderGraphResourceRegistry resources, in List<RenderGraphPass> passes)
	{
	}

	[Token(Token = "0x6001390")]
	[Address(RVA = "0x659AC30", Offset = "0x6599C30", VA = "0x659AC30")]
	private void EndRenderGraphPass(ref InternalRenderGraphContext rgContext, ref PassData passData, ref bool inRenderPass, RenderGraphResourceRegistry resources, bool nrpBegan)
	{
	}
}
