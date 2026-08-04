// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgDialogFooter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgDialogFooter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000067")]
public sealed class AottgDialogFooter
{
	[Token(Token = "0x4000228")]
	[FieldOffset(Offset = "0x10")]
	private readonly AottgUi _ui;

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x3A5F5F0", Offset = "0x3A5F5F0", VA = "0x3A5F5F0")]
	internal AottgDialogFooter(AottgUi ui)
	{
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x3A5FB20", Offset = "0x3A5FB20", VA = "0x3A5FB20")]
	public GisketchNodeDefinition Primary(string text, string actionId)
	{
		return null;
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x3A5FCB0", Offset = "0x3A5FCB0", VA = "0x3A5FCB0")]
	public GisketchNodeDefinition Primary(string text, Action<GisketchActionContext> action)
	{
		return null;
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x3A5FDA0", Offset = "0x3A5FDA0", VA = "0x3A5FDA0")]
	public void Secondary(string text, string actionId)
	{
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x3A5FDE0", Offset = "0x3A5FDE0", VA = "0x3A5FDE0")]
	public void Workshop(string text, string actionId)
	{
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x3A5FE20", Offset = "0x3A5FE20", VA = "0x3A5FE20")]
	public void Quiet(string text, string actionId)
	{
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x3A5FE60", Offset = "0x3A5FE60", VA = "0x3A5FE60")]
	public GisketchNodeDefinition Quiet(string text, Action<GisketchActionContext> action)
	{
		return null;
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x3A5FED0", Offset = "0x3A5FED0", VA = "0x3A5FED0")]
	public void Danger(string text, string actionId)
	{
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x3A5FF10", Offset = "0x3A5FF10", VA = "0x3A5FF10")]
	public void Negative(string text, string actionId)
	{
	}
}
