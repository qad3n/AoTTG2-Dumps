// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderPipeline
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003B9")]
public abstract class RenderPipeline
{
	[Token(Token = "0x20003BA")]
	public class StandardRequest
	{
		[Token(Token = "0x4000BE3")]
		[FieldOffset(Offset = "0x10")]
		public RenderTexture destination;

		[Token(Token = "0x4000BE4")]
		[FieldOffset(Offset = "0x18")]
		public int mipLevel;

		[Token(Token = "0x4000BE5")]
		[FieldOffset(Offset = "0x1C")]
		public CubemapFace face;

		[Token(Token = "0x4000BE6")]
		[FieldOffset(Offset = "0x20")]
		public int slice;
	}

	[Token(Token = "0x17000368")]
	public bool disposed
	{
		[Token(Token = "0x600165F")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001660")]
		[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000369")]
	public virtual RenderPipelineGlobalSettings defaultSettings
	{
		[Token(Token = "0x6001663")]
		[Address(RVA = "0xB62B40", Offset = "0xB61140", VA = "0x180B62B40", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001655")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	[Obsolete("Render with an array parameter is deprecated. Use Render with a list parameter instead. If you're extending the RenderPipeline class, override the Render method with a List parameter to perform rendering in order to avoid unnecessary allocations and copies. #from 6000.1", false)]
	protected virtual void Render(ScriptableRenderContext context, Camera[] cameras)
	{
	}

	[Token(Token = "0x6001656")]
	protected virtual void ProcessRenderRequests<RequestData>(ScriptableRenderContext context, Camera camera, RequestData renderRequest)
	{
	}

	[Token(Token = "0x6001657")]
	protected internal virtual bool IsRenderRequestSupported<RequestData>(Camera camera, RequestData data)
	{
		return default(bool);
	}

	[Token(Token = "0x6001658")]
	[Address(RVA = "0x2F69540", Offset = "0x2F67B40", VA = "0x182F69540")]
	protected static void BeginContextRendering(ScriptableRenderContext context, List<Camera> cameras)
	{
	}

	[Token(Token = "0x6001659")]
	[Address(RVA = "0x2F694E0", Offset = "0x2F67AE0", VA = "0x182F694E0")]
	protected static void BeginCameraRendering(ScriptableRenderContext context, Camera camera)
	{
	}

	[Token(Token = "0x600165A")]
	[Address(RVA = "0x2F69BA0", Offset = "0x2F681A0", VA = "0x182F69BA0")]
	protected static void EndContextRendering(ScriptableRenderContext context, List<Camera> cameras)
	{
	}

	[Token(Token = "0x600165B")]
	[Address(RVA = "0x2F69B40", Offset = "0x2F68140", VA = "0x182F69B40")]
	protected static void EndCameraRendering(ScriptableRenderContext context, Camera camera)
	{
	}

	[Token(Token = "0x600165C")]
	[Address(RVA = "0x2F6AD20", Offset = "0x2F69320", VA = "0x182F6AD20", Slot = "7")]
	protected virtual void Render(ScriptableRenderContext context, List<Camera> cameras)
	{
	}

	[Token(Token = "0x600165D")]
	[Address(RVA = "0x2F6AC90", Offset = "0x2F69290", VA = "0x182F6AC90")]
	internal void InternalRender(ScriptableRenderContext context, List<Camera> cameras)
	{
	}

	[Token(Token = "0x600165E")]
	internal void InternalProcessRenderRequests<RequestData>(ScriptableRenderContext context, Camera camera, RequestData renderRequest)
	{
	}

	[Token(Token = "0x6001661")]
	[Address(RVA = "0x2F6AC20", Offset = "0x2F69220", VA = "0x182F6AC20")]
	internal void Dispose()
	{
	}

	[Token(Token = "0x6001662")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001664")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected RenderPipeline()
	{
	}
}
