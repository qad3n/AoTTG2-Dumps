// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SurfaceDataAttributes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000188")]
[AttributeUsage(AttributeTargets.Field)]
public class SurfaceDataAttributes : Attribute
{
	[Token(Token = "0x40007AF")]
	[FieldOffset(Offset = "0x10")]
	public string[] displayNames;

	[Token(Token = "0x40007B0")]
	[FieldOffset(Offset = "0x18")]
	public bool isDirection;

	[Token(Token = "0x40007B1")]
	[FieldOffset(Offset = "0x19")]
	public bool sRGBDisplay;

	[Token(Token = "0x40007B2")]
	[FieldOffset(Offset = "0x1C")]
	public FieldPrecision precision;

	[Token(Token = "0x40007B3")]
	[FieldOffset(Offset = "0x20")]
	public bool checkIsNormalized;

	[Token(Token = "0x40007B4")]
	[FieldOffset(Offset = "0x28")]
	public string preprocessor;

	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x65259B0", Offset = "0x65249B0", VA = "0x65259B0")]
	public SurfaceDataAttributes(string displayName = "", bool isDirection = false, bool sRGBDisplay = false, FieldPrecision precision = FieldPrecision.Default, bool checkIsNormalized = false, string preprocessor = "")
	{
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x6525A80", Offset = "0x6524A80", VA = "0x6525A80")]
	public SurfaceDataAttributes(string[] displayNames, bool isDirection = false, bool sRGBDisplay = false, FieldPrecision precision = FieldPrecision.Default, bool checkIsNormalized = false, string preprocessor = "")
	{
	}
}
