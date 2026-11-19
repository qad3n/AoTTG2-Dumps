// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgSubtabStrip
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20001F8")]
public sealed class AottgSubtabStrip : AottgComponent
{
	[Token(Token = "0x4000A89")]
	public const string NodeType = "AottgSubtabStrip";

	[Token(Token = "0x4000A8A")]
	public const float Height = 52f;

	[Token(Token = "0x4000A8B")]
	public const float Gap = 32f;

	[Token(Token = "0x4000A8C")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000A8D")]
	[FieldOffset(Offset = "0x18")]
	private readonly AottgSubtab[] _tabs;

	[Token(Token = "0x4000A8E")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _selectedId;

	[Token(Token = "0x4000A8F")]
	[FieldOffset(Offset = "0x28")]
	private readonly Action<GisketchActionContext, string> _selected;

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x5D7D690", Offset = "0x5D7C690", VA = "0x5D7D690")]
	public AottgSubtabStrip(string id, AottgSubtab[] tabs, string selectedId, Action<GisketchActionContext, string> selected)
	{
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x5D7D750", Offset = "0x5D7C750", VA = "0x5D7D750", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x5D7DCF0", Offset = "0x5D7CCF0", VA = "0x5D7DCF0")]
	private void Select(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x5D7DA60", Offset = "0x5D7CA60", VA = "0x5D7DA60")]
	private string[] TabIds()
	{
		return null;
	}

	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x5D7DB70", Offset = "0x5D7CB70", VA = "0x5D7DB70")]
	private GisketchNodeDefinition[] TabMetadata()
	{
		return null;
	}
}
