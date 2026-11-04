// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativePassCompiler
// Update status: NEW in this game update
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
	[Address(RVA = "0x2B94040", Offset = "0x2B92640", VA = "0x182B94040")]
	private static RenderGraph.DebugData.PassData.NRPInfo.NativeRenderPassInfo.AttachmentInfo MakeAttachmentInfo(CompilerContextData ctx, in NativePassData nativePass, int attachmentIndex)
	{
		return null;
	}

	[Token(Token = "0x6001367")]
	[Address(RVA = "0x2B94630", Offset = "0x2B92C30", VA = "0x182B94630")]
	internal static string MakePassBreakInfoMessage(CompilerContextData ctx, in NativePassData nativePass)
	{
		return null;
	}

	[Token(Token = "0x6001368")]
	[Address(RVA = "0x2B94760", Offset = "0x2B92D60", VA = "0x182B94760")]
	internal static string MakePassMergeMessage(CompilerContextData ctx, in PassData pass, in PassData prevPass, in PassBreakAudit mergeResult)
	{
		return null;
	}

	[Token(Token = "0x6001369")]
	[Address(RVA = "0x2B93B90", Offset = "0x2B92190", VA = "0x182B93B90")]
	private static string InjectSpaces(string camelCaseString)
	{
		return null;
	}

	[Token(Token = "0x600136A")]
	[Address(RVA = "0x2B90E70", Offset = "0x2B8F470", VA = "0x182B90E70")]
	internal void GenerateNativeCompilerDebugData(ref RenderGraph.DebugData debugData)
	{
	}

	[Token(Token = "0x600136B")]
	[Address(RVA = "0x2B96EF0", Offset = "0x2B954F0", VA = "0x182B96EF0")]
	public NativePassCompiler(RenderGraphCompilationCache cache)
	{
	}

	[Token(Token = "0x600136C")]
	[Address(RVA = "0x2B901F0", Offset = "0x2B8E7F0", VA = "0x182B901F0", Slot = "1")]
	~NativePassCompiler()
	{
	}

	[Token(Token = "0x600136D")]
	[Address(RVA = "0x2B8D650", Offset = "0x2B8BC50", VA = "0x182B8D650", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600136E")]
	[Address(RVA = "0x2B8BAE0", Offset = "0x2B8A0E0", VA = "0x182B8BAE0")]
	public void Cleanup()
	{
	}

	[Token(Token = "0x600136F")]
	[Address(RVA = "0x2B93AA0", Offset = "0x2B920A0", VA = "0x182B93AA0")]
	public bool Initialize(RenderGraphResourceRegistry resources, List<RenderGraphPass> renderPasses, RenderGraphDebugParams debugParams, string debugName, bool useCompilationCaching, int graphHash, int frameIndex, RenderTextureUVOriginStrategy renderTextureUVOriginStrategy)
	{
		return default(bool);
	}

	[Token(Token = "0x6001370")]
	[Address(RVA = "0x2B934D0", Offset = "0x2B91AD0", VA = "0x182B934D0")]
	private void HandleExtendedFeatureFlags()
	{
	}

	[Token(Token = "0x6001371")]
	[Address(RVA = "0x2B8C000", Offset = "0x2B8A600", VA = "0x182B8C000")]
	public void Compile(RenderGraphResourceRegistry resources)
	{
	}

	[Token(Token = "0x6001372")]
	[Address(RVA = "0x2B8BC70", Offset = "0x2B8A270", VA = "0x182B8BC70")]
	public void Clear(bool clearContextData)
	{
	}

	[Token(Token = "0x6001373")]
	[Address(RVA = "0x2B95860", Offset = "0x2B93E60", VA = "0x182B95860")]
	private void SetPassStatesForNativePass(int nativePassId)
	{
	}

	[Token(Token = "0x6001374")]
	[Address(RVA = "0x2B96C10", Offset = "0x2B95210", VA = "0x182B96C10")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void ValidatePasses()
	{
	}

	[Token(Token = "0x6001375")]
	[Address(RVA = "0x2B959D0", Offset = "0x2B93FD0", VA = "0x182B959D0")]
	private void SetupContextData(RenderGraphResourceRegistry resources)
	{
	}

	[Token(Token = "0x6001376")]
	[Address(RVA = "0x2B95EF0", Offset = "0x2B944F0", VA = "0x182B95EF0")]
	private bool TrySetupRasterFragmentList(ref PassData ctxPass, ref RenderGraphPass inputPass, out string errorMessage)
	{
		return default(bool);
	}

	[Token(Token = "0x6001377")]
	[Address(RVA = "0x2B8B070", Offset = "0x2B89670", VA = "0x182B8B070")]
	private void BuildGraph()
	{
	}

	[Token(Token = "0x6001378")]
	[Address(RVA = "0x2B8C660", Offset = "0x2B8AC60", VA = "0x182B8C660")]
	private void CullUnusedRenderGraphPasses()
	{
	}

	[Token(Token = "0x6001379")]
	[Address(RVA = "0x2B8C120", Offset = "0x2B8A720", VA = "0x182B8C120")]
	private void CullRenderGraphPassesWritingOnlyUnusedResources()
	{
	}

	[Token(Token = "0x600137A")]
	[Address(RVA = "0x2B95AF0", Offset = "0x2B940F0", VA = "0x182B95AF0")]
	private void TryMergeNativePasses()
	{
	}

	[Token(Token = "0x600137B")]
	[Address(RVA = "0x2B90320", Offset = "0x2B8E920", VA = "0x182B90320")]
	private bool FindFirstPassIdOnGraphicsQueueAwaitingFenceGoingForward(ref PassData startAsyncPass, out int firstPassIdAwaiting)
	{
		return default(bool);
	}

	[Token(Token = "0x600137C")]
	[Address(RVA = "0x2B90250", Offset = "0x2B8E850", VA = "0x182B90250")]
	private int FindFirstNonCulledPassIdGoingBackward(int startPassId, bool startPassIsIncluded)
	{
		return default(int);
	}

	[Token(Token = "0x600137D")]
	[Address(RVA = "0x2B90410", Offset = "0x2B8EA10", VA = "0x182B90410")]
	private void FindResourceUsageRangeAndSynchronization()
	{
	}

	[Token(Token = "0x600137E")]
	[Address(RVA = "0x2B8BBE0", Offset = "0x2B8A1E0", VA = "0x182B8BBE0")]
	private void ClearDelayedLastUseListAtPass(int passId)
	{
	}

	[Token(Token = "0x600137F")]
	[Address(RVA = "0x2B8ABB0", Offset = "0x2B891B0", VA = "0x182B8ABB0")]
	private void AddDelayedLastUseToPass(in ResourceHandle releaseResource, int passId)
	{
	}

	[Token(Token = "0x6001380")]
	[Address(RVA = "0x2B8AD20", Offset = "0x2B89320", VA = "0x182B8AD20")]
	public void AddLastUseFromDelayedList(ref PassData passData)
	{
	}

	[Token(Token = "0x6001381")]
	[Address(RVA = "0x2B951B0", Offset = "0x2B937B0", VA = "0x182B951B0")]
	private void PrepareNativeRenderPasses()
	{
	}

	[Token(Token = "0x6001382")]
	[Address(RVA = "0x2B95280", Offset = "0x2B93880", VA = "0x182B95280")]
	private void PropagateTextureUVOrigin()
	{
	}

	[Token(Token = "0x6001383")]
	[Address(RVA = "0x2B93CF0", Offset = "0x2B922F0", VA = "0x182B93CF0")]
	private static bool IsGlobalTextureInPass(RenderGraphPass pass, in ResourceHandle handle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001384")]
	[Address(RVA = "0x2B8CA10", Offset = "0x2B8B010", VA = "0x182B8CA10")]
	private void DetectMemoryLessResources()
	{
	}

	[Token(Token = "0x6001385")]
	[Address(RVA = "0x2B93E70", Offset = "0x2B92470", VA = "0x182B93E70")]
	internal static bool IsSameNativeSubPass(ref SubPassDescriptor a, ref SubPassDescriptor b)
	{
		return default(bool);
	}

	[Token(Token = "0x6001386")]
	[Address(RVA = "0x2B8F0A0", Offset = "0x2B8D6A0", VA = "0x182B8F0A0")]
	private bool ExecuteInitializeResource(InternalRenderGraphContext rgContext, RenderGraphResourceRegistry resources, in PassData pass)
	{
		return default(bool);
	}

	[Token(Token = "0x6001387")]
	[Address(RVA = "0x2B8CEC0", Offset = "0x2B8B4C0", VA = "0x182B8CEC0")]
	private void DetermineLoadStoreActions(ref NativePassData nativePass)
	{
	}

	[Token(Token = "0x6001388")]
	[Address(RVA = "0x2B969F0", Offset = "0x2B94FF0", VA = "0x182B969F0")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void ValidateNativePass(in NativePassData nativePass, int width, int height, int depth, int samples, int attachmentCount)
	{
	}

	[Token(Token = "0x6001389")]
	[Address(RVA = "0x2B96880", Offset = "0x2B94E80", VA = "0x182B96880")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void ValidateAttachment(in RenderTargetInfo attRenderTargetInfo, RenderGraphResourceRegistry resources, int nativePassWidth, int nativePassHeight, int nativePassMSAASamples, bool isVrs, bool isShaderResolve)
	{
	}

	[Token(Token = "0x600138A")]
	[Address(RVA = "0x2B8D9E0", Offset = "0x2B8BFE0", VA = "0x182B8D9E0")]
	internal void ExecuteBeginRenderPass(InternalRenderGraphContext rgContext, RenderGraphResourceRegistry resources, ref NativePassData nativePass)
	{
	}

	[Token(Token = "0x600138B")]
	[Address(RVA = "0x2B8E5A0", Offset = "0x2B8CBA0", VA = "0x182B8E5A0")]
	private void ExecuteDestroyResource(InternalRenderGraphContext rgContext, RenderGraphResourceRegistry resources, ref PassData pass)
	{
	}

	[Token(Token = "0x600138C")]
	[Address(RVA = "0x2B8FCE0", Offset = "0x2B8E2E0", VA = "0x182B8FCE0")]
	private void ExecuteSetRenderTargets(RenderGraphPass pass, InternalRenderGraphContext rgContext)
	{
	}

	[Token(Token = "0x600138D")]
	[Address(RVA = "0x2B8F9F0", Offset = "0x2B8DFF0", VA = "0x182B8F9F0")]
	internal void ExecuteSetRandomWriteTarget(in CommandBuffer cmd, RenderGraphResourceRegistry resources, int index, in ResourceHandle resource, bool preserveCounterValue = true)
	{
	}

	[Token(Token = "0x600138E")]
	[Address(RVA = "0x2B8F6C0", Offset = "0x2B8DCC0", VA = "0x182B8F6C0")]
	internal void ExecuteRenderGraphPass(ref InternalRenderGraphContext rgContext, RenderGraphResourceRegistry resources, RenderGraphPass pass)
	{
	}

	[Token(Token = "0x600138F")]
	[Address(RVA = "0x2B8EAB0", Offset = "0x2B8D0B0", VA = "0x182B8EAB0")]
	public void ExecuteGraph(InternalRenderGraphContext rgContext, RenderGraphResourceRegistry resources, in List<RenderGraphPass> passes)
	{
	}

	[Token(Token = "0x6001390")]
	[Address(RVA = "0x2B8D6B0", Offset = "0x2B8BCB0", VA = "0x182B8D6B0")]
	private void EndRenderGraphPass(ref InternalRenderGraphContext rgContext, ref PassData passData, ref bool inRenderPass, RenderGraphResourceRegistry resources, bool nrpBegan)
	{
	}
}
