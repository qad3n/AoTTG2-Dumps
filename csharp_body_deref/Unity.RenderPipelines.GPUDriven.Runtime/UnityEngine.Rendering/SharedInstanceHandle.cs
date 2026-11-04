// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SharedInstanceHandle
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000072")]
internal struct SharedInstanceHandle : IEquatable<SharedInstanceHandle>, IComparable<SharedInstanceHandle>
{
	[Token(Token = "0x4000208")]
	[FieldOffset(Offset = "0x0")]
	public static readonly SharedInstanceHandle Invalid;

	[Token(Token = "0x17000034")]
	public int index
	{
		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public bool valid
	{
		[Token(Token = "0x60001F5")]
		[Address(RVA = "0x2BEADA0", Offset = "0x2BE93A0", VA = "0x182BEADA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x2BEACC0", Offset = "0x2BE92C0", VA = "0x182BEACC0", Slot = "4")]
	public bool Equals(SharedInstanceHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x2BEAC50", Offset = "0x2BE9250", VA = "0x182BEAC50", Slot = "5")]
	public int CompareTo(SharedInstanceHandle other)
	{
		return default(int);
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x2BEAD10", Offset = "0x2BE9310", VA = "0x182BEAD10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
