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
	[Token(Token = "0x40008DA")]
	[FieldOffset(Offset = "0x0")]
	private RenderTargetIdentifier[] m_ColorRenderTargets;

	[Token(Token = "0x40008DB")]
	[FieldOffset(Offset = "0x8")]
	private RenderTargetIdentifier m_DepthRenderTarget;

	[Token(Token = "0x40008DC")]
	[FieldOffset(Offset = "0x30")]
	private RenderBufferLoadAction[] m_ColorLoadActions;

	[Token(Token = "0x40008DD")]
	[FieldOffset(Offset = "0x38")]
	private RenderBufferStoreAction[] m_ColorStoreActions;

	[Token(Token = "0x40008DE")]
	[FieldOffset(Offset = "0x40")]
	private RenderBufferLoadAction m_DepthLoadAction;

	[Token(Token = "0x40008DF")]
	[FieldOffset(Offset = "0x44")]
	private RenderBufferStoreAction m_DepthStoreAction;

	[Token(Token = "0x40008E0")]
	[FieldOffset(Offset = "0x48")]
	private RenderTargetFlags m_Flags;

	[Token(Token = "0x170002FB")]
	public RenderTargetIdentifier[] colorRenderTargets
	{
		[Token(Token = "0x60012B4")]
		[Address(RVA = "0x737B90", Offset = "0x736190", VA = "0x180737B90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FC")]
	public RenderTargetIdentifier depthRenderTarget
	{
		[Token(Token = "0x60012B5")]
		[Address(RVA = "0x2F54E70", Offset = "0x2F53470", VA = "0x182F54E70")]
		get
		{
			return default(RenderTargetIdentifier);
		}
	}

	[Token(Token = "0x170002FD")]
	public RenderBufferLoadAction[] colorLoadActions
	{
		[Token(Token = "0x60012B6")]
		[Address(RVA = "0xD0ECE0", Offset = "0xD0D2E0", VA = "0x180D0ECE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FE")]
	public RenderBufferStoreAction[] colorStoreActions
	{
		[Token(Token = "0x60012B7")]
		[Address(RVA = "0xAD2BE0", Offset = "0xAD11E0", VA = "0x180AD2BE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FF")]
	public RenderBufferLoadAction depthLoadAction
	{
		[Token(Token = "0x60012B8")]
		[Address(RVA = "0x2F54E60", Offset = "0x2F53460", VA = "0x182F54E60")]
		get
		{
			return default(RenderBufferLoadAction);
		}
	}

	[Token(Token = "0x17000300")]
	public RenderBufferStoreAction depthStoreAction
	{
		[Token(Token = "0x60012B9")]
		[Address(RVA = "0x2F54E90", Offset = "0x2F53490", VA = "0x182F54E90")]
		get
		{
			return default(RenderBufferStoreAction);
		}
	}

	[Token(Token = "0x17000301")]
	public RenderTargetFlags flags
	{
		[Token(Token = "0x60012BA")]
		[Address(RVA = "0x2E926C0", Offset = "0x2E90CC0", VA = "0x182E926C0")]
		get
		{
			return default(RenderTargetFlags);
		}
	}
}
