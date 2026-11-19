// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameSet
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InGameSet.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameSet.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000E6")]
internal class InGameSet : BaseSetSetting
{
	[Token(Token = "0x40004ED")]
	[FieldOffset(Offset = "0x48")]
	public InGameGeneralSettings General;

	[Token(Token = "0x40004EE")]
	[FieldOffset(Offset = "0x50")]
	public InGameModeSettings Mode;

	[Token(Token = "0x40004EF")]
	[FieldOffset(Offset = "0x58")]
	public InGameAddonSettings Addons;

	[Token(Token = "0x40004F0")]
	[FieldOffset(Offset = "0x60")]
	public InGameTitanSettings Titan;

	[Token(Token = "0x40004F1")]
	[FieldOffset(Offset = "0x68")]
	public InGameMiscSettings Misc;

	[Token(Token = "0x40004F2")]
	[FieldOffset(Offset = "0x70")]
	public IntSetting WeatherIndex;

	[Token(Token = "0x40004F3")]
	[FieldOffset(Offset = "0x78")]
	public StringSetting ExperienceName;

	[Token(Token = "0x40004F4")]
	[FieldOffset(Offset = "0x80")]
	public StringSetting ExperienceCategory;

	[Token(Token = "0x40004F5")]
	[FieldOffset(Offset = "0x88")]
	public StringSetting ExperienceSubcategory;

	[Token(Token = "0x40004F6")]
	[FieldOffset(Offset = "0x90")]
	public StringSetting ExperienceVariant;

	[Token(Token = "0x40004F7")]
	[FieldOffset(Offset = "0x98")]
	public BoolSetting Sandbox;

	[Token(Token = "0x6000523")]
	[Address(RVA = "0x5A48A00", Offset = "0x5A47A00", VA = "0x5A48A00")]
	public InGameSet()
	{
		// Lifted from source/cpp/Settings/InGameSet.c (Settings.InGameSet$$.ctor): clean
		String pSVar1;
		int iVar2;
		InGameGeneralSettings __this_00;
		MethodInfo pMVar3;
		MethodInfo method_00;
		InGameTitanSettings __this_01;
		InGameMiscSettings __this_02;
		IntSetting __this_03;
		StringSetting pSVar4;

		__this_00 = new InGameGeneralSettings();
		this.General = __this_00;
		pMVar3 = new BoolSetting();
		this.Mode = (InGameModeSettings)pMVar3;
		method_00 = new InGameAddonSettings();
		this.Addons = (InGameAddonSettings)method_00;
		__this_01 = new InGameTitanSettings();
		this.Titan = __this_01;
		__this_02 = new InGameMiscSettings();
		this.Misc = __this_02;
		__this_03.MinValue = -0x80000000;
		__this_03.MaxValue = 0x7fffffff;
		__this_03 = new IntSetting();
		__this_03.MinValue = -0x80000000;
		__this_03.MaxValue = 0x7fffffff;
		iVar2 = __this_03.SanitizeValue(0);
		__this_03.DefaultValue = iVar2;
		__this_03.SetDefault();
		this.WeatherIndex = __this_03;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 0x7fffffff);
		this.ExperienceName = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 0x7fffffff);
		this.ExperienceCategory = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 0x7fffffff);
		this.ExperienceSubcategory = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 0x7fffffff);
		this.ExperienceVariant = pSVar4;
		pMVar3 = new BoolSetting(true);
		this.Sandbox = (BoolSetting)pMVar3;
		base();
		return;
	}
}
