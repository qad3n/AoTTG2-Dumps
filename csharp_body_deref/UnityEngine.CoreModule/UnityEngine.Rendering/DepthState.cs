// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DepthState
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003AB")]
public struct DepthState : IEquatable<DepthState>
{
	[Token(Token = "0x4000B92")]
	[FieldOffset(Offset = "0x0")]
	private byte m_WriteEnabled;

	[Token(Token = "0x4000B93")]
	[FieldOffset(Offset = "0x1")]
	private sbyte m_CompareFunction;

	[Token(Token = "0x17000351")]
	public static DepthState defaultValue
	{
		[Token(Token = "0x600161D")]
		[Address(RVA = "0x2F64BE0", Offset = "0x2F631E0", VA = "0x182F64BE0")]
		get
		{
			return default(DepthState);
		}
	}

	[Token(Token = "0x600161E")]
	[Address(RVA = "0x2F64B70", Offset = "0x2F63170", VA = "0x182F64B70")]
	public DepthState(bool writeEnabled = true, CompareFunction compareFunction = CompareFunction.Less)
	{
	}

	[Token(Token = "0x600161F")]
	[Address(RVA = "0x2F64B10", Offset = "0x2F63110", VA = "0x182F64B10", Slot = "4")]
	public bool Equals(DepthState other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001620")]
	[Address(RVA = "0x2F64A70", Offset = "0x2F63070", VA = "0x182F64A70", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001621")]
	[Address(RVA = "0x2F64B30", Offset = "0x2F63130", VA = "0x182F64B30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
