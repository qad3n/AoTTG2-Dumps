// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RenderGraphPass
// Update status: NEW in this game update
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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60011B8")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700023D")]
	public int index
	{
		[Token(Token = "0x60011B9")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60011BA")]
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700023E")]
	public RenderGraphPassType type
	{
		[Token(Token = "0x60011BB")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		[CompilerGenerated]
		get
		{
			return default(RenderGraphPassType);
		}
		[Token(Token = "0x60011BC")]
		[Address(RVA = "0xD23F80", Offset = "0xD22580", VA = "0x180D23F80")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700023F")]
	public ProfilingSampler customSampler
	{
		[Token(Token = "0x60011BD")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60011BE")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000240")]
	public bool enableAsyncCompute
	{
		[Token(Token = "0x60011BF")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60011C0")]
		[Address(RVA = "0xF1D940", Offset = "0xF1BF40", VA = "0x180F1D940")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000241")]
	public bool allowPassCulling
	{
		[Token(Token = "0x60011C1")]
		[Address(RVA = "0x1573470", Offset = "0x1571A70", VA = "0x181573470")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60011C2")]
		[Address(RVA = "0x15736C0", Offset = "0x1571CC0", VA = "0x1815736C0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000242")]
	public bool allowGlobalState
	{
		[Token(Token = "0x60011C3")]
		[Address(RVA = "0x1573430", Offset = "0x1571A30", VA = "0x181573430")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60011C4")]
		[Address(RVA = "0x15736B0", Offset = "0x1571CB0", VA = "0x1815736B0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000243")]
	public bool enableFoveatedRasterization
	{
		[Token(Token = "0x60011C5")]
		[Address(RVA = "0x20FB1B0", Offset = "0x20F97B0", VA = "0x1820FB1B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60011C6")]
		[Address(RVA = "0x20FB210", Offset = "0x20F9810", VA = "0x1820FB210")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000244")]
	public ExtendedFeatureFlags extendedFeatureFlags
	{
		[Token(Token = "0x60011C7")]
		[Address(RVA = "0xB3E080", Offset = "0xB3C680", VA = "0x180B3E080")]
		[CompilerGenerated]
		get
		{
			return default(ExtendedFeatureFlags);
		}
		[Token(Token = "0x60011C8")]
		[Address(RVA = "0xB3E0E0", Offset = "0xB3C6E0", VA = "0x180B3E0E0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000245")]
	public TextureAccess depthAccess
	{
		[Token(Token = "0x60011C9")]
		[Address(RVA = "0x2B9B6B0", Offset = "0x2B99CB0", VA = "0x182B9B6B0")]
		[CompilerGenerated]
		get
		{
			return default(TextureAccess);
		}
		[Token(Token = "0x60011CA")]
		[Address(RVA = "0x2B9B6F0", Offset = "0x2B99CF0", VA = "0x182B9B6F0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000246")]
	public TextureAccess[] colorBufferAccess
	{
		[Token(Token = "0x60011CB")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60011CC")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000247")]
	public int colorBufferMaxIndex
	{
		[Token(Token = "0x60011CD")]
		[Address(RVA = "0x1BD3CB0", Offset = "0x1BD22B0", VA = "0x181BD3CB0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60011CE")]
		[Address(RVA = "0x1ADFEB0", Offset = "0x1ADE4B0", VA = "0x181ADFEB0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000248")]
	public bool hasShadingRateImage
	{
		[Token(Token = "0x60011CF")]
		[Address(RVA = "0x1B020E0", Offset = "0x1B006E0", VA = "0x181B020E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60011D0")]
		[Address(RVA = "0x2B9B700", Offset = "0x2B99D00", VA = "0x182B9B700")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000249")]
	public TextureAccess shadingRateAccess
	{
		[Token(Token = "0x60011D1")]
		[Address(RVA = "0x2B9B6D0", Offset = "0x2B99CD0", VA = "0x182B9B6D0")]
		[CompilerGenerated]
		get
		{
			return default(TextureAccess);
		}
		[Token(Token = "0x60011D2")]
		[Address(RVA = "0x2B9B720", Offset = "0x2B99D20", VA = "0x182B9B720")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700024A")]
	public bool hasShadingRateStates
	{
		[Token(Token = "0x60011D3")]
		[Address(RVA = "0x1D2B370", Offset = "0x1D29970", VA = "0x181D2B370")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60011D4")]
		[Address(RVA = "0x1D2B410", Offset = "0x1D29A10", VA = "0x181D2B410")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700024B")]
	public ShadingRateFragmentSize shadingRateFragmentSize
	{
		[Token(Token = "0x60011D5")]
		[Address(RVA = "0xB5B9B0", Offset = "0xB59FB0", VA = "0x180B5B9B0")]
		[CompilerGenerated]
		get
		{
			return default(ShadingRateFragmentSize);
		}
		[Token(Token = "0x60011D6")]
		[Address(RVA = "0xB5BE20", Offset = "0xB5A420", VA = "0x180B5BE20")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700024C")]
	public ShadingRateCombiner primitiveShadingRateCombiner
	{
		[Token(Token = "0x60011D7")]
		[Address(RVA = "0xA4D4C0", Offset = "0xA4BAC0", VA = "0x180A4D4C0")]
		[CompilerGenerated]
		get
		{
			return default(ShadingRateCombiner);
		}
		[Token(Token = "0x60011D8")]
		[Address(RVA = "0xA4D5B0", Offset = "0xA4BBB0", VA = "0x180A4D5B0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700024D")]
	public ShadingRateCombiner fragmentShadingRateCombiner
	{
		[Token(Token = "0x60011D9")]
		[Address(RVA = "0xA4D4B0", Offset = "0xA4BAB0", VA = "0x180A4D4B0")]
		[CompilerGenerated]
		get
		{
			return default(ShadingRateCombiner);
		}
		[Token(Token = "0x60011DA")]
		[Address(RVA = "0xA4D5A0", Offset = "0xA4BBA0", VA = "0x180A4D5A0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700024E")]
	public TextureAccess[] fragmentInputAccess
	{
		[Token(Token = "0x60011DB")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60011DC")]
		[Address(RVA = "0xA4D750", Offset = "0xA4BD50", VA = "0x180A4D750")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700024F")]
	public int fragmentInputMaxIndex
	{
		[Token(Token = "0x60011DD")]
		[Address(RVA = "0xB5B9F0", Offset = "0xB59FF0", VA = "0x180B5B9F0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60011DE")]
		[Address(RVA = "0xB5BE70", Offset = "0xB5A470", VA = "0x180B5BE70")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000250")]
	public RandomWriteResourceInfo[] randomAccessResource
	{
		[Token(Token = "0x60011DF")]
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60011E0")]
		[Address(RVA = "0x189BA60", Offset = "0x189A060", VA = "0x18189BA60")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000251")]
	public int randomAccessResourceMaxIndex
	{
		[Token(Token = "0x60011E1")]
		[Address(RVA = "0x266C1E0", Offset = "0x266A7E0", VA = "0x18266C1E0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60011E2")]
		[Address(RVA = "0x2B9B710", Offset = "0x2B99D10", VA = "0x182B9B710")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000252")]
	public bool generateDebugData
	{
		[Token(Token = "0x60011E3")]
		[Address(RVA = "0x1D90420", Offset = "0x1D8EA20", VA = "0x181D90420")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60011E4")]
		[Address(RVA = "0x1D910E0", Offset = "0x1D8F6E0", VA = "0x181D910E0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000253")]
	public bool allowRendererListCulling
	{
		[Token(Token = "0x60011E5")]
		[Address(RVA = "0x1D90470", Offset = "0x1D8EA70", VA = "0x181D90470")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60011E6")]
		[Address(RVA = "0x2B98AC0", Offset = "0x2B970C0", VA = "0x182B98AC0")]
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
	[Address(RVA = "0x2B9B2A0", Offset = "0x2B998A0", VA = "0x182B9B2A0")]
	public RenderGraphPass()
	{
	}

	[Token(Token = "0x60011E8")]
	[Address(RVA = "0x2B98AD0", Offset = "0x2B970D0", VA = "0x182B98AD0")]
	public void Clear()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011E9")]
	[Address(RVA = "0x2B99EB0", Offset = "0x2B984B0", VA = "0x182B99EB0")]
	public bool HasRenderAttachments()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011EA")]
	[Address(RVA = "0x2B9A420", Offset = "0x2B98A20", VA = "0x182B9A420")]
	public bool IsTransient(in ResourceHandle res)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011EB")]
	[Address(RVA = "0x2B9A5A0", Offset = "0x2B98BA0", VA = "0x182B9A5A0")]
	public bool IsWritten(in ResourceHandle res)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011EC")]
	[Address(RVA = "0x2B9A1D0", Offset = "0x2B987D0", VA = "0x182B9A1D0")]
	public bool IsRead(in ResourceHandle res)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011ED")]
	[Address(RVA = "0x2B99FE0", Offset = "0x2B985E0", VA = "0x182B99FE0")]
	public bool IsAttachment(in TextureHandle res)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011EE")]
	[Address(RVA = "0x2B98860", Offset = "0x2B96E60", VA = "0x182B98860")]
	public void AddResourceWrite(in ResourceHandle res)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011EF")]
	[Address(RVA = "0x2B98730", Offset = "0x2B96D30", VA = "0x182B98730")]
	public void AddResourceRead(in ResourceHandle res)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011F0")]
	[Address(RVA = "0x2B98990", Offset = "0x2B96F90", VA = "0x182B98990")]
	public void AddTransientResource(in ResourceHandle res)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011F1")]
	[Address(RVA = "0x2B9B1E0", Offset = "0x2B997E0", VA = "0x182B9B1E0")]
	public void UseRendererList(in RendererListHandle rendererList)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011F2")]
	[Address(RVA = "0xF1D940", Offset = "0xF1BF40", VA = "0x180F1D940")]
	public void EnableAsyncCompute(bool value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011F3")]
	[Address(RVA = "0x15736C0", Offset = "0x1571CC0", VA = "0x1815736C0")]
	public void AllowPassCulling(bool value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011F4")]
	[Address(RVA = "0x20FB210", Offset = "0x20F9810", VA = "0x1820FB210")]
	public void EnableFoveatedRasterization(bool value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011F5")]
	[Address(RVA = "0x2B98AC0", Offset = "0x2B970C0", VA = "0x182B98AC0")]
	public void AllowRendererListCulling(bool value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011F6")]
	[Address(RVA = "0x15736B0", Offset = "0x1571CB0", VA = "0x1815736B0")]
	public void AllowGlobalState(bool value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011F7")]
	[Address(RVA = "0x1D910E0", Offset = "0x1D8F6E0", VA = "0x181D910E0")]
	public void GenerateDebugData(bool value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011F8")]
	[Address(RVA = "0x2B9A920", Offset = "0x2B98F20", VA = "0x182B9A920")]
	public void SetColorBuffer(in TextureHandle resource, int index)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011F9")]
	[Address(RVA = "0x2B9A720", Offset = "0x2B98D20", VA = "0x182B9A720")]
	public void SetColorBufferRaw(in TextureHandle resource, int index, AccessFlags accessFlags, int mipLevel, int depthSlice)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011FA")]
	[Address(RVA = "0x2B9ABD0", Offset = "0x2B991D0", VA = "0x182B9ABD0")]
	public void SetFragmentInputRaw(in TextureHandle resource, int index, AccessFlags accessFlags, int mipLevel, int depthSlice)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011FB")]
	[Address(RVA = "0x2B9ADE0", Offset = "0x2B993E0", VA = "0x182B9ADE0")]
	public void SetRandomWriteResourceRaw(in ResourceHandle resource, int index, bool preserveCounterValue, AccessFlags accessFlags)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011FC")]
	[Address(RVA = "0x2B9AB50", Offset = "0x2B99150", VA = "0x182B9AB50")]
	public void SetDepthBuffer(in TextureHandle resource, DepthAccess flags)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011FD")]
	[Address(RVA = "0x2B9A9F0", Offset = "0x2B98FF0", VA = "0x182B9A9F0")]
	public void SetDepthBufferRaw(in TextureHandle resource, AccessFlags accessFlags, int mipLevel, int depthSlice)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011FE")]
	[Address(RVA = "0x2B999A0", Offset = "0x2B97FA0", VA = "0x182B999A0")]
	private void ComputeTextureHash(ref HashFNV1A32 generator, in ResourceHandle handle, RenderGraphResourceRegistry resources)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011FF")]
	[Address(RVA = "0x2B98DB0", Offset = "0x2B973B0", VA = "0x182B98DB0")]
	private static void ComputeHashForTextureAccess(ref HashFNV1A32 generator, in ResourceHandle handle, in TextureAccess textureAccess)
	{
	}

	[Token(Token = "0x6001200")]
	[Address(RVA = "0x2B98E40", Offset = "0x2B97440", VA = "0x182B98E40")]
	public void ComputeHash(ref HashFNV1A32 generator, RenderGraphResourceRegistry resources)
	{
	}

	[Token(Token = "0x6001201")]
	[Address(RVA = "0x2B9B110", Offset = "0x2B99710", VA = "0x182B9B110")]
	public void SetShadingRateImageRaw(in TextureHandle shadingRateImage)
	{
	}

	[Token(Token = "0x6001202")]
	[Address(RVA = "0x2B9B160", Offset = "0x2B99760", VA = "0x182B9B160")]
	public void SetShadingRateImage(in TextureHandle shadingRateImage, AccessFlags accessFlags, int mipLevel, int depthSlice)
	{
	}

	[Token(Token = "0x6001203")]
	[Address(RVA = "0x2B9B0E0", Offset = "0x2B996E0", VA = "0x182B9B0E0")]
	public void SetShadingRateFragmentSize(ShadingRateFragmentSize shadingRateFragmentSize)
	{
	}

	[Token(Token = "0x6001204")]
	[Address(RVA = "0x2B9B090", Offset = "0x2B99690", VA = "0x182B9B090")]
	public void SetShadingRateCombiner(ShadingRateCombinerStage stage, ShadingRateCombiner combiner)
	{
	}

	[Token(Token = "0x6001205")]
	[Address(RVA = "0x2B9ABC0", Offset = "0x2B991C0", VA = "0x182B9ABC0")]
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
