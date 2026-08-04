// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderPipeline
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002F0")]
public abstract class RenderPipeline
{
	[Token(Token = "0x17000283")]
	public bool disposed
	{
		[Token(Token = "0x6001052")]
		[Address(RVA = "0x4E2EE40", Offset = "0x4E2EE40", VA = "0x4E2EE40")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001053")]
		[Address(RVA = "0x4E2EE50", Offset = "0x4E2EE50", VA = "0x4E2EE50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600104D")]
	protected abstract void Render(ScriptableRenderContext context, Camera[] cameras);

	[Token(Token = "0x600104E")]
	protected virtual void ProcessRenderRequests<RequestData>(ScriptableRenderContext context, Camera camera, RequestData renderRequest)
	{
	}

	[Token(Token = "0x600104F")]
	[Address(RVA = "0x4E2ED40", Offset = "0x4E2ED40", VA = "0x4E2ED40", Slot = "6")]
	protected virtual void Render(ScriptableRenderContext context, List<Camera> cameras)
	{
	}

	[Token(Token = "0x6001050")]
	[Address(RVA = "0x4E2EDB0", Offset = "0x4E2EDB0", VA = "0x4E2EDB0")]
	internal void InternalRender(ScriptableRenderContext context, List<Camera> cameras)
	{
	}

	[Token(Token = "0x6001051")]
	internal void InternalProcessRenderRequests<RequestData>(ScriptableRenderContext context, Camera camera, RequestData renderRequest)
	{
	}

	[Token(Token = "0x6001054")]
	[Address(RVA = "0x4E2EE60", Offset = "0x4E2EE60", VA = "0x4E2EE60")]
	internal void Dispose()
	{
	}

	[Token(Token = "0x6001055")]
	[Address(RVA = "0x4E2EEC0", Offset = "0x4E2EEC0", VA = "0x4E2EEC0", Slot = "7")]
	protected virtual void Dispose(bool disposing)
	{
	}
}
