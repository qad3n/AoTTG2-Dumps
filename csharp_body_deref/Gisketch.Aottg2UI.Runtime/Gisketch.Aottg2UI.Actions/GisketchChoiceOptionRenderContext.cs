using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000B0")]
public sealed class GisketchChoiceOptionRenderContext
{
	[Token(Token = "0x4000377")]
	[FieldOffset(Offset = "0x10")]
	public GameObject Root;

	[Token(Token = "0x4000378")]
	[FieldOffset(Offset = "0x18")]
	public TextMeshProUGUI Label;

	[Token(Token = "0x4000379")]
	[FieldOffset(Offset = "0x20")]
	public GisketchChoiceOptionDefinition Option;

	[Token(Token = "0x400037A")]
	[FieldOffset(Offset = "0x28")]
	public string Text;

	[Token(Token = "0x400037B")]
	[FieldOffset(Offset = "0x30")]
	public string Value;

	[Token(Token = "0x400037C")]
	[FieldOffset(Offset = "0x38")]
	public int Index;

	[Token(Token = "0x400037D")]
	[FieldOffset(Offset = "0x3C")]
	public bool Enabled;

	[Token(Token = "0x400037E")]
	[FieldOffset(Offset = "0x3D")]
	public bool Selected;

	[Token(Token = "0x400037F")]
	[FieldOffset(Offset = "0x3E")]
	public bool ClosedValue;

	[Token(Token = "0x600050B")]
	[Address(RVA = "0x3A21450", Offset = "0x3A21450", VA = "0x3A21450")]
	public GisketchChoiceOptionRenderContext()
	{
	}
}
