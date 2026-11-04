// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativePassData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler;

[Token(Token = "0x20002C8")]
internal struct NativePassData
{
	[Token(Token = "0x4000CE8")]
	[FieldOffset(Offset = "0x0")]
	public FixedAttachmentArray<LoadAudit> loadAudit;

	[Token(Token = "0x4000CE9")]
	[FieldOffset(Offset = "0x44")]
	public FixedAttachmentArray<StoreAudit> storeAudit;

	[Token(Token = "0x4000CEA")]
	[FieldOffset(Offset = "0xC8")]
	public PassBreakAudit breakAudit;

	[Token(Token = "0x4000CEB")]
	[FieldOffset(Offset = "0xD0")]
	public FixedAttachmentArray<PassFragmentData> fragments;

	[Token(Token = "0x4000CEC")]
	[FieldOffset(Offset = "0x194")]
	public FixedAttachmentArray<NativePassAttachment> attachments;

	[Token(Token = "0x4000CED")]
	[FieldOffset(Offset = "0x298")]
	public int firstGraphPass;

	[Token(Token = "0x4000CEE")]
	[FieldOffset(Offset = "0x29C")]
	public int lastGraphPass;

	[Token(Token = "0x4000CEF")]
	[FieldOffset(Offset = "0x2A0")]
	public int numGraphPasses;

	[Token(Token = "0x4000CF0")]
	[FieldOffset(Offset = "0x2A4")]
	public int firstNativeSubPass;

	[Token(Token = "0x4000CF1")]
	[FieldOffset(Offset = "0x2A8")]
	public int numNativeSubPasses;

	[Token(Token = "0x4000CF2")]
	[FieldOffset(Offset = "0x2AC")]
	public int width;

	[Token(Token = "0x4000CF3")]
	[FieldOffset(Offset = "0x2B0")]
	public int height;

	[Token(Token = "0x4000CF4")]
	[FieldOffset(Offset = "0x2B4")]
	public int volumeDepth;

	[Token(Token = "0x4000CF5")]
	[FieldOffset(Offset = "0x2B8")]
	public int samples;

	[Token(Token = "0x4000CF6")]
	[FieldOffset(Offset = "0x2BC")]
	public int shadingRateImageIndex;

	[Token(Token = "0x4000CF7")]
	[FieldOffset(Offset = "0x2C0")]
	public bool hasDepth;

	[Token(Token = "0x4000CF8")]
	[FieldOffset(Offset = "0x2C1")]
	public bool hasFoveatedRasterization;

	[Token(Token = "0x4000CF9")]
	[FieldOffset(Offset = "0x2C2")]
	public bool hasShadingRateStates;

	[Token(Token = "0x4000CFA")]
	[FieldOffset(Offset = "0x2C4")]
	public ExtendedFeatureFlags extendedFeatureFlags;

	[Token(Token = "0x4000CFB")]
	[FieldOffset(Offset = "0x2C8")]
	public ShadingRateFragmentSize shadingRateFragmentSize;

	[Token(Token = "0x4000CFC")]
	[FieldOffset(Offset = "0x2CC")]
	public ShadingRateCombiner primitiveShadingRateCombiner;

	[Token(Token = "0x4000CFD")]
	[FieldOffset(Offset = "0x2D0")]
	public ShadingRateCombiner fragmentShadingRateCombiner;

	[Token(Token = "0x1700026A")]
	public bool hasShadingRateImage
	{
		[Token(Token = "0x60013B4")]
		[Address(RVA = "0x2BB7CA0", Offset = "0x2BB62A0", VA = "0x182BB7CA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60013B5")]
	[Address(RVA = "0x2BB7880", Offset = "0x2BB5E80", VA = "0x182BB7880")]
	public NativePassData(ref PassData pass, CompilerContextData ctx)
	{
	}

	[Token(Token = "0x60013B6")]
	[Address(RVA = "0x2BB64A0", Offset = "0x2BB4AA0", VA = "0x182BB64A0")]
	public SubPassFlags GetSubPassFlagForMerging()
	{
		return default(SubPassFlags);
	}

	[Token(Token = "0x60013B7")]
	[Address(RVA = "0x2BB6210", Offset = "0x2BB4810", VA = "0x182BB6210")]
	public void Clear()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013B8")]
	[Address(RVA = "0x2BB67B0", Offset = "0x2BB4DB0", VA = "0x182BB67B0")]
	public readonly bool IsValid()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013B9")]
	[Address(RVA = "0x2BB6510", Offset = "0x2BB4B10", VA = "0x182BB6510")]
	public readonly ReadOnlySpan<PassData> GraphPasses(CompilerContextData ctx, out NativeArray<PassData> actualPasses)
	{
		return default(ReadOnlySpan<PassData>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013BA")]
	[Address(RVA = "0x2BB6340", Offset = "0x2BB4940", VA = "0x182BB6340")]
	public readonly void GetGraphPassNames(CompilerContextData ctx, DynamicArray<Name> dest)
	{
	}

	[Token(Token = "0x60013BB")]
	[Address(RVA = "0x2BB5050", Offset = "0x2BB3650", VA = "0x182BB5050")]
	private static bool CanMergeMSAASamples(ref NativePassData nativePass, ref PassData passToMerge)
	{
		return default(bool);
	}

	[Token(Token = "0x60013BC")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
	private static bool AreExtendedFeatureFlagsCompatible(ExtendedFeatureFlags flags0, ExtendedFeatureFlags flags1)
	{
		return default(bool);
	}

	[Token(Token = "0x60013BD")]
	[Address(RVA = "0x2BB5700", Offset = "0x2BB3D00", VA = "0x182BB5700")]
	public static PassBreakAudit CanMerge(CompilerContextData contextData, int activeNativePassId, int passIdToMerge)
	{
		return default(PassBreakAudit);
	}

	[Token(Token = "0x60013BE")]
	[Address(RVA = "0x2BB6920", Offset = "0x2BB4F20", VA = "0x182BB6920")]
	private static bool TotalAttachmentsSizeExceedPixelStorageLimit(CompilerContextData contextData, ref NativePassData nativePass, ref FixedAttachmentArray<PassFragmentData> attachmentsToTryAdding)
	{
		return default(bool);
	}

	[Token(Token = "0x60013BF")]
	[Address(RVA = "0x2BB5070", Offset = "0x2BB3670", VA = "0x182BB5070")]
	private static bool CanMergeNativeSubPass(CompilerContextData contextData, ref NativePassData nativePass, ref PassData passToMerge)
	{
		return default(bool);
	}

	[Token(Token = "0x60013C0")]
	[Address(RVA = "0x2BB6C70", Offset = "0x2BB5270", VA = "0x182BB6C70")]
	public static void TryMergeNativeSubPass(CompilerContextData contextData, ref NativePassData nativePass, ref PassData passToMerge)
	{
	}

	[Token(Token = "0x60013C1")]
	[Address(RVA = "0x2BB4CF0", Offset = "0x2BB32F0", VA = "0x182BB4CF0")]
	private void AddDepthAttachmentFirstDuringMerge(CompilerContextData contextData, in PassFragmentData depthAttachment)
	{
	}

	[Token(Token = "0x60013C2")]
	[Address(RVA = "0x2BB71D0", Offset = "0x2BB57D0", VA = "0x182BB71D0")]
	public static PassBreakAudit TryMerge(CompilerContextData contextData, int activeNativePassId, int passIdToMerge)
	{
		return default(PassBreakAudit);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013C3")]
	[Address(RVA = "0x2BB67C0", Offset = "0x2BB4DC0", VA = "0x182BB67C0")]
	public static void SetPassStatesForNativePass(CompilerContextData contextData, int nativePassId)
	{
	}
}
