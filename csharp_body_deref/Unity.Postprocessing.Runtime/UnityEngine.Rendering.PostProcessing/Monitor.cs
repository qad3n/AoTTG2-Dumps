// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.Monitor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4B49890", Offset = "0x4B49890", VA = "0x4B49890")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x4B498A0", Offset = "0x4B498A0", VA = "0x4B498A0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x4B498B0", Offset = "0x4B498B0", VA = "0x4B498B0")]
	public bool IsRequestedAndSupported(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AB")]
	internal abstract bool ShaderResourcesAvailable(PostProcessRenderContext context);

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x4B49A00", Offset = "0x4B49A00", VA = "0x4B49A00", Slot = "5")]
	internal virtual bool NeedsHalfRes()
	{
		return default(bool);
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x4B490B0", Offset = "0x4B490B0", VA = "0x4B490B0")]
	protected void CheckOutput(int width, int height)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x4B49A90", Offset = "0x4B49A90", VA = "0x4B49A90", Slot = "6")]
	internal virtual void OnEnable()
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x4B49AA0", Offset = "0x4B49AA0", VA = "0x4B49AA0", Slot = "7")]
	internal virtual void OnDisable()
	{
	}

	[Token(Token = "0x60000B0")]
	internal abstract void Render(PostProcessRenderContext context);

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x4B49880", Offset = "0x4B49880", VA = "0x4B49880")]
	protected Monitor()
	{
	}
}
