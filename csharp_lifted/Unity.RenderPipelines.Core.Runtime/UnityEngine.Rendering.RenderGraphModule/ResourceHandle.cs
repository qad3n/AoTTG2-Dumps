// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.ResourceHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x20002A5")]
internal readonly struct ResourceHandle : IEquatable<ResourceHandle>
{
	[Token(Token = "0x4000BDD")]
	private const uint kValidityMask = 4294901760u;

	[Token(Token = "0x4000BDE")]
	private const uint kIndexMask = 65535u;

	[Token(Token = "0x4000BDF")]
	[FieldOffset(Offset = "0x0")]
	private readonly uint m_Value;

	[Token(Token = "0x4000BE0")]
	[FieldOffset(Offset = "0x4")]
	private readonly int m_Version;

	[Token(Token = "0x4000BE1")]
	[FieldOffset(Offset = "0x8")]
	private readonly RenderGraphResourceType m_Type;

	[Token(Token = "0x4000BE2")]
	[FieldOffset(Offset = "0x0")]
	private static uint s_CurrentValidBit;

	[Token(Token = "0x4000BE3")]
	[FieldOffset(Offset = "0x4")]
	private static uint s_SharedResourceValidBit;

	[Token(Token = "0x1700025C")]
	public int index
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60012F2")]
		[Address(RVA = "0x6586F70", Offset = "0x6585F70", VA = "0x6586F70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700025D")]
	public int iType
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60012F3")]
		[Address(RVA = "0x6586F80", Offset = "0x6585F80", VA = "0x6586F80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700025E")]
	public int version
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60012F4")]
		[Address(RVA = "0x6586FE0", Offset = "0x6585FE0", VA = "0x6586FE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700025F")]
	public RenderGraphResourceType type
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60012F5")]
		[Address(RVA = "0x6586FF0", Offset = "0x6585FF0", VA = "0x6586FF0")]
		get
		{
			return default(RenderGraphResourceType);
		}
	}

	[Token(Token = "0x17000260")]
	public bool IsVersioned
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60012FB")]
		[Address(RVA = "0x6587100", Offset = "0x6586100", VA = "0x6587100")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60012F6")]
	[Address(RVA = "0x657D5E0", Offset = "0x657C5E0", VA = "0x657D5E0")]
	internal ResourceHandle(int value, RenderGraphResourceType type, bool shared)
	{
	}

	[Token(Token = "0x60012F7")]
	[Address(RVA = "0x65801C0", Offset = "0x657F1C0", VA = "0x65801C0")]
	internal ResourceHandle(in ResourceHandle h, int version)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F8")]
	[Address(RVA = "0x6587000", Offset = "0x6586000", VA = "0x6587000")]
	public bool IsValid()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F9")]
	[Address(RVA = "0x65870A0", Offset = "0x65860A0", VA = "0x65870A0")]
	public bool IsNull()
	{
		return default(bool);
	}

	[Token(Token = "0x60012FA")]
	[Address(RVA = "0x657F870", Offset = "0x657E870", VA = "0x657F870")]
	public static void NewFrame(int executionIndex)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012FC")]
	[Address(RVA = "0x6587110", Offset = "0x6586110", VA = "0x6587110", Slot = "4")]
	public bool Equals(ResourceHandle hdl)
	{
		return default(bool);
	}

	[Token(Token = "0x60012FD")]
	[Address(RVA = "0x6587180", Offset = "0x6586180", VA = "0x6587180")]
	public static bool operator ==(ResourceHandle lhs, ResourceHandle rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60012FE")]
	[Address(RVA = "0x6587240", Offset = "0x6586240", VA = "0x6587240")]
	public static bool operator !=(ResourceHandle lhs, ResourceHandle rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x6587300", Offset = "0x6586300", VA = "0x6587300", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001300")]
	[Address(RVA = "0x6585CF0", Offset = "0x6584CF0", VA = "0x6585CF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
