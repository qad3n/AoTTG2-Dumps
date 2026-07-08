using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000120")]
internal class ProbeVolumeDebugColorPreferences
{
	[Token(Token = "0x400043F")]
	[FieldOffset(Offset = "0x0")]
	internal static Func<Color> GetDetailSubdivisionColor;

	[Token(Token = "0x4000440")]
	[FieldOffset(Offset = "0x8")]
	internal static Func<Color> GetMediumSubdivisionColor;

	[Token(Token = "0x4000441")]
	[FieldOffset(Offset = "0x10")]
	internal static Func<Color> GetLowSubdivisionColor;

	[Token(Token = "0x4000442")]
	[FieldOffset(Offset = "0x18")]
	internal static Func<Color> GetVeryLowSubdivisionColor;

	[Token(Token = "0x4000443")]
	[FieldOffset(Offset = "0x20")]
	internal static Func<Color> GetSparseSubdivisionColor;

	[Token(Token = "0x4000444")]
	[FieldOffset(Offset = "0x28")]
	internal static Func<Color> GetSparsestSubdivisionColor;

	[Token(Token = "0x4000445")]
	[FieldOffset(Offset = "0x30")]
	internal static Color s_DetailSubdivision;

	[Token(Token = "0x4000446")]
	[FieldOffset(Offset = "0x40")]
	internal static Color s_MediumSubdivision;

	[Token(Token = "0x4000447")]
	[FieldOffset(Offset = "0x50")]
	internal static Color s_LowSubdivision;

	[Token(Token = "0x4000448")]
	[FieldOffset(Offset = "0x60")]
	internal static Color s_VeryLowSubdivision;

	[Token(Token = "0x4000449")]
	[FieldOffset(Offset = "0x70")]
	internal static Color s_SparseSubdivision;

	[Token(Token = "0x400044A")]
	[FieldOffset(Offset = "0x80")]
	internal static Color s_SparsestSubdivision;

	[Token(Token = "0x600091F")]
	[Address(RVA = "0x4893EA0", Offset = "0x4893EA0", VA = "0x4893EA0")]
	static ProbeVolumeDebugColorPreferences()
	{
	}

	[Token(Token = "0x6000920")]
	[Address(RVA = "0x4893F40", Offset = "0x4893F40", VA = "0x4893F40")]
	public ProbeVolumeDebugColorPreferences()
	{
	}
}
