// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.ResourceHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000058")]
internal struct ResourceHandle : IEquatable<ResourceHandle>
{
	[Token(Token = "0x400014E")]
	private const uint kValidityMask = 4294901760u;

	[Token(Token = "0x400014F")]
	private const uint kIndexMask = 65535u;

	[Token(Token = "0x4000150")]
	[FieldOffset(Offset = "0x0")]
	private uint m_Value;

	[Token(Token = "0x4000151")]
	[FieldOffset(Offset = "0x4")]
	private int m_Version;

	[Token(Token = "0x4000152")]
	[FieldOffset(Offset = "0x0")]
	private static uint s_CurrentValidBit;

	[Token(Token = "0x4000153")]
	[FieldOffset(Offset = "0x4")]
	private static uint s_SharedResourceValidBit;

	[Token(Token = "0x17000049")]
	public int index
	{
		[Token(Token = "0x6000507")]
		[Address(RVA = "0x4B8D0B0", Offset = "0x4B8D0B0", VA = "0x4B8D0B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700004A")]
	public RenderGraphResourceType type
	{
		[Token(Token = "0x6000508")]
		[Address(RVA = "0x4B92E70", Offset = "0x4B92E70", VA = "0x4B92E70")]
		[CompilerGenerated]
		readonly get
		{
			return default(RenderGraphResourceType);
		}
		[Token(Token = "0x6000509")]
		[Address(RVA = "0x4B92E80", Offset = "0x4B92E80", VA = "0x4B92E80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700004B")]
	public int iType
	{
		[Token(Token = "0x600050A")]
		[Address(RVA = "0x4B8D050", Offset = "0x4B8D050", VA = "0x4B8D050")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700004C")]
	public int version
	{
		[Token(Token = "0x600050B")]
		[Address(RVA = "0x4B92E90", Offset = "0x4B92E90", VA = "0x4B92E90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700004D")]
	public bool IsVersioned
	{
		[Token(Token = "0x6000511")]
		[Address(RVA = "0x4B898B0", Offset = "0x4B898B0", VA = "0x4B898B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x4B8D710", Offset = "0x4B8D710", VA = "0x4B8D710")]
	internal ResourceHandle(int value, RenderGraphResourceType type, bool shared)
	{
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x4B8FFE0", Offset = "0x4B8FFE0", VA = "0x4B8FFE0")]
	internal ResourceHandle(ResourceHandle h, int version)
	{
	}

	[Token(Token = "0x600050E")]
	[Address(RVA = "0x4B8A240", Offset = "0x4B8A240", VA = "0x4B8A240")]
	public static implicit operator int(ResourceHandle handle)
	{
		return default(int);
	}

	[Token(Token = "0x600050F")]
	[Address(RVA = "0x4B8DA40", Offset = "0x4B8DA40", VA = "0x4B8DA40")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x6000510")]
	[Address(RVA = "0x4B8F8C0", Offset = "0x4B8F8C0", VA = "0x4B8F8C0")]
	public static void NewFrame(int executionIndex)
	{
	}

	[Token(Token = "0x6000512")]
	[Address(RVA = "0x4B92EA0", Offset = "0x4B92EA0", VA = "0x4B92EA0", Slot = "4")]
	public bool Equals(ResourceHandle hdl)
	{
		return default(bool);
	}
}
