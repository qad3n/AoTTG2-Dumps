// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativePassData
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x659E3E0", Offset = "0x659D3E0", VA = "0x659E3E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60013B5")]
	[Address(RVA = "0x659E3F0", Offset = "0x659D3F0", VA = "0x659E3F0")]
	public NativePassData(ref PassData pass, CompilerContextData ctx)
	{
	}

	[Token(Token = "0x60013B6")]
	[Address(RVA = "0x659EF30", Offset = "0x659DF30", VA = "0x659EF30")]
	public SubPassFlags GetSubPassFlagForMerging()
	{
		return default(SubPassFlags);
	}

	[Token(Token = "0x60013B7")]
	[Address(RVA = "0x659EF90", Offset = "0x659DF90", VA = "0x659EF90")]
	public void Clear()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013B8")]
	[Address(RVA = "0x659F0E0", Offset = "0x659E0E0", VA = "0x659F0E0")]
	public readonly bool IsValid()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013B9")]
	[Address(RVA = "0x659F0F0", Offset = "0x659E0F0", VA = "0x659F0F0")]
	public readonly ReadOnlySpan<PassData> GraphPasses(CompilerContextData ctx, out NativeArray<PassData> actualPasses)
	{
		return default(ReadOnlySpan<PassData>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013BA")]
	[Address(RVA = "0x659F340", Offset = "0x659E340", VA = "0x659F340")]
	public readonly void GetGraphPassNames(CompilerContextData ctx, DynamicArray<Name> dest)
	{
	}

	[Token(Token = "0x60013BB")]
	[Address(RVA = "0x659F4D0", Offset = "0x659E4D0", VA = "0x659F4D0")]
	private static bool CanMergeMSAASamples(ref NativePassData nativePass, ref PassData passToMerge)
	{
		return default(bool);
	}

	[Token(Token = "0x60013BC")]
	[Address(RVA = "0x659F4F0", Offset = "0x659E4F0", VA = "0x659F4F0")]
	private static bool AreExtendedFeatureFlagsCompatible(ExtendedFeatureFlags flags0, ExtendedFeatureFlags flags1)
	{
		return default(bool);
	}

	[Token(Token = "0x60013BD")]
	[Address(RVA = "0x659F500", Offset = "0x659E500", VA = "0x659F500")]
	public static PassBreakAudit CanMerge(CompilerContextData contextData, int activeNativePassId, int passIdToMerge)
	{
		return default(PassBreakAudit);
	}

	[Token(Token = "0x60013BE")]
	[Address(RVA = "0x65A0230", Offset = "0x659F230", VA = "0x65A0230")]
	private static bool TotalAttachmentsSizeExceedPixelStorageLimit(CompilerContextData contextData, ref NativePassData nativePass, ref FixedAttachmentArray<PassFragmentData> attachmentsToTryAdding)
	{
		return default(bool);
	}

	[Token(Token = "0x60013BF")]
	[Address(RVA = "0x65A04C0", Offset = "0x659F4C0", VA = "0x65A04C0")]
	private static bool CanMergeNativeSubPass(CompilerContextData contextData, ref NativePassData nativePass, ref PassData passToMerge)
	{
		return default(bool);
	}

	[Token(Token = "0x60013C0")]
	[Address(RVA = "0x659E820", Offset = "0x659D820", VA = "0x659E820")]
	public static void TryMergeNativeSubPass(CompilerContextData contextData, ref NativePassData nativePass, ref PassData passToMerge)
	{
	}

	[Token(Token = "0x60013C1")]
	[Address(RVA = "0x65A0AE0", Offset = "0x659FAE0", VA = "0x65A0AE0")]
	private void AddDepthAttachmentFirstDuringMerge(CompilerContextData contextData, in PassFragmentData depthAttachment)
	{
	}

	[Token(Token = "0x60013C2")]
	[Address(RVA = "0x65A0E40", Offset = "0x659FE40", VA = "0x65A0E40")]
	public static PassBreakAudit TryMerge(CompilerContextData contextData, int activeNativePassId, int passIdToMerge)
	{
		return default(PassBreakAudit);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013C3")]
	[Address(RVA = "0x65A14B0", Offset = "0x65A04B0", VA = "0x65A14B0")]
	public static void SetPassStatesForNativePass(CompilerContextData contextData, int nativePassId)
	{
	}
}
