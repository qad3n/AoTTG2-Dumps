// ==================== AoTTG2 cross-reference ====================
// Type: Settings.UISettings
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/UISettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/UISettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000124")]
internal class UISettings : SaveableSettingsContainer
{
	[Token(Token = "0x40006A2")]
	[FieldOffset(Offset = "0x38")]
	public FloatSetting MobileHorizontalSafePadding;

	[Token(Token = "0x40006A3")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting UITheme;

	[Token(Token = "0x40006A4")]
	[FieldOffset(Offset = "0x48")]
	public BoolSetting GameFeed;

	[Token(Token = "0x40006A5")]
	[FieldOffset(Offset = "0x50")]
	public BoolSetting FeedConsole;

	[Token(Token = "0x40006A6")]
	[FieldOffset(Offset = "0x58")]
	public BoolSetting ShowStylebar;

	[Token(Token = "0x40006A7")]
	[FieldOffset(Offset = "0x60")]
	public FloatSetting UIMasterScale;

	[Token(Token = "0x40006A8")]
	[FieldOffset(Offset = "0x68")]
	public FloatSetting CrosshairScale;

	[Token(Token = "0x40006A9")]
	[FieldOffset(Offset = "0x70")]
	public FloatSetting CrosshairTextScale;

	[Token(Token = "0x40006AA")]
	[FieldOffset(Offset = "0x78")]
	public StringSetting CrosshairSkin;

	[Token(Token = "0x40006AB")]
	[FieldOffset(Offset = "0x80")]
	public FloatSetting HUDScale;

	[Token(Token = "0x40006AC")]
	[FieldOffset(Offset = "0x88")]
	public FloatSetting MinimapScale;

	[Token(Token = "0x40006AD")]
	[FieldOffset(Offset = "0x90")]
	public FloatSetting StylebarScale;

	[Token(Token = "0x40006AE")]
	[FieldOffset(Offset = "0x98")]
	public FloatSetting KillScoreScale;

	[Token(Token = "0x40006AF")]
	[FieldOffset(Offset = "0xA0")]
	public FloatSetting KillFeedScale;

	[Token(Token = "0x40006B0")]
	[FieldOffset(Offset = "0xA8")]
	public BoolSetting ShowCrosshairDistance;

	[Token(Token = "0x40006B1")]
	[FieldOffset(Offset = "0xB0")]
	public IntSetting CrosshairStyle;

	[Token(Token = "0x40006B2")]
	[FieldOffset(Offset = "0xB8")]
	public IntSetting Speedometer;

	[Token(Token = "0x40006B3")]
	[FieldOffset(Offset = "0xC0")]
	public BoolSetting ShowInterpolation;

	[Token(Token = "0x40006B4")]
	[FieldOffset(Offset = "0xC8")]
	public BoolSetting ShowCrosshairArrows;

	[Token(Token = "0x40006B5")]
	[FieldOffset(Offset = "0xD0")]
	public IntSetting KDR;

	[Token(Token = "0x40006B6")]
	[FieldOffset(Offset = "0xD8")]
	public BoolSetting ShowPing;

	[Token(Token = "0x40006B7")]
	[FieldOffset(Offset = "0xE0")]
	public BoolSetting ShowEmotes;

	[Token(Token = "0x40006B8")]
	[FieldOffset(Offset = "0xE8")]
	public BoolSetting ShowGameTime;

	[Token(Token = "0x40006B9")]
	[FieldOffset(Offset = "0xF0")]
	public BoolSetting ShowSongPopup;

	[Token(Token = "0x40006BA")]
	[FieldOffset(Offset = "0xF8")]
	public IntSetting ShowNames;

	[Token(Token = "0x40006BB")]
	[FieldOffset(Offset = "0x100")]
	public IntSetting ShowHealthbars;

	[Token(Token = "0x40006BC")]
	[FieldOffset(Offset = "0x108")]
	public IntSetting HumanNameDistance;

	[Token(Token = "0x40006BD")]
	[FieldOffset(Offset = "0x110")]
	public IntSetting NameOverrideTarget;

	[Token(Token = "0x40006BE")]
	[FieldOffset(Offset = "0x118")]
	public IntSetting NameBackgroundType;

	[Token(Token = "0x40006BF")]
	[FieldOffset(Offset = "0x120")]
	public ToggleColorSetting ForceNameColor;

	[Token(Token = "0x40006C0")]
	[FieldOffset(Offset = "0x128")]
	public ColorSetting ForceBackgroundColor;

	[Token(Token = "0x40006C1")]
	[FieldOffset(Offset = "0x130")]
	public IntSetting MinNameLength;

	[Token(Token = "0x40006C2")]
	[FieldOffset(Offset = "0x138")]
	public IntSetting MaxNameLength;

	[Token(Token = "0x40006C3")]
	[FieldOffset(Offset = "0x140")]
	public BoolSetting FadeMainMenu;

	[Token(Token = "0x40006C4")]
	[FieldOffset(Offset = "0x148")]
	public BoolSetting FadeLoadscreen;

	[Token(Token = "0x40006C5")]
	[FieldOffset(Offset = "0x150")]
	public IntSetting ChatWidth;

	[Token(Token = "0x40006C6")]
	[FieldOffset(Offset = "0x158")]
	public IntSetting ChatHeight;

	[Token(Token = "0x40006C7")]
	[FieldOffset(Offset = "0x160")]
	public IntSetting ChatFontSize;

	[Token(Token = "0x40006C8")]
	[FieldOffset(Offset = "0x168")]
	public IntSetting ChatScrollSensitivity;

	[Token(Token = "0x40006C9")]
	[FieldOffset(Offset = "0x170")]
	public IntSetting KillFeedCount;

	[Token(Token = "0x40006CA")]
	[FieldOffset(Offset = "0x178")]
	public BoolSetting JoinNotifications;

	[Token(Token = "0x40006CB")]
	[FieldOffset(Offset = "0x180")]
	public IntSetting Coordinates;

	[Token(Token = "0x40006CC")]
	[FieldOffset(Offset = "0x188")]
	public BoolSetting ShowChatTimestamp;

	[Token(Token = "0x40006CD")]
	[FieldOffset(Offset = "0x190")]
	public BoolSetting ChatHidden;

	[Token(Token = "0x40006CE")]
	[FieldOffset(Offset = "0x198")]
	public ColorSetting ChatBackgroundColor;

	[Token(Token = "0x40006CF")]
	[FieldOffset(Offset = "0x1A0")]
	public BoolSetting ChatCLErrors;

	[Token(Token = "0x40006D0")]
	[FieldOffset(Offset = "0x1A8")]
	public ListSetting<StringSetting> FavoriteExperiences;

	[Token(Token = "0x40006D1")]
	[FieldOffset(Offset = "0x1B0")]
	public ListSetting<StringSetting> FavoriteSandboxPresets;

	[Token(Token = "0x170000D0")]
	protected override string FileName
	{
		[Token(Token = "0x600062A")]
		[Address(RVA = "0x5B7F690", Offset = "0x5B7E690", VA = "0x5B7F690", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Settings/UISettings.c (Settings.UISettings$$get_FileName): clean
			return "UI.json";
		}
	}

	[Token(Token = "0x170000D1")]
	public float AppliedMasterScale
	{
		[Token(Token = "0x600062B")]
		[Address(RVA = "0x5B7F6C0", Offset = "0x5B7E6C0", VA = "0x5B7F6C0")]
		get
		{
			// Lifted from source/cpp/Settings/UISettings.c (Settings.UISettings$$get_AppliedMasterScale): clean
			FloatSetting pSVar1;
			float fVar2;

			pSVar1 = this.UIMasterScale;
			if (pSVar1 == null) {
				throw new NullReferenceException();
			}
			fVar2 = pSVar1._value;
			if ((typeof(AottgUiScale)._2).cctor_finished_or_no_cctor == 0) {
				fVar2 = AottgUiScale.AppliedValue(fVar2);
				return fVar2;
			}
			fVar2 = AottgUiScale.AppliedValue(fVar2);
			return fVar2;
		}
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x5B7F740", Offset = "0x5B7E740", VA = "0x5B7F740", Slot = "12")]
	public override void Apply()
	{
		// Lifted from source/cpp/Settings/UISettings.c (Settings.UISettings$$Apply): 3 lines keep C-only constructs
		byte bVar1;
		BaseMenu pUVar2;
		FloatSetting pSVar3;
		ChatPanel pUVar4;
		bool bVar5;
		uint uVar6;
		Object[] pSVar7;
		uint uVar8;
		InGameMenu __this_00;

		this.Apply();
		pUVar2 = UIManager.CurrentMenu;
		bVar5 = ((Object)pUVar2 != null);
		if (!bVar5) {
			return;
		}
		pUVar2 = UIManager.CurrentMenu;
		if (pUVar2 != null) {
			pUVar2.ApplyScale(SceneLoader.SceneName);
			pSVar7 = Object.FindObjectsByType<GisketchUIRoot>(1, 0);
			if (pSVar7 != null) {
				uVar6 = (uint)pSVar7.Length;
				if (0 < (int)uVar6) {
					uVar8 = 0;
					do {
						if (uVar6 <= uVar8) {
							throw new IndexOutOfRangeException();
						}
						pSVar3 = this.UIMasterScale;
						if ((pSVar3 == null) ||((GisketchUIRoot)pSVar7[(int)uVar8] ==null)) goto label_05c7f9da;
						(pSVar7[(int)uVar8]).SetScale(pSVar3._value);
						uVar8 = uVar8 + 1;
						uVar6 = (uint)pSVar7.Length;
					} while ((int)uVar8 < (int)uVar6);
				}
				if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
					__this_00 = (InGameMenu)UIManager.CurrentMenu;
				}
				else {
					__this_00 = (InGameMenu)UIManager.CurrentMenu;
				}
				if (__this_00 == null) {
					return;
				}
				bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
				if ((((BaseMenu)__this_00.klass)._2).typeHierarchyDepth < bVar1) {
					return;
				}
				if ((((BaseMenu)__this_00.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameMenu)) {
					return;
				}
				if (((typeof(UIManager))._2).cctor_finished_or_no_cctor == 0) {
					__this_00 = (InGameMenu)UIManager.CurrentMenu;
					if (__this_00 == null) goto label_05c7f9da;
				}
				bVar1 = (typeof(InGameMenu)._2).typeHierarchyDepth;
				if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
					throw new InvalidCastException();
				}
				__this_00.ApplyUISettings();
				pUVar4 = __this_00.ChatPanel;
				bVar5 = ((Object)pUVar4 != null);
				if (!bVar5) {
					return;
				}
				pUVar4 = __this_00.ChatPanel;
				if (pUVar4 != null) {
					pUVar4.Sync();
					return;
				}
			}
		}
	label_05c7f9da: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x5B7DA40", Offset = "0x5B7CA40", VA = "0x5B7DA40")]
	public UISettings()
	{
		// Lifted from source/cpp/Settings/UISettings.c (Settings.UISettings$$.ctor): 1 lines keep C-only constructs
		object defaultValue;
		String defaultValue_00;
		FloatSetting pSVar1;
		StringSetting pSVar2;
		BoolSetting pSVar3;
		IntSetting pSVar4;
		Color255 pUVar5;
		ToggleColorSetting __this_00;
		ColorSetting pSVar6;
		ListSetting<StringSetting> pSVar7;
		MethodInfo method_00;

		pSVar1 = new FloatSetting(0.032, 0.0, 0.08);
		this.MobileHorizontalSafePadding = pSVar1;
		defaultValue_00 = "Dark";
		pSVar2.MaxLength = 0x7fffffff;
		pSVar2 = new StringSetting((object)defaultValue_00);
		pSVar2.MaxLength = 0x7fffffff;
		this.UITheme = pSVar2;
		pSVar3 = new BoolSetting(false);
		this.GameFeed = pSVar3;
		pSVar3 = new BoolSetting(false);
		this.FeedConsole = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.ShowStylebar = pSVar3;
		pSVar1 = new FloatSetting(1.0, 0.5, 1.5);
		this.UIMasterScale = pSVar1;
		pSVar1 = new FloatSetting(1.0, 0.0, 3.0);
		this.CrosshairScale = pSVar1;
		pSVar1 = new FloatSetting(1.0, 0.0, 2.0);
		this.CrosshairTextScale = pSVar1;
		defaultValue = (object)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2.MaxLength = 0x7fffffff;
		pSVar2 = new StringSetting(defaultValue);
		pSVar2.MaxLength = 200;
		this.CrosshairSkin = pSVar2;
		pSVar1 = new FloatSetting(1.0, 0.0, 2.0);
		this.HUDScale = pSVar1;
		pSVar1 = new FloatSetting(1.0, 0.0, 2.0);
		this.MinimapScale = pSVar1;
		pSVar1 = new FloatSetting(1.0, 0.0, 2.0);
		this.StylebarScale = pSVar1;
		pSVar1 = new FloatSetting(1.0, 0.0, 2.0);
		this.KillScoreScale = pSVar1;
		pSVar1 = new FloatSetting(1.0, 0.0, 2.0);
		this.KillFeedScale = pSVar1;
		pSVar3 = new BoolSetting(true);
		this.ShowCrosshairDistance = pSVar3;
		pSVar4 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.CrosshairStyle = pSVar4;
		pSVar4 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.Speedometer = pSVar4;
		pSVar3 = new BoolSetting(false);
		this.ShowInterpolation = pSVar3;
		pSVar3 = new BoolSetting(false);
		this.ShowCrosshairArrows = pSVar3;
		pSVar4 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.KDR = pSVar4;
		pSVar3 = new BoolSetting(false);
		this.ShowPing = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.ShowEmotes = pSVar3;
		pSVar3 = new BoolSetting(false);
		this.ShowGameTime = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.ShowSongPopup = pSVar3;
		pSVar4 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.ShowNames = pSVar4;
		pSVar4 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.ShowHealthbars = pSVar4;
		pSVar4 = new IntSetting(500, 0, 100000);
		this.HumanNameDistance = pSVar4;
		pSVar4 = new IntSetting(3, -0x80000000, 0x7fffffff);
		this.NameOverrideTarget = pSVar4;
		pSVar4 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.NameBackgroundType = pSVar4;
		method_00 = (MethodInfo)&g_data_000000ff;
		pUVar5 = new Color255(0xff, 0xff, 0xff, 0xff);
		__this_00 = new ToggleColorSetting(false, pUVar5);
		this.ForceNameColor = __this_00;
		pUVar5 = new Color255(0, 0, 0, 100);
		pSVar6 = new ColorSetting(pUVar5, 0);
		this.ForceBackgroundColor = pSVar6;
		pSVar4 = new IntSetting(0, 0, 100);
		this.MinNameLength = pSVar4;
		pSVar4 = new IntSetting(0x14, 0, 100);
		this.MaxNameLength = pSVar4;
		pSVar3 = new BoolSetting(false);
		this.FadeMainMenu = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.FadeLoadscreen = pSVar3;
		pSVar4 = new IntSetting(0x140, 0, 1000);
		this.ChatWidth = pSVar4;
		pSVar4 = new IntSetting(0x127, 0, 500);
		this.ChatHeight = pSVar4;
		pSVar4 = new IntSetting(0x12, 1, 0x32);
		this.ChatFontSize = pSVar4;
		pSVar4 = new IntSetting(10, 1, 0x32);
		this.ChatScrollSensitivity = pSVar4;
		pSVar4 = new IntSetting(3, 0, 10);
		this.KillFeedCount = pSVar4;
		pSVar3 = new BoolSetting(true);
		this.JoinNotifications = pSVar3;
		pSVar4 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.Coordinates = pSVar4;
		pSVar3 = new BoolSetting(false);
		this.ShowChatTimestamp = pSVar3;
		pSVar3 = new BoolSetting(false);
		this.ChatHidden = pSVar3;
		pUVar5 = new Color255(0x26, 0x26, 0x26, 0);
		pSVar6 = new ColorSetting(pUVar5, 0);
		this.ChatBackgroundColor = pSVar6;
		pSVar3 = new BoolSetting(false);
		this.ChatCLErrors = pSVar3;
		pSVar7 = new ListSetting<StringSetting>();
		this.FavoriteExperiences = pSVar7;
		pSVar7 = new ListSetting<StringSetting>();
		this.FavoriteSandboxPresets = pSVar7;
		base();
		return;
	}
}
