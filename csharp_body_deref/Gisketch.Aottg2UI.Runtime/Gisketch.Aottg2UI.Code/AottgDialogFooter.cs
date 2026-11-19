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

[Token(Token = "0x2000081")]
public sealed class AottgDialogFooter
{
	[Token(Token = "0x40002C5")]
	[FieldOffset(Offset = "0x10")]
	private readonly AottgUi _ui;

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x52655A0", Offset = "0x52645A0", VA = "0x52655A0")]
	internal AottgDialogFooter(AottgUi ui)
	{
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x52655D0", Offset = "0x52645D0", VA = "0x52655D0")]
	public GisketchNodeDefinition Primary(string text, string actionId)
	{
		return null;
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x5265760", Offset = "0x5264760", VA = "0x5265760")]
	public GisketchNodeDefinition PrimaryKey(string key, string actionId)
	{
		return null;
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x52657F0", Offset = "0x52647F0", VA = "0x52657F0")]
	public GisketchNodeDefinition Primary(string text, Action<GisketchActionContext> action)
	{
		return null;
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x52658F0", Offset = "0x52648F0", VA = "0x52658F0")]
	public GisketchNodeDefinition PrimaryKey(string key, Action<GisketchActionContext> action)
	{
		return null;
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x52659C0", Offset = "0x52649C0", VA = "0x52659C0")]
	public void Secondary(string text, string actionId)
	{
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x5265A00", Offset = "0x5264A00", VA = "0x5265A00")]
	public void SecondaryKey(string key, string actionId)
	{
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x5265AA0", Offset = "0x5264AA0", VA = "0x5265AA0")]
	public void Workshop(string text, string actionId)
	{
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x5265AE0", Offset = "0x5264AE0", VA = "0x5265AE0")]
	public void Quiet(string text, string actionId)
	{
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x5265B20", Offset = "0x5264B20", VA = "0x5265B20")]
	public void QuietKey(string key, string actionId)
	{
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x5265BC0", Offset = "0x5264BC0", VA = "0x5265BC0")]
	public GisketchNodeDefinition Quiet(string text, Action<GisketchActionContext> action)
	{
		return null;
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x5265C30", Offset = "0x5264C30", VA = "0x5265C30")]
	public GisketchNodeDefinition QuietKey(string key, Action<GisketchActionContext> action)
	{
		return null;
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x5265D00", Offset = "0x5264D00", VA = "0x5265D00")]
	public void Danger(string text, string actionId)
	{
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x5265D40", Offset = "0x5264D40", VA = "0x5265D40")]
	public GisketchNodeDefinition Danger(string text, Action<GisketchActionContext> action)
	{
		return null;
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x5265DB0", Offset = "0x5264DB0", VA = "0x5265DB0")]
	public void DangerKey(string key, string actionId)
	{
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x5265E50", Offset = "0x5264E50", VA = "0x5265E50")]
	public GisketchNodeDefinition DangerKey(string key, Action<GisketchActionContext> action)
	{
		return null;
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x5265F20", Offset = "0x5264F20", VA = "0x5265F20")]
	public void Negative(string text, string actionId)
	{
	}
}
