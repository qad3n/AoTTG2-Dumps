using System;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)2)]
[Token(Token = "0x2000114")]
[UnityEngine.Scripting.UsedByNativeCode]
[DefaultMember("Item")]
public struct Color32 : IFormattable
{
	[Token(Token = "0x40004B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.Ignore(DoesNotContributeToSize = true)]
	private int rgba;

	[Token(Token = "0x40004B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public byte r;

	[Token(Token = "0x40004B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
	public byte g;

	[Token(Token = "0x40004B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2")]
	public byte b;

	[Token(Token = "0x40004BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3")]
	public byte a;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000795")]
	[Address(RVA = "0x4ABE3E0", Offset = "0x4ABE3E0", VA = "0x4ABE3E0")]
	public Color32(byte r, byte g, byte b, byte a)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000796")]
	[Address(RVA = "0x4ABE3F0", Offset = "0x4ABE3F0", VA = "0x4ABE3F0")]
	public static implicit operator Color32(Color c)
	{
		return default(Color32);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000797")]
	[Address(RVA = "0x4ABE780", Offset = "0x4ABE780", VA = "0x4ABE780")]
	public static implicit operator Color(Color32 c)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000798")]
	[Address(RVA = "0x4ABE7D0", Offset = "0x4ABE7D0", VA = "0x4ABE7D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000799")]
	[Address(RVA = "0x4ABE7E0", Offset = "0x4ABE7E0", VA = "0x4ABE7E0", Slot = "4")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
