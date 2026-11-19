// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000080")]
public abstract class AottgDialog
{
	[Token(Token = "0x1700006E")]
	protected virtual string Title
	{
		[Token(Token = "0x60003D2")]
		[Address(RVA = "0x5264650", Offset = "0x5263650", VA = "0x5264650", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$get_Title): clean
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
	}

	[Token(Token = "0x1700006F")]
	protected virtual string TitleIcon
	{
		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x5264670", Offset = "0x5263670", VA = "0x5264670", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$get_TitleIcon): clean
			return null;
		}
	}

	[Token(Token = "0x17000070")]
	protected virtual string RootStyle
	{
		[Token(Token = "0x60003D4")]
		[Address(RVA = "0x5264680", Offset = "0x5263680", VA = "0x5264680", Slot = "6")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$get_RootStyle): clean
			return "dialog";
		}
	}

	[Token(Token = "0x17000071")]
	protected virtual string HeaderStyle
	{
		[Token(Token = "0x60003D5")]
		[Address(RVA = "0x52646B0", Offset = "0x52636B0", VA = "0x52646B0", Slot = "7")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$get_HeaderStyle): clean
			return "dialogHeader";
		}
	}

	[Token(Token = "0x17000072")]
	protected virtual string BodyStyle
	{
		[Token(Token = "0x60003D6")]
		[Address(RVA = "0x52646E0", Offset = "0x52636E0", VA = "0x52646E0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$get_BodyStyle): clean
			return "dialogBody";
		}
	}

	[Token(Token = "0x17000073")]
	protected virtual string FooterStyle
	{
		[Token(Token = "0x60003D7")]
		[Address(RVA = "0x5264710", Offset = "0x5263710", VA = "0x5264710", Slot = "9")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$get_FooterStyle): clean
			return "dialogFooter";
		}
	}

	[Token(Token = "0x17000074")]
	protected virtual string HeaderCloseEnabledKey
	{
		[Token(Token = "0x60003D8")]
		[Address(RVA = "0x5264740", Offset = "0x5263740", VA = "0x5264740", Slot = "10")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$get_HeaderCloseEnabledKey): clean
			return null;
		}
	}

	[Token(Token = "0x17000075")]
	protected virtual string HeaderTitleKey
	{
		[Token(Token = "0x60003D9")]
		[Address(RVA = "0x5264750", Offset = "0x5263750", VA = "0x5264750", Slot = "11")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$get_HeaderTitleKey): clean
			return null;
		}
	}

	[Token(Token = "0x17000076")]
	protected virtual bool GuardUnsavedChanges
	{
		[Token(Token = "0x60003DA")]
		[Address(RVA = "0x5264760", Offset = "0x5263760", VA = "0x5264760", Slot = "12")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$get_GuardUnsavedChanges): clean
			return false;
		}
	}

	[Token(Token = "0x17000077")]
	protected virtual bool BodyScrollable
	{
		[Token(Token = "0x60003DB")]
		[Address(RVA = "0x5264770", Offset = "0x5263770", VA = "0x5264770", Slot = "13")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$get_BodyScrollable): clean
			return true;
		}
	}

	[Token(Token = "0x17000078")]
	protected virtual AottgButtonVariant Variant
	{
		[Token(Token = "0x60003DC")]
		[Address(RVA = "0x5264780", Offset = "0x5263780", VA = "0x5264780", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$get_Variant): clean
			return 0;
		}
	}

	[Token(Token = "0x17000079")]
	protected virtual GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60003DD")]
		[Address(RVA = "0x5264790", Offset = "0x5263790", VA = "0x5264790", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(620.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x1700007A")]
	protected virtual GisketchLayoutDefinition HeaderLayout
	{
		[Token(Token = "0x60003DE")]
		[Address(RVA = "0x5264850", Offset = "0x5263850", VA = "0x5264850", Slot = "16")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$get_HeaderLayout): clean
			GisketchLayoutDefinition pGVar1;

			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 10.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x1700007B")]
	protected virtual GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x60003DF")]
		[Address(RVA = "0x5264900", Offset = "0x5263900", VA = "0x5264900", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$get_BodyLayout): clean
			GisketchLayoutDefinition pGVar1;

			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 10.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x1700007C")]
	protected virtual GisketchLayoutDefinition FooterLayout
	{
		[Token(Token = "0x60003E0")]
		[Address(RVA = "0x52649B0", Offset = "0x52639B0", VA = "0x52649B0", Slot = "18")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$get_FooterLayout): clean
			GisketchLayoutDefinition pGVar1;

			pGVar1 = AottgUi.Layout("Row", "FlexEnd", "Center", null, null, 12.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x5264A80", Offset = "0x5263A80", VA = "0x5264A80", Slot = "19")]
	protected virtual void BuildHeader(AottgUi header)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$BuildHeader): clean
		bool bVar1;
		int variant;
		String pSVar2;
		String icon;
		String closeEnabledKey;
		String titleKey;
		AottgDialogHeader __this_00;

		pSVar2 = this.get_Title();
		bVar1 = String.IsNullOrEmpty(pSVar2);
		if (bVar1) {
			return;
		}
		pSVar2 = this.get_Title();
		variant = this.get_Variant();
		icon = this.get_TitleIcon();
		closeEnabledKey =this.get_HeaderCloseEnabledKey();
		titleKey = this.get_HeaderTitleKey();
		__this_00 = new AottgDialogHeader(pSVar2, variant, icon, closeEnabledKey, titleKey);
		if (header == null) {
			throw new NullReferenceException();
		}
		header.Component((AottgComponent)__this_00);
		return;
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x5264BB0", Offset = "0x5263BB0", VA = "0x5264BB0", Slot = "20")]
	protected virtual void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$BuildBody): clean
		return;
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x5264BC0", Offset = "0x5263BC0", VA = "0x5264BC0", Slot = "21")]
	protected virtual void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$BuildFooter): clean
		return;
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x52640F0", Offset = "0x52630F0", VA = "0x52640F0")]
	internal GisketchOverlayDefinition BuildDefinition(string id, AottgDialogAttribute attribute, AottgActionRegistry actions)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$BuildDefinition): 1 lines keep C-only constructs
		bool bVar1;
		int iVar2;
		List<GisketchNodeDefinition> children;
		String pSVar3;
		String style;
		GisketchLayoutDefinition pGVar4;
		Action<AottgUi> __this_00;
		GisketchOverlayDefinition __this_01;
		GisketchNodeDefinition __this_02;
		GisketchNodeDefinition[] pGVar5;

		children = new List<GisketchNodeDefinition>();
		pSVar3 = String.Concat(id, "-header");
		style = this.get_HeaderStyle();
		pGVar4 = this.get_HeaderLayout();
		pGVar4 = AottgDialog.Copy(pGVar4);
		if (pGVar4 != null) {
			pGVar4.shrink = 0.0;
			__this_00 = new Action<AottgUi>((object)this, (intptr_t)(this.klass.vtable)._19_BuildHeader.method);
			AottgDialog.AddSection(children, pSVar3, style, pGVar4, __this_00, actions);
			this.AddBody(children, id, actions);
			this.AddFooter(children, id, actions);
			__this_01.modal = true;
			__this_01.dismissOnBackdrop = true;
			__this_01 = new GisketchOverlayDefinition();
			__this_01.id = id;
			pSVar3 = this.get_Title();
			__this_01.title = pSVar3;
			if (attribute == null) {
				__this_01.modal = true;
				bVar1 = true;
			}
			else {
				if (__this_01 == null) goto label_05364401;
				__this_01.modal = attribute._Modal_k__BackingField;
				bVar1 = attribute._DismissOnBackdrop_k__BackingField;
			}
			__this_01.dismissOnBackdrop = bVar1;
			bVar1 = this.get_GuardUnsavedChanges();
			__this_01.guardUnsavedChanges = bVar1;
			if (attribute == null) {
				iVar2 = 0;
			}
			else {
				iVar2 = attribute._Lifecycle_k__BackingField;
			}
			__this_01.lifecycle = iVar2;
			__this_02.active = true;
			__this_02 = new GisketchNodeDefinition();
			__this_02.type = "Panel";
			__this_02.id = id;
			pSVar3 = this.get_RootStyle();
			__this_02.style = pSVar3;
			pGVar4 = this.get_RootLayout();
			__this_02.layout = pGVar4;
			if (children != null) {
				pGVar5 = (GisketchNodeDefinition[])children.ToArray();
				__this_02.children = pGVar5;
				__this_01.root = __this_02;
				return __this_01;
			}
		}
	label_05364401: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x5264BF0", Offset = "0x5263BF0", VA = "0x5264BF0")]
	private static void AddSection(List<GisketchNodeDefinition> children, string id, string style, GisketchLayoutDefinition layout, Action<AottgUi> build, AottgActionRegistry actions)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$AddSection): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		bool bVar4;
		AottgUi __this;
		GisketchNodeDefinition[] pGVar5;
		GisketchNodeDefinition item;

		__this = new AottgUi(id, actions);
		if (build != null) {
			(*(code)build.invoke_impl)(build.method_code,__this,build.method);
			if (__this != null) {
				bVar4 = __this.HasChildren;
				if (!bVar4) {
					return;
				}
				pGVar5 = __this.ToArray();
				item = AottgDialog.Wrap(id, style, pGVar5, layout);
				if (children != null) {
					piVar1 = &children._version;
					*piVar1 = *piVar1 + 1;
					pGVar5 = children._items;
					if (pGVar5 != null) {
						uVar2 = children._size;
						if (uVar2 < (uint)pGVar5.Length) {
							children._size = uVar2 + 1;
							pGVar5[(int)uVar2] = item;
							return;
						}
						children.AddWithResize((object)item);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x5265010", Offset = "0x5264010", VA = "0x5265010")]
	private void AddFooter(List<GisketchNodeDefinition> children, string id, AottgActionRegistry actions)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$AddFooter): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		bool bVar3;
		String pSVar4;
		AottgUi __this_00;
		AottgDialogFooter __this_01;
		String style;
		GisketchNodeDefinition[] pGVar5;
		GisketchLayoutDefinition pGVar6;
		GisketchNodeDefinition item;

		pSVar4 = String.Concat(id, "-footer");
		__this_00 = new AottgUi(pSVar4, actions);
		__this_01 = new AottgDialogFooter(__this_00);
		this.BuildFooter(__this_01);
		if (__this_00 != null) {
			bVar3 = __this_00.HasChildren;
			if (!bVar3) {
				return;
			}
			pSVar4 = String.Concat(id, "-footer");
			style = this.get_FooterStyle();
			pGVar5 = __this_00.ToArray();
			pGVar6 = this.get_FooterLayout();
			pGVar6 = AottgDialog.Copy(pGVar6);
			if (pGVar6 != null) {
				pGVar6.shrink = 0.0;
				item = AottgDialog.Wrap(pSVar4, style, pGVar5, pGVar6);
				if (children != null) {
					piVar1 = &children._version;
					*piVar1 = *piVar1 + 1;
					pGVar5 = children._items;
					if (pGVar5 != null) {
						uVar2 = children._size;
						if (uVar2 < (uint)pGVar5.Length) {
							children._size = uVar2 + 1;
							pGVar5[(int)uVar2] = item;
							return;
						}
						children.AddWithResize((object)item);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x5264D40", Offset = "0x5263D40", VA = "0x5264D40")]
	private void AddBody(List<GisketchNodeDefinition> children, string id, AottgActionRegistry actions)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$AddBody): 3 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		bool bVar3;
		String pSVar4;
		AottgUi __this_00;
		GisketchNodeDefinition __this_01;
		GisketchLayoutDefinition pGVar5;
		GisketchNodeDefinition[] pGVar6;
		String style;
		MethodInfo pMVar7;

		pSVar4 = String.Concat(id, "-body");
		__this_00 = new AottgUi(pSVar4, actions);
		this.BuildBody(__this_00);
		if (__this_00 != null) {
			bVar3 = __this_00.HasChildren;
			if (!bVar3) {
				return;
			}
			bVar3 = this.get_BodyScrollable();
			if (bVar3) {
				__this_01.active = true;
				__this_01 = new GisketchNodeDefinition();
				__this_01.type = "ScrollView";
				pSVar4 = String.Concat(id, "-body");
				__this_01.id = pSVar4;
				pSVar4 = this.get_BodyStyle();
				pMVar7 = (MethodInfo)&__this_01.style;
				__this_01.style = pSVar4;
				pGVar5 = AottgDialog.ScrollBodyLayout();
				__this_01.layout = pGVar5;
				pGVar5 = this.get_BodyLayout();
				__this_01.contentLayout = pGVar5;
				pGVar6 = __this_00.ToArray();
				__this_01.children = pGVar6;
			}
			else {
				pSVar4 = String.Concat(id, "-body");
				style = this.get_BodyStyle();
				pGVar6 = __this_00.ToArray();
				pGVar5 = this.get_BodyLayout();
				pGVar5 = AottgDialog.BodyPanelLayout(pGVar5);
				__this_01 = AottgDialog.Wrap(pSVar4, style, pGVar6, pGVar5);
			}
			if (children != null) {
				piVar1 = &children._version;
				*piVar1 = *piVar1 + 1;
				pGVar6 = children._items;
				if (pGVar6 != null) {
					uVar2 = children._size;
					if (uVar2 < (uint)pGVar6.Length) {
						children._size = uVar2 + 1;
						pGVar6[(int)uVar2] = __this_01;
						return;
					}
					children.AddWithResize((object)__this_01);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x5265200", Offset = "0x5264200", VA = "0x5265200")]
	private static GisketchNodeDefinition Wrap(string id, string style, GisketchNodeDefinition[] children, GisketchLayoutDefinition layout)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$Wrap): clean
		GisketchNodeDefinition __this;

		__this.active = true;
		__this = new GisketchNodeDefinition();
		__this.type = "Panel";
		__this.id = id;
		__this.style = style;
		__this.layout = layout;
		__this.children = children;
		return __this;
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x5264BD0", Offset = "0x5263BD0", VA = "0x5264BD0")]
	private static GisketchLayoutDefinition Fixed(GisketchLayoutDefinition layout)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$Fixed): clean
		GisketchLayoutDefinition pGVar1;

		pGVar1 = AottgDialog.Copy(layout);
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pGVar1.shrink = 0.0;
		return pGVar1;
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x5265360", Offset = "0x5264360", VA = "0x5265360")]
	private static GisketchLayoutDefinition ScrollBodyLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$ScrollBodyLayout): clean
		GisketchLayoutDefinition __this;
		GisketchLength pGVar1;

		__this.shrink = 1.0;
		__this = new GisketchLayoutDefinition();
		__this.direction = "Column";
		__this.alignItems = "Stretch";
		pGVar1 = AottgUi.Percent(100.0);
		__this.width = pGVar1;
		pGVar1 = AottgUi.Points(0.0);
		__this.minHeight = pGVar1;
		__this.grow = 0.0;
		__this.shrink = 1.0;
		return __this;
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x52652D0", Offset = "0x52642D0", VA = "0x52652D0")]
	private static GisketchLayoutDefinition BodyPanelLayout(GisketchLayoutDefinition layout)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$BodyPanelLayout): 3 lines keep C-only constructs
		GisketchLength* ppGVar1;
		GisketchLayoutDefinition pGVar2;
		GisketchLength pGVar3;

		pGVar2 = AottgDialog.Copy(layout);
		if (pGVar2 == null) {
			throw new NullReferenceException();
		}
		if (pGVar2.width == null) {
			ppGVar1 = &pGVar2.width;
			pGVar3 = AottgUi.Percent(100.0);
			*ppGVar1 = pGVar3;
			pGVar3 = pGVar2.minHeight;
		}
		else {
			pGVar3 = pGVar2.minHeight;
		}
		if (pGVar3 == null) {
			pGVar3 = AottgUi.Points(0.0);
		}
		ppGVar1 = &pGVar2.minHeight;
		*ppGVar1 = pGVar3;
		pGVar2.grow = 1.0;
		pGVar2.shrink = 1.0;
		return pGVar2;
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x5265440", Offset = "0x5264440", VA = "0x5265440")]
	private static GisketchLayoutDefinition Copy(GisketchLayoutDefinition layout)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$Copy): clean
		float fVar1;
		float fVar2;
		float fVar3;
		GisketchLayoutDefinition __this;

		__this.shrink = 1.0;
		__this = new GisketchLayoutDefinition();
		if (layout != null) {
			__this.direction = layout.direction;
			__this.justify = layout.justify;
			__this.alignItems = layout.alignItems;
			__this.alignSelf = layout.alignSelf;
			__this.wrap = layout.wrap;
			__this.width = layout.width;
			__this.height = layout.height;
			__this.minWidth = layout.minWidth;
			__this.minHeight = layout.minHeight;
			__this.maxWidth = layout.maxWidth;
			__this.maxHeight = layout.maxHeight;
			fVar1 = layout.shrink;
			fVar2 = layout.gap;
			fVar3 = layout.gapRow;
			__this.grow = layout.grow;
			__this.shrink = fVar1;
			__this.gap = fVar2;
			__this.gapRow = fVar3;
			fVar1 = layout.padding;
			fVar2 = layout.paddingX;
			fVar3 = layout.paddingY;
			__this.gapColumn = layout.gapColumn;
			__this.padding = fVar1;
			__this.paddingX = fVar2;
			__this.paddingY = fVar3;
			fVar1 = layout.paddingRight;
			fVar2 = layout.paddingTop;
			fVar3 = layout.paddingBottom;
			__this.paddingLeft = layout.paddingLeft;
			__this.paddingRight = fVar1;
			__this.paddingTop = fVar2;
			__this.paddingBottom = fVar3;
			fVar1 = layout.offsetY;
			__this.offsetX = layout.offsetX;
			__this.offsetY = fVar1;
		}
		return __this;
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x5265590", Offset = "0x5264590", VA = "0x5265590")]
	protected AottgDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c (Gisketch.Aottg2UI.Code.AottgDialog$$.ctor): clean
		base();
		return;
	}
}
