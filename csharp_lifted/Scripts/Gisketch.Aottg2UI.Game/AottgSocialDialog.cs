// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgSocialDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgSocialDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002B4")]
[AottgDialog("social")]
public sealed class AottgSocialDialog : AottgDialog
{
	[Token(Token = "0x4000DD2")]
	public const string Id = "social";

	[Token(Token = "0x170001CB")]
	protected override string Title
	{
		[Token(Token = "0x6001065")]
		[Address(RVA = "0x57C2F50", Offset = "0x57C1F50", VA = "0x57C2F50", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSocialDialog.c (Gisketch.Aottg2UI.Game.AottgSocialDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("Common.Social");
			return pSVar1;
		}
	}

	[Token(Token = "0x170001CC")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6001066")]
		[Address(RVA = "0x57C2FB0", Offset = "0x57C1FB0", VA = "0x57C2FB0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSocialDialog.c (Gisketch.Aottg2UI.Game.AottgSocialDialog$$get_TitleIcon): clean
			return "share2";
		}
	}

	[Token(Token = "0x170001CD")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6001067")]
		[Address(RVA = "0x57C2FE0", Offset = "0x57C1FE0", VA = "0x57C2FE0", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSocialDialog.c (Gisketch.Aottg2UI.Game.AottgSocialDialog$$get_Variant): clean
			return 1;
		}
	}

	[Token(Token = "0x170001CE")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001068")]
		[Address(RVA = "0x57C2FF0", Offset = "0x57C1FF0", VA = "0x57C2FF0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSocialDialog.c (Gisketch.Aottg2UI.Game.AottgSocialDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLength maxWidth;
			GisketchLength maxHeight;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(760.0);
			maxWidth = AottgUi.Percent(94.0);
			maxHeight = AottgUi.Percent(86.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, maxWidth, maxHeight, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6001069")]
	[Address(RVA = "0x57C30E0", Offset = "0x57C20E0", VA = "0x57C30E0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSocialDialog.c (Gisketch.Aottg2UI.Game.AottgSocialDialog$$BuildBody): clean
		JSONNode a;
		bool bVar1;
		int iVar2;
		int iVar3;
		JSONNode node;

		a = MiscInfo.Social;
		bVar1 = (a == null);
		if (!bVar1) {
			if (a == null) goto label_058c324f;
			bVar1 = a.get_IsArray();
			if ((bVar1) &&(iVar2 = a.get_Count(), iVar2 != 0)) {
				iVar2 = a.get_Count();
				if (iVar2 < 1) {
					return;
				}
				iVar2 = 0;
				do {
					node = a.get_Item(iVar2);
					AottgSocialDialog.BuildLink(body, node, iVar2);
					iVar2 = iVar2 + 1;
					iVar3 = a.get_Count();
				} while (iVar2 < iVar3);
				return;
			}
		}
		if (body != null) {
			body.TextKey("MainMenu.SocialPopup.LoadError", "stateMetaText", "social-missing", null, null);
			return;
		}
	label_058c324f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600106A")]
	[Address(RVA = "0x57C34A0", Offset = "0x57C24A0", VA = "0x57C34A0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSocialDialog.c (Gisketch.Aottg2UI.Game.AottgSocialDialog$$BuildFooter): clean
		if (footer == null) {
			throw new NullReferenceException();
		}
		footer.QuietKey("Common.Close", "overlay.close");
		return;
	}

	[Token(Token = "0x600106B")]
	[Address(RVA = "0x57C3260", Offset = "0x57C2260", VA = "0x57C3260")]
	private static void BuildLink(AottgUi body, JSONNode node, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSocialDialog.c (Gisketch.Aottg2UI.Game.AottgSocialDialog$$BuildLink): 1 lines keep C-only constructs
		AottgSocialDialog.c__DisplayClass11_0 __this;
		JSONNode pSVar1;
		String pSVar2;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		__this = new AottgSocialDialog.c__DisplayClass11_0();
		if (__this != null) {
			__this.node = node;
			__this.index = index;
			pSVar1 = __this.node;
			if (pSVar1 != null) {
				pSVar1 = pSVar1.get_Item("Link");
				if (pSVar1 != null) {
					pSVar2 = pSVar1.get_Value();
					__this.link = pSVar2;
					__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgSocialDialog_c__DisplayClass11_0_BuildLink_b__0);
					pSVar2 = (__this.index).ToString();
					pSVar2 = String.Concat("social-link-", pSVar2);
					width = AottgUi.Percent(100.0);
					layout = AottgUi.Layout("Row", null, "Center", null, null, 16.0, width, null, null, null, null, null, 14.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
					if (body != null) {
						body.Panel("row", __this_00, pSVar2, layout, null);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600106C")]
	[Address(RVA = "0x57C3510", Offset = "0x57C2510", VA = "0x57C3510")]
	public AottgSocialDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSocialDialog.c (Gisketch.Aottg2UI.Game.AottgSocialDialog$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSocialDialog.c.

	// Gisketch.Aottg2UI.Game.AottgSocialDialog.<>c__DisplayClass11_0$$.ctor: clean
	private void c__DisplayClass11_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgSocialDialog.<>c__DisplayClass11_0$$<BuildLink>b__0: 3 lines keep C-only constructs
	private void c__DisplayClass11_0__BuildLink_b__0(AottgUi row)
	{
		int __this_00;
		Action<AottgUi> __this_01;
		String pSVar1;
		GisketchLength minWidth;
		GisketchLayoutDefinition pGVar2;
		Action<GisketchActionContext> __this_02;
		String pSVar3;
		GisketchNodeDefinition pGVar4;

		__this_01 = this.__9__1;
		if (__this_01 == null) {
			__this_01 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgSocialDialog_c__DisplayClass11_0_BuildLink_b__1);
			this.__9__1 = __this_01;
		}
		__this_00 = &this.index;
		pSVar1 = __this_00.ToString();
		pSVar1 = String.Concat("social-text-", pSVar1);
		minWidth = AottgUi.Points(0.0);
		pGVar2 = AottgUi.Layout("Column", null, "Stretch", null, null, 4.0, null, null, minWidth, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
		if (row != null) {
			row.Panel(null, __this_01, pSVar1, pGVar2, null);
			pSVar1 = "Common.Open";
			__this_02 = this.__9__2;
			if (__this_02 == null) {
				__this_02 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgSocialDialog_c__DisplayClass11_0_BuildLink_b__2);
				this.__9__2 = __this_02;
			}
			pSVar3 = __this_00.ToString();
			pSVar3 = String.Concat("social-open-", pSVar3);
			pGVar4 = row.ButtonKey(1, pSVar1, __this_02, pSVar3, this.link, null, "share2");
			pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar4 != null) {
				pGVar4.layout = pGVar2;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgSocialDialog.<>c__DisplayClass11_0$$<BuildLink>b__1: 1 lines keep C-only constructs
	private void c__DisplayClass11_0__BuildLink_b__1(AottgUi text)
	{
		int __this_00;
		JSONNode pSVar1;
		String pSVar2;
		String pSVar3;

		pSVar1 = this.node;
		if (pSVar1 != null) {
			pSVar1 = pSVar1.get_Item("Title");
			if (pSVar1 != null) {
				pSVar2 = pSVar1.get_Value();
				__this_00 = &this.index;
				pSVar3 = __this_00.ToString();
				pSVar3 = String.Concat("social-title-", pSVar3);
				if (text != null) {
					text.Text(pSVar2, "text", pSVar3, null, null);
					pSVar1 = this.node;
					if (pSVar1 != null) {
						pSVar1 = pSVar1.get_Item("About");
						if (pSVar1 != null) {
							pSVar2 = pSVar1.get_Value();
							pSVar3 = __this_00.ToString();
							pSVar3 = String.Concat("social-about-", pSVar3);
							text.Text(pSVar2, "stateMetaText", pSVar3, null, null);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgSocialDialog.<>c__DisplayClass11_0$$<BuildLink>b__2: clean
	private void c__DisplayClass11_0__BuildLink_b__2(GisketchActionContext __)
	{
		AottgExternalLinks.Show(this.link);
		return;
	}
}
