// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCustomServerWarning
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCustomServerWarning.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002BE")]
internal sealed class AottgCustomServerWarning : AottgComponent
{
	[Token(Token = "0x4000DF0")]
	private const string VisibleKey = "multiplayer.customServerWarning.visible";

	[Token(Token = "0x4000DF1")]
	private const string TextKey = "multiplayer.customServerWarning.text";

	[Token(Token = "0x4000DF2")]
	private const float CardPadding = 14f;

	[Token(Token = "0x4000DF3")]
	private const float IconSize = 28f;

	[Token(Token = "0x4000DF4")]
	private const float BorderWidth = 7f;

	[Token(Token = "0x4000DF5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000DF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly GisketchLayoutDefinition _placement;

	[Token(Token = "0x6001095")]
	[Address(RVA = "0x57C6380", Offset = "0x57C5380", VA = "0x57C6380")]
	public AottgCustomServerWarning(string id, [Optional] GisketchLayoutDefinition placement)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCustomServerWarning.c (Gisketch.Aottg2UI.Game.AottgCustomServerWarning$$.ctor): clean
		base();
		this._id = id;
		this._placement = placement;
		return;
	}

	[Token(Token = "0x6001096")]
	[Address(RVA = "0x57C63C0", Offset = "0x57C53C0", VA = "0x57C63C0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCustomServerWarning.c (Gisketch.Aottg2UI.Game.AottgCustomServerWarning$$Build): 1 lines keep C-only constructs
		GisketchLayoutDefinition pGVar1;
		float fVar2;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		Action<AottgUi> __this_00;
		GisketchNodeDefinition pGVar3;
		GisketchUIBindingDefinition __this_01;

		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Row", null, "Center", null, null, 12.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 14.0, 14.0, 14.0, 0.0, 0.0, 0.0, 0.0);
		pGVar1 = this._placement;
		if (pGVar1 != null) {
			if (layout == null) goto label_058c65f6;
			layout.alignSelf = pGVar1.alignSelf;
			pGVar1 = this._placement;
			if (pGVar1 == null) goto label_058c65f6;
			layout.width = pGVar1.width;
			pGVar1 = this._placement;
			if (pGVar1 == null) goto label_058c65f6;
			fVar2 = pGVar1.offsetY;
			layout.offsetX = pGVar1.offsetX;
			layout.offsetY = fVar2;
		}
		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCustomServerWarning_Build_b__8_0);
		if (ui != null) {
			pGVar3 = ui.Panel("card", __this_00, this._id, layout, null);
			__this_01 = new GisketchUIBindingDefinition();
			if (__this_01 != null) {
				__this_01.visible = "multiplayer.customServerWarning.visible";
				if (pGVar3 != null) {
					pGVar3.bind = __this_01;
					return;
				}
			}
		}
	label_058c65f6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001097")]
	[Address(RVA = "0x57C6600", Offset = "0x57C5600", VA = "0x57C6600")]
	public static void Sync()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCustomServerWarning.c (Gisketch.Aottg2UI.Game.AottgCustomServerWarning$$Sync): clean
		GisketchUIState __this;
		GisketchUIRoot pGVar1;
		String value;

		pGVar1 = AottgGisketchUiHost.Root;
		if (pGVar1 != null) {
			__this = pGVar1._State_k__BackingField;
			if (__this == null) {
				return;
			}
			value = AottgCustomServerWarning.Message();
			__this.Set("multiplayer.customServerWarning.text", value);
			if (value != null) {
				__this.SetBool("multiplayer.customServerWarning.visible", 0 < value._stringLength);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001098")]
	[Address(RVA = "0x57C66A0", Offset = "0x57C56A0", VA = "0x57C66A0")]
	private static string Message()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCustomServerWarning.c (Gisketch.Aottg2UI.Game.AottgCustomServerWarning$$Message): clean
		int iVar1;
		int iVar2;
		MultiplayerSettings pSVar3;
		IntSetting pSVar4;
		IntSetting pSVar5;
		StringSetting pSVar6;
		String str1;
		String pSVar7;

		pSVar7 = "CustomAppIdActive";
		pSVar3 = SettingsManager.MultiplayerSettings;
		if (((pSVar3 != null) &&(pSVar4 = pSVar3.LobbyMode, pSVar4 != null)) &&(pSVar5 = pSVar3.AppIdMode, pSVar5 != null)) {
			iVar1 = pSVar4._value;
			iVar2 = pSVar5._value;
			if ((iVar1 != 1) || (str1 = "CustomAppIdAndLobbyActive", iVar2 != 1)) {
				if (iVar2 == 1) {
					pSVar7 = String.Concat("MainMenu.MultiplayerMapPopup.", pSVar7);
					if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					pSVar7 = Aottg2GisketchLocale.Text(pSVar7);
					return pSVar7;
				}
				str1 = "CustomLobbyActive";
				if (iVar1 != 1) {
					return (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
			}
			pSVar7 = String.Concat("MainMenu.MultiplayerMapPopup.", str1);
			pSVar7 = Aottg2GisketchLocale.Text(pSVar7);
			pSVar6 = pSVar3.CustomLobby;
			if (pSVar6 != null) {
				pSVar7 = String.Format(pSVar7, (object)pSVar6._value);
				return pSVar7;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001099")]
	[Address(RVA = "0x57C68A0", Offset = "0x57C58A0", VA = "0x57C68A0")]
	private static string Text(string item)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCustomServerWarning.c (Gisketch.Aottg2UI.Game.AottgCustomServerWarning$$Text): clean
		String pSVar1;

		pSVar1 = String.Concat("MainMenu.MultiplayerMapPopup.", item);
		if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0) {
			pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
			return pSVar1;
		}
		pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
		return pSVar1;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCustomServerWarning.c.

	// Gisketch.Aottg2UI.Game.AottgCustomServerWarning$$<Build>b__8_0: 1 lines keep C-only constructs
	private void Build_b__8_0(AottgUi card)
	{
		String pSVar1;
		GisketchLength pGVar2;
		GisketchLength pGVar3;
		GisketchLayoutDefinition pGVar4;
		GisketchNodeDefinition pGVar5;
		String id;
		GisketchUIBindingDefinition __this_00;
		MethodInfo method_00;
		Nullable<bool>[] local_30 = new Nullable<bool>[4];

		pSVar1 = String.Concat(this._id, "-border");
		pGVar2 = AottgUi.Points(7.0);
		pGVar3 = AottgUi.Percent(100.0);
		pGVar4 = AottgUi.Layout("Column", null, null, "Stretch", null, 0.0, pGVar2, pGVar3, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (card != null) {
			card.Panel("calloutBorderWarning", null, pSVar1, pGVar4, null);
			pSVar1 = String.Concat(this._id, "-icon");
			pGVar5 = card.Icon("warning", "icon", pSVar1);
			pGVar2 = AottgUi.Points(28.0);
			pGVar3 = AottgUi.Points(28.0);
			pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar2, pGVar3, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar5 != null) {
				method_00 = (MethodInfo)&pGVar5.layout;
				pGVar5.layout = pGVar4;
				pSVar1 = AottgCustomServerWarning.Message();
				id = String.Concat(this._id, "-text");
				pGVar5 = card.Text(pSVar1, "text", id, null, null);
				local_30[0].hasValue = false;
				local_30[0].value = false;
				local_30 = new Nullable<bool>(true);
				if (pGVar5 != null) {
					pGVar5.richText = local_30[0];
					pGVar2 = AottgUi.Points(0.0);
					pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, pGVar2, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
					pGVar5.layout = pGVar4;
					__this_00 = new GisketchUIBindingDefinition();
					if (__this_00 != null) {
						__this_00.text = "multiplayer.customServerWarning.text";
						pGVar5.bind = __this_00;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}
}
