using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000041")]
[DebuggerDisplay("RenderPass: {name} (Index:{index} Async:{enableAsyncCompute})")]
internal abstract class RenderGraphPass
{
	[Token(Token = "0x400010C")]
	[FieldOffset(Offset = "0x58")]
	public List<ResourceHandle>[] resourceReadLists;

	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x60")]
	public List<ResourceHandle>[] resourceWriteLists;

	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0x68")]
	public List<ResourceHandle>[] transientResourceList;

	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0x70")]
	public List<RendererListHandle> usedRendererListList;

	[Token(Token = "0x1700003A")]
	public string name
	{
		[Token(Token = "0x6000447")]
		[Address(RVA = "0x48675D0", Offset = "0x48675D0", VA = "0x48675D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000448")]
		[Address(RVA = "0x48675E0", Offset = "0x48675E0", VA = "0x48675E0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	public int index
	{
		[Token(Token = "0x6000449")]
		[Address(RVA = "0x48675F0", Offset = "0x48675F0", VA = "0x48675F0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600044A")]
		[Address(RVA = "0x4867600", Offset = "0x4867600", VA = "0x4867600")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700003C")]
	public ProfilingSampler customSampler
	{
		[Token(Token = "0x600044B")]
		[Address(RVA = "0x4867610", Offset = "0x4867610", VA = "0x4867610")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600044C")]
		[Address(RVA = "0x4867620", Offset = "0x4867620", VA = "0x4867620")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700003D")]
	public bool enableAsyncCompute
	{
		[Token(Token = "0x600044D")]
		[Address(RVA = "0x4867630", Offset = "0x4867630", VA = "0x4867630")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600044E")]
		[Address(RVA = "0x4867640", Offset = "0x4867640", VA = "0x4867640")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700003E")]
	public bool allowPassCulling
	{
		[Token(Token = "0x600044F")]
		[Address(RVA = "0x4867650", Offset = "0x4867650", VA = "0x4867650")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000450")]
		[Address(RVA = "0x4867660", Offset = "0x4867660", VA = "0x4867660")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	public bool allowGlobalState
	{
		[Token(Token = "0x6000451")]
		[Address(RVA = "0x4867670", Offset = "0x4867670", VA = "0x4867670")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000452")]
		[Address(RVA = "0x4867680", Offset = "0x4867680", VA = "0x4867680")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public TextureHandle depthBuffer
	{
		[Token(Token = "0x6000453")]
		[Address(RVA = "0x4867690", Offset = "0x4867690", VA = "0x4867690")]
		[CompilerGenerated]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x6000454")]
		[Address(RVA = "0x48676A0", Offset = "0x48676A0", VA = "0x48676A0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public TextureHandle[] colorBuffers
	{
		[Token(Token = "0x6000455")]
		[Address(RVA = "0x48676B0", Offset = "0x48676B0", VA = "0x48676B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000456")]
		[Address(RVA = "0x48676C0", Offset = "0x48676C0", VA = "0x48676C0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000042")]
	public int colorBufferMaxIndex
	{
		[Token(Token = "0x6000457")]
		[Address(RVA = "0x48676D0", Offset = "0x48676D0", VA = "0x48676D0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000458")]
		[Address(RVA = "0x48676E0", Offset = "0x48676E0", VA = "0x48676E0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public int refCount
	{
		[Token(Token = "0x6000459")]
		[Address(RVA = "0x48676F0", Offset = "0x48676F0", VA = "0x48676F0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600045A")]
		[Address(RVA = "0x4867700", Offset = "0x4867700", VA = "0x4867700")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public bool generateDebugData
	{
		[Token(Token = "0x600045B")]
		[Address(RVA = "0x4867710", Offset = "0x4867710", VA = "0x4867710")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600045C")]
		[Address(RVA = "0x4867720", Offset = "0x4867720", VA = "0x4867720")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public bool allowRendererListCulling
	{
		[Token(Token = "0x600045D")]
		[Address(RVA = "0x4867730", Offset = "0x4867730", VA = "0x4867730")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600045E")]
		[Address(RVA = "0x4867740", Offset = "0x4867740", VA = "0x4867740")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x6000444")]
	public abstract void Execute(InternalRenderGraphContext renderGraphContext);

	[Token(Token = "0x6000445")]
	public abstract void Release(RenderGraphObjectPool pool);

	[Token(Token = "0x6000446")]
	public abstract bool HasRenderFunc();

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x4867750", Offset = "0x4867750", VA = "0x4867750")]
	public RenderGraphPass()
	{
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x4867B40", Offset = "0x4867B40", VA = "0x4867B40")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x4867E80", Offset = "0x4867E80", VA = "0x4867E80")]
	public bool IsTransient(in ResourceHandle res)
	{
		return default(bool);
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x4864BD0", Offset = "0x4864BD0", VA = "0x4864BD0")]
	public bool IsWritten(in ResourceHandle res)
	{
		return default(bool);
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x4867FD0", Offset = "0x4867FD0", VA = "0x4867FD0")]
	public bool IsRead(in ResourceHandle res)
	{
		return default(bool);
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x48682B0", Offset = "0x48682B0", VA = "0x48682B0")]
	public bool IsAttachment(in TextureHandle res)
	{
		return default(bool);
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x48631A0", Offset = "0x48631A0", VA = "0x48631A0")]
	public void AddResourceWrite(in ResourceHandle res)
	{
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x4863050", Offset = "0x4863050", VA = "0x4863050")]
	public void AddResourceRead(in ResourceHandle res)
	{
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x4863570", Offset = "0x4863570", VA = "0x4863570")]
	public void AddTransientResource(in ResourceHandle res)
	{
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x48639C0", Offset = "0x48639C0", VA = "0x48639C0")]
	public void UseRendererList(RendererListHandle rendererList)
	{
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x4863E70", Offset = "0x4863E70", VA = "0x4863E70")]
	public void EnableAsyncCompute(bool value)
	{
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x4863EA0", Offset = "0x4863EA0", VA = "0x4863EA0")]
	public void AllowPassCulling(bool value)
	{
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x4863F30", Offset = "0x4863F30", VA = "0x4863F30")]
	public void AllowRendererListCulling(bool value)
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x48641B0", Offset = "0x48641B0", VA = "0x48641B0")]
	public void AllowGlobalState(bool value)
	{
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x4864050", Offset = "0x4864050", VA = "0x4864050")]
	public void GenerateDebugData(bool value)
	{
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x48627A0", Offset = "0x48627A0", VA = "0x48627A0")]
	public void SetColorBuffer(TextureHandle resource, int index)
	{
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x48654B0", Offset = "0x48654B0", VA = "0x48654B0")]
	public void SetColorBufferRaw(TextureHandle resource, int index)
	{
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x4862C20", Offset = "0x4862C20", VA = "0x4862C20")]
	public void SetDepthBuffer(TextureHandle resource, DepthAccess flags)
	{
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x4865AA0", Offset = "0x4865AA0", VA = "0x4865AA0")]
	public void SetDepthBufferRaw(TextureHandle resource)
	{
	}
}
[Token(Token = "0x2000043")]
[DebuggerDisplay("RenderPass: {name} (Index:{index} Async:{enableAsyncCompute})")]
internal sealed class RenderGraphPass<PassData> : BaseRenderGraphPass<PassData> where PassData : class, new()
{
	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0x0")]
	internal BaseRenderFunc<PassData, RenderGraphContext> renderFunc;

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x0")]
	internal static RenderGraphContext c;

	[Token(Token = "0x6000474")]
	public override void Execute(InternalRenderGraphContext renderGraphContext)
	{
	}

	[Token(Token = "0x6000475")]
	public override void Release(RenderGraphObjectPool pool)
	{
	}

	[Token(Token = "0x6000476")]
	public override bool HasRenderFunc()
	{
		return default(bool);
	}

	[Token(Token = "0x6000477")]
	public RenderGraphPass()
	{
	}
}
