// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderPipeline
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200038A")]
public abstract class RenderPipeline
{
	[Token(Token = "0x200038B")]
	public class StandardRequest
	{
		[Token(Token = "0x4000AB0")]
		[FieldOffset(Offset = "0x10")]
		public RenderTexture destination;

		[Token(Token = "0x4000AB1")]
		[FieldOffset(Offset = "0x18")]
		public int mipLevel;

		[Token(Token = "0x4000AB2")]
		[FieldOffset(Offset = "0x1C")]
		public CubemapFace face;

		[Token(Token = "0x4000AB3")]
		[FieldOffset(Offset = "0x20")]
		public int slice;
	}

	[Token(Token = "0x17000352")]
	public bool disposed
	{
		[Token(Token = "0x60015F8")]
		[Address(RVA = "0x695BB80", Offset = "0x695AB80", VA = "0x695BB80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60015F9")]
		[Address(RVA = "0x695BB90", Offset = "0x695AB90", VA = "0x695BB90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000353")]
	public virtual RenderPipelineGlobalSettings defaultSettings
	{
		[Token(Token = "0x60015FC")]
		[Address(RVA = "0x695BC10", Offset = "0x695AC10", VA = "0x695BC10", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60015EE")]
	[Address(RVA = "0x695B720", Offset = "0x695A720", VA = "0x695B720", Slot = "4")]
	[Obsolete("Render with an array parameter is deprecated. Use Render with a list parameter instead. If you're extending the RenderPipeline class, override the Render method with a List parameter to perform rendering in order to avoid unnecessary allocations and copies. #from 6000.1", false)]
	protected virtual void Render(ScriptableRenderContext context, Camera[] cameras)
	{
	}

	[Token(Token = "0x60015EF")]
	protected virtual void ProcessRenderRequests<RequestData>(ScriptableRenderContext context, Camera camera, RequestData renderRequest)
	{
	}

	[Token(Token = "0x60015F0")]
	protected internal virtual bool IsRenderRequestSupported<RequestData>(Camera camera, RequestData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60015F1")]
	[Address(RVA = "0x695B730", Offset = "0x695A730", VA = "0x695B730")]
	protected static void BeginContextRendering(ScriptableRenderContext context, List<Camera> cameras)
	{
	}

	[Token(Token = "0x60015F2")]
	[Address(RVA = "0x695B7F0", Offset = "0x695A7F0", VA = "0x695B7F0")]
	protected static void BeginCameraRendering(ScriptableRenderContext context, Camera camera)
	{
	}

	[Token(Token = "0x60015F3")]
	[Address(RVA = "0x695B8D0", Offset = "0x695A8D0", VA = "0x695B8D0")]
	protected static void EndContextRendering(ScriptableRenderContext context, List<Camera> cameras)
	{
	}

	[Token(Token = "0x60015F4")]
	[Address(RVA = "0x695B9A0", Offset = "0x695A9A0", VA = "0x695B9A0")]
	protected static void EndCameraRendering(ScriptableRenderContext context, Camera camera)
	{
	}

	[Token(Token = "0x60015F5")]
	[Address(RVA = "0x695BA80", Offset = "0x695AA80", VA = "0x695BA80", Slot = "7")]
	protected virtual void Render(ScriptableRenderContext context, List<Camera> cameras)
	{
	}

	[Token(Token = "0x60015F6")]
	[Address(RVA = "0x695BAF0", Offset = "0x695AAF0", VA = "0x695BAF0")]
	internal void InternalRender(ScriptableRenderContext context, List<Camera> cameras)
	{
	}

	[Token(Token = "0x60015F7")]
	internal void InternalProcessRenderRequests<RequestData>(ScriptableRenderContext context, Camera camera, RequestData renderRequest)
	{
	}

	[Token(Token = "0x60015FA")]
	[Address(RVA = "0x695BBA0", Offset = "0x695ABA0", VA = "0x695BBA0")]
	internal void Dispose()
	{
	}

	[Token(Token = "0x60015FB")]
	[Address(RVA = "0x695BC00", Offset = "0x695AC00", VA = "0x695BC00", Slot = "8")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60015FD")]
	[Address(RVA = "0x695BC20", Offset = "0x695AC20", VA = "0x695BC20")]
	protected RenderPipeline()
	{
	}
}
