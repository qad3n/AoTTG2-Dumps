// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.AttachmentDescriptor
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000399")]
public struct AttachmentDescriptor : IEquatable<AttachmentDescriptor>
{
	[Token(Token = "0x4000B0C")]
	[FieldOffset(Offset = "0x0")]
	private RenderBufferLoadAction m_LoadAction;

	[Token(Token = "0x4000B0D")]
	[FieldOffset(Offset = "0x4")]
	private RenderBufferStoreAction m_StoreAction;

	[Token(Token = "0x4000B0E")]
	[FieldOffset(Offset = "0x8")]
	private GraphicsFormat m_Format;

	[Token(Token = "0x4000B0F")]
	[FieldOffset(Offset = "0x10")]
	private RenderTargetIdentifier m_LoadStoreTarget;

	[Token(Token = "0x4000B10")]
	[FieldOffset(Offset = "0x38")]
	private RenderTargetIdentifier m_ResolveTarget;

	[Token(Token = "0x4000B11")]
	[FieldOffset(Offset = "0x60")]
	private Color m_ClearColor;

	[Token(Token = "0x4000B12")]
	[FieldOffset(Offset = "0x70")]
	private float m_ClearDepth;

	[Token(Token = "0x4000B13")]
	[FieldOffset(Offset = "0x74")]
	private uint m_ClearStencil;

	[Token(Token = "0x17000339")]
	public RenderBufferLoadAction loadAction
	{
		[Token(Token = "0x60015D0")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		set
		{
		}
	}

	[Token(Token = "0x1700033A")]
	public RenderBufferStoreAction storeAction
	{
		[Token(Token = "0x60015D1")]
		[Address(RVA = "0xD161B0", Offset = "0xD147B0", VA = "0x180D161B0")]
		get
		{
			return default(RenderBufferStoreAction);
		}
		[Token(Token = "0x60015D2")]
		[Address(RVA = "0x57AF00", Offset = "0x579500", VA = "0x18057AF00")]
		set
		{
		}
	}

	[Token(Token = "0x1700033B")]
	public RenderTargetIdentifier loadStoreTarget
	{
		[Token(Token = "0x60015D3")]
		[Address(RVA = "0x2F5FA40", Offset = "0x2F5E040", VA = "0x182F5FA40")]
		get
		{
			return default(RenderTargetIdentifier);
		}
		[Token(Token = "0x60015D4")]
		[Address(RVA = "0x2F5FA70", Offset = "0x2F5E070", VA = "0x182F5FA70")]
		set
		{
		}
	}

	[Token(Token = "0x1700033C")]
	public RenderTargetIdentifier resolveTarget
	{
		[Token(Token = "0x60015D5")]
		[Address(RVA = "0x2F5FA90", Offset = "0x2F5E090", VA = "0x182F5FA90")]
		set
		{
		}
	}

	[Token(Token = "0x1700033D")]
	public Color clearColor
	{
		[Token(Token = "0x60015D6")]
		[Address(RVA = "0x1C613E0", Offset = "0x1C5F9E0", VA = "0x181C613E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700033E")]
	public float clearDepth
	{
		[Token(Token = "0x60015D7")]
		[Address(RVA = "0x2F5FA60", Offset = "0x2F5E060", VA = "0x182F5FA60")]
		set
		{
		}
	}

	[Token(Token = "0x1700033F")]
	public uint clearStencil
	{
		[Token(Token = "0x60015D8")]
		[Address(RVA = "0x261CA60", Offset = "0x261B060", VA = "0x18261CA60")]
		set
		{
		}
	}

	[Token(Token = "0x60015D9")]
	[Address(RVA = "0x2F5F970", Offset = "0x2F5DF70", VA = "0x182F5F970")]
	public AttachmentDescriptor(GraphicsFormat format)
	{
	}

	[Token(Token = "0x60015DA")]
	[Address(RVA = "0x2F5F610", Offset = "0x2F5DC10", VA = "0x182F5F610", Slot = "4")]
	public bool Equals(AttachmentDescriptor other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DB")]
	[Address(RVA = "0x2F5F510", Offset = "0x2F5DB10", VA = "0x182F5F510", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DC")]
	[Address(RVA = "0x2F5F870", Offset = "0x2F5DE70", VA = "0x182F5F870", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
