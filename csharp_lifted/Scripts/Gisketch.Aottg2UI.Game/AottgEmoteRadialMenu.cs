// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgEmoteRadialMenu.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000304")]
public sealed class AottgEmoteRadialMenu : AottgComponent
{
	[Token(Token = "0x4000F56")]
	private const float Width = 780f;

	[Token(Token = "0x4000F57")]
	private const float Height = 560f;

	[Token(Token = "0x4000F58")]
	private const float RadiusX = 300f;

	[Token(Token = "0x4000F59")]
	private const float RadiusY = 220f;

	[Token(Token = "0x4000F5A")]
	private const float SlotWidth = 154f;

	[Token(Token = "0x4000F5B")]
	private const float SlotHeight = 96f;

	[Token(Token = "0x4000F5C")]
	private const float TextInsetX = 18f;

	[Token(Token = "0x4000F5D")]
	private const float TextInsetY = 10f;

	[Token(Token = "0x4000F5E")]
	private const float CenterWidth = 260f;

	[Token(Token = "0x4000F5F")]
	private const float CenterHeight = 132f;

	[Token(Token = "0x4000F60")]
	[FieldOffset(Offset = "0x10")]
	private readonly bool _stickers;

	[Token(Token = "0x17000212")]
	private string Suffix
	{
		[Token(Token = "0x60012EC")]
		[Address(RVA = "0x57F5DF0", Offset = "0x57F4DF0", VA = "0x57F5DF0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEmoteRadialMenu.c (Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$get_Suffix): clean
			if (this._stickers == false) {
				return "texts";
			}
			return "stickers";
		}
	}

	[Token(Token = "0x60012EA")]
	[Address(RVA = "0x57F5C10", Offset = "0x57F4C10", VA = "0x57F5C10")]
	public AottgEmoteRadialMenu(bool stickers)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEmoteRadialMenu.c (Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$.ctor): clean
		base();
		this._stickers = stickers;
		return;
	}

	[Token(Token = "0x60012EB")]
	[Address(RVA = "0x57F5C30", Offset = "0x57F4C30", VA = "0x57F5C30", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEmoteRadialMenu.c (Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$Build): 3 lines keep C-only constructs
		Action<AottgUi> __this_00;
		String* ppSVar1;
		String id;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;

		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_Build_b__12_0);
		if (this._stickers == false) {
			ppSVar1 = &"texts";
		}
		else {
			ppSVar1 = &"stickers";
		}
		id = String.Concat("profile-emote-wheel-", *ppSVar1);
		width = AottgUi.Points(780.0);
		height = AottgUi.Points(560.0);
		layout = AottgUi.Layout("Column", "Center", "Center", null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel("default", __this_00, id, layout, null);
		return;
	}

	[Token(Token = "0x60012ED")]
	[Address(RVA = "0x57F5E40", Offset = "0x57F4E40", VA = "0x57F5E40")]
	private void Slot(AottgUi wheel, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEmoteRadialMenu.c (Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$Slot): 2 lines keep C-only constructs
		String actionId;
		sbyte cVar1;
		String* ppSVar2;
		String str3;
		String pSVar3;
		GisketchNodeDefinition pGVar4;
		String pSVar5;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar6;
		GisketchNodeDefinition[] pGVar7;
		MethodInfo pMVar8;
		float fVar9;
		int local_44;
		float local_40;
		float local_3c;
		String local_38;

		local_44 = index;
		if (this._stickers == false) {
			local_38 = AottgEmoteRadialMenu.Text(index);
		}
		else {
			local_38 = AottgEmoteRadialMenu.Sticker(index);
		}
		cVar1 = this._stickers;
		if ((bool)cVar1 == false) {
			pSVar5 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			actionId = "profile.emote.text.open";
		}
		else {
			pSVar5 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			actionId = "profile.emote.sticker.open";
		}
		if (Il2CppMethodInitialized_075455c6 == false) {
			Il2CppMethodInitialized_075455c6 = true;
			cVar1 = this._stickers;
		}
		if (cVar1 == false) {
			ppSVar2 = &"texts";
		}
		else {
			ppSVar2 = &"stickers";
		}
		pSVar3 = *ppSVar2;
		str3 = local_44.ToString();
		pSVar3 = String.Concat("profile-emote-", pSVar3, "-slot-", str3);
		if ((wheel == null) ||(pGVar4 = wheel.Button(5, pSVar5, actionId, pSVar3, null, null, null), pGVar4 == null )) {
			throw new NullReferenceException();
		}
		local_40 = ((float)index * -45.0 + 90.0) * 0.017453292;
		pGVar4.style = "profileGridItem";
		pSVar5 = local_44.ToString();
		pGVar4.value = pSVar5;
		width = AottgUi.Points(154.0);
		height = AottgUi.Points(96.0);
		fVar9 = cosf(local_40);
		local_3c = fVar9 * 300.0 + 390.0 + -77.0;
		fVar9 = sinf(local_40);
		pMVar8 = (MethodInfo *)"Absolute";
		pGVar6 = AottgUi.Layout("Column", "Center", "Center", "Absolute", null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, local_3c, fVar9 * 220.0 + -280.0 + 48.0, 0.0, 1.0);
		pGVar4.layout = pGVar6;
		pGVar7 = this.SlotChildren(local_44, local_38);
		pGVar4.children = pGVar7;
		return;
	}

	[Token(Token = "0x60012EE")]
	[Address(RVA = "0x57F6340", Offset = "0x57F5340", VA = "0x57F6340")]
	private static float AbsoluteX(float width, float xFromCenter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEmoteRadialMenu.c (Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$AbsoluteX): clean
		return width * -0.5 + xFromCenter + 390.0;
	}

	[Token(Token = "0x60012EF")]
	[Address(RVA = "0x57F6360", Offset = "0x57F5360", VA = "0x57F6360")]
	private static float AbsoluteY(float height, float yFromCenter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEmoteRadialMenu.c (Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$AbsoluteY): clean
		return height * 0.5 + yFromCenter + -280.0;
	}

	[Token(Token = "0x60012F0")]
	[Address(RVA = "0x57F6380", Offset = "0x57F5380", VA = "0x57F6380")]
	private GisketchNodeDefinition[] SlotChildren(int index, string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEmoteRadialMenu.c (Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$SlotChildren): 1 lines keep C-only constructs
		bool bVar1;
		GisketchNodeDefinition[] pGVar2;
		GisketchNodeDefinition __this_00;
		String pSVar3;
		MethodInfo method_00;
		GisketchUIBindingDefinition pGVar4;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar5;
		float value_00;
		int local_2c;

		local_2c = index;
		bVar1 = this._stickers;
		pGVar2 = (GisketchNodeDefinition[])new GisketchNodeDefinition[1];
		__this_00 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_00 = new GisketchNodeDefinition();
		if (bVar1 == false) {
			if (__this_00 == null) goto label_058f66ca;
			__this_00.type = "Text";
			__this_00.text = value;
			__this_00.style = "profileEmoteSlotText";
			pGVar4 = new GisketchUIBindingDefinition();
			pSVar3 = AottgProfileStateKeys.EmoteText(index);
			if (pGVar4 == null) goto label_058f66ca;
			pGVar4.text = pSVar3;
			__this_00.bind = pGVar4;
			width = AottgUi.Points(118.0);
			value_00 = 76.0;
		}
		else {
			if (__this_00 == null) goto label_058f66ca;
			__this_00.type = "Image";
			pSVar3 = local_2c.ToString();
			method_00 = (MethodInfo)String.Concat("profile-emote-sticker-image-", pSVar3);
			__this_00.id = (String)method_00;
			pSVar3 = AottgEmoteCatalog.Sprite(value);
			__this_00.sprite = pSVar3;
			__this_00.style = "profileGridItemThumbnail";
			pGVar4 = new GisketchUIBindingDefinition();
			pSVar3 = AottgProfileStateKeys.EmoteStickerSprite(local_2c);
			if (pGVar4 == null) goto label_058f66ca;
			pGVar4.sprite = pSVar3;
			__this_00.bind = pGVar4;
			width = AottgUi.Points(54.0);
			value_00 = 54.0;
		}
		height = AottgUi.Points(value_00);
		pGVar5 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		__this_00.layout = pGVar5;
		if (pGVar2 != null) {
			if ((int)pGVar2.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pGVar2[0] = __this_00;
			return pGVar2;
		}
	label_058f66ca: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60012F1")]
	[Address(RVA = "0x57F6180", Offset = "0x57F5180", VA = "0x57F6180")]
	private static string Text(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEmoteRadialMenu.c (Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$Text): 1 lines keep C-only constructs
		byte bVar1;
		EmoteSettings pSVar2;
		ListSetting<StringSetting> __this;
		BaseSetting pSVar3;

		pSVar2 = SettingsManager.EmoteSettings;
		if (pSVar2 == null) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		__this = pSVar2.TextEmotes;
		if (__this != null) {
			pSVar3 = __this.GetItemAt(index);
			if (pSVar3 != null) {
				bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
				if (((pSVar3.klass._2).typeHierarchyDepth < bVar1) ||((pSVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) {
					throw new InvalidCastException();
				}
				return (*(ulong)((sbyte)pSVar3 + 0x20));
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60012F2")]
	[Address(RVA = "0x57F6260", Offset = "0x57F5260", VA = "0x57F6260")]
	private static string Sticker(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEmoteRadialMenu.c (Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$Sticker): 1 lines keep C-only constructs
		byte bVar1;
		EmoteSettings pSVar2;
		ListSetting<StringSetting> __this;
		BaseSetting pSVar3;

		pSVar2 = SettingsManager.EmoteSettings;
		if (pSVar2 == null) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		__this = pSVar2.EmojiEmotes;
		if (__this != null) {
			pSVar3 = __this.GetItemAt(index);
			if (pSVar3 != null) {
				bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
				if (((pSVar3.klass._2).typeHierarchyDepth < bVar1) ||((pSVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) {
					throw new InvalidCastException();
				}
				return (*(ulong)((sbyte)pSVar3 + 0x20));
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60012F3")]
	[Address(RVA = "0x57F66E0", Offset = "0x57F56E0", VA = "0x57F66E0")]
	private static string StickerSprite(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEmoteRadialMenu.c (Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$StickerSprite): clean
		String pSVar1;

		return pSVar1;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEmoteRadialMenu.c.

	// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$<Build>b__12_0: 3 lines keep C-only constructs
	private void Build_b__12_0(AottgUi wheel)
	{
		Action<AottgUi> __this_00;
		String* ppSVar1;
		MethodInfo method_00;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;

		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_Build_b__12_1);
		if (this._stickers == false) {
			ppSVar1 = &"texts";
		}
		else {
			ppSVar1 = &"stickers";
		}
		method_00 = (MethodInfo)String.Concat("profile-emote-wheel-center-", *ppSVar1);
		width = AottgUi.Points(260.0);
		height = AottgUi.Points(132.0);
		layout = AottgUi.Layout("Column", "Center", "Center", "Absolute", null, 2.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 260.0, -214.0, 0.0, 1.0);
		if (wheel == null) {
			throw new NullReferenceException();
		}
		wheel.Panel("clear", __this_00, (String)method_00, layout, null);
		this.Slot(wheel, 0);
		this.Slot(wheel, 1);
		this.Slot(wheel, 2);
		this.Slot(wheel, 3);
		this.Slot(wheel, 4);
		this.Slot(wheel, 5);
		this.Slot(wheel, 6);
		this.Slot(wheel, 7);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$<Build>b__12_1: 2 lines keep C-only constructs
	private void Build_b__12_1(AottgUi center)
	{
		String* ppSVar1;

		if (center == null) {
			throw new NullReferenceException();
		}
		if (this._stickers == false) {
			ppSVar1 = &"Common.Text";
		}
		else {
			ppSVar1 = &"MainMenu.Profile.Stickers";
		}
		center.TextKey(*ppSVar1, "profileEmoteWheelTitle", null, null, null);
		center.TextKey("MainMenu.Profile.EmoteEditHint", "profileEmoteWheelSubtext", null, null, null);
		return;
	}
}
