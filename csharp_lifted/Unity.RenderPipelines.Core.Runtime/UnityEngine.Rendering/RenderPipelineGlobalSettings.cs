using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000164")]
public abstract class RenderPipelineGlobalSettings<TGlobalRenderPipelineSettings, TRenderPipeline> : RenderPipelineGlobalSettings where TGlobalRenderPipelineSettings : RenderPipelineGlobalSettings where TRenderPipeline : RenderPipeline
{
	[Token(Token = "0x40006EF")]
	[FieldOffset(Offset = "0x0")]
	private static Lazy<TGlobalRenderPipelineSettings> s_Instance;

	[Token(Token = "0x17000153")]
	public static TGlobalRenderPipelineSettings instance
	{
		[Token(Token = "0x6000B5A")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B5B")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6000B5C")]
	protected RenderPipelineGlobalSettings()
	{
	}
}
