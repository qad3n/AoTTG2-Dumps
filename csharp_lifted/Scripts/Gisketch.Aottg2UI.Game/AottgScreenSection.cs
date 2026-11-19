// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgScreenSection
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgScreenSection.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200034B")]
public readonly struct AottgScreenSection
{
	[Token(Token = "0x4001089")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Action<AottgUi, AottgScreenSectionContext> _buildContent;

	[Token(Token = "0x400108A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly Action<AottgUi, AottgScreenSectionContext> _buildHeaderActions;

	[Token(Token = "0x400108B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly string Id;

	[Token(Token = "0x400108C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly string Text;

	[Token(Token = "0x400108D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public readonly string TextKey;

	[Token(Token = "0x400108E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public readonly string Icon;

	[Token(Token = "0x400108F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public readonly string Keywords;

	[Token(Token = "0x4001090")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public readonly bool AutoAddKeywords;

	[Token(Token = "0x4001091")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x39")]
	public readonly bool HideSearch;

	[Token(Token = "0x4001092")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3A")]
	public readonly bool HideHeader;

	[Token(Token = "0x1700023F")]
	public bool HasHeaderActions
	{
		[Token(Token = "0x60014A1")]
		[Address(RVA = "0x5815EE0", Offset = "0x5814EE0", VA = "0x5815EE0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenSection.c (Gisketch.Aottg2UI.Game.AottgScreenSection$$get_HasHeaderActions): clean
			return this._buildHeaderActions != null;
		}
	}

	[Token(Token = "0x60014A2")]
	[Address(RVA = "0x5815EF0", Offset = "0x5814EF0", VA = "0x5815EF0")]
	public AottgScreenSection(string id, string textKey, string icon, Action<AottgUi> buildContent, [Optional] string keywords, [Optional][DefaultParameterValue(false)] bool autoAddKeywords, [Optional] Action<AottgUi, AottgScreenSectionContext> buildHeaderActions, bool hideSearch = false, bool hideHeader = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenSection.c (Gisketch.Aottg2UI.Game.AottgScreenSection$$.ctor): clean
		Action<AottgUi, AottgScreenSectionContext> buildContent_00;
		String text;

		buildContent_00 = AottgScreenSection.Adapt(buildContent);
		text = Aottg2GisketchLocale.Text(textKey);
		base(id, textKey, text, icon, buildContent_00, keywords, autoAddKeywords, buildHeaderActions, hideSearch, hideHeader);
		return;
	}

	[Token(Token = "0x60014A3")]
	[Address(RVA = "0x5816070", Offset = "0x5815070", VA = "0x5816070")]
	public AottgScreenSection(string id, string textKey, string icon, Action<AottgUi, AottgScreenSectionContext> buildContent, [Optional] string keywords, [Optional][DefaultParameterValue(false)] bool autoAddKeywords, [Optional] Action<AottgUi, AottgScreenSectionContext> buildHeaderActions, bool hideSearch = false, bool hideHeader = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenSection.c (Gisketch.Aottg2UI.Game.AottgScreenSection$$.ctor): clean
		String text;

		text = Aottg2GisketchLocale.Text(textKey);
		base(id, textKey, text, icon, buildContent, keywords, autoAddKeywords, buildHeaderActions, hideSearch, hideHeader);
		return;
	}

	[Token(Token = "0x60014A4")]
	[Address(RVA = "0x5816130", Offset = "0x5815130", VA = "0x5816130")]
	private AottgScreenSection(string id, string textKey, string text, string icon, Action<AottgUi, AottgScreenSectionContext> buildContent, string keywords, bool autoAddKeywords, Action<AottgUi, AottgScreenSectionContext> buildHeaderActions, bool hideSearch, bool hideHeader)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenSection.c (Gisketch.Aottg2UI.Game.AottgScreenSection$$.ctor): 3 lines keep C-only constructs
		String* targetAddress;
		bool bVar1;
		String pSVar2;

		bVar1 = String.IsNullOrEmpty(id);
		if (bVar1) {
			id = text;
		}
		pSVar2 = AottgScreenSection.SafeId(id);
		targetAddress = &this.Id;
		this.Id = pSVar2;
		bVar1 = String.IsNullOrEmpty(text);
		if (bVar1) {
			text = *targetAddress;
		}
		this.Text = text;
		this.TextKey = textKey;
		this.Icon = icon;
		this.Keywords = keywords;
		this.AutoAddKeywords = autoAddKeywords;
		this.HideSearch = hideSearch;
		this.HideHeader = hideHeader;
		this._buildContent = buildContent;
		this._buildHeaderActions = buildHeaderActions;
		return;
	}

	[Token(Token = "0x60014A5")]
	[Address(RVA = "0x58162E0", Offset = "0x58152E0", VA = "0x58162E0")]
	public static AottgScreenSection WithText(string id, string text, string icon, Action<AottgUi, AottgScreenSectionContext> buildContent, [Optional] string keywords, [Optional][DefaultParameterValue(false)] bool autoAddKeywords, [Optional] Action<AottgUi, AottgScreenSectionContext> buildHeaderActions, bool hideSearch = false, bool hideHeader = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenSection.c (Gisketch.Aottg2UI.Game.AottgScreenSection$$WithText): 1 lines keep C-only constructs


		__return_storage_ptr__.Keywords = null;
		__return_storage_ptr__.AutoAddKeywords = false;
		__return_storage_ptr__.HideSearch = false;
		__return_storage_ptr__.HideHeader = false;
		*(undefined5)&__return_storage_ptr__.field_0x3b = 0;
		__return_storage_ptr__.TextKey = null;
		__return_storage_ptr__.Icon = null;
		__return_storage_ptr__.Id = null;
		__return_storage_ptr__.Text = null;
		__return_storage_ptr__._buildContent = null;
		__return_storage_ptr__._buildHeaderActions =null;
		__return_storage_ptr__ = new AottgScreenSection(id, null, text, icon, buildContent, keywords, autoAddKeywords, buildHeaderActions, hideSearch, hideHeader);
		return __return_storage_ptr__;
	}

	[Token(Token = "0x60014A6")]
	[Address(RVA = "0x5815FB0", Offset = "0x5814FB0", VA = "0x5815FB0")]
	private static Action<AottgUi, AottgScreenSectionContext> Adapt(Action<AottgUi> buildContent)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenSection.c (Gisketch.Aottg2UI.Game.AottgScreenSection$$Adapt): 1 lines keep C-only constructs
		AottgScreenSection.c__DisplayClass16_0 __this;
		Action<T1, T2> __this_00;

		__this = new AottgScreenSection.c__DisplayClass16_0();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.buildContent = buildContent;
		if (__this.buildContent == null) {
			__this_00 = null;
		}
		else {
			__this_00 = new Action<AottgUi, AottgScreenSectionContext>((object)__this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_c__DisplayClass16_0_Adapt_b__0);
		}
		return (Action<AottgUi, AottgScreenSectionContext>)__this_00;
	}

	[Token(Token = "0x60014A7")]
	[Address(RVA = "0x5816360", Offset = "0x5815360", VA = "0x5816360")]
	public void Build(AottgUi ui, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenSection.c (Gisketch.Aottg2UI.Game.AottgScreenSection$$Build): 1 lines keep C-only constructs
		Action<AottgUi, AottgScreenSectionContext> pSVar1;
		code *vtableDispatch;

		pSVar1 = this._buildContent;
		if (pSVar1 == null) {
			return;
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,ui,pSVar1.method,vtableDispatch);
		return;
	}

	[Token(Token = "0x60014A8")]
	[Address(RVA = "0x5816380", Offset = "0x5815380", VA = "0x5816380")]
	public void BuildHeaderActions(AottgUi ui, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenSection.c (Gisketch.Aottg2UI.Game.AottgScreenSection$$BuildHeaderActions): 1 lines keep C-only constructs
		Action<AottgUi, AottgScreenSectionContext> pSVar1;
		code *vtableDispatch;

		pSVar1 = this._buildHeaderActions;
		if (pSVar1 == null) {
			return;
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,ui,pSVar1.method,vtableDispatch);
		return;
	}

	[Token(Token = "0x60014A9")]
	[Address(RVA = "0x5816250", Offset = "0x5815250", VA = "0x5816250")]
	private static string SafeId(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenSection.c (Gisketch.Aottg2UI.Game.AottgScreenSection$$SafeId): clean
		String pSVar1;

		if ((value != null) ||(value = (String)**(long*)(g_data_07556758 + 0xb8), value != null)) {
			pSVar1 = value.Trim();
			if (pSVar1 != null) {
				pSVar1 = pSVar1.ToLowerInvariant();
				if (pSVar1 != null) {
					pSVar1 = pSVar1.Replace(" ", "-");
					return pSVar1;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenSection.c.

	// Gisketch.Aottg2UI.Game.AottgScreenSection.<>c__DisplayClass16_0$$.ctor: clean
	private void c__DisplayClass16_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgScreenSection.<>c__DisplayClass16_0$$<Adapt>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass16_0__Adapt_b__0(AottgUi ui, AottgScreenSectionContext __)
	{
		Action<AottgUi> pSVar1;
		code *vtableDispatch;

		pSVar1 = this.buildContent;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,ui,pSVar1.method,vtableDispatch);
		return;
	}
}
