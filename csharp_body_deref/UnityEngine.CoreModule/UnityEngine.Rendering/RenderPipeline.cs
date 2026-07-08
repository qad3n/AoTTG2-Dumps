using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002ED")]
public abstract class RenderPipeline
{
	[Token(Token = "0x17000282")]
	public bool disposed
	{
		[Token(Token = "0x6001050")]
		[Address(RVA = "0x4B07510", Offset = "0x4B07510", VA = "0x4B07510")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001051")]
		[Address(RVA = "0x4B07520", Offset = "0x4B07520", VA = "0x4B07520")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600104B")]
	protected abstract void Render(ScriptableRenderContext context, Camera[] cameras);

	[Token(Token = "0x600104C")]
	protected virtual void ProcessRenderRequests<RequestData>(ScriptableRenderContext context, Camera camera, RequestData renderRequest)
	{
	}

	[Token(Token = "0x600104D")]
	[Address(RVA = "0x4B07410", Offset = "0x4B07410", VA = "0x4B07410", Slot = "6")]
	protected virtual void Render(ScriptableRenderContext context, List<Camera> cameras)
	{
	}

	[Token(Token = "0x600104E")]
	[Address(RVA = "0x4B07480", Offset = "0x4B07480", VA = "0x4B07480")]
	internal void InternalRender(ScriptableRenderContext context, List<Camera> cameras)
	{
	}

	[Token(Token = "0x600104F")]
	internal void InternalProcessRenderRequests<RequestData>(ScriptableRenderContext context, Camera camera, RequestData renderRequest)
	{
	}

	[Token(Token = "0x6001052")]
	[Address(RVA = "0x4B07530", Offset = "0x4B07530", VA = "0x4B07530")]
	internal void Dispose()
	{
	}

	[Token(Token = "0x6001053")]
	[Address(RVA = "0x4B07590", Offset = "0x4B07590", VA = "0x4B07590", Slot = "7")]
	protected virtual void Dispose(bool disposing)
	{
	}
}
