using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000131")]
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

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x4ACA6C0", Offset = "0x4ACA6C0", VA = "0x4ACA6C0")]
	public ColorUsageAttribute(bool showAlpha)
	{
	}

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x4ACA6F0", Offset = "0x4ACA6F0", VA = "0x4ACA6F0")]
	public ColorUsageAttribute(bool showAlpha, bool hdr)
	{
	}
}
