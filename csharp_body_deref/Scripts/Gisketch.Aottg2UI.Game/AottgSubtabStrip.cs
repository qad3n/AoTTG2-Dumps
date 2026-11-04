// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgSubtabStrip
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStrip.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001DE")]
public sealed class AottgSubtabStrip : AottgComponent
{
	[Token(Token = "0x4000A11")]
	public const string NodeType = "AottgSubtabStrip";

	[Token(Token = "0x4000A12")]
	public const float Height = 52f;

	[Token(Token = "0x4000A13")]
	public const float Gap = 32f;

	[Token(Token = "0x4000A14")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000A15")]
	[FieldOffset(Offset = "0x18")]
	private readonly AottgSubtab[] _tabs;

	[Token(Token = "0x4000A16")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _selectedId;

	[Token(Token = "0x4000A17")]
	[FieldOffset(Offset = "0x28")]
	private readonly Action<GisketchActionContext, string> _selected;

	[Token(Token = "0x6000AEC")]
	[Address(RVA = "0x23B91E0", Offset = "0x23B77E0", VA = "0x1823B91E0")]
	public AottgSubtabStrip(string id, AottgSubtab[] tabs, string selectedId, Action<GisketchActionContext, string> selected)
	{
	}

	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x23B88C0", Offset = "0x23B6EC0", VA = "0x1823B88C0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x23B8E40", Offset = "0x23B7440", VA = "0x1823B8E40")]
	private void Select(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x23B8ED0", Offset = "0x23B74D0", VA = "0x1823B8ED0")]
	private string[] TabIds()
	{
		return null;
	}

	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x23B8FD0", Offset = "0x23B75D0", VA = "0x1823B8FD0")]
	private GisketchNodeDefinition[] TabMetadata()
	{
		return null;
	}
}
