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
[Token(Token = "0x2000117")]
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
	[Token(Token = "0x6000797")]
	[Address(RVA = "0x4DE5D10", Offset = "0x4DE5D10", VA = "0x4DE5D10")]
	public Color32(byte r, byte g, byte b, byte a)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000798")]
	[Address(RVA = "0x4DE5D20", Offset = "0x4DE5D20", VA = "0x4DE5D20")]
	public static implicit operator Color32(Color c)
	{
		return default(Color32);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000799")]
	[Address(RVA = "0x4DE60B0", Offset = "0x4DE60B0", VA = "0x4DE60B0")]
	public static implicit operator Color(Color32 c)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079A")]
	[Address(RVA = "0x4DE6100", Offset = "0x4DE6100", VA = "0x4DE6100", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079B")]
	[Address(RVA = "0x4DE6110", Offset = "0x4DE6110", VA = "0x4DE6110", Slot = "4")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
