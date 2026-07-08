using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200005E")]
internal struct ResourceHandle : IEquatable<ResourceHandle>
{
	[Token(Token = "0x4000175")]
	private const uint kValidityMask = 4294901760u;

	[Token(Token = "0x4000176")]
	private const uint kIndexMask = 65535u;

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0x0")]
	private uint m_Value;

	[Token(Token = "0x4000178")]
	[FieldOffset(Offset = "0x4")]
	private int m_Version;

	[Token(Token = "0x4000179")]
	[FieldOffset(Offset = "0x0")]
	private static uint s_CurrentValidBit;

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0x4")]
	private static uint s_SharedResourceValidBit;

	[Token(Token = "0x1700004A")]
	public int index
	{
		[Token(Token = "0x6000525")]
		[Address(RVA = "0x4867FC0", Offset = "0x4867FC0", VA = "0x4867FC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700004B")]
	public RenderGraphResourceType type
	{
		[Token(Token = "0x6000526")]
		[Address(RVA = "0x486F4F0", Offset = "0x486F4F0", VA = "0x486F4F0")]
		[CompilerGenerated]
		readonly get
		{
			return default(RenderGraphResourceType);
		}
		[Token(Token = "0x6000527")]
		[Address(RVA = "0x486F500", Offset = "0x486F500", VA = "0x486F500")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700004C")]
	public int iType
	{
		[Token(Token = "0x6000528")]
		[Address(RVA = "0x4867F60", Offset = "0x4867F60", VA = "0x4867F60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700004D")]
	public int version
	{
		[Token(Token = "0x6000529")]
		[Address(RVA = "0x486F510", Offset = "0x486F510", VA = "0x486F510")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700004E")]
	public bool IsVersioned
	{
		[Token(Token = "0x600052F")]
		[Address(RVA = "0x48647C0", Offset = "0x48647C0", VA = "0x48647C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x4868620", Offset = "0x4868620", VA = "0x4868620")]
	internal ResourceHandle(int value, RenderGraphResourceType type, bool shared)
	{
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x486AEF0", Offset = "0x486AEF0", VA = "0x486AEF0")]
	internal ResourceHandle(ResourceHandle h, int version)
	{
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x4865150", Offset = "0x4865150", VA = "0x4865150")]
	public static implicit operator int(ResourceHandle handle)
	{
		return default(int);
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x4868950", Offset = "0x4868950", VA = "0x4868950")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x486A7D0", Offset = "0x486A7D0", VA = "0x486A7D0")]
	public static void NewFrame(int executionIndex)
	{
	}

	[Token(Token = "0x6000530")]
	[Address(RVA = "0x486F520", Offset = "0x486F520", VA = "0x486F520", Slot = "4")]
	public bool Equals(ResourceHandle hdl)
	{
		return default(bool);
	}
}
