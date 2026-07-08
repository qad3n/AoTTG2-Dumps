using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000171")]
[AttributeUsage(AttributeTargets.Field)]
public class SurfaceDataAttributes : Attribute
{
	[Token(Token = "0x400066A")]
	[FieldOffset(Offset = "0x10")]
	public string[] displayNames;

	[Token(Token = "0x400066B")]
	[FieldOffset(Offset = "0x18")]
	public bool isDirection;

	[Token(Token = "0x400066C")]
	[FieldOffset(Offset = "0x19")]
	public bool sRGBDisplay;

	[Token(Token = "0x400066D")]
	[FieldOffset(Offset = "0x1C")]
	public FieldPrecision precision;

	[Token(Token = "0x400066E")]
	[FieldOffset(Offset = "0x20")]
	public bool checkIsNormalized;

	[Token(Token = "0x400066F")]
	[FieldOffset(Offset = "0x28")]
	public string preprocessor;

	[Token(Token = "0x6000AC9")]
	[Address(RVA = "0x48B9A40", Offset = "0x48B9A40", VA = "0x48B9A40")]
	public SurfaceDataAttributes(string displayName = "", bool isDirection = false, bool sRGBDisplay = false, FieldPrecision precision = FieldPrecision.Default, bool checkIsNormalized = false, string preprocessor = "")
	{
	}

	[Token(Token = "0x6000ACA")]
	[Address(RVA = "0x48B9B10", Offset = "0x48B9B10", VA = "0x48B9B10")]
	public SurfaceDataAttributes(string[] displayNames, bool isDirection = false, bool sRGBDisplay = false, FieldPrecision precision = FieldPrecision.Default, bool checkIsNormalized = false, string preprocessor = "")
	{
	}
}
