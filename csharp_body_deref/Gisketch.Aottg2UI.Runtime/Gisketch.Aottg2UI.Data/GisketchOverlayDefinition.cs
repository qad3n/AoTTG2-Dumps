using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x200004A")]
public sealed class GisketchOverlayDefinition
{
	[Token(Token = "0x4000195")]
	[FieldOffset(Offset = "0x10")]
	public string id;

	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0x18")]
	public string title;

	[Token(Token = "0x4000197")]
	[FieldOffset(Offset = "0x20")]
	public bool modal;

	[Token(Token = "0x4000198")]
	[FieldOffset(Offset = "0x21")]
	public bool dismissOnBackdrop;

	[Token(Token = "0x4000199")]
	[FieldOffset(Offset = "0x28")]
	public GisketchMotionDefinition enter;

	[Token(Token = "0x400019A")]
	[FieldOffset(Offset = "0x30")]
	public GisketchMotionDefinition exit;

	[Token(Token = "0x400019B")]
	[FieldOffset(Offset = "0x38")]
	public GisketchNodeDefinition root;

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x39E76E0", Offset = "0x39E76E0", VA = "0x39E76E0")]
	public GisketchOverlayDefinition()
	{
	}
}
