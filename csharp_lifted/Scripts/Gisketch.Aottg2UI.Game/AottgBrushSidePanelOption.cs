// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgBrushSidePanelOption
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgBrushSidePanelOption.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000347")]
public readonly struct AottgBrushSidePanelOption
{
	[Token(Token = "0x400106D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly string _text;

	[Token(Token = "0x400106E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly string Id;

	[Token(Token = "0x400106F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly string TextKey;

	[Token(Token = "0x4001070")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly string Icon;

	[Token(Token = "0x4001071")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public readonly string ActionId;

	[Token(Token = "0x4001072")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public readonly Action<GisketchActionContext> Action;

	[Token(Token = "0x4001073")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public readonly bool Searchable;

	[Token(Token = "0x4001074")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public readonly string Tooltip;

	[Token(Token = "0x4001075")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public readonly AottgBrushSidePanelOption[] StackedOptions;

	[Token(Token = "0x1700023B")]
	public string Text
	{
		[Token(Token = "0x600147B")]
		[Address(RVA = "0x5814290", Offset = "0x5813290", VA = "0x5814290")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBrushSidePanelOption.c (Gisketch.Aottg2UI.Game.AottgBrushSidePanelOption$$get_Text): clean
			bool bVar1;
			String pSVar2;

			bVar1 = String.IsNullOrEmpty(this.TextKey);
			if (bVar1) {
				pSVar2 = this._text;
				if (pSVar2 == null) {
					return (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				return pSVar2;
			}
			pSVar2 = this.TextKey;
			if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0) {
				pSVar2 = Aottg2GisketchLocale.Text(pSVar2);
				return pSVar2;
			}
			pSVar2 = Aottg2GisketchLocale.Text(pSVar2);
			return pSVar2;
		}
	}

	[Token(Token = "0x6001478")]
	[Address(RVA = "0x5814130", Offset = "0x5813130", VA = "0x5814130")]
	public AottgBrushSidePanelOption(string id, string textKey, string actionId, string icon, [Optional][DefaultParameterValue(false)] bool searchable, [Optional] string tooltip)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBrushSidePanelOption.c (Gisketch.Aottg2UI.Game.AottgBrushSidePanelOption$$.ctor): clean


		base(id, textKey, null, actionId, null, icon, searchable, tooltip, null);
		return;
	}

	[Token(Token = "0x6001479")]
	[Address(RVA = "0x5814260", Offset = "0x5813260", VA = "0x5814260")]
	public AottgBrushSidePanelOption(string id, string textKey, Action<GisketchActionContext> action, string icon, [Optional][DefaultParameterValue(false)] bool searchable, [Optional] string tooltip)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBrushSidePanelOption.c (Gisketch.Aottg2UI.Game.AottgBrushSidePanelOption$$.ctor): clean


		base(id, textKey, null, null, action, icon, searchable, tooltip, null);
		return;
	}

	[Token(Token = "0x600147A")]
	[Address(RVA = "0x5814160", Offset = "0x5813160", VA = "0x5814160")]
	private AottgBrushSidePanelOption(string id, string textKey, string text, string actionId, Action<GisketchActionContext> action, string icon, bool searchable, string tooltip, AottgBrushSidePanelOption[] stackedOptions)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBrushSidePanelOption.c (Gisketch.Aottg2UI.Game.AottgBrushSidePanelOption$$.ctor): clean
		if (id == null) {
			id = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this.Id = id;
		this.TextKey = textKey;
		this._text = text;
		this.ActionId = actionId;
		this.Action = action;
		this.Icon = icon;
		this.Searchable = searchable;
		this.Tooltip = tooltip;
		this.StackedOptions = stackedOptions;
		return;
	}

	[Token(Token = "0x600147C")]
	[Address(RVA = "0x5814320", Offset = "0x5813320", VA = "0x5814320")]
	public static AottgBrushSidePanelOption WithText(string id, string text, Action<GisketchActionContext> action, string icon)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBrushSidePanelOption.c (Gisketch.Aottg2UI.Game.AottgBrushSidePanelOption$$WithText): 1 lines keep C-only constructs


		*(ulong)&__return_storage_ptr__.Searchable = 0;
		__return_storage_ptr__.Tooltip = null;
		__return_storage_ptr__.ActionId = null;
		__return_storage_ptr__.Action = null;
		__return_storage_ptr__.TextKey = null;
		__return_storage_ptr__.Icon = null;
		__return_storage_ptr__._text = null;
		__return_storage_ptr__.Id = null;
		__return_storage_ptr__.StackedOptions =null;
		__return_storage_ptr__ = new AottgBrushSidePanelOption(id, null, text, null, action, icon, false, null, null);
		return __return_storage_ptr__;
	}

	[Token(Token = "0x600147D")]
	[Address(RVA = "0x5814370", Offset = "0x5813370", VA = "0x5814370")]
	public static AottgBrushSidePanelOption Stack(string id, params AottgBrushSidePanelOption[] options)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBrushSidePanelOption.c (Gisketch.Aottg2UI.Game.AottgBrushSidePanelOption$$Stack): 1 lines keep C-only constructs


		if (options == null) {
			options = (AottgBrushSidePanelOption[])new AottgBrushSidePanelOption[0];
		}
		*(ulong)&__return_storage_ptr__.Searchable = 0;
		__return_storage_ptr__.Tooltip = null;
		__return_storage_ptr__.ActionId = null;
		__return_storage_ptr__.Action = null;
		__return_storage_ptr__.TextKey = null;
		__return_storage_ptr__.Icon = null;
		__return_storage_ptr__._text = null;
		__return_storage_ptr__.Id = null;
		__return_storage_ptr__.StackedOptions =null;
		__return_storage_ptr__ = new AottgBrushSidePanelOption(id, null, null, null, null, null, false, null, options);
		return __return_storage_ptr__;
	}
}
