// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4B8C6C0", Offset = "0x4B8C6C0", VA = "0x4B8C6C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000448")]
		[Address(RVA = "0x4B8C6D0", Offset = "0x4B8C6D0", VA = "0x4B8C6D0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	public int index
	{
		[Token(Token = "0x6000449")]
		[Address(RVA = "0x4B8C6E0", Offset = "0x4B8C6E0", VA = "0x4B8C6E0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600044A")]
		[Address(RVA = "0x4B8C6F0", Offset = "0x4B8C6F0", VA = "0x4B8C6F0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700003C")]
	public ProfilingSampler customSampler
	{
		[Token(Token = "0x600044B")]
		[Address(RVA = "0x4B8C700", Offset = "0x4B8C700", VA = "0x4B8C700")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600044C")]
		[Address(RVA = "0x4B8C710", Offset = "0x4B8C710", VA = "0x4B8C710")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700003D")]
	public bool enableAsyncCompute
	{
		[Token(Token = "0x600044D")]
		[Address(RVA = "0x4B8C720", Offset = "0x4B8C720", VA = "0x4B8C720")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600044E")]
		[Address(RVA = "0x4B8C730", Offset = "0x4B8C730", VA = "0x4B8C730")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700003E")]
	public bool allowPassCulling
	{
		[Token(Token = "0x600044F")]
		[Address(RVA = "0x4B8C740", Offset = "0x4B8C740", VA = "0x4B8C740")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000450")]
		[Address(RVA = "0x4B8C750", Offset = "0x4B8C750", VA = "0x4B8C750")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	public bool allowGlobalState
	{
		[Token(Token = "0x6000451")]
		[Address(RVA = "0x4B8C760", Offset = "0x4B8C760", VA = "0x4B8C760")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000452")]
		[Address(RVA = "0x4B8C770", Offset = "0x4B8C770", VA = "0x4B8C770")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public TextureHandle depthBuffer
	{
		[Token(Token = "0x6000453")]
		[Address(RVA = "0x4B8C780", Offset = "0x4B8C780", VA = "0x4B8C780")]
		[CompilerGenerated]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x6000454")]
		[Address(RVA = "0x4B8C790", Offset = "0x4B8C790", VA = "0x4B8C790")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public TextureHandle[] colorBuffers
	{
		[Token(Token = "0x6000455")]
		[Address(RVA = "0x4B8C7A0", Offset = "0x4B8C7A0", VA = "0x4B8C7A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000456")]
		[Address(RVA = "0x4B8C7B0", Offset = "0x4B8C7B0", VA = "0x4B8C7B0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000042")]
	public int colorBufferMaxIndex
	{
		[Token(Token = "0x6000457")]
		[Address(RVA = "0x4B8C7C0", Offset = "0x4B8C7C0", VA = "0x4B8C7C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000458")]
		[Address(RVA = "0x4B8C7D0", Offset = "0x4B8C7D0", VA = "0x4B8C7D0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public int refCount
	{
		[Token(Token = "0x6000459")]
		[Address(RVA = "0x4B8C7E0", Offset = "0x4B8C7E0", VA = "0x4B8C7E0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600045A")]
		[Address(RVA = "0x4B8C7F0", Offset = "0x4B8C7F0", VA = "0x4B8C7F0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public bool generateDebugData
	{
		[Token(Token = "0x600045B")]
		[Address(RVA = "0x4B8C800", Offset = "0x4B8C800", VA = "0x4B8C800")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600045C")]
		[Address(RVA = "0x4B8C810", Offset = "0x4B8C810", VA = "0x4B8C810")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public bool allowRendererListCulling
	{
		[Token(Token = "0x600045D")]
		[Address(RVA = "0x4B8C820", Offset = "0x4B8C820", VA = "0x4B8C820")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600045E")]
		[Address(RVA = "0x4B8C830", Offset = "0x4B8C830", VA = "0x4B8C830")]
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
	[Address(RVA = "0x4B8C840", Offset = "0x4B8C840", VA = "0x4B8C840")]
	public RenderGraphPass()
	{
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x4B8CC30", Offset = "0x4B8CC30", VA = "0x4B8CC30")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x4B8CF70", Offset = "0x4B8CF70", VA = "0x4B8CF70")]
	public bool IsTransient(in ResourceHandle res)
	{
		return default(bool);
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x4B89CC0", Offset = "0x4B89CC0", VA = "0x4B89CC0")]
	public bool IsWritten(in ResourceHandle res)
	{
		return default(bool);
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x4B8D0C0", Offset = "0x4B8D0C0", VA = "0x4B8D0C0")]
	public bool IsRead(in ResourceHandle res)
	{
		return default(bool);
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x4B8D3A0", Offset = "0x4B8D3A0", VA = "0x4B8D3A0")]
	public bool IsAttachment(in TextureHandle res)
	{
		return default(bool);
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x4B88290", Offset = "0x4B88290", VA = "0x4B88290")]
	public void AddResourceWrite(in ResourceHandle res)
	{
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x4B88140", Offset = "0x4B88140", VA = "0x4B88140")]
	public void AddResourceRead(in ResourceHandle res)
	{
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x4B88660", Offset = "0x4B88660", VA = "0x4B88660")]
	public void AddTransientResource(in ResourceHandle res)
	{
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x4B88AB0", Offset = "0x4B88AB0", VA = "0x4B88AB0")]
	public void UseRendererList(RendererListHandle rendererList)
	{
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x4B88F60", Offset = "0x4B88F60", VA = "0x4B88F60")]
	public void EnableAsyncCompute(bool value)
	{
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x4B88F90", Offset = "0x4B88F90", VA = "0x4B88F90")]
	public void AllowPassCulling(bool value)
	{
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x4B89020", Offset = "0x4B89020", VA = "0x4B89020")]
	public void AllowRendererListCulling(bool value)
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x4B892A0", Offset = "0x4B892A0", VA = "0x4B892A0")]
	public void AllowGlobalState(bool value)
	{
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x4B89140", Offset = "0x4B89140", VA = "0x4B89140")]
	public void GenerateDebugData(bool value)
	{
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x4B87890", Offset = "0x4B87890", VA = "0x4B87890")]
	public void SetColorBuffer(TextureHandle resource, int index)
	{
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x4B8A5A0", Offset = "0x4B8A5A0", VA = "0x4B8A5A0")]
	public void SetColorBufferRaw(TextureHandle resource, int index)
	{
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x4B87D10", Offset = "0x4B87D10", VA = "0x4B87D10")]
	public void SetDepthBuffer(TextureHandle resource, DepthAccess flags)
	{
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x4B8AB90", Offset = "0x4B8AB90", VA = "0x4B8AB90")]
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
