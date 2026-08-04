// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ColorUsageAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000134")]
[AttributeUsage(AttributeTargets.Field, Inherited = true, AllowMultiple = false)]
public sealed class ColorUsageAttribute : PropertyAttribute
{
	[Token(Token = "0x4000525")]
	[FieldOffset(Offset = "0x10")]
	public readonly bool showAlpha;

	[Token(Token = "0x4000526")]
	[FieldOffset(Offset = "0x11")]
	public readonly bool hdr;

	[Token(Token = "0x4000527")]
	[FieldOffset(Offset = "0x14")]
	[Obsolete("This field is no longer used for anything.")]
	public readonly float minBrightness;

	[Token(Token = "0x4000528")]
	[FieldOffset(Offset = "0x18")]
	[Obsolete("This field is no longer used for anything.")]
	public readonly float maxBrightness;

	[Token(Token = "0x4000529")]
	[FieldOffset(Offset = "0x1C")]
	[Obsolete("This field is no longer used for anything.")]
	public readonly float minExposureValue;

	[Token(Token = "0x400052A")]
	[FieldOffset(Offset = "0x20")]
	[Obsolete("This field is no longer used for anything.")]
	public readonly float maxExposureValue;

	[Token(Token = "0x6000932")]
	[Address(RVA = "0x4DF1FF0", Offset = "0x4DF1FF0", VA = "0x4DF1FF0")]
	public ColorUsageAttribute(bool showAlpha)
	{
	}

	[Token(Token = "0x6000933")]
	[Address(RVA = "0x4DF2020", Offset = "0x4DF2020", VA = "0x4DF2020")]
	public ColorUsageAttribute(bool showAlpha, bool hdr)
	{
	}
}
