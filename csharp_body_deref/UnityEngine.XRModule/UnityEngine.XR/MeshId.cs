using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.XR;

[Token(Token = "0x2000018")]
[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Meshing/XRMeshBindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct MeshId : IEquatable<MeshId>
{
	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0x0")]
	private static MeshId s_InvalidId;

	[Token(Token = "0x4000069")]
	[FieldOffset(Offset = "0x0")]
	private ulong m_SubId1;

	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x8")]
	private ulong m_SubId2;

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x4DE5380", Offset = "0x4DE5380", VA = "0x4DE5380", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4DE5400", Offset = "0x4DE5400", VA = "0x4DE5400", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4DE5430", Offset = "0x4DE5430", VA = "0x4DE5430", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x4DE54D0", Offset = "0x4DE54D0", VA = "0x4DE54D0", Slot = "4")]
	public bool Equals(MeshId other)
	{
		return default(bool);
	}
}
