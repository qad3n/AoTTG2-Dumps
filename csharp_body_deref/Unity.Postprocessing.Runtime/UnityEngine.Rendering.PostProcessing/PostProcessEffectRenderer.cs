using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000061")]
public abstract class PostProcessEffectRenderer
{
	[Token(Token = "0x400018A")]
	[FieldOffset(Offset = "0x10")]
	protected bool m_ResetHistory;

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x4829240", Offset = "0x4829240", VA = "0x4829240", Slot = "4")]
	public virtual void Init()
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x4829250", Offset = "0x4829250", VA = "0x4829250", Slot = "5")]
	public virtual DepthTextureMode GetCameraFlags()
	{
		return default(DepthTextureMode);
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x4829260", Offset = "0x4829260", VA = "0x4829260", Slot = "6")]
	public virtual void ResetHistory()
	{
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x4829270", Offset = "0x4829270", VA = "0x4829270", Slot = "7")]
	public virtual void Release()
	{
	}

	[Token(Token = "0x6000110")]
	public abstract void Render(PostProcessRenderContext context);

	[Token(Token = "0x6000111")]
	internal abstract void SetSettings(PostProcessEffectSettings settings);

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x4829290", Offset = "0x4829290", VA = "0x4829290")]
	protected PostProcessEffectRenderer()
	{
	}
}
[Token(Token = "0x2000062")]
public abstract class PostProcessEffectRenderer<T> : PostProcessEffectRenderer where T : PostProcessEffectSettings
{
	[Token(Token = "0x1700000A")]
	public T settings
	{
		[Token(Token = "0x6000113")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000114")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x6000115")]
	internal override void SetSettings(PostProcessEffectSettings settings)
	{
	}

	[Token(Token = "0x6000116")]
	protected PostProcessEffectRenderer()
	{
	}
}
