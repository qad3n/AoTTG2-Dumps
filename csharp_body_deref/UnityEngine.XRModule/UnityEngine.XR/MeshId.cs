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

[Token(Token = "0x2000019")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Meshing/XRMeshBindings.h")]
public struct MeshId : IEquatable<MeshId>
{
	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0x0")]
	private static MeshId s_InvalidId;

	[Token(Token = "0x400006D")]
	[FieldOffset(Offset = "0x0")]
	private ulong m_SubId1;

	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0x8")]
	private ulong m_SubId2;

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x3313CA0", Offset = "0x33122A0", VA = "0x183313CA0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x2EDAFD0", Offset = "0x2ED95D0", VA = "0x182EDAFD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x3313BF0", Offset = "0x33121F0", VA = "0x183313BF0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x2EDAFB0", Offset = "0x2ED95B0", VA = "0x182EDAFB0", Slot = "4")]
	public bool Equals(MeshId other)
	{
		return default(bool);
	}
}
