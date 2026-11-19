// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000159")]
internal sealed class AottgBombStatSettingRow : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync, IAottgSettingRowLayoutAware
{
	[Token(Token = "0x200015A")]
	internal enum StatKind
	{
		[Token(Token = "0x40007FA")]
		Radius,
		[Token(Token = "0x40007FB")]
		Range,
		[Token(Token = "0x40007FC")]
		Speed,
		[Token(Token = "0x40007FD")]
		Cooldown
	}

	[Token(Token = "0x40007EE")]
	private const int MaxTotal = 20;

	[Token(Token = "0x40007EF")]
	internal const string RadiusId = "settings-ability-bomb-radius";

	[Token(Token = "0x40007F0")]
	internal const string RangeId = "settings-ability-bomb-range";

	[Token(Token = "0x40007F1")]
	internal const string SpeedId = "settings-ability-bomb-speed";

	[Token(Token = "0x40007F2")]
	internal const string CooldownId = "settings-ability-bomb-cooldown";

	[Token(Token = "0x40007F3")]
	internal const string UnusedPointsKey = "settings-ability-bomb-unused-points.value";

	[Token(Token = "0x40007F4")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40007F5")]
	[FieldOffset(Offset = "0x18")]
	private readonly IntSetting _setting;

	[Token(Token = "0x40007F6")]
	[FieldOffset(Offset = "0x20")]
	private readonly StatKind _kind;

	[Token(Token = "0x40007F7")]
	[FieldOffset(Offset = "0x28")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x40007F8")]
	[FieldOffset(Offset = "0x50")]
	private AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x600071F")]
	[Address(RVA = "0x5CBAD40", Offset = "0x5CB9D40", VA = "0x5CBAD40")]
	public AottgBombStatSettingRow(string id, IntSetting setting, StatKind kind)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$.ctor): clean
		base();
		this._id = id;
		this._setting = setting;
		this._kind = kind;
		return;
	}

	[Token(Token = "0x6000720")]
	[Address(RVA = "0x5CBAD90", Offset = "0x5CB9D90", VA = "0x5CBAD90", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$Build): 2 lines keep C-only constructs
		int iVar1;
		String id;
		IntSetting setting;
		AottgSettingsSearchContext searchContext;
		String pSVar2;
		String pSVar3;
		Action<AottgUi> __this_00;
		String searchTitle;
		Func<string> __this_01;
		AottgSettingRowFrame __this_02;

		id = this._id;
		setting = this._setting;
		iVar1 = this._kind;
		pSVar2 = AottgBombStatSettingRow.StatLabel(iVar1);
		pSVar3 = AottgBombStatSettingRow.StatValue(setting, iVar1);
		pSVar3 = String.Concat(pSVar2, " (", pSVar3, ")");
		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_BuildStepper);
		searchTitle = AottgBombStatSettingRow.StatLabel(this._kind);
		pSVar2 = this._id;
		pSVar2 = String.Concat(pSVar2, ".label");
		searchContext = this._searchContext;
		__this_01 = new Func<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_DirtyValue);
		iVar1 = this._layoutMode;
		__this_02 = new AottgSettingRowFrame(id, pSVar3, 220.0, __this_00, null, searchTitle, null, null, (Nullable<float>)0x0, null, null, pSVar2, (AottgSettingsSearchContext)searchContext, __this_01, null, null, iVar1);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Component((AottgComponent)__this_02);
		return;
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x5CBB170", Offset = "0x5CBA170", VA = "0x5CBB170", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$ApplySearchContext): clean
		this._searchContext.GroupTitle = context.GroupTitle;
		this._searchContext.CategoryTitle = context.CategoryTitle;
		this._searchContext.GroupId = context.GroupId;
		this._searchContext.ScreenTitle = context.ScreenTitle;
		this._searchContext.CategoryId = context.CategoryId;
		return;
	}

	[Token(Token = "0x6000722")]
	[Address(RVA = "0x5CBB1A0", Offset = "0x5CBA1A0", VA = "0x5CBB1A0", Slot = "7")]
	public void ApplyLayoutMode(AottgSettingRowLayoutMode mode)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$ApplyLayoutMode): clean
		this._layoutMode = mode;
		return;
	}

	[Token(Token = "0x6000723")]
	[Address(RVA = "0x5CBB1B0", Offset = "0x5CBA1B0", VA = "0x5CBB1B0", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$SyncState): clean
		AottgBombStatSettingRow.SyncAll(root);
		return;
	}

	[Token(Token = "0x6000724")]
	[Address(RVA = "0x5CBB410", Offset = "0x5CBA410", VA = "0x5CBB410")]
	private void BuildStepper(AottgUi control)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$BuildStepper): 1 lines keep C-only constructs
		Action<AottgUi> __this_00;
		String id;
		GisketchLength width;
		GisketchLength maxWidth;
		GisketchLayoutDefinition layout;

		__this_00 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_BuildStepper_b__16_0);
		id = String.Concat(this._id, "-bomb-stepper");
		width = AottgUi.Points(220.0);
		maxWidth = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Row", "Center", "Center", null, null, 8.0, width, null, null, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (control == null) {
			throw new NullReferenceException();
		}
		control.Panel("clear", __this_00, id, layout, null);
		return;
	}

	[Token(Token = "0x6000725")]
	[Address(RVA = "0x5CBAFF0", Offset = "0x5CB9FF0", VA = "0x5CBAFF0")]
	private string LabelText()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$LabelText): clean
		int kind;
		IntSetting setting;
		String pSVar1;
		String str2;

		setting = this._setting;
		kind = this._kind;
		pSVar1 = AottgBombStatSettingRow.StatLabel(kind);
		str2 = AottgBombStatSettingRow.StatValue(setting, kind);
		pSVar1 = String.Concat(pSVar1, " (", str2, ")");
		return pSVar1;
	}

	[Token(Token = "0x6000726")]
	[Address(RVA = "0x5CBB5B0", Offset = "0x5CBA5B0", VA = "0x5CBB5B0")]
	private static string LabelText(IntSetting setting, StatKind kind)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$LabelText): 2 lines keep C-only constructs
		String pSVar1;
		String str2;
		uint in_register_00000034;
		MethodInfo method_01;

		method_01 = (MethodInfo)CONCAT44(in_register_00000034, kind);
		pSVar1 = AottgBombStatSettingRow.StatLabel(kind);
		str2 = AottgBombStatSettingRow.StatValue(setting, kind);
		pSVar1 = String.Concat(pSVar1, " (", str2, ")");
		return pSVar1;
	}

	[Token(Token = "0x6000727")]
	[Address(RVA = "0x5CBB060", Offset = "0x5CBA060", VA = "0x5CBB060")]
	private static string StatLabel(StatKind kind)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$StatLabel): 1 lines keep C-only constructs
		String pSVar1;
		Enum local_20;

		local_20.klass = (Enum)typeof(AottgBombStatSettingRow.StatKind) ;
		local_20.monitor = (IntPtr)0xffffffffffffffff;
		pSVar1 = local_20.ToString();
		pSVar1 = String.Concat("Bomb", pSVar1);
		pSVar1 = AottgSettingsRows.Key("Ability", pSVar1);
		pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x6000728")]
	[Address(RVA = "0x5CBB620", Offset = "0x5CBA620", VA = "0x5CBB620")]
	private static string StatValue(IntSetting setting, StatKind kind)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$StatValue): 5 lines keep C-only constructs
		String pSVar1;
		String str2;
		String* ppSVar2;
		float fVar3;
		float local_18;
		float local_14;

		if (setting == null) {
			local_14 = 0.0;
		}
		else {
			local_14 = (float)setting._value;
		}
		if (kind == 2) {
			fVar3 = BombUtil.GetBombSpeed(local_14, 3.0, 10.5, 10.5);
			local_18 = BombUtil.GetOldSpeedCost(fVar3);
			pSVar1 = local_18.ToString("0.##");
			fVar3 = BombUtil.GetBombSpeed(local_14, 3.0, 10.5, 10.5);
			_local_18 = CONCAT44(local_14, fVar3 / 100.0);
			ppSVar2 = &"k";
		}
		else {
			if (kind == 1) {
				fVar3 = BombUtil.GetBombRange(local_14, 0.0, 4.0, 7.0);
				local_18 = BombUtil.GetOldRangeCost(fVar3);
				pSVar1 = local_18.ToString("0.##");
				fVar3 = BombUtil.GetBombRange(local_14, 0.0, 4.0, 7.0);
			}
			else {
				if (kind != 0) {
					fVar3 = BombUtil.GetBombCooldown(local_14, 4.0, 7.0, 7.0);
					local_18 = BombUtil.GetOldCooldownCost(fVar3);
					pSVar1 = local_18.ToString("0.##");
					fVar3 = BombUtil.GetBombCooldown(local_14, 4.0, 7.0, 7.0);
					_local_18 = CONCAT44(local_14, fVar3);
					ppSVar2 = &"s";
					goto label_05dbb876;
				}
				fVar3 = BombUtil.GetBombRadius(local_14, 5.4, 7.4, 7.0);
				local_18 = BombUtil.GetOldRadiusCost(fVar3);
				pSVar1 = local_18.ToString("0.##");
				fVar3 = BombUtil.GetBombRadius(local_14, 5.4, 7.4, 7.0);
			}
			_local_18 = CONCAT44(local_14, fVar3);
			ppSVar2 = &"m";
		}
	label_05dbb876: ;
		str2 = local_18.ToString("0.##");
		pSVar1 = String.Concat(pSVar1, " / ", str2, *ppSVar2);
		return pSVar1;
	}

	[Token(Token = "0x6000729")]
	[Address(RVA = "0x5CBB8B0", Offset = "0x5CBA8B0", VA = "0x5CBB8B0")]
	private void Change(GisketchActionContext context, int delta)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$Change): 3 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		int iVar3;
		int iVar4;
		GisketchUIRoot root;
		uint uVar5;
		IntSetting __this_00;
		uint value;
		MethodInfo* method_01;

		if (Il2CppMethodInitialized_0754814f == false) {
			method_01 = &MethodInfo_Settings_TypedSetting_int_set_Value;
			Il2CppMethodInitialized_0754814f = true;
		}
		__this_00 = this._setting;
		if (__this_00 != null) {
			iVar3 = __this_00._value;
			uVar2 = __this_00.MinValue;
			uVar5 = __this_00.MaxValue;
			uVar1 = iVar3 + delta;
			value = uVar5;
			if ((int)uVar1 < (int)uVar5) {
				value = uVar1;
			}
			if ((int)uVar1 < (int)uVar2) {
				value = uVar2;
			}
			if (delta < 1) {
	label_05dbb955: ;
				__this_00.Value = value;
				if (context.GameObject == null) {
					root = null;
				}
				else {
					root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
				}
				AottgBombStatSettingRow.SyncAll(root);
				return;
			}
			if (g_data_07548151 == false) {
				method_01 = &MethodInfo_Settings_TypedSetting_int_get_Value;
				g_data_07548151 = true;
				iVar3 = __this_00._value;
				uVar5 = __this_00.MaxValue;
			}
			if (iVar3 < (int)uVar5) {
				iVar4 = AottgBombStatSettingRow.TotalPoints();
				if (iVar4 < 0x14) {
					__this_00 = this._setting;
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					goto label_05dbb955;
				}
			}
		}
		return;
	}

	[Token(Token = "0x600072A")]
	[Address(RVA = "0x5CBB9F0", Offset = "0x5CBA9F0", VA = "0x5CBB9F0")]
	private string DirtyValue()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$DirtyValue): clean
		IntSetting pSVar1;
		String pSVar2;

		pSVar1 = this._setting;
		if (pSVar1 == null) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		return pSVar2;
	}

	[Token(Token = "0x600072B")]
	[Address(RVA = "0x5CBB9B0", Offset = "0x5CBA9B0", VA = "0x5CBB9B0")]
	private bool CanIncrement()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$CanIncrement): 2 lines keep C-only constructs
		IntSetting pSVar1;
		int iVar2;
		MethodInfo* ppMVar3;

		pSVar1 = this._setting;
		if (g_data_07548151 == false) {
			ppMVar3 = &MethodInfo_Settings_TypedSetting_int_get_Value;
			g_data_07548151 = true;
			this = (AottgBombStatSettingRow)ppMVar3;
		}
		if ((pSVar1 == null) || (pSVar1.MaxValue <= pSVar1._value)) {
			return false;
		}
		iVar2 = AottgBombStatSettingRow.TotalPoints();
		return iVar2 < 0x14;
	}

	[Token(Token = "0x600072C")]
	[Address(RVA = "0x5CBBA60", Offset = "0x5CBAA60", VA = "0x5CBBA60")]
	private static bool CanIncrement(IntSetting setting)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$CanIncrement): 2 lines keep C-only constructs
		int iVar1;
		MethodInfo* method_00;

		if (g_data_07548151 == false) {
			method_00 = &MethodInfo_Settings_TypedSetting_int_get_Value;
			g_data_07548151 = true;
		}
		if ((setting == null) || (setting.MaxValue <= setting._value)) {
			return false;
		}
		iVar1 = AottgBombStatSettingRow.TotalPoints();
		return iVar1 < 0x14;
	}

	[Token(Token = "0x600072D")]
	[Address(RVA = "0x5CBBAA0", Offset = "0x5CBAAA0", VA = "0x5CBBAA0")]
	internal static int TotalPoints()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$TotalPoints): clean
		AbilitySettings pSVar1;
		IntSetting pSVar2;
		IntSetting pSVar3;
		IntSetting pSVar4;
		IntSetting pSVar5;

		pSVar1 = SettingsManager.AbilitySettings;
		if (pSVar1 == null) {
			return 0;
		}
		pSVar2 = pSVar1.BombRadius;
		if ((((pSVar2 == null) ||(pSVar3 = pSVar1.BombRange, pSVar3 == null)) ||(pSVar4 = pSVar1.BombSpeed, pSVar4 == null)) ||(pSVar5 = pSVar1.BombCooldown, pSVar5 == null)) {
			throw new NullReferenceException();
		}
		return pSVar2._value + pSVar3._value + pSVar4._value + pSVar5._value ;
	}

	[Token(Token = "0x600072E")]
	[Address(RVA = "0x5CBBB20", Offset = "0x5CBAB20", VA = "0x5CBBB20")]
	internal static int UnusedPoints()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$UnusedPoints): clean
		int iVar1;
		int iVar2;

		iVar1 = AottgBombStatSettingRow.TotalPoints();
		if (0 < 0x14 - iVar1) {
			iVar2 = 0x14 - iVar1;
		}
		return iVar2;
	}

	[Token(Token = "0x600072F")]
	[Address(RVA = "0x5CBB1C0", Offset = "0x5CBA1C0", VA = "0x5CBB1C0")]
	internal static void SyncAll(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$SyncAll): clean
		AbilitySettings pSVar1;
		GisketchUIState __this;
		bool bVar2;
		int iVar3;
		String value;
		IntSetting setting;
		int local_2c;

		bVar2 = ((Object)root == null);
		if (!bVar2) {
			if (root == null) {
	label_05dbb400: ;
				throw new NullReferenceException();
			}
			if (root._State_k__BackingField != null) {
				pSVar1 = SettingsManager.AbilitySettings;
				if (pSVar1 == null) {
					setting = null;
					AottgBombStatSettingRow.SyncRow(root, "settings-ability-bomb-radius", null, 0);
					AottgBombStatSettingRow.SyncRow(root, "settings-ability-bomb-range", null, 1);
					AottgBombStatSettingRow.SyncRow(root, "settings-ability-bomb-speed", null, 2);
				}
				else {
					AottgBombStatSettingRow.SyncRow(root, "settings-ability-bomb-radius", pSVar1.BombRadius, 0);
					AottgBombStatSettingRow.SyncRow(root, "settings-ability-bomb-range", pSVar1.BombRange, 1);
					AottgBombStatSettingRow.SyncRow(root, "settings-ability-bomb-speed", pSVar1.BombSpeed, 2);
					setting = pSVar1.BombCooldown;
				}
				AottgBombStatSettingRow.SyncRow(root, "settings-ability-bomb-cooldown", setting, 3);
				__this = root._State_k__BackingField;
				iVar3 = AottgBombStatSettingRow.TotalPoints();
				local_2c = 0x14 - iVar3;
				if (0x14 - iVar3 < 1) {
					local_2c = 0;
				}
				value = local_2c.ToString();
				if (__this == null) goto label_05dbb400;
				__this.Set("settings-ability-bomb-unused-points.value", value);
				if ((typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor == 0) {
				}
				AottgSettingsDirtyRegistry.SyncRow(root, "settings-ability-bomb-radius");
				AottgSettingsDirtyRegistry.SyncRow(root, "settings-ability-bomb-range");
				AottgSettingsDirtyRegistry.SyncRow(root, "settings-ability-bomb-speed");
				AottgSettingsDirtyRegistry.SyncRow(root, "settings-ability-bomb-cooldown");
			}
		}
		return;
	}

	[Token(Token = "0x6000730")]
	[Address(RVA = "0x5CBBB40", Offset = "0x5CBAB40", VA = "0x5CBBB40")]
	private static void SyncRow(GisketchUIRoot root, string id, IntSetting setting, StatKind kind)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$SyncRow): 2 lines keep C-only constructs
		GisketchUIState pGVar1;
		GisketchUIRoot pGVar2;
		int iVar3;
		String pSVar4;
		String pSVar5;
		String str2;
		bool bVar6;
		MethodInfo method_01;
		MethodInfo* method_02;
		int local_44;
		GisketchUIRoot local_40;
		MethodInfo local_38;

		local_44 = 0;
		if (root != null) {
			pGVar1 = root._State_k__BackingField;
			local_40 = root;
			method_01 = (MethodInfo *)".label";
			local_38 = (MethodInfo)id;
			pSVar4 = String.Concat(id, ".label");
			pSVar5 = AottgBombStatSettingRow.StatLabel(kind);
			str2 = AottgBombStatSettingRow.StatValue(setting, kind);
			pSVar5 = String.Concat(pSVar5, " (", str2, ")");
			if (pGVar1 != null) {
				pGVar1.Set(pSVar4, pSVar5);
				method_02 = (MethodInfo*)local_38;
				pGVar2 = local_40;
				pGVar1 = local_40._State_k__BackingField;
				pSVar5 = String.Concat((String)method_02, ".value");
				pSVar4 = "0";
				if (setting != null) {
					local_44 = setting._value;
					pSVar4 = local_44.ToString();
				}
				if (pGVar1 != null) {
					pGVar1.Set(pSVar5, pSVar4);
					pGVar1 = pGVar2._State_k__BackingField;
					bVar6 = false;
					pSVar4 = String.Concat((String)method_02, ".minus.enabled");
					if (setting != null) {
						bVar6 = setting.MinValue < setting._value;
					}
					if (pGVar1 != null) {
						pGVar1.SetBool(pSVar4, bVar6);
						pGVar1 = pGVar2._State_k__BackingField;
						pSVar4 = String.Concat((String)method_02, ".plus.enabled");
						if (g_data_07548151 == false) {
							method_02 = &MethodInfo_Settings_TypedSetting_int_get_Value;
							g_data_07548151 = true;
						}
						if ((setting == null) ||(setting.MaxValue <= setting._value)) {
							bVar6 = false;
						}
						else {
							iVar3 = AottgBombStatSettingRow.TotalPoints();
							bVar6 = iVar3 < 0x14;
						}
						if (pGVar1 != null) {
							pGVar1.SetBool(pSVar4, bVar6);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000731")]
	[Address(RVA = "0x5CBB130", Offset = "0x5CBA130", VA = "0x5CBB130")]
	private static string LabelKey(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$LabelKey): clean
		String pSVar1;

		pSVar1 = String.Concat(id, ".label");
		return pSVar1;
	}

	[Token(Token = "0x6000732")]
	[Address(RVA = "0x5CBBDF0", Offset = "0x5CBADF0", VA = "0x5CBBDF0")]
	private static string ValueKey(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$ValueKey): clean
		String pSVar1;

		pSVar1 = String.Concat(id, ".value");
		return pSVar1;
	}

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x5CBBE30", Offset = "0x5CBAE30", VA = "0x5CBBE30")]
	private static string MinusEnabledKey(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$MinusEnabledKey): clean
		String pSVar1;

		pSVar1 = String.Concat(id, ".minus.enabled");
		return pSVar1;
	}

	[Token(Token = "0x6000734")]
	[Address(RVA = "0x5CBBE70", Offset = "0x5CBAE70", VA = "0x5CBBE70")]
	private static string PlusEnabledKey(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$PlusEnabledKey): clean
		String pSVar1;

		pSVar1 = String.Concat(id, ".plus.enabled");
		return pSVar1;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c.

	// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$<BuildStepper>b__16_0: 4 lines keep C-only constructs
	private void BuildStepper_b__16_0(AottgUi row)
	{
		IntSetting pSVar1;
		int iVar2;
		Action<GisketchActionContext> pSVar3;
		String pSVar4;
		GisketchNodeDefinition pGVar5;
		GisketchUIBindingDefinition pGVar6;
		GisketchLength pGVar7;
		GisketchLayoutDefinition pGVar8;
		String id;
		bool bVar9;
		MethodInfo* ppMVar10;
		Nullable<bool>[] aSStack_40 = new Nullable<bool>[4];
		Nullable<bool>[] aSStack_38 = new Nullable<bool>[2];
		int iStack_34;

		iStack_34 = 0;
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_BuildStepper_b__16_1);
		pSVar4 = String.Concat(this._id, "-minus");
		if (row != null) {
			bVar9 = false;
			pGVar5 = row.Button(5, "-", pSVar3, pSVar4, null, null, null);
			pSVar1 = this._setting;
			if (pSVar1 != null) {
				bVar9 = pSVar1.MinValue < pSVar1._value;
			}
			aSStack_38[0].hasValue = false;
			aSStack_38[0].value = false;
			aSStack_38 = new Nullable<bool>(bVar9);
			if (pGVar5 != null) {
				pGVar5.enabled = aSStack_38[0];
				pGVar6 = new GisketchUIBindingDefinition();
				pSVar4 = this._id;
				pSVar4 = String.Concat(pSVar4, ".minus.enabled");
				if (pGVar6 != null) {
					pGVar6.enabled = pSVar4;
					pGVar5.bind = pGVar6;
					pGVar7 = AottgUi.Points(54.0);
					pGVar8 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar7, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
					pGVar5.layout = pGVar8;
					pSVar1 = this._setting;
					if (pSVar1 == null) {
						pSVar4 = "0";
					}
					else {
						iStack_34 = pSVar1._value;
						pSVar4 = iStack_34.ToString();
					}
					id = String.Concat(this._id, "-value");
					pGVar5 = row.Text(pSVar4, "settingStepperValue", id, null, null);
					pGVar6 = new GisketchUIBindingDefinition();
					pSVar4 = this._id;
					pSVar4 = String.Concat(pSVar4, ".value");
					if (pGVar6 != null) {
						pGVar6.text = pSVar4;
						if (pGVar5 != null) {
							pGVar5.bind = pGVar6;
							pGVar7 = AottgUi.Points(70.0);
							pGVar8 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar7, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
							pGVar5.layout = pGVar8;
							pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_BuildStepper_b__16_2);
							pSVar4 = String.Concat(this._id, "-plus");
							pGVar5 = row.Button(5, "+", pSVar3, pSVar4, null, null, null);
							pSVar1 = this._setting;
							if (g_data_07548151 == false) {
								ppMVar10 = &MethodInfo_Settings_TypedSetting_int_get_Value;
								g_data_07548151 = true;
								row = (AottgUi)ppMVar10;
							}
							if ((pSVar1 == null) ||(pSVar1.MaxValue <= pSVar1._value)) {
								bVar9 = false;
							}
							else {
								iVar2 = AottgBombStatSettingRow.TotalPoints() ;
								bVar9 = iVar2 < 0x14;
							}
							aSStack_40[0].hasValue = false;
							aSStack_40[0].value = false;
							aSStack_40 = new Nullable<bool>(bVar9);
							if (pGVar5 != null) {
								pGVar5.enabled = aSStack_40[0];
								pGVar6 = new GisketchUIBindingDefinition();
								pSVar4 = this._id;
								pSVar4 = String.Concat(pSVar4, ".plus.enabled");
								if (pGVar6 != null) {
									pGVar6.enabled = pSVar4;
									pGVar5.bind = pGVar6;
									pGVar7 = AottgUi.Points(54.0);
									pGVar8 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar7, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
									pGVar5.layout = pGVar8;
									return;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$<BuildStepper>b__16_1: clean
	private void BuildStepper_b__16_1(GisketchActionContext context)
	{
		uint uVar1;
		IntSetting __this_00;
		uint uVar2;
		GisketchUIRoot root;
		uint value;

		__this_00 = this._setting;
		if (__this_00 == null) {
			return;
		}
		uVar1 = __this_00.MinValue;
		value = __this_00.MaxValue;
		uVar2 = __this_00._value - 1;
		if ((int)uVar2 < (int)value) {
			value = uVar2;
		}
		if ((int)uVar2 < (int)uVar1) {
			value = uVar1;
		}
		__this_00.Value = value;
		if (context.GameObject == null) {
			AottgBombStatSettingRow.SyncAll(null);
			return;
		}
		root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
		AottgBombStatSettingRow.SyncAll(root);
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$<BuildStepper>b__16_2: clean
	private void BuildStepper_b__16_2(GisketchActionContext context)
	{


		this.Change(context, 1);
		return;
	}
}
