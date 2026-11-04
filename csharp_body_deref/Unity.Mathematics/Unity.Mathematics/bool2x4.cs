// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.bool2x4
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x200000F")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct bool2x4 : IEquatable<bool2x4>
{
	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x0")]
	public bool2 c0;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x2")]
	public bool2 c1;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x4")]
	public bool2 c2;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x6")]
	public bool2 c3;

	[Token(Token = "0x17000020")]
	public unsafe ref bool2 this[int index]
	{
		[Token(Token = "0x600086A")]
		[Address(RVA = "0x841BE0", Offset = "0x8401E0", VA = "0x180841BE0")]
		get
		{
			return ref *(bool2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000856")]
	[Address(RVA = "0x298BF90", Offset = "0x298A590", VA = "0x18298BF90")]
	public bool2x4(bool2 c0, bool2 c1, bool2 c2, bool2 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000857")]
	[Address(RVA = "0x2A45F00", Offset = "0x2A44500", VA = "0x182A45F00")]
	public bool2x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000858")]
	[Address(RVA = "0x2A45F60", Offset = "0x2A44560", VA = "0x182A45F60")]
	public bool2x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000859")]
	[Address(RVA = "0x29D3690", Offset = "0x29D1C90", VA = "0x1829D3690")]
	public static implicit operator bool2x4(bool v)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600085A")]
	[Address(RVA = "0x2A46560", Offset = "0x2A44B60", VA = "0x182A46560")]
	public static bool2x4 operator ==(bool2x4 lhs, bool2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600085B")]
	[Address(RVA = "0x2A46420", Offset = "0x2A44A20", VA = "0x182A46420")]
	public static bool2x4 operator ==(bool2x4 lhs, bool rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600085C")]
	[Address(RVA = "0x2A464C0", Offset = "0x2A44AC0", VA = "0x182A464C0")]
	public static bool2x4 operator ==(bool lhs, bool2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600085D")]
	[Address(RVA = "0x2A46990", Offset = "0x2A44F90", VA = "0x182A46990")]
	public static bool2x4 operator !=(bool2x4 lhs, bool2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600085E")]
	[Address(RVA = "0x2A46850", Offset = "0x2A44E50", VA = "0x182A46850")]
	public static bool2x4 operator !=(bool2x4 lhs, bool rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600085F")]
	[Address(RVA = "0x2A468F0", Offset = "0x2A44EF0", VA = "0x182A468F0")]
	public static bool2x4 operator !=(bool lhs, bool2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000860")]
	[Address(RVA = "0x2A46A50", Offset = "0x2A45050", VA = "0x182A46A50")]
	public static bool2x4 operator !(bool2x4 val)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000861")]
	[Address(RVA = "0x2A46110", Offset = "0x2A44710", VA = "0x182A46110")]
	public static bool2x4 operator &(bool2x4 lhs, bool2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000862")]
	[Address(RVA = "0x2A46060", Offset = "0x2A44660", VA = "0x182A46060")]
	public static bool2x4 operator &(bool2x4 lhs, bool rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000863")]
	[Address(RVA = "0x2A45FB0", Offset = "0x2A445B0", VA = "0x182A45FB0")]
	public static bool2x4 operator &(bool lhs, bool2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000864")]
	[Address(RVA = "0x2A46340", Offset = "0x2A44940", VA = "0x182A46340")]
	public static bool2x4 operator |(bool2x4 lhs, bool2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000865")]
	[Address(RVA = "0x2A461E0", Offset = "0x2A447E0", VA = "0x182A461E0")]
	public static bool2x4 operator |(bool2x4 lhs, bool rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000866")]
	[Address(RVA = "0x2A46290", Offset = "0x2A44890", VA = "0x182A46290")]
	public static bool2x4 operator |(bool lhs, bool2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000867")]
	[Address(RVA = "0x2A466D0", Offset = "0x2A44CD0", VA = "0x182A466D0")]
	public static bool2x4 operator ^(bool2x4 lhs, bool2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000868")]
	[Address(RVA = "0x2A46620", Offset = "0x2A44C20", VA = "0x182A46620")]
	public static bool2x4 operator ^(bool2x4 lhs, bool rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000869")]
	[Address(RVA = "0x2A467A0", Offset = "0x2A44DA0", VA = "0x182A467A0")]
	public static bool2x4 operator ^(bool lhs, bool2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600086B")]
	[Address(RVA = "0x2A45B00", Offset = "0x2A44100", VA = "0x182A45B00", Slot = "4")]
	public bool Equals(bool2x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600086C")]
	[Address(RVA = "0x2A45A30", Offset = "0x2A44030", VA = "0x182A45A30", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600086D")]
	[Address(RVA = "0x2A45B60", Offset = "0x2A44160", VA = "0x182A45B60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600086E")]
	[Address(RVA = "0x2A45B70", Offset = "0x2A44170", VA = "0x182A45B70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
