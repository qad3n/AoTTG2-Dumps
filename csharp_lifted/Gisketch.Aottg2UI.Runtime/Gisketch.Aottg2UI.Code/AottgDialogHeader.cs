// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgDialogHeader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgDialogHeader.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000082")]
public sealed class AottgDialogHeader : AottgComponent
{
	[Token(Token = "0x40002C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _title;

	[Token(Token = "0x40002C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly AottgButtonVariant _variant;

	[Token(Token = "0x40002C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _icon;

	[Token(Token = "0x40002C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly string _closeEnabledKey;

	[Token(Token = "0x40002CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly string _titleKey;

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x5265F60", Offset = "0x5264F60", VA = "0x5265F60")]
	public AottgDialogHeader(string title, [Optional][DefaultParameterValue(0)] AottgButtonVariant variant, [Optional] string icon, [Optional] string closeEnabledKey, [Optional] string titleKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialogHeader.c (Gisketch.Aottg2UI.Code.AottgDialogHeader$$.ctor): 1 lines keep C-only constructs
		byte* ppuVar1;
		uint uVar2;

		base();
		this._title = title;
		this._variant = variant;
		if (icon == null) {
			uVar2 = variant - 1;
			if ((uVar2 < 7) && ((99U >> (uVar2 & 0x1f) & 1) != 0)) {
				ppuVar1 = __stringSlots(new string[] { "question", "information", "question", "question", "question", "warning", "exclamation" }) + (int)uVar2;
			}
			else {
				ppuVar1 = (byte*)(g_data_07556758 + 0xb8);
			}
			icon = *(String*)*ppuVar1;
		}
		this._icon = icon;
		this._closeEnabledKey = closeEnabledKey;
		this._titleKey = titleKey;
		return;
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x52660F0", Offset = "0x52650F0", VA = "0x52660F0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialogHeader.c (Gisketch.Aottg2UI.Code.AottgDialogHeader$$Build): 1 lines keep C-only constructs
		String style;
		Action<AottgUi> __this_00;
		GisketchLength __this_01;
		GisketchLayoutDefinition layout;

		style = AottgDialogHeader.TitleBarStyle(this._variant);
		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_AottgDialogHeader_Build_b__6_0);
		__this_01 = new GisketchLength();
		if (__this_01 != null) {
			__this_01.value = 100.0;
			__this_01.unit = "percent";
			layout = AottgUi.Layout("Row", "SpaceBetween", "Center", null, null, 12.0, __this_01, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (ui != null) {
				ui.Panel(style, __this_00, null, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x52662A0", Offset = "0x52652A0", VA = "0x52662A0")]
	private static string TitleBarStyle(AottgButtonVariant variant)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialogHeader.c (Gisketch.Aottg2UI.Code.AottgDialogHeader$$TitleBarStyle): clean
		if (variant - 1U < 7) {
			return new string[] { "dialogTitleBarSecondary", "dialogTitleBarWorkshop", "dialogTitleBarQuiet", "dialogTitleBar", "dialogTitleBar", "dialogTitleBarDanger", "dialogTitleBarNegative" }[(int)(variant - 1U)];
		}
		return "dialogTitleBar";
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x5266060", Offset = "0x5265060", VA = "0x5266060")]
	private static string DefaultIcon(AottgButtonVariant variant)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialogHeader.c (Gisketch.Aottg2UI.Code.AottgDialogHeader$$DefaultIcon): clean
		uint uVar1;

		uVar1 = variant - 1;
		if ((uVar1 < 7) && ((99U >> (uVar1 & 0x1f) & 1) != 0)) {
			return new string[] { "question", "information", "question", "question", "question", "warning", "exclamation" }[(int)uVar1];
		}
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x5266780", Offset = "0x5265780", VA = "0x5266780")]
	private static string CloseButtonStyle(AottgButtonVariant variant)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialogHeader.c (Gisketch.Aottg2UI.Code.AottgDialogHeader$$CloseButtonStyle): clean
		if (variant - 1U < 7) {
			return new string[] { "dialogTitleCloseButtonSecondary", "dialogTitleCloseButtonWorkshop", "dialogTitleCloseButtonQuiet", "dialogTitleCloseButton", "dialogTitleCloseButton", "dialogTitleCloseButtonDanger", "dialogTitleCloseButtonNegative" }[(int)(variant - 1U)];
		}
		return "dialogTitleCloseButton";
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x5266810", Offset = "0x5265810", VA = "0x5266810")]
	private static string TitleTextStyle(AottgButtonVariant variant)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialogHeader.c (Gisketch.Aottg2UI.Code.AottgDialogHeader$$TitleTextStyle): 1 lines keep C-only constructs
		String* ppSVar1;

		if (variant == 7) {
			ppSVar1 = &"dialogTitleTextNegative";
		}
		else {
			ppSVar1 = &"dialogTitleText";
			if (variant == 3) {
				ppSVar1 = &"dialogTitleTextQuiet";
			}
		}
		return *ppSVar1;
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x5266880", Offset = "0x5265880", VA = "0x5266880")]
	private static string TitleIconStyle(AottgButtonVariant variant)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialogHeader.c (Gisketch.Aottg2UI.Code.AottgDialogHeader$$TitleIconStyle): 1 lines keep C-only constructs
		String* ppSVar1;

		if (variant == 7) {
			ppSVar1 = &"dialogTitleIconNegative";
		}
		else {
			ppSVar1 = &"dialogTitleIcon";
			if (variant == 3) {
				ppSVar1 = &"dialogTitleIconQuiet";
			}
		}
		return *ppSVar1;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialogHeader.c.

	// Gisketch.Aottg2UI.Code.AottgDialogHeader$$<Build>b__6_0: 3 lines keep C-only constructs
	private void Build_b__6_0(AottgUi header)
	{
		int iVar1;
		bool bVar2;
		GisketchNodeDefinition pGVar3;
		String* ppSVar4;
		GisketchLayoutDefinition pGVar5;
		GisketchUIBindingDefinition pGVar6;
		String pSVar7;
		MethodInfo method_03;

		bVar2 = String.IsNullOrEmpty(this._icon);
		if (!bVar2) {
			pGVar3 = new GisketchNodeDefinition();
			if (pGVar3 == null) goto label_05366d03;
			pGVar3.type = "Icon";
			pGVar3.icon = this._icon;
			iVar1 = this._variant;
			if (iVar1 == 7) {
				ppSVar4 = &"dialogTitleIconNegative";
			}
			else {
				ppSVar4 = &"dialogTitleIcon";
				if (iVar1 == 3) {
					ppSVar4 = &"dialogTitleIconQuiet";
				}
			}
			pGVar3.style = *ppSVar4;
			if (header == null) goto label_05366d03;
			header.Add(pGVar3);
		}
		pGVar3 = new GisketchNodeDefinition();
		if (pGVar3 != null) {
			pGVar3.type = "Text";
			pGVar3.text = this._title;
			iVar1 = this._variant;
			if (iVar1 == 7) {
				ppSVar4 = &"dialogTitleTextNegative";
			}
			else {
				ppSVar4 = &"dialogTitleText";
				if (iVar1 == 3) {
					ppSVar4 = &"dialogTitleTextQuiet";
				}
			}
			pGVar3.style = *ppSVar4;
			pGVar6 = null;
			pGVar5 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
			pGVar3.layout = pGVar5;
			bVar2 = String.IsNullOrEmpty(this._titleKey);
			if (!bVar2) {
				pGVar6 = new GisketchUIBindingDefinition();
				if (pGVar6 == null) goto label_05366d03;
				pGVar6.text = this._titleKey;
			}
			pGVar3.bind = pGVar6;
			if (header != null) {
				header.Add(pGVar3);
				pGVar3 = new GisketchNodeDefinition();
				if (pGVar3 != null) {
					pGVar3.type = "Button";
					method_03 = (MethodInfo *)"X";
					pGVar3.text = "X";
					pSVar7 = AottgDialogHeader.CloseButtonStyle(this._variant);
					pGVar3.style = pSVar7;
					pGVar3.action = "overlay.close";
					pGVar6 = null;
					bVar2 = String.IsNullOrEmpty(this._closeEnabledKey);
					if (!bVar2) {
						pGVar6 = new GisketchUIBindingDefinition();
						if (pGVar6 == null) goto label_05366d03;
						pGVar6.enabled = this._closeEnabledKey;
					}
					pGVar3.bind = pGVar6;
					header.Add(pGVar3);
					return;
				}
			}
		}
	label_05366d03: ;
		throw new NullReferenceException();
	}
}
