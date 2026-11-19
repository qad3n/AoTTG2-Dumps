// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgExternalLinkDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200020A")]
[AottgDialog("external-link-confirm")]
public sealed class AottgExternalLinkDialog : AottgDialog
{
	[Token(Token = "0x4000ADB")]
	public const string Id = "external-link-confirm";

	[Token(Token = "0x1700015E")]
	protected override string Title
	{
		[Token(Token = "0x6000C25")]
		[Address(RVA = "0x5D85100", Offset = "0x5D84100", VA = "0x5D85100", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialog.c (Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("ExternalLinks.OpenExternalLink");
			return pSVar1;
		}
	}

	[Token(Token = "0x1700015F")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000C26")]
		[Address(RVA = "0x5D85160", Offset = "0x5D84160", VA = "0x5D85160", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialog.c (Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_TitleIcon): clean
			return "warning";
		}
	}

	[Token(Token = "0x17000160")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000C27")]
		[Address(RVA = "0x5D85190", Offset = "0x5D84190", VA = "0x5D85190", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialog.c (Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_Variant): clean
			return 1;
		}
	}

	[Token(Token = "0x17000161")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000C28")]
		[Address(RVA = "0x5D851A0", Offset = "0x5D841A0", VA = "0x5D851A0", Slot = "13")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialog.c (Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_BodyScrollable): clean
			return false;
		}
	}

	[Token(Token = "0x17000162")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000C29")]
		[Address(RVA = "0x5D851B0", Offset = "0x5D841B0", VA = "0x5D851B0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialog.c (Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(540.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x5D85270", Offset = "0x5D84270", VA = "0x5D85270", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialog.c (Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$BuildBody): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c_StaticFields pGVar1;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;

		if (body == null) {
			throw new NullReferenceException();
		}
		body.TextKey("ExternalLinks.Warning", "text", "external-link-warning-text", null, null);
		style = "inputField";
		pGVar1 = typeof(AottgExternalLinkDialog.c).static_fields;
		__this_00 = pGVar1.__9__11_0;
		if (__this_00 == null) {
			if ((typeof(AottgExternalLinkDialog.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgExternalLinkDialog.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this_00 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c_BuildBody_b__11_0);
			pGVar1 = typeof(AottgExternalLinkDialog.c).static_fields;
			pGVar1.__9__11_0 = __this_00;
		}
		width = AottgUi.Percent(100.0);
		height = AottgUi.Points(42.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		body.Panel(style, __this_00, "external-link-url", layout, null);
		return;
	}

	[Token(Token = "0x6000C2B")]
	[Address(RVA = "0x5D854A0", Offset = "0x5D844A0", VA = "0x5D854A0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialog.c (Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$BuildFooter): clean
		if (footer == null) {
			throw new NullReferenceException();
		}
		footer.QuietKey("Common.Cancel", "overlay.close");
		footer.PrimaryKey("ExternalLinks.OpenLink", "externalLink.confirm");
		return;
	}

	[Token(Token = "0x6000C2C")]
	[Address(RVA = "0x5D85530", Offset = "0x5D84530", VA = "0x5D85530")]
	public AottgExternalLinkDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialog.c (Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialog.c.

	// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog.<>c$$.cctor: 1 lines keep C-only constructs
	private static void c__cctor()
	{
		object __this;

		__this = (object)il2cpp_codegen_object_new(typeof(AottgExternalLinkDialog.c)) ;
		__this = new Object();
		AottgExternalLinkDialog.c.__9 =(AottgExternalLinkDialog.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog.<>c$$<BuildBody>b__11_0: clean
	private void c__BuildBody_b__11_0(AottgUi url)
	{
		String pSVar1;
		String pSVar2;
		AottgMarqueeText __this_00;
		String pSVar3;

		pSVar2 = "externalLink.url";
		pSVar1 = "external-link-url-text";
		pSVar3 = (String)**(long*)(g_data_07556758 + 0xb8);
		__this_00 = new AottgMarqueeText();
		__this_00._id = pSVar1;
		__this_00._stateKey = pSVar2;
		if (pSVar3 == null) {
			pSVar3 = (String)**(long*)(g_data_07556758 + 0xb8);
		}
		__this_00._fallback = pSVar3;
		if (url == null) {
			throw new NullReferenceException();
		}
		url.Component((AottgComponent)__this_00);
		return;
	}
}
