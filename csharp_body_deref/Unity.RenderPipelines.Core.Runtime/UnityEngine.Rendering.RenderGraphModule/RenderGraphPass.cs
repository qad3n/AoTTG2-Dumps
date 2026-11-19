// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RenderGraphPass
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

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x200027C")]
[DebuggerDisplay("RenderPass: {name} (Index:{index} Async:{enableAsyncCompute})")]
internal abstract class RenderGraphPass
{
	[Token(Token = "0x200027D")]
	public struct RandomWriteResourceInfo
	{
		[Token(Token = "0x4000B53")]
		[FieldOffset(Offset = "0x0")]
		public ResourceHandle h;

		[Token(Token = "0x4000B54")]
		[FieldOffset(Offset = "0xC")]
		public bool preserveCounterValue;
	}

	[Token(Token = "0x4000B4C")]
	[FieldOffset(Offset = "0xB0")]
	public List<ResourceHandle>[] resourceReadLists;

	[Token(Token = "0x4000B4D")]
	[FieldOffset(Offset = "0xB8")]
	public List<ResourceHandle>[] resourceWriteLists;

	[Token(Token = "0x4000B4E")]
	[FieldOffset(Offset = "0xC0")]
	public List<ResourceHandle>[] transientResourceList;

	[Token(Token = "0x4000B4F")]
	[FieldOffset(Offset = "0xC8")]
	public List<RendererListHandle> usedRendererListList;

	[Token(Token = "0x4000B50")]
	[FieldOffset(Offset = "0xD0")]
	public List<(TextureHandle, int)> setGlobalsList;

	[Token(Token = "0x4000B51")]
	[FieldOffset(Offset = "0xD8")]
	public bool useAllGlobalTextures;

	[Token(Token = "0x4000B52")]
	[FieldOffset(Offset = "0xE0")]
	public List<ResourceHandle> implicitReadsList;

	[Token(Token = "0x1700023C")]
	public string name
	{
		[Token(Token = "0x60011B7")]
		[Address(RVA = "0x6579540", Offset = "0x6578540", VA = "0x6579540")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60011B8")]
		[Address(RVA = "0x6579550", Offset = "0x6578550", VA = "0x6579550")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700023D")]
	public int index
	{
		[Token(Token = "0x60011B9")]
		[Address(RVA = "0x6579560", Offset = "0x6578560", VA = "0x6579560")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60011BA")]
		[Address(RVA = "0x6579570", Offset = "0x6578570", VA = "0x6579570")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700023E")]
	public RenderGraphPassType type
	{
		[Token(Token = "0x60011BB")]
		[Address(RVA = "0x6579580", Offset = "0x6578580", VA = "0x6579580")]
		[CompilerGenerated]
		get
		{
			return default(RenderGraphPassType);
		}
		[Token(Token = "0x60011BC")]
		[Address(RVA = "0x6579590", Offset = "0x6578590", VA = "0x6579590")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700023F")]
	public ProfilingSampler customSampler
	{
		[Token(Token = "0x60011BD")]
		[Address(RVA = "0x65795A0", Offset = "0x65785A0", VA = "0x65795A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60011BE")]
		[Address(RVA = "0x65795B0", Offset = "0x65785B0", VA = "0x65795B0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000240")]
	public bool enableAsyncCompute
	{
		[Token(Token = "0x60011BF")]
		[Address(RVA = "0x65795C0", Offset = "0x65785C0", VA = "0x65795C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60011C0")]
		[Address(RVA = "0x65795D0", Offset = "0x65785D0", VA = "0x65795D0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000241")]
	public bool allowPassCulling
	{
		[Token(Token = "0x60011C1")]
		[Address(RVA = "0x65795E0", Offset = "0x65785E0", VA = "0x65795E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60011C2")]
		[Address(RVA = "0x65795F0", Offset = "0x65785F0", VA = "0x65795F0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000242")]
	public bool allowGlobalState
	{
		[Token(Token = "0x60011C3")]
		[Address(RVA = "0x6579600", Offset = "0x6578600", VA = "0x6579600")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60011C4")]
		[Address(RVA = "0x6579610", Offset = "0x6578610", VA = "0x6579610")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000243")]
	public bool enableFoveatedRasterization
	{
		[Token(Token = "0x60011C5")]
		[Address(RVA = "0x6579620", Offset = "0x6578620", VA = "0x6579620")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60011C6")]
		[Address(RVA = "0x6579630", Offset = "0x6578630", VA = "0x6579630")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000244")]
	public ExtendedFeatureFlags extendedFeatureFlags
	{
		[Token(Token = "0x60011C7")]
		[Address(RVA = "0x6579640", Offset = "0x6578640", VA = "0x6579640")]
		[CompilerGenerated]
		get
		{
			return default(ExtendedFeatureFlags);
		}
		[Token(Token = "0x60011C8")]
		[Address(RVA = "0x6579650", Offset = "0x6578650", VA = "0x6579650")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000245")]
	public TextureAccess depthAccess
	{
		[Token(Token = "0x60011C9")]
		[Address(RVA = "0x6579660", Offset = "0x6578660", VA = "0x6579660")]
		[CompilerGenerated]
		get
		{
			return default(TextureAccess);
		}
		[Token(Token = "0x60011CA")]
		[Address(RVA = "0x6579680", Offset = "0x6578680", VA = "0x6579680")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000246")]
	public TextureAccess[] colorBufferAccess
	{
		[Token(Token = "0x60011CB")]
		[Address(RVA = "0x65796A0", Offset = "0x65786A0", VA = "0x65796A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60011CC")]
		[Address(RVA = "0x65796B0", Offset = "0x65786B0", VA = "0x65796B0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000247")]
	public int colorBufferMaxIndex
	{
		[Token(Token = "0x60011CD")]
		[Address(RVA = "0x65796C0", Offset = "0x65786C0", VA = "0x65796C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60011CE")]
		[Address(RVA = "0x65796D0", Offset = "0x65786D0", VA = "0x65796D0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000248")]
	public bool hasShadingRateImage
	{
		[Token(Token = "0x60011CF")]
		[Address(RVA = "0x65796E0", Offset = "0x65786E0", VA = "0x65796E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60011D0")]
		[Address(RVA = "0x65796F0", Offset = "0x65786F0", VA = "0x65796F0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000249")]
	public TextureAccess shadingRateAccess
	{
		[Token(Token = "0x60011D1")]
		[Address(RVA = "0x6579700", Offset = "0x6578700", VA = "0x6579700")]
		[CompilerGenerated]
		get
		{
			return default(TextureAccess);
		}
		[Token(Token = "0x60011D2")]
		[Address(RVA = "0x6579720", Offset = "0x6578720", VA = "0x6579720")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700024A")]
	public bool hasShadingRateStates
	{
		[Token(Token = "0x60011D3")]
		[Address(RVA = "0x6579740", Offset = "0x6578740", VA = "0x6579740")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60011D4")]
		[Address(RVA = "0x6579750", Offset = "0x6578750", VA = "0x6579750")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700024B")]
	public ShadingRateFragmentSize shadingRateFragmentSize
	{
		[Token(Token = "0x60011D5")]
		[Address(RVA = "0x6579760", Offset = "0x6578760", VA = "0x6579760")]
		[CompilerGenerated]
		get
		{
			return default(ShadingRateFragmentSize);
		}
		[Token(Token = "0x60011D6")]
		[Address(RVA = "0x6579770", Offset = "0x6578770", VA = "0x6579770")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700024C")]
	public ShadingRateCombiner primitiveShadingRateCombiner
	{
		[Token(Token = "0x60011D7")]
		[Address(RVA = "0x6579780", Offset = "0x6578780", VA = "0x6579780")]
		[CompilerGenerated]
		get
		{
			return default(ShadingRateCombiner);
		}
		[Token(Token = "0x60011D8")]
		[Address(RVA = "0x6579790", Offset = "0x6578790", VA = "0x6579790")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700024D")]
	public ShadingRateCombiner fragmentShadingRateCombiner
	{
		[Token(Token = "0x60011D9")]
		[Address(RVA = "0x65797A0", Offset = "0x65787A0", VA = "0x65797A0")]
		[CompilerGenerated]
		get
		{
			return default(ShadingRateCombiner);
		}
		[Token(Token = "0x60011DA")]
		[Address(RVA = "0x65797B0", Offset = "0x65787B0", VA = "0x65797B0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700024E")]
	public TextureAccess[] fragmentInputAccess
	{
		[Token(Token = "0x60011DB")]
		[Address(RVA = "0x65797C0", Offset = "0x65787C0", VA = "0x65797C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60011DC")]
		[Address(RVA = "0x65797D0", Offset = "0x65787D0", VA = "0x65797D0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700024F")]
	public int fragmentInputMaxIndex
	{
		[Token(Token = "0x60011DD")]
		[Address(RVA = "0x65797F0", Offset = "0x65787F0", VA = "0x65797F0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60011DE")]
		[Address(RVA = "0x6579800", Offset = "0x6578800", VA = "0x6579800")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000250")]
	public RandomWriteResourceInfo[] randomAccessResource
	{
		[Token(Token = "0x60011DF")]
		[Address(RVA = "0x6579810", Offset = "0x6578810", VA = "0x6579810")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60011E0")]
		[Address(RVA = "0x6579820", Offset = "0x6578820", VA = "0x6579820")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000251")]
	public int randomAccessResourceMaxIndex
	{
		[Token(Token = "0x60011E1")]
		[Address(RVA = "0x6579840", Offset = "0x6578840", VA = "0x6579840")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60011E2")]
		[Address(RVA = "0x6579850", Offset = "0x6578850", VA = "0x6579850")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000252")]
	public bool generateDebugData
	{
		[Token(Token = "0x60011E3")]
		[Address(RVA = "0x6579860", Offset = "0x6578860", VA = "0x6579860")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60011E4")]
		[Address(RVA = "0x6579870", Offset = "0x6578870", VA = "0x6579870")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000253")]
	public bool allowRendererListCulling
	{
		[Token(Token = "0x60011E5")]
		[Address(RVA = "0x6579880", Offset = "0x6578880", VA = "0x6579880")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60011E6")]
		[Address(RVA = "0x6579890", Offset = "0x6578890", VA = "0x6579890")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x60011B3")]
	public abstract void Execute(InternalRenderGraphContext renderGraphContext);

	[Token(Token = "0x60011B4")]
	public abstract void Release(RenderGraphObjectPool pool);

	[Token(Token = "0x60011B5")]
	public abstract bool HasRenderFunc();

	[Token(Token = "0x60011B6")]
	public abstract int GetRenderFuncHash();

	[Token(Token = "0x60011E7")]
	[Address(RVA = "0x65798A0", Offset = "0x65788A0", VA = "0x65798A0")]
	public RenderGraphPass()
	{
	}

	[Token(Token = "0x60011E8")]
	[Address(RVA = "0x6579EB0", Offset = "0x6578EB0", VA = "0x6579EB0")]
	public void Clear()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011E9")]
	[Address(RVA = "0x657A130", Offset = "0x6579130", VA = "0x657A130")]
	public bool HasRenderAttachments()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011EA")]
	[Address(RVA = "0x657A380", Offset = "0x6579380", VA = "0x657A380")]
	public bool IsTransient(in ResourceHandle res)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011EB")]
	[Address(RVA = "0x657A530", Offset = "0x6579530", VA = "0x657A530")]
	public bool IsWritten(in ResourceHandle res)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011EC")]
	[Address(RVA = "0x657A6E0", Offset = "0x65796E0", VA = "0x657A6E0")]
	public bool IsRead(in ResourceHandle res)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011ED")]
	[Address(RVA = "0x657A9A0", Offset = "0x65799A0", VA = "0x657A9A0")]
	public bool IsAttachment(in TextureHandle res)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011EE")]
	[Address(RVA = "0x657ACE0", Offset = "0x6579CE0", VA = "0x657ACE0")]
	public void AddResourceWrite(in ResourceHandle res)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011EF")]
	[Address(RVA = "0x657AE00", Offset = "0x6579E00", VA = "0x657AE00")]
	public void AddResourceRead(in ResourceHandle res)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011F0")]
	[Address(RVA = "0x657AF20", Offset = "0x6579F20", VA = "0x657AF20")]
	public void AddTransientResource(in ResourceHandle res)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011F1")]
	[Address(RVA = "0x657B040", Offset = "0x657A040", VA = "0x657B040")]
	public void UseRendererList(in RendererListHandle rendererList)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011F2")]
	[Address(RVA = "0x657B0E0", Offset = "0x657A0E0", VA = "0x657B0E0")]
	public void EnableAsyncCompute(bool value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011F3")]
	[Address(RVA = "0x657B0F0", Offset = "0x657A0F0", VA = "0x657B0F0")]
	public void AllowPassCulling(bool value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011F4")]
	[Address(RVA = "0x657B100", Offset = "0x657A100", VA = "0x657B100")]
	public void EnableFoveatedRasterization(bool value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011F5")]
	[Address(RVA = "0x657B110", Offset = "0x657A110", VA = "0x657B110")]
	public void AllowRendererListCulling(bool value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011F6")]
	[Address(RVA = "0x657B120", Offset = "0x657A120", VA = "0x657B120")]
	public void AllowGlobalState(bool value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011F7")]
	[Address(RVA = "0x657B130", Offset = "0x657A130", VA = "0x657B130")]
	public void GenerateDebugData(bool value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011F8")]
	[Address(RVA = "0x657B140", Offset = "0x657A140", VA = "0x657B140")]
	public void SetColorBuffer(in TextureHandle resource, int index)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011F9")]
	[Address(RVA = "0x657B200", Offset = "0x657A200", VA = "0x657B200")]
	public void SetColorBufferRaw(in TextureHandle resource, int index, AccessFlags accessFlags, int mipLevel, int depthSlice)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011FA")]
	[Address(RVA = "0x657B4F0", Offset = "0x657A4F0", VA = "0x657B4F0")]
	public void SetFragmentInputRaw(in TextureHandle resource, int index, AccessFlags accessFlags, int mipLevel, int depthSlice)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011FB")]
	[Address(RVA = "0x657B7D0", Offset = "0x657A7D0", VA = "0x657B7D0")]
	public void SetRandomWriteResourceRaw(in ResourceHandle resource, int index, bool preserveCounterValue, AccessFlags accessFlags)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011FC")]
	[Address(RVA = "0x657BB00", Offset = "0x657AB00", VA = "0x657BB00")]
	public void SetDepthBuffer(in TextureHandle resource, DepthAccess flags)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011FD")]
	[Address(RVA = "0x657BB50", Offset = "0x657AB50", VA = "0x657BB50")]
	public void SetDepthBufferRaw(in TextureHandle resource, AccessFlags accessFlags, int mipLevel, int depthSlice)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011FE")]
	[Address(RVA = "0x657BD70", Offset = "0x657AD70", VA = "0x657BD70")]
	private void ComputeTextureHash(ref HashFNV1A32 generator, in ResourceHandle handle, RenderGraphResourceRegistry resources)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011FF")]
	[Address(RVA = "0x657C5B0", Offset = "0x657B5B0", VA = "0x657C5B0")]
	private static void ComputeHashForTextureAccess(ref HashFNV1A32 generator, in ResourceHandle handle, in TextureAccess textureAccess)
	{
	}

	[Token(Token = "0x6001200")]
	[Address(RVA = "0x657C630", Offset = "0x657B630", VA = "0x657C630")]
	public void ComputeHash(ref HashFNV1A32 generator, RenderGraphResourceRegistry resources)
	{
	}

	[Token(Token = "0x6001201")]
	[Address(RVA = "0x657D3E0", Offset = "0x657C3E0", VA = "0x657D3E0")]
	public void SetShadingRateImageRaw(in TextureHandle shadingRateImage)
	{
	}

	[Token(Token = "0x6001202")]
	[Address(RVA = "0x657D420", Offset = "0x657C420", VA = "0x657D420")]
	public void SetShadingRateImage(in TextureHandle shadingRateImage, AccessFlags accessFlags, int mipLevel, int depthSlice)
	{
	}

	[Token(Token = "0x6001203")]
	[Address(RVA = "0x657D4A0", Offset = "0x657C4A0", VA = "0x657D4A0")]
	public void SetShadingRateFragmentSize(ShadingRateFragmentSize shadingRateFragmentSize)
	{
	}

	[Token(Token = "0x6001204")]
	[Address(RVA = "0x657D4D0", Offset = "0x657C4D0", VA = "0x657D4D0")]
	public void SetShadingRateCombiner(ShadingRateCombinerStage stage, ShadingRateCombiner combiner)
	{
	}

	[Token(Token = "0x6001205")]
	[Address(RVA = "0x657D510", Offset = "0x657C510", VA = "0x657D510")]
	public void SetExtendedFeatureFlags(ExtendedFeatureFlags value)
	{
	}
}
[Token(Token = "0x200027F")]
[DebuggerDisplay("RenderPass: {name} (Index:{index} Async:{enableAsyncCompute})")]
[Obsolete("RenderGraphPass is deprecated, use RasterRenderGraphPass/ComputeRenderGraphPass/UnsafeRenderGraphPass instead.")]
internal sealed class RenderGraphPass<PassData> : BaseRenderGraphPass<PassData, RenderGraphContext> where PassData : class, new()
{
	[Token(Token = "0x4000B57")]
	[FieldOffset(Offset = "0x0")]
	internal static RenderGraphContext c;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600120B")]
	public override void Execute(InternalRenderGraphContext renderGraphContext)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600120C")]
	public override void Release(RenderGraphObjectPool pool)
	{
	}

	[Token(Token = "0x600120D")]
	public RenderGraphPass()
	{
	}
}
