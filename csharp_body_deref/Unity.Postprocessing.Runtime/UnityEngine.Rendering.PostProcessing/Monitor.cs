using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x200004C")]
public abstract class Monitor
{
	[Token(Token = "0x4000149")]
	[FieldOffset(Offset = "0x18")]
	internal bool requested;

	[Token(Token = "0x17000003")]
	public RenderTexture output
	{
		[Token(Token = "0x60000A8")]
		[Address(RVA = "0x48247A0", Offset = "0x48247A0", VA = "0x48247A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x48247B0", Offset = "0x48247B0", VA = "0x48247B0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x48247C0", Offset = "0x48247C0", VA = "0x48247C0")]
	public bool IsRequestedAndSupported(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AB")]
	internal abstract bool ShaderResourcesAvailable(PostProcessRenderContext context);

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x4824910", Offset = "0x4824910", VA = "0x4824910", Slot = "5")]
	internal virtual bool NeedsHalfRes()
	{
		return default(bool);
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x4823FC0", Offset = "0x4823FC0", VA = "0x4823FC0")]
	protected void CheckOutput(int width, int height)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x48249A0", Offset = "0x48249A0", VA = "0x48249A0", Slot = "6")]
	internal virtual void OnEnable()
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x48249B0", Offset = "0x48249B0", VA = "0x48249B0", Slot = "7")]
	internal virtual void OnDisable()
	{
	}

	[Token(Token = "0x60000B0")]
	internal abstract void Render(PostProcessRenderContext context);

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x4824790", Offset = "0x4824790", VA = "0x4824790")]
	protected Monitor()
	{
	}
}
