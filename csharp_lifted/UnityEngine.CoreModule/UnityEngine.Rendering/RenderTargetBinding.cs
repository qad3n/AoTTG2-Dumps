// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderTargetBinding
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000335")]
public struct RenderTargetBinding
{
	[Token(Token = "0x40008D8")]
	[FieldOffset(Offset = "0x0")]
	private RenderTargetIdentifier[] m_ColorRenderTargets;

	[Token(Token = "0x40008D9")]
	[FieldOffset(Offset = "0x8")]
	private RenderTargetIdentifier m_DepthRenderTarget;

	[Token(Token = "0x40008DA")]
	[FieldOffset(Offset = "0x30")]
	private RenderBufferLoadAction[] m_ColorLoadActions;

	[Token(Token = "0x40008DB")]
	[FieldOffset(Offset = "0x38")]
	private RenderBufferStoreAction[] m_ColorStoreActions;

	[Token(Token = "0x40008DC")]
	[FieldOffset(Offset = "0x40")]
	private RenderBufferLoadAction m_DepthLoadAction;

	[Token(Token = "0x40008DD")]
	[FieldOffset(Offset = "0x44")]
	private RenderBufferStoreAction m_DepthStoreAction;

	[Token(Token = "0x40008DE")]
	[FieldOffset(Offset = "0x48")]
	private RenderTargetFlags m_Flags;

	[Token(Token = "0x17000300")]
	public RenderTargetIdentifier[] colorRenderTargets
	{
		[Token(Token = "0x60012C8")]
		[Address(RVA = "0x693E0C0", Offset = "0x693D0C0", VA = "0x693E0C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000301")]
	public RenderTargetIdentifier depthRenderTarget
	{
		[Token(Token = "0x60012C9")]
		[Address(RVA = "0x693E0D0", Offset = "0x693D0D0", VA = "0x693E0D0")]
		get
		{
			return default(RenderTargetIdentifier);
		}
	}

	[Token(Token = "0x17000302")]
	public RenderBufferLoadAction[] colorLoadActions
	{
		[Token(Token = "0x60012CA")]
		[Address(RVA = "0x693E0F0", Offset = "0x693D0F0", VA = "0x693E0F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000303")]
	public RenderBufferStoreAction[] colorStoreActions
	{
		[Token(Token = "0x60012CB")]
		[Address(RVA = "0x693E100", Offset = "0x693D100", VA = "0x693E100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000304")]
	public RenderBufferLoadAction depthLoadAction
	{
		[Token(Token = "0x60012CC")]
		[Address(RVA = "0x693E110", Offset = "0x693D110", VA = "0x693E110")]
		get
		{
			return default(RenderBufferLoadAction);
		}
	}

	[Token(Token = "0x17000305")]
	public RenderBufferStoreAction depthStoreAction
	{
		[Token(Token = "0x60012CD")]
		[Address(RVA = "0x693E120", Offset = "0x693D120", VA = "0x693E120")]
		get
		{
			return default(RenderBufferStoreAction);
		}
	}

	[Token(Token = "0x17000306")]
	public RenderTargetFlags flags
	{
		[Token(Token = "0x60012CE")]
		[Address(RVA = "0x693E130", Offset = "0x693D130", VA = "0x693E130")]
		get
		{
			return default(RenderTargetFlags);
		}
	}
}
