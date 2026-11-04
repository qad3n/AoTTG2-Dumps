// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Color32
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)2)]
[Token(Token = "0x200013C")]
[DefaultMember("Item")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct Color32 : IEquatable<Color32>, IFormattable
{
	[Token(Token = "0x400051D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.Ignore(DoesNotContributeToSize = true)]
	private int rgba;

	[Token(Token = "0x400051E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public byte r;

	[Token(Token = "0x400051F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
	public byte g;

	[Token(Token = "0x4000520")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2")]
	public byte b;

	[Token(Token = "0x4000521")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3")]
	public byte a;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A28")]
	[Address(RVA = "0x1055E10", Offset = "0x1054410", VA = "0x181055E10")]
	public Color32(byte r, byte g, byte b, byte a)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A29")]
	[Address(RVA = "0x1882C00", Offset = "0x1881200", VA = "0x181882C00")]
	public static implicit operator Color32(Color c)
	{
		return default(Color32);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A2A")]
	[Address(RVA = "0x2F004A0", Offset = "0x2EFEAA0", VA = "0x182F004A0")]
	public static implicit operator Color(Color32 c)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A2B")]
	[Address(RVA = "0x219B4F0", Offset = "0x2199AF0", VA = "0x18219B4F0")]
	public static Color32 Lerp(Color32 a, Color32 b, float t)
	{
		return default(Color32);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A2C")]
	[Address(RVA = "0x194C610", Offset = "0x194AC10", VA = "0x18194C610", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A2D")]
	[Address(RVA = "0x2F001B0", Offset = "0x2EFE7B0", VA = "0x182F001B0", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A2E")]
	[Address(RVA = "0x1B28F40", Offset = "0x1B27540", VA = "0x181B28F40", Slot = "4")]
	public readonly bool Equals(Color32 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A2F")]
	[Address(RVA = "0x2F001A0", Offset = "0x2EFE7A0", VA = "0x182F001A0")]
	public readonly bool Equals(in Color32 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A30")]
	[Address(RVA = "0x2F00490", Offset = "0x2EFEA90", VA = "0x182F00490", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A31")]
	[Address(RVA = "0x2F00230", Offset = "0x2EFE830", VA = "0x182F00230", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
