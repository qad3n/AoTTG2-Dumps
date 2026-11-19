// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.AttachmentDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering;

[Token(Token = "0x200036D")]
public struct AttachmentDescriptor : IEquatable<AttachmentDescriptor>
{
	[Token(Token = "0x40009EC")]
	[FieldOffset(Offset = "0x0")]
	private RenderBufferLoadAction m_LoadAction;

	[Token(Token = "0x40009ED")]
	[FieldOffset(Offset = "0x4")]
	private RenderBufferStoreAction m_StoreAction;

	[Token(Token = "0x40009EE")]
	[FieldOffset(Offset = "0x8")]
	private GraphicsFormat m_Format;

	[Token(Token = "0x40009EF")]
	[FieldOffset(Offset = "0x10")]
	private RenderTargetIdentifier m_LoadStoreTarget;

	[Token(Token = "0x40009F0")]
	[FieldOffset(Offset = "0x38")]
	private RenderTargetIdentifier m_ResolveTarget;

	[Token(Token = "0x40009F1")]
	[FieldOffset(Offset = "0x60")]
	private Color m_ClearColor;

	[Token(Token = "0x40009F2")]
	[FieldOffset(Offset = "0x70")]
	private float m_ClearDepth;

	[Token(Token = "0x40009F3")]
	[FieldOffset(Offset = "0x74")]
	private uint m_ClearStencil;

	[Token(Token = "0x17000327")]
	public RenderBufferLoadAction loadAction
	{
		[Token(Token = "0x6001575")]
		[Address(RVA = "0x6955920", Offset = "0x6954920", VA = "0x6955920")]
		set
		{
		}
	}

	[Token(Token = "0x17000328")]
	public RenderBufferStoreAction storeAction
	{
		[Token(Token = "0x6001576")]
		[Address(RVA = "0x6955930", Offset = "0x6954930", VA = "0x6955930")]
		get
		{
			return default(RenderBufferStoreAction);
		}
		[Token(Token = "0x6001577")]
		[Address(RVA = "0x6955940", Offset = "0x6954940", VA = "0x6955940")]
		set
		{
		}
	}

	[Token(Token = "0x17000329")]
	public RenderTargetIdentifier loadStoreTarget
	{
		[Token(Token = "0x6001578")]
		[Address(RVA = "0x6955950", Offset = "0x6954950", VA = "0x6955950")]
		get
		{
			return default(RenderTargetIdentifier);
		}
		[Token(Token = "0x6001579")]
		[Address(RVA = "0x6955970", Offset = "0x6954970", VA = "0x6955970")]
		set
		{
		}
	}

	[Token(Token = "0x1700032A")]
	public RenderTargetIdentifier resolveTarget
	{
		[Token(Token = "0x600157A")]
		[Address(RVA = "0x6955990", Offset = "0x6954990", VA = "0x6955990")]
		set
		{
		}
	}

	[Token(Token = "0x1700032B")]
	public Color clearColor
	{
		[Token(Token = "0x600157B")]
		[Address(RVA = "0x69559B0", Offset = "0x69549B0", VA = "0x69559B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700032C")]
	public float clearDepth
	{
		[Token(Token = "0x600157C")]
		[Address(RVA = "0x69559C0", Offset = "0x69549C0", VA = "0x69559C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700032D")]
	public uint clearStencil
	{
		[Token(Token = "0x600157D")]
		[Address(RVA = "0x69559D0", Offset = "0x69549D0", VA = "0x69559D0")]
		set
		{
		}
	}

	[Token(Token = "0x600157E")]
	[Address(RVA = "0x69559E0", Offset = "0x69549E0", VA = "0x69559E0")]
	public AttachmentDescriptor(GraphicsFormat format)
	{
	}

	[Token(Token = "0x600157F")]
	[Address(RVA = "0x6955AB0", Offset = "0x6954AB0", VA = "0x6955AB0", Slot = "4")]
	public bool Equals(AttachmentDescriptor other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001580")]
	[Address(RVA = "0x6955CC0", Offset = "0x6954CC0", VA = "0x6955CC0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001581")]
	[Address(RVA = "0x6955D70", Offset = "0x6954D70", VA = "0x6955D70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
