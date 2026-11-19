// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePreviewPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200031D")]
internal sealed class AottgProfilePreviewPanel : AottgComponent
{
	[Token(Token = "0x4000FAE")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _avatarSprite;

	[Token(Token = "0x4000FAF")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _bannerSprite;

	[Token(Token = "0x6001392")]
	[Address(RVA = "0x57FC0C0", Offset = "0x57FB0C0", VA = "0x57FC0C0")]
	public AottgProfilePreviewPanel(string avatarSprite, string bannerSprite)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePreviewPanel.c (Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel$$.ctor): clean
		base();
		this._avatarSprite = avatarSprite;
		this._bannerSprite = bannerSprite;
		return;
	}

	[Token(Token = "0x6001393")]
	[Address(RVA = "0x58042A0", Offset = "0x58032A0", VA = "0x58042A0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePreviewPanel.c (Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel$$Build): 8 lines keep C-only constructs
		String detail;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchMotionDefinition pGVar1;
		GisketchNodeDefinition pGVar2;
		GisketchUiPerfLog.Scope local_68;
		GisketchUiPerfLog.Scope local_40;

		local_68._startMs._0_4_ = 0;
		local_68._startMs._4_2_ = 0;
		local_68._startMs._6_2_ = 0;
		local_68._enabled = false;
		local_68._hotLoop = false;
		local_68._26_6_ = 0;
		local_68._area = null;
		local_68._detail = null;
		detail = String.Concat("avatar=", this._avatarSprite, " banner=", this._bannerSprite);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_40 = GisketchUiPerfLog.Time("ProfilePreviewPanel.Build", detail);
		local_68._startMs = local_40._startMs;
		local_68._enabled = local_40._enabled;
		local_68._hotLoop = local_40._hotLoop;
		local_68._26_6_ = local_40._26_6_;
		local_68._area = local_40._area;
		local_68._detail = local_40._detail;
		local_40._area = null;
		local_40._detail = (String)&local_68;
		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_Build_b__3_0);
		width = AottgUi.Points(480.0);
		layout = AottgUi.Layout("Column", null, null, "Center", null, 12.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		pGVar1 = AottgUi.Motion("slideRightSmall", null, 0.16, 0.0, 0.0, 1);
		if (ui == null) {
			throw new NullReferenceException();
		}
		pGVar2 = ui.Panel("profilePreviewDialog", __this_00, "profile-preview-dialog", layout, pGVar1);
		pGVar1 = AottgUi.Motion("slideRightSmall", null, 0.16, 0.0, 0.0, 1);
		if (pGVar2 == null) {
			throw new NullReferenceException();
		}
		pGVar2.exit = pGVar1;
		local_68.Dispose();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePreviewPanel.c.

	// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel$$<Build>b__3_0: 1 lines keep C-only constructs
	private void Build_b__3_0(AottgUi preview)
	{
		object @object;
		String pSVar1;
		String pSVar2;
		Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c_StaticFields pGVar3;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		AottgProfilePreviewCard __this_01;

		pSVar1 = "profilePreviewTitleBar";
		pGVar3 = typeof(AottgProfilePreviewPanel.c).static_fields;
		__this_00 = pGVar3.__9__3_1;
		if (__this_00 == null) {
			if ((typeof(AottgProfilePreviewPanel.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar3 = typeof(AottgProfilePreviewPanel.c).static_fields;
			}
			@object = (object)pGVar3.__9;
			__this_00 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c_Build_b__3_1);
			pGVar3 = typeof(AottgProfilePreviewPanel.c).static_fields;
			pGVar3.__9__3_1 = __this_00;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (preview == null) {
			throw new NullReferenceException();
		}
		preview.Panel(pSVar1, __this_00, "profile-preview-title-bar", layout, null);
		pSVar1 = this._avatarSprite;
		pSVar2 = this._bannerSprite;
		__this_01 = new AottgProfilePreviewCard();
		__this_01._avatarSprite = pSVar1;
		__this_01._bannerSprite = pSVar2;
		preview.Component((AottgComponent)__this_01);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgProfilePreviewPanel.c();
		AottgProfilePreviewPanel.c.__9 =(AottgProfilePreviewPanel.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel.<>c$$<Build>b__3_1: clean
	private void c__Build_b__3_1(AottgUi title)
	{
		if (title == null) {
			throw new NullReferenceException();
		}
		title.TextKey("MainMenu.Profile.Preview", "profilePreviewTitle", null, null, null);
		return;
	}
}
