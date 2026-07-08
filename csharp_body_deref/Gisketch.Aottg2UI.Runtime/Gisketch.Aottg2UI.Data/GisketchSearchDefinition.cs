using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x2000049")]
public sealed class GisketchSearchDefinition
{
	[Token(Token = "0x400018D")]
	[FieldOffset(Offset = "0x10")]
	public string title;

	[Token(Token = "0x400018E")]
	[FieldOffset(Offset = "0x18")]
	public string keywords;

	[Token(Token = "0x400018F")]
	[FieldOffset(Offset = "0x20")]
	public string icon;

	[Token(Token = "0x4000190")]
	[FieldOffset(Offset = "0x28")]
	public string kind;

	[Token(Token = "0x4000191")]
	[FieldOffset(Offset = "0x30")]
	public string sectionId;

	[Token(Token = "0x4000192")]
	[FieldOffset(Offset = "0x38")]
	public string sectionTitle;

	[Token(Token = "0x4000193")]
	[FieldOffset(Offset = "0x40")]
	public bool autoAddKeywords;

	[Token(Token = "0x4000194")]
	[FieldOffset(Offset = "0x41")]
	public bool hidden;

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x39F0520", Offset = "0x39F0520", VA = "0x39F0520")]
	public GisketchSearchDefinition()
	{
	}
}
