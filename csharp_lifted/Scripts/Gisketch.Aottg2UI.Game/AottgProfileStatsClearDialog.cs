// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsClearDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using GameProgress;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200032B")]
[AottgDialog("profile-stats-clear-confirm")]
public sealed class AottgProfileStatsClearDialog : AottgDialog
{
	[Token(Token = "0x4000FE9")]
	public const string Id = "profile-stats-clear-confirm";

	[Token(Token = "0x4000FEA")]
	[FieldOffset(Offset = "0x0")]
	private static GameStatRecord? _record;

	[Token(Token = "0x4000FEB")]
	[FieldOffset(Offset = "0x8")]
	private static string _label;

	[Token(Token = "0x1700022C")]
	protected override string Title
	{
		[Token(Token = "0x60013E0")]
		[Address(RVA = "0x5809910", Offset = "0x5808910", VA = "0x5809910", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsClearDialog.c (Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = "ClearAll";
			if ((AottgProfileStatsClearDialog._record).hasValue != false) {
				pSVar1 = "ClearRecord";
			}
			pSVar1 = String.Concat("MainMenu.Profile.Stats.", pSVar1);
			if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0) {
				pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
				return pSVar1;
			}
			pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
			return pSVar1;
		}
	}

	[Token(Token = "0x1700022D")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x60013E1")]
		[Address(RVA = "0x5809A80", Offset = "0x5808A80", VA = "0x5809A80", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsClearDialog.c (Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$get_Variant): clean
			return 6;
		}
	}

	[Token(Token = "0x1700022E")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x60013E2")]
		[Address(RVA = "0x5809A90", Offset = "0x5808A90", VA = "0x5809A90", Slot = "13")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsClearDialog.c (Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$get_BodyScrollable): clean
			return false;
		}
	}

	[Token(Token = "0x1700022F")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60013E3")]
		[Address(RVA = "0x5809AA0", Offset = "0x5808AA0", VA = "0x5809AA0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsClearDialog.c (Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(480.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x60013E4")]
	[Address(RVA = "0x5809B60", Offset = "0x5808B60", VA = "0x5809B60")]
	internal static void Open(GisketchActionContext context, GameStatRecord record, string label)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsClearDialog.c (Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$Open): 1 lines keep C-only constructs
		GisketchOverlayManager __this;
		GisketchUIRoot pGVar2;
		System_Nullable_Int32Enum__Fields local_20;

		local_20.hasValue = false;
		local_20._1_3_ = 0;
		local_20.value = 0;
		local_20 = new Nullable<Int32Enum>(record);
		(AottgProfileStatsClearDialog._record) =(System_Nullable_GameStatRecord__Fields)local_20;
		AottgProfileStatsClearDialog._label = label;
		if (context.GameObject != null) {
			pGVar2 = context.GameObject.GetComponentInParent<GisketchUIRoot>();
			if ((pGVar2 != null) &&(__this = pGVar2._Overlays_k__BackingField, __this != null)) {
				__this.ShowDialog("profile-stats-clear-confirm", true);
			}
		}
		return;
	}

	[Token(Token = "0x60013E5")]
	[Address(RVA = "0x5809CD0", Offset = "0x5808CD0", VA = "0x5809CD0")]
	internal static void OpenAll(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsClearDialog.c (Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$OpenAll): clean
		GisketchOverlayManager __this;
		GisketchUIRoot pGVar2;

		(AottgProfileStatsClearDialog._record) =(System_Nullable_GameStatRecord__Fields)0x0;
		AottgProfileStatsClearDialog._label = null;
		if (context.GameObject != null) {
			pGVar2 = context.GameObject.GetComponentInParent<GisketchUIRoot>();
			if ((pGVar2 != null) &&(__this = pGVar2._Overlays_k__BackingField, __this != null)) {
				__this.ShowDialog("profile-stats-clear-confirm", true);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60013E6")]
	[Address(RVA = "0x5809DA0", Offset = "0x5808DA0", VA = "0x5809DA0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsClearDialog.c (Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$BuildBody): clean
		String pSVar1;
		String pSVar2;

		pSVar2 = "ClearRecordConfirm";
		pSVar1 = "ClearAllConfirm";
		if ((AottgProfileStatsClearDialog._record).hasValue == false) {
			pSVar1 = String.Concat("MainMenu.Profile.Stats.", pSVar1);
			pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
		}
		else {
			pSVar1 = String.Concat("MainMenu.Profile.Stats.", pSVar2);
			pSVar2 = Aottg2GisketchLocale.Text(pSVar1);
			pSVar1 = AottgProfileStatsClearDialog._label;
			if (pSVar1 == null) goto label_05909f32;
			pSVar1 = pSVar1.ToLowerInvariant();
			pSVar1 = String.Format(pSVar2, (object)pSVar1);
		}
		if (body != null) {
			body.Callout(2, pSVar1, null);
			return;
		}
	label_05909f32: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60013E7")]
	[Address(RVA = "0x5809F40", Offset = "0x5808F40", VA = "0x5809F40", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsClearDialog.c (Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$BuildFooter): 1 lines keep C-only constructs
		String text;
		Action<GisketchActionContext> __this_00;
		GisketchNodeDefinition node;

		if (footer == null) {
			throw new NullReferenceException();
		}
		footer.QuietKey("Common.Cancel", "overlay.close");
		text = Aottg2GisketchLocale.Text("Common.Clear");
		__this_00 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_Confirm);
		node = footer.Danger(text, __this_00);
		Aottg2GisketchLocale.Key(node, "Common.Clear");
		return;
	}

	[Token(Token = "0x60013E8")]
	[Address(RVA = "0x5809A00", Offset = "0x5808A00", VA = "0x5809A00")]
	private static string Text(string item)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsClearDialog.c (Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$Text): clean
		String pSVar1;

		pSVar1 = String.Concat("MainMenu.Profile.Stats.", item);
		if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0) {
			pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
			return pSVar1;
		}
		pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x60013E9")]
	[Address(RVA = "0x5809C60", Offset = "0x5808C60", VA = "0x5809C60")]
	private static void Show(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsClearDialog.c (Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$Show): clean
		GisketchOverlayManager __this;
		GisketchUIRoot pGVar1;

		if (context.GameObject != null) {
			pGVar1 = context.GameObject.GetComponentInParent<GisketchUIRoot>();
			if ((pGVar1 != null) &&(__this = pGVar1._Overlays_k__BackingField, __this != null)) {
				__this.ShowDialog("profile-stats-clear-confirm", true);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60013EA")]
	[Address(RVA = "0x580A050", Offset = "0x5809050", VA = "0x580A050")]
	private static void Confirm(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsClearDialog.c (Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$Confirm): 1 lines keep C-only constructs
		bool bVar1;
		int record;
		GisketchUIRoot __this;

		__this = null;
		bVar1 = ((Object)context.GameObject != null);
		if (bVar1) {
			if (context.GameObject == null) {
				throw new NullReferenceException();
			}
			__this = context.GameObject.GetComponentInParent<GisketchUIRoot>();
		}
		if (((System_Nullable_Int32Enum__Fields)&AottgProfileStatsClearDialog._record).hasValue == false) {
			GameProgressManager.ClearAllGameStats();
		}
		else {
			record = (typeof(AottgProfileStatsClearDialog).static_fields).Value;
			GameProgressManager.ClearGameStat(record);
		}
		if (__this == null) {
			return;
		}
		__this.RefreshActiveScreen();
		return;
	}

	[Token(Token = "0x60013EB")]
	[Address(RVA = "0x580A190", Offset = "0x5809190", VA = "0x580A190")]
	public AottgProfileStatsClearDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsClearDialog.c (Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$.ctor): clean
		base();
		return;
	}
}
