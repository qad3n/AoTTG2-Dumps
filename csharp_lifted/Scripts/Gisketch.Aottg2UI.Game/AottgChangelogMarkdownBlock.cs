// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangelogMarkdownBlock
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogMarkdownBlock.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001E9")]
public sealed class AottgChangelogMarkdownBlock
{
	[Token(Token = "0x1700013D")]
	public AottgChangelogMarkdownBlockType Type
	{
		[Token(Token = "0x6000B5B")]
		[Address(RVA = "0x5D77310", Offset = "0x5D76310", VA = "0x5D77310")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogMarkdownBlock.c (Gisketch.Aottg2UI.Game.AottgChangelogMarkdownBlock$$get_Type): clean
			return this._Type_k__BackingField;
		}
		[Token(Token = "0x6000B5C")]
		[Address(RVA = "0x5D77320", Offset = "0x5D76320", VA = "0x5D77320")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogMarkdownBlock.c (Gisketch.Aottg2UI.Game.AottgChangelogMarkdownBlock$$set_Type): clean
			this._Type_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x1700013E")]
	public string Text
	{
		[Token(Token = "0x6000B5D")]
		[Address(RVA = "0x5D77330", Offset = "0x5D76330", VA = "0x5D77330")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogMarkdownBlock.c (Gisketch.Aottg2UI.Game.AottgChangelogMarkdownBlock$$get_Text): clean
			return this._Text_k__BackingField;
		}
		[Token(Token = "0x6000B5E")]
		[Address(RVA = "0x5D77340", Offset = "0x5D76340", VA = "0x5D77340")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogMarkdownBlock.c (Gisketch.Aottg2UI.Game.AottgChangelogMarkdownBlock$$set_Text): clean
			this._Text_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x1700013F")]
	public IReadOnlyList<string> Items
	{
		[Token(Token = "0x6000B5F")]
		[Address(RVA = "0x5D77350", Offset = "0x5D76350", VA = "0x5D77350")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogMarkdownBlock.c (Gisketch.Aottg2UI.Game.AottgChangelogMarkdownBlock$$get_Items): clean
			return this._Items_k__BackingField;
		}
		[Token(Token = "0x6000B60")]
		[Address(RVA = "0x5D77360", Offset = "0x5D76360", VA = "0x5D77360")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogMarkdownBlock.c (Gisketch.Aottg2UI.Game.AottgChangelogMarkdownBlock$$set_Items): clean
			this._Items_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x5D77250", Offset = "0x5D76250", VA = "0x5D77250")]
	public AottgChangelogMarkdownBlock(AottgChangelogMarkdownBlockType type, string text, string[] items)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogMarkdownBlock.c (Gisketch.Aottg2UI.Game.AottgChangelogMarkdownBlock$$.ctor): clean
		ReadOnlyCollection<T> pSVar1;

		base();
		this._Type_k__BackingField = type;
		if (text == null) {
			text = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this._Text_k__BackingField = text;
		if (items == null) {
			items = (String[])new string[0];
		}
		pSVar1 = Array.AsReadOnly<string>((Object[])items);
		this._Items_k__BackingField = (IReadOnlyList<string>)pSVar1;
		return;
	}
}
