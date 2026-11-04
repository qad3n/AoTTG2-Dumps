// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgDialogFooter
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgDialogFooter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200007B")]
public sealed class AottgDialogFooter
{
	[Token(Token = "0x40002A1")]
	[FieldOffset(Offset = "0x10")]
	private readonly AottgUi _ui;

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	internal AottgDialogFooter(AottgUi ui)
	{
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x18C36E0", Offset = "0x18C1CE0", VA = "0x1818C36E0")]
	public GisketchNodeDefinition Primary(string text, string actionId)
	{
		return null;
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x18C3630", Offset = "0x18C1C30", VA = "0x1818C3630")]
	public GisketchNodeDefinition PrimaryKey(string key, string fallback, string actionId)
	{
		return null;
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x18C3720", Offset = "0x18C1D20", VA = "0x1818C3720")]
	public GisketchNodeDefinition Primary(string text, Action<GisketchActionContext> action)
	{
		return null;
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x18C3540", Offset = "0x18C1B40", VA = "0x1818C3540")]
	public GisketchNodeDefinition PrimaryKey(string key, string fallback, Action<GisketchActionContext> action)
	{
		return null;
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x18C3AC0", Offset = "0x18C20C0", VA = "0x1818C3AC0")]
	public void Secondary(string text, string actionId)
	{
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x18C3A10", Offset = "0x18C2010", VA = "0x1818C3A10")]
	public void SecondaryKey(string key, string fallback, string actionId)
	{
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x18C3B10", Offset = "0x18C2110", VA = "0x1818C3B10")]
	public void Workshop(string text, string actionId)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x18C3940", Offset = "0x18C1F40", VA = "0x1818C3940")]
	public void Quiet(string text, string actionId)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x18C3890", Offset = "0x18C1E90", VA = "0x1818C3890")]
	public void QuietKey(string key, string fallback, string actionId)
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x18C3990", Offset = "0x18C1F90", VA = "0x1818C3990")]
	public GisketchNodeDefinition Quiet(string text, Action<GisketchActionContext> action)
	{
		return null;
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x18C37A0", Offset = "0x18C1DA0", VA = "0x1818C37A0")]
	public GisketchNodeDefinition QuietKey(string key, string fallback, Action<GisketchActionContext> action)
	{
		return null;
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x18C3420", Offset = "0x18C1A20", VA = "0x1818C3420")]
	public void Danger(string text, string actionId)
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x18C3470", Offset = "0x18C1A70", VA = "0x1818C3470")]
	public GisketchNodeDefinition Danger(string text, Action<GisketchActionContext> action)
	{
		return null;
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x18C3370", Offset = "0x18C1970", VA = "0x1818C3370")]
	public void DangerKey(string key, string fallback, string actionId)
	{
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x18C34F0", Offset = "0x18C1AF0", VA = "0x1818C34F0")]
	public void Negative(string text, string actionId)
	{
	}
}
