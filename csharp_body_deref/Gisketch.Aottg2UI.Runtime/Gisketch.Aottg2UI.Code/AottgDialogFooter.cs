using System;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000065")]
public sealed class AottgDialogFooter
{
	[Token(Token = "0x4000221")]
	[FieldOffset(Offset = "0x10")]
	private readonly AottgUi _ui;

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x39F4480", Offset = "0x39F4480", VA = "0x39F4480")]
	internal AottgDialogFooter(AottgUi ui)
	{
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x39F44B0", Offset = "0x39F44B0", VA = "0x39F44B0")]
	public GisketchNodeDefinition Primary(string text, string actionId)
	{
		return null;
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x39F4640", Offset = "0x39F4640", VA = "0x39F4640")]
	public GisketchNodeDefinition Primary(string text, Action<GisketchActionContext> action)
	{
		return null;
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x39F4730", Offset = "0x39F4730", VA = "0x39F4730")]
	public void Secondary(string text, string actionId)
	{
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x39F4770", Offset = "0x39F4770", VA = "0x39F4770")]
	public void Workshop(string text, string actionId)
	{
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x39F47B0", Offset = "0x39F47B0", VA = "0x39F47B0")]
	public void Quiet(string text, string actionId)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x39F47F0", Offset = "0x39F47F0", VA = "0x39F47F0")]
	public GisketchNodeDefinition Quiet(string text, Action<GisketchActionContext> action)
	{
		return null;
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x39F4860", Offset = "0x39F4860", VA = "0x39F4860")]
	public void Danger(string text, string actionId)
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x39F48A0", Offset = "0x39F48A0", VA = "0x39F48A0")]
	public void Negative(string text, string actionId)
	{
	}
}
