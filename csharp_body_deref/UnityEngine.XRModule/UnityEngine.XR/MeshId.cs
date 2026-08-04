// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.XR.MeshId
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x510D410", Offset = "0x510D410", VA = "0x510D410", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x510D490", Offset = "0x510D490", VA = "0x510D490", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x510D4C0", Offset = "0x510D4C0", VA = "0x510D4C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x510D560", Offset = "0x510D560", VA = "0x510D560", Slot = "4")]
	public bool Equals(MeshId other)
	{
		return default(bool);
	}
}
