// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Color32
// Update status: unchanged since the previous dump
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
[Token(Token = "0x200013D")]
[UnityEngine.Scripting.UsedByNativeCode]
[DefaultMember("Item")]
public struct Color32 : IEquatable<Color32>, IFormattable
{
	[Token(Token = "0x4000522")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.Ignore(DoesNotContributeToSize = true)]
	private int rgba;

	[Token(Token = "0x4000523")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public byte r;

	[Token(Token = "0x4000524")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
	public byte g;

	[Token(Token = "0x4000525")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2")]
	public byte b;

	[Token(Token = "0x4000526")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3")]
	public byte a;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A39")]
	[Address(RVA = "0x68FCE00", Offset = "0x68FBE00", VA = "0x68FCE00")]
	public Color32(byte r, byte g, byte b, byte a)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A3A")]
	[Address(RVA = "0x68FCE10", Offset = "0x68FBE10", VA = "0x68FCE10")]
	public static implicit operator Color32(Color c)
	{
		return default(Color32);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A3B")]
	[Address(RVA = "0x68FD1A0", Offset = "0x68FC1A0", VA = "0x68FD1A0")]
	public static implicit operator Color(Color32 c)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A3C")]
	[Address(RVA = "0x68FD1F0", Offset = "0x68FC1F0", VA = "0x68FD1F0")]
	public static Color32 Lerp(Color32 a, Color32 b, float t)
	{
		return default(Color32);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x68FD2C0", Offset = "0x68FC2C0", VA = "0x68FD2C0", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A3E")]
	[Address(RVA = "0x68FD2D0", Offset = "0x68FC2D0", VA = "0x68FD2D0", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A3F")]
	[Address(RVA = "0x68FD330", Offset = "0x68FC330", VA = "0x68FD330", Slot = "4")]
	public readonly bool Equals(Color32 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A40")]
	[Address(RVA = "0x68FD340", Offset = "0x68FC340", VA = "0x68FD340")]
	public readonly bool Equals(in Color32 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A41")]
	[Address(RVA = "0x68FD350", Offset = "0x68FC350", VA = "0x68FD350", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A42")]
	[Address(RVA = "0x68FD360", Offset = "0x68FC360", VA = "0x68FD360", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
