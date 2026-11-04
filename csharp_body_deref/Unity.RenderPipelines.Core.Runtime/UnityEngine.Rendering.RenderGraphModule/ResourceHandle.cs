// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.ResourceHandle
// Update status: NEW in this game update
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
		[Address(RVA = "0x846ED0", Offset = "0x8454D0", VA = "0x180846ED0")]
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
		[Address(RVA = "0x2BA6240", Offset = "0x2BA4840", VA = "0x182BA6240")]
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
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
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
		[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
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
		[Address(RVA = "0x2BA6230", Offset = "0x2BA4830", VA = "0x182BA6230")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60012F6")]
	[Address(RVA = "0x2BA6120", Offset = "0x2BA4720", VA = "0x182BA6120")]
	internal ResourceHandle(int value, RenderGraphResourceType type, bool shared)
	{
	}

	[Token(Token = "0x60012F7")]
	[Address(RVA = "0x2BA61C0", Offset = "0x2BA47C0", VA = "0x182BA61C0")]
	internal ResourceHandle(in ResourceHandle h, int version)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F8")]
	[Address(RVA = "0x2BA5F50", Offset = "0x2BA4550", VA = "0x182BA5F50")]
	public bool IsValid()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F9")]
	[Address(RVA = "0x2BA5F00", Offset = "0x2BA4500", VA = "0x182BA5F00")]
	public bool IsNull()
	{
		return default(bool);
	}

	[Token(Token = "0x60012FA")]
	[Address(RVA = "0x2BA5FE0", Offset = "0x2BA45E0", VA = "0x182BA5FE0")]
	public static void NewFrame(int executionIndex)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012FC")]
	[Address(RVA = "0x2BA5D20", Offset = "0x2BA4320", VA = "0x182BA5D20", Slot = "4")]
	public bool Equals(ResourceHandle hdl)
	{
		return default(bool);
	}

	[Token(Token = "0x60012FD")]
	[Address(RVA = "0x2BA6290", Offset = "0x2BA4890", VA = "0x182BA6290")]
	public static bool operator ==(ResourceHandle lhs, ResourceHandle rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60012FE")]
	[Address(RVA = "0x2BA6350", Offset = "0x2BA4950", VA = "0x182BA6350")]
	public static bool operator !=(ResourceHandle lhs, ResourceHandle rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x2BA5D90", Offset = "0x2BA4390", VA = "0x182BA5D90", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001300")]
	[Address(RVA = "0x2BA5EA0", Offset = "0x2BA44A0", VA = "0x182BA5EA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
