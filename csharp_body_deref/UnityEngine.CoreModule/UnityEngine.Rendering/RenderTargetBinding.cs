// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderTargetBinding
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002B9")]
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

	[Token(Token = "0x17000267")]
	public RenderTargetIdentifier[] colorRenderTargets
	{
		[Token(Token = "0x6000E3A")]
		[Address(RVA = "0x4E19110", Offset = "0x4E19110", VA = "0x4E19110")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000268")]
	public RenderTargetIdentifier depthRenderTarget
	{
		[Token(Token = "0x6000E3B")]
		[Address(RVA = "0x4E19120", Offset = "0x4E19120", VA = "0x4E19120")]
		get
		{
			return default(RenderTargetIdentifier);
		}
	}

	[Token(Token = "0x17000269")]
	public RenderBufferLoadAction[] colorLoadActions
	{
		[Token(Token = "0x6000E3C")]
		[Address(RVA = "0x4E19140", Offset = "0x4E19140", VA = "0x4E19140")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026A")]
	public RenderBufferStoreAction[] colorStoreActions
	{
		[Token(Token = "0x6000E3D")]
		[Address(RVA = "0x4E19150", Offset = "0x4E19150", VA = "0x4E19150")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026B")]
	public RenderBufferLoadAction depthLoadAction
	{
		[Token(Token = "0x6000E3E")]
		[Address(RVA = "0x4E19160", Offset = "0x4E19160", VA = "0x4E19160")]
		get
		{
			return default(RenderBufferLoadAction);
		}
	}

	[Token(Token = "0x1700026C")]
	public RenderBufferStoreAction depthStoreAction
	{
		[Token(Token = "0x6000E3F")]
		[Address(RVA = "0x4E19170", Offset = "0x4E19170", VA = "0x4E19170")]
		get
		{
			return default(RenderBufferStoreAction);
		}
	}

	[Token(Token = "0x1700026D")]
	public RenderTargetFlags flags
	{
		[Token(Token = "0x6000E40")]
		[Address(RVA = "0x4E19180", Offset = "0x4E19180", VA = "0x4E19180")]
		get
		{
			return default(RenderTargetFlags);
		}
	}
}
