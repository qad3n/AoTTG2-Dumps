// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DepthState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200037F")]
public struct DepthState : IEquatable<DepthState>
{
	[Token(Token = "0x4000A72")]
	[FieldOffset(Offset = "0x0")]
	private byte m_WriteEnabled;

	[Token(Token = "0x4000A73")]
	[FieldOffset(Offset = "0x1")]
	private sbyte m_CompareFunction;

	[Token(Token = "0x1700033F")]
	public static DepthState defaultValue
	{
		[Token(Token = "0x60015C2")]
		[Address(RVA = "0x695A280", Offset = "0x6959280", VA = "0x695A280")]
		get
		{
			return default(DepthState);
		}
	}

	[Token(Token = "0x60015C3")]
	[Address(RVA = "0x695A2D0", Offset = "0x69592D0", VA = "0x695A2D0")]
	public DepthState(bool writeEnabled = true, CompareFunction compareFunction = CompareFunction.Less)
	{
	}

	[Token(Token = "0x60015C4")]
	[Address(RVA = "0x695A330", Offset = "0x6959330", VA = "0x695A330", Slot = "4")]
	public bool Equals(DepthState other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015C5")]
	[Address(RVA = "0x695A350", Offset = "0x6959350", VA = "0x695A350", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015C6")]
	[Address(RVA = "0x695A3C0", Offset = "0x69593C0", VA = "0x695A3C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
