using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002B6")]
public struct RenderTargetBinding
{
	[Token(Token = "0x40007AA")]
	[FieldOffset(Offset = "0x0")]
	private RenderTargetIdentifier[] m_ColorRenderTargets;

	[Token(Token = "0x40007AB")]
	[FieldOffset(Offset = "0x8")]
	private RenderTargetIdentifier m_DepthRenderTarget;

	[Token(Token = "0x40007AC")]
	[FieldOffset(Offset = "0x30")]
	private RenderBufferLoadAction[] m_ColorLoadActions;

	[Token(Token = "0x40007AD")]
	[FieldOffset(Offset = "0x38")]
	private RenderBufferStoreAction[] m_ColorStoreActions;

	[Token(Token = "0x40007AE")]
	[FieldOffset(Offset = "0x40")]
	private RenderBufferLoadAction m_DepthLoadAction;

	[Token(Token = "0x40007AF")]
	[FieldOffset(Offset = "0x44")]
	private RenderBufferStoreAction m_DepthStoreAction;

	[Token(Token = "0x40007B0")]
	[FieldOffset(Offset = "0x48")]
	private RenderTargetFlags m_Flags;

	[Token(Token = "0x17000266")]
	public RenderTargetIdentifier[] colorRenderTargets
	{
		[Token(Token = "0x6000E38")]
		[Address(RVA = "0x4AF17E0", Offset = "0x4AF17E0", VA = "0x4AF17E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000267")]
	public RenderTargetIdentifier depthRenderTarget
	{
		[Token(Token = "0x6000E39")]
		[Address(RVA = "0x4AF17F0", Offset = "0x4AF17F0", VA = "0x4AF17F0")]
		get
		{
			return default(RenderTargetIdentifier);
		}
	}

	[Token(Token = "0x17000268")]
	public RenderBufferLoadAction[] colorLoadActions
	{
		[Token(Token = "0x6000E3A")]
		[Address(RVA = "0x4AF1810", Offset = "0x4AF1810", VA = "0x4AF1810")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000269")]
	public RenderBufferStoreAction[] colorStoreActions
	{
		[Token(Token = "0x6000E3B")]
		[Address(RVA = "0x4AF1820", Offset = "0x4AF1820", VA = "0x4AF1820")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026A")]
	public RenderBufferLoadAction depthLoadAction
	{
		[Token(Token = "0x6000E3C")]
		[Address(RVA = "0x4AF1830", Offset = "0x4AF1830", VA = "0x4AF1830")]
		get
		{
			return default(RenderBufferLoadAction);
		}
	}

	[Token(Token = "0x1700026B")]
	public RenderBufferStoreAction depthStoreAction
	{
		[Token(Token = "0x6000E3D")]
		[Address(RVA = "0x4AF1840", Offset = "0x4AF1840", VA = "0x4AF1840")]
		get
		{
			return default(RenderBufferStoreAction);
		}
	}

	[Token(Token = "0x1700026C")]
	public RenderTargetFlags flags
	{
		[Token(Token = "0x6000E3E")]
		[Address(RVA = "0x4AF1850", Offset = "0x4AF1850", VA = "0x4AF1850")]
		get
		{
			return default(RenderTargetFlags);
		}
	}
}
