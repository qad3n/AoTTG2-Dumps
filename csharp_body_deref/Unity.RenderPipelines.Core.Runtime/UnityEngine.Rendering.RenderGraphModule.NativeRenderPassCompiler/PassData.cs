// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.PassData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler;

[Token(Token = "0x20002C0")]
internal struct PassData
{
	[Token(Token = "0x4000C8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public int passId;

	[Token(Token = "0x4000C8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public RenderGraphPassType type;

	[Token(Token = "0x4000C8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public bool hasFoveatedRasterization;

	[Token(Token = "0x4000C8D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public ExtendedFeatureFlags extendedFeatureFlags;

	[Token(Token = "0x4000C8E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public int tag;

	[Token(Token = "0x4000C8F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	public ShadingRateFragmentSize shadingRateFragmentSize;

	[Token(Token = "0x4000C90")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public ShadingRateCombiner primitiveShadingRateCombiner;

	[Token(Token = "0x4000C91")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	public ShadingRateCombiner fragmentShadingRateCombiner;

	[Token(Token = "0x4000C92")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public PassMergeState mergeState;

	[Token(Token = "0x4000C93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	public int nativePassIndex;

	[Token(Token = "0x4000C94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public int nativeSubPassIndex;

	[Token(Token = "0x4000C95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	public int firstInput;

	[Token(Token = "0x4000C96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public int numInputs;

	[Token(Token = "0x4000C97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	public int firstOutput;

	[Token(Token = "0x4000C98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public int numOutputs;

	[Token(Token = "0x4000C99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	public int firstFragment;

	[Token(Token = "0x4000C9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public int numFragments;

	[Token(Token = "0x4000C9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	public int firstFragmentInput;

	[Token(Token = "0x4000C9C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public int numFragmentInputs;

	[Token(Token = "0x4000C9D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	public int firstSampledOnlyRaster;

	[Token(Token = "0x4000C9E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public int numSampledOnlyRaster;

	[Token(Token = "0x4000C9F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	public int firstRandomAccessResource;

	[Token(Token = "0x4000CA0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public int numRandomAccessResources;

	[Token(Token = "0x4000CA1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	public int firstCreate;

	[Token(Token = "0x4000CA2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public int numCreated;

	[Token(Token = "0x4000CA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	public int firstDestroy;

	[Token(Token = "0x4000CA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public int numDestroyed;

	[Token(Token = "0x4000CA5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	public int shadingRateImageIndex;

	[Token(Token = "0x4000CA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	public int fragmentInfoWidth;

	[Token(Token = "0x4000CA7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	public int fragmentInfoHeight;

	[Token(Token = "0x4000CA8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	public int fragmentInfoVolumeDepth;

	[Token(Token = "0x4000CA9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	public int fragmentInfoSamples;

	[Token(Token = "0x4000CAA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public int waitOnGraphicsFencePassId;

	[Token(Token = "0x4000CAB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
	public int awaitingMyGraphicsFencePassId;

	[Token(Token = "0x4000CAC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	public bool asyncCompute;

	[Token(Token = "0x4000CAD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x89")]
	public bool hasSideEffects;

	[Token(Token = "0x4000CAE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8A")]
	public bool culled;

	[Token(Token = "0x4000CAF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8B")]
	public bool beginNativeSubpass;

	[Token(Token = "0x4000CB0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	public bool fragmentInfoValid;

	[Token(Token = "0x4000CB1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8D")]
	public bool fragmentInfoHasDepth;

	[Token(Token = "0x4000CB2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8E")]
	public bool insertGraphicsFence;

	[Token(Token = "0x4000CB3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8F")]
	public bool hasShadingRateStates;

	[Token(Token = "0x17000269")]
	public bool fragmentInfoHasShadingRateImage
	{
		[Token(Token = "0x6001398")]
		[Address(RVA = "0x2BB9400", Offset = "0x2BB7A00", VA = "0x182BB9400")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001399")]
	[Address(RVA = "0x2BB8980", Offset = "0x2BB6F80", VA = "0x182BB8980")]
	public Name GetName(CompilerContextData ctx)
	{
		return default(Name);
	}

	[Token(Token = "0x600139A")]
	[Address(RVA = "0x2BB92E0", Offset = "0x2BB78E0", VA = "0x182BB92E0")]
	public PassData(in RenderGraphPass pass, int passIndex)
	{
	}

	[Token(Token = "0x600139B")]
	[Address(RVA = "0x2BB8F10", Offset = "0x2BB7510", VA = "0x182BB8F10")]
	public void ResetAndInitialize(in RenderGraphPass pass, int passIndex)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600139C")]
	[Address(RVA = "0x2BB8D70", Offset = "0x2BB7370", VA = "0x182BB8D70")]
	public readonly ReadOnlySpan<PassOutputData> Outputs(CompilerContextData ctx)
	{
		return default(ReadOnlySpan<PassOutputData>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600139D")]
	[Address(RVA = "0x2BB89F0", Offset = "0x2BB6FF0", VA = "0x182BB89F0")]
	public readonly ReadOnlySpan<PassInputData> Inputs(CompilerContextData ctx)
	{
		return default(ReadOnlySpan<PassInputData>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600139E")]
	[Address(RVA = "0x2BB88B0", Offset = "0x2BB6EB0", VA = "0x182BB88B0")]
	public readonly ReadOnlySpan<PassFragmentData> Fragments(CompilerContextData ctx)
	{
		return default(ReadOnlySpan<PassFragmentData>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600139F")]
	[Address(RVA = "0x2BB9030", Offset = "0x2BB7630", VA = "0x182BB9030")]
	public readonly ReadOnlySpan<ResourceHandle> SampledTexturesIfRaster(CompilerContextData ctx)
	{
		return default(ReadOnlySpan<ResourceHandle>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013A0")]
	[Address(RVA = "0x2BB9100", Offset = "0x2BB7700", VA = "0x182BB9100")]
	public readonly PassFragmentData ShadingRateImage(CompilerContextData ctx)
	{
		return default(PassFragmentData);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013A1")]
	[Address(RVA = "0x2BB87E0", Offset = "0x2BB6DE0", VA = "0x182BB87E0")]
	public readonly ReadOnlySpan<PassFragmentData> FragmentInputs(CompilerContextData ctx)
	{
		return default(ReadOnlySpan<PassFragmentData>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013A2")]
	[Address(RVA = "0x2BB8710", Offset = "0x2BB6D10", VA = "0x182BB8710")]
	public readonly ReadOnlySpan<ResourceHandle> FirstUsedResources(CompilerContextData ctx)
	{
		return default(ReadOnlySpan<ResourceHandle>);
	}

	[Token(Token = "0x60013A3")]
	[Address(RVA = "0x2BB8E40", Offset = "0x2BB7440", VA = "0x182BB8E40")]
	public ReadOnlySpan<PassRandomWriteData> RandomWriteTextures(CompilerContextData ctx)
	{
		return default(ReadOnlySpan<PassRandomWriteData>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013A4")]
	[Address(RVA = "0x2BB8CA0", Offset = "0x2BB72A0", VA = "0x182BB8CA0")]
	public readonly ReadOnlySpan<ResourceHandle> LastUsedResources(CompilerContextData ctx)
	{
		return default(ReadOnlySpan<ResourceHandle>);
	}

	[Token(Token = "0x60013A5")]
	[Address(RVA = "0x2BB91F0", Offset = "0x2BB77F0", VA = "0x182BB91F0")]
	private bool TrySetupAndValidateFragmentInfo(in ResourceHandle h, CompilerContextData ctx, out string errorMessage)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013A6")]
	[Address(RVA = "0x2BB91C0", Offset = "0x2BB77C0", VA = "0x182BB91C0")]
	internal void TryAddFragment(in ResourceHandle h, CompilerContextData ctx, out string errorMessage)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013A7")]
	[Address(RVA = "0x2BB9190", Offset = "0x2BB7790", VA = "0x182BB9190")]
	internal void TryAddFragmentInput(in ResourceHandle h, CompilerContextData ctx, out string errorMessage)
	{
	}

	[Token(Token = "0x60013A8")]
	[Address(RVA = "0x2BB83A0", Offset = "0x2BB69A0", VA = "0x182BB83A0")]
	internal void AddRandomAccessResource()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013A9")]
	[Address(RVA = "0x2BB8040", Offset = "0x2BB6640", VA = "0x182BB8040")]
	internal void AddFirstUse(in ResourceHandle h, CompilerContextData ctx)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013AA")]
	[Address(RVA = "0x2BB81F0", Offset = "0x2BB67F0", VA = "0x182BB81F0")]
	internal void AddLastUse(in ResourceHandle h, CompilerContextData ctx)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013AB")]
	[Address(RVA = "0x2BB8AC0", Offset = "0x2BB70C0", VA = "0x182BB8AC0")]
	internal readonly bool IsUsedAsFragment(in ResourceHandle h, CompilerContextData ctx)
	{
		return default(bool);
	}

	[Token(Token = "0x60013AC")]
	[Address(RVA = "0x2BB83B0", Offset = "0x2BB69B0", VA = "0x182BB83B0")]
	internal void DisconnectFromResources(CompilerContextData ctx, [Optional] Stack<ResourceHandle> unusedVersionedResourceIdCullingStack, int type = 0)
	{
	}
}
