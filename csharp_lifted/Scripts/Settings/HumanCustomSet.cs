// ==================== AoTTG2 cross-reference ====================
// Type: Settings.HumanCustomSet
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/HumanCustomSet.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/HumanCustomSet.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000D9")]
internal class HumanCustomSet : BaseSetSetting
{
	[Token(Token = "0x4000464")]
	[FieldOffset(Offset = "0x48")]
	public IntSetting Sex;

	[Token(Token = "0x4000465")]
	[FieldOffset(Offset = "0x50")]
	public IntSetting Eye;

	[Token(Token = "0x4000466")]
	[FieldOffset(Offset = "0x58")]
	public StringSetting Face;

	[Token(Token = "0x4000467")]
	[FieldOffset(Offset = "0x60")]
	public StringSetting Glass;

	[Token(Token = "0x4000468")]
	[FieldOffset(Offset = "0x68")]
	public StringSetting Hair;

	[Token(Token = "0x4000469")]
	[FieldOffset(Offset = "0x70")]
	public IntSetting Costume;

	[Token(Token = "0x400046A")]
	[FieldOffset(Offset = "0x78")]
	public IntSetting Boots;

	[Token(Token = "0x400046B")]
	[FieldOffset(Offset = "0x80")]
	public IntSetting Cape;

	[Token(Token = "0x400046C")]
	[FieldOffset(Offset = "0x88")]
	public BoolSetting HoodUp;

	[Token(Token = "0x400046D")]
	[FieldOffset(Offset = "0x90")]
	public IntSetting Logo;

	[Token(Token = "0x400046E")]
	[FieldOffset(Offset = "0x98")]
	public StringSetting Hat;

	[Token(Token = "0x400046F")]
	[FieldOffset(Offset = "0xA0")]
	public StringSetting Head;

	[Token(Token = "0x4000470")]
	[FieldOffset(Offset = "0xA8")]
	public StringSetting Back;

	[Token(Token = "0x4000471")]
	[FieldOffset(Offset = "0xB0")]
	public ColorSetting SkinColor;

	[Token(Token = "0x4000472")]
	[FieldOffset(Offset = "0xB8")]
	public ColorSetting HairColor;

	[Token(Token = "0x4000473")]
	[FieldOffset(Offset = "0xC0")]
	public ColorSetting ShirtColor;

	[Token(Token = "0x4000474")]
	[FieldOffset(Offset = "0xC8")]
	public ColorSetting StrapsColor;

	[Token(Token = "0x4000475")]
	[FieldOffset(Offset = "0xD0")]
	public ColorSetting PantsColor;

	[Token(Token = "0x4000476")]
	[FieldOffset(Offset = "0xD8")]
	public ColorSetting JacketColor;

	[Token(Token = "0x4000477")]
	[FieldOffset(Offset = "0xE0")]
	public ColorSetting BootsColor;

	[Token(Token = "0x4000478")]
	[FieldOffset(Offset = "0xE8")]
	public StringSetting HairEffect;

	[Token(Token = "0x4000479")]
	[FieldOffset(Offset = "0xF0")]
	public ColorSetting HairEffectColor;

	[Token(Token = "0x400047A")]
	[FieldOffset(Offset = "0xF8")]
	public StringSetting BladeEffect;

	[Token(Token = "0x400047B")]
	[FieldOffset(Offset = "0x100")]
	public ColorSetting BladeEffectColor;

	[Token(Token = "0x400047C")]
	[FieldOffset(Offset = "0x108")]
	public StringSetting Stats;

	[Token(Token = "0x400047D")]
	[FieldOffset(Offset = "0x110")]
	public StringSetting SkinHair;

	[Token(Token = "0x400047E")]
	[FieldOffset(Offset = "0x118")]
	public StringSetting SkinEye;

	[Token(Token = "0x400047F")]
	[FieldOffset(Offset = "0x120")]
	public StringSetting SkinGlass;

	[Token(Token = "0x4000480")]
	[FieldOffset(Offset = "0x128")]
	public StringSetting SkinFace;

	[Token(Token = "0x4000481")]
	[FieldOffset(Offset = "0x130")]
	public StringSetting SkinSkin;

	[Token(Token = "0x4000482")]
	[FieldOffset(Offset = "0x138")]
	public StringSetting SkinCostume;

	[Token(Token = "0x4000483")]
	[FieldOffset(Offset = "0x140")]
	public StringSetting SkinLogo;

	[Token(Token = "0x4000484")]
	[FieldOffset(Offset = "0x148")]
	public StringSetting SkinGearL;

	[Token(Token = "0x4000485")]
	[FieldOffset(Offset = "0x150")]
	public StringSetting SkinGearR;

	[Token(Token = "0x4000486")]
	[FieldOffset(Offset = "0x158")]
	public StringSetting SkinGas;

	[Token(Token = "0x4000487")]
	[FieldOffset(Offset = "0x160")]
	public StringSetting SkinHoodie;

	[Token(Token = "0x4000488")]
	[FieldOffset(Offset = "0x168")]
	public StringSetting SkinWeaponTrail;

	[Token(Token = "0x4000489")]
	[FieldOffset(Offset = "0x170")]
	public StringSetting SkinHorse;

	[Token(Token = "0x400048A")]
	[FieldOffset(Offset = "0x178")]
	public StringSetting SkinThunderspearL;

	[Token(Token = "0x400048B")]
	[FieldOffset(Offset = "0x180")]
	public StringSetting SkinThunderspearR;

	[Token(Token = "0x400048C")]
	[FieldOffset(Offset = "0x188")]
	public StringSetting SkinHookL;

	[Token(Token = "0x400048D")]
	[FieldOffset(Offset = "0x190")]
	public FloatSetting SkinHookLTiling;

	[Token(Token = "0x400048E")]
	[FieldOffset(Offset = "0x198")]
	public StringSetting SkinHookR;

	[Token(Token = "0x400048F")]
	[FieldOffset(Offset = "0x1A0")]
	public FloatSetting SkinHookRTiling;

	[Token(Token = "0x4000490")]
	[FieldOffset(Offset = "0x1A8")]
	public StringSetting SkinHat;

	[Token(Token = "0x4000491")]
	[FieldOffset(Offset = "0x1B0")]
	public StringSetting SkinHead;

	[Token(Token = "0x4000492")]
	[FieldOffset(Offset = "0x1B8")]
	public StringSetting SkinBack;

	[Token(Token = "0x4000493")]
	[FieldOffset(Offset = "0x1C0")]
	public StringSetting SkinCloak;

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x5A43C60", Offset = "0x5A42C60", VA = "0x5A43C60", Slot = "13")]
	protected override bool Validate()
	{
		// Lifted from source/cpp/Settings/HumanCustomSet.c (Settings.HumanCustomSet$$Validate): clean
		int iVar1;
		int iVar2;
		IntSetting pSVar3;

		pSVar3 = this.Sex;
		if (pSVar3 == null) goto label_05b43d45;
		if (pSVar3._value == 0) {
			pSVar3 = this.Costume;
			if (pSVar3 == null) goto label_05b43d45;
			iVar2 = pSVar3._value;
			if ((typeof(HumanSetup)._2).cctor_finished_or_no_cctor == 0) {
				iVar1 = HumanSetup.CostumeMCount;
			}
			else {
				iVar1 = HumanSetup.CostumeMCount;
			}
			if (iVar1 <= iVar2) {
				return false;
			}
			pSVar3 = this.Sex;
			if (pSVar3 == null) goto label_05b43d45;
		}
		if (pSVar3._value == 1) {
			pSVar3 = this.Costume;
			if (pSVar3 == null) {
	label_05b43d45: ;
				throw new NullReferenceException();
			}
			iVar2 = pSVar3._value;
			if ((typeof(HumanSetup)._2).cctor_finished_or_no_cctor == 0) {
				iVar1 = HumanSetup.CostumeFCount;
			}
			else {
				iVar1 = HumanSetup.CostumeFCount;
			}
			if (iVar1 <= iVar2) {
				return false;
			}
		}
		return true;
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x5A43D50", Offset = "0x5A42D50", VA = "0x5A43D50")]
	public HumanCustomSet()
	{
		// Lifted from source/cpp/Settings/HumanCustomSet.c (Settings.HumanCustomSet$$.ctor): clean
		String pSVar1;
		int iVar2;
		IntSetting pSVar3;
		StringSetting pSVar4;
		BoolSetting __this_00;
		Color255 pUVar5;
		ColorSetting pSVar6;
		FloatSetting pSVar7;
		MethodInfo method_00;
		float fVar8;

		pSVar3.MinValue = -0x80000000;
		pSVar3.MaxValue = 0x7fffffff;
		pSVar3 = new IntSetting();
		pSVar3.MinValue = -0x80000000;
		pSVar3.MaxValue = 0x7fffffff;
		iVar2 = pSVar3.SanitizeValue(0);
		pSVar3.DefaultValue = iVar2;
		pSVar3.SetDefault();
		this.Sex = pSVar3;
		pSVar3.MinValue = -0x80000000;
		pSVar3.MaxValue = 0x7fffffff;
		pSVar3 = new IntSetting();
		pSVar3.MinValue = -0x80000000;
		pSVar3.MaxValue = 0x7fffffff;
		iVar2 = pSVar3.SanitizeValue(0);
		pSVar3.DefaultValue = iVar2;
		pSVar3.SetDefault();
		this.Eye = pSVar3;
		pSVar4 = new StringSetting("FaceNone", 0x7fffffff);
		this.Face = pSVar4;
		pSVar4 = new StringSetting("GlassNone", 0x7fffffff);
		this.Glass = pSVar4;
		pSVar4 = new StringSetting("HairM0", 0x7fffffff);
		this.Hair = pSVar4;
		pSVar3.MinValue = -0x80000000;
		pSVar3.MaxValue = 0x7fffffff;
		pSVar3 = new IntSetting();
		pSVar3.MinValue = -0x80000000;
		pSVar3.MaxValue = 0x7fffffff;
		iVar2 = pSVar3.SanitizeValue(0);
		pSVar3.DefaultValue = iVar2;
		pSVar3.SetDefault();
		this.Costume = pSVar3;
		pSVar3.MinValue = -0x80000000;
		pSVar3.MaxValue = 0x7fffffff;
		pSVar3 = new IntSetting();
		pSVar3.MinValue = -0x80000000;
		pSVar3.MaxValue = 0x7fffffff;
		iVar2 = pSVar3.SanitizeValue(0);
		pSVar3.DefaultValue = iVar2;
		pSVar3.SetDefault();
		this.Boots = pSVar3;
		pSVar3.MinValue = -0x80000000;
		pSVar3.MaxValue = 0x7fffffff;
		pSVar3 = new IntSetting();
		pSVar3.MinValue = -0x80000000;
		pSVar3.MaxValue = 0x7fffffff;
		iVar2 = pSVar3.SanitizeValue(0);
		pSVar3.DefaultValue = iVar2;
		pSVar3.SetDefault();
		this.Cape = pSVar3;
		__this_00 = new BoolSetting(false);
		this.HoodUp = __this_00;
		pSVar3.MinValue = -0x80000000;
		pSVar3.MaxValue = 0x7fffffff;
		pSVar3 = new IntSetting();
		pSVar3.MinValue = -0x80000000;
		pSVar3.MaxValue = 0x7fffffff;
		iVar2 = pSVar3.SanitizeValue(0);
		pSVar3.DefaultValue = iVar2;
		pSVar3.SetDefault();
		this.Logo = pSVar3;
		pSVar4 = new StringSetting("HatNone", 0x7fffffff);
		this.Hat = pSVar4;
		pSVar4 = new StringSetting("HeadNone", 0x7fffffff);
		this.Head = pSVar4;
		pSVar4 = new StringSetting("BackNone", 0x7fffffff);
		this.Back = pSVar4;
		pUVar5 = new Color255(0xff, 0xdc, 0xc4, 0xff);
		pSVar6 = new ColorSetting();
		pSVar6.MinAlpha = 0;
		pUVar5 = pSVar6.SanitizeValue(pUVar5);
		pSVar6.DefaultValue = pUVar5;
		pSVar6.Value = (object)pSVar6.DefaultValue;
		this.SkinColor = pSVar6;
		pUVar5 = new Color255(0x80, 0x80, 0x80, 0xff);
		pSVar6 = new ColorSetting();
		pSVar6.MinAlpha = 0;
		pUVar5 = pSVar6.SanitizeValue(pUVar5);
		pSVar6.DefaultValue = pUVar5;
		pSVar6.Value = (object)pSVar6.DefaultValue;
		this.HairColor = pSVar6;
		pUVar5 = new Color255(0xff, 0xff, 0xff, 0xff);
		pSVar6 = new ColorSetting();
		pSVar6.MinAlpha = 0;
		pUVar5 = pSVar6.SanitizeValue(pUVar5);
		pSVar6.DefaultValue = pUVar5;
		pSVar6.Value = (object)pSVar6.DefaultValue;
		this.ShirtColor = pSVar6;
		pUVar5 = new Color255(0x62, 0x51, 0x41, 0xff);
		pSVar6 = new ColorSetting();
		pSVar6.MinAlpha = 0;
		pUVar5 = pSVar6.SanitizeValue(pUVar5);
		pSVar6.DefaultValue = pUVar5;
		pSVar6.Value = (object)pSVar6.DefaultValue;
		this.StrapsColor = pSVar6;
		pUVar5 = new Color255(0xff, 0xff, 0xff, 0xff);
		pSVar6 = new ColorSetting();
		pSVar6.MinAlpha = 0;
		pUVar5 = pSVar6.SanitizeValue(pUVar5);
		pSVar6.DefaultValue = pUVar5;
		pSVar6.Value = (object)pSVar6.DefaultValue;
		this.PantsColor = pSVar6;
		pUVar5 = new Color255(0xb7, 0x90, 0x6b, 0xff);
		pSVar6 = new ColorSetting();
		pSVar6.MinAlpha = 0;
		pUVar5 = pSVar6.SanitizeValue(pUVar5);
		pSVar6.DefaultValue = pUVar5;
		pSVar6.Value = (object)pSVar6.DefaultValue;
		this.JacketColor = pSVar6;
		pUVar5 = new Color255(0x31, 0x24, 0x21, 0xff);
		pSVar6 = new ColorSetting();
		pSVar6.MinAlpha = 0;
		pUVar5 = pSVar6.SanitizeValue(pUVar5);
		pSVar6.DefaultValue = pUVar5;
		pSVar6.Value = (object)pSVar6.DefaultValue;
		this.BootsColor = pSVar6;
		pSVar4 = new StringSetting("None", 0x7fffffff);
		this.HairEffect = pSVar4;
		pUVar5 = new Color255(0, 0xff, 0xff, 0xff);
		pSVar6 = new ColorSetting();
		pSVar6.MinAlpha = 0;
		pUVar5 = pSVar6.SanitizeValue(pUVar5);
		pSVar6.DefaultValue = pUVar5;
		pSVar6.Value = (object)pSVar6.DefaultValue;
		this.HairEffectColor = pSVar6;
		pSVar4 = new StringSetting("None", 0x7fffffff);
		this.BladeEffect = pSVar4;
		pUVar5 = new Color255(0, 0xff, 0xff, 0xff);
		pSVar6 = new ColorSetting();
		pSVar6.MinAlpha = 0;
		pUVar5 = pSVar6.SanitizeValue(pUVar5);
		pSVar6.DefaultValue = pUVar5;
		pSVar6.Value = (object)pSVar6.DefaultValue;
		this.BladeEffectColor = pSVar6;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 0x7fffffff);
		this.Stats = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 200);
		this.SkinHair = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 200);
		this.SkinEye = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 200);
		this.SkinGlass = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 200);
		this.SkinFace = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 200);
		this.SkinSkin = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 200);
		this.SkinCostume = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 200);
		this.SkinLogo = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 200);
		this.SkinGearL = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 200);
		this.SkinGearR = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 200);
		this.SkinGas = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 200);
		this.SkinHoodie = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 200);
		this.SkinWeaponTrail = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 200);
		this.SkinHorse = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 200);
		this.SkinThunderspearL = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 200);
		this.SkinThunderspearR = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 200);
		this.SkinHookL = pSVar4;
		pSVar7.MinValue = -3.4028235e+38;
		pSVar7.MaxValue = 3.4028235e+38;
		pSVar7 = new FloatSetting();
		pSVar7.MinValue = -3.4028235e+38;
		pSVar7.MaxValue = 3.4028235e+38;
		fVar8 = pSVar7.SanitizeValue(1.0);
		pSVar7.DefaultValue = fVar8;
		pSVar7.SetDefault();
		this.SkinHookLTiling = pSVar7;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 200);
		this.SkinHookR = pSVar4;
		pSVar7.MinValue = -3.4028235e+38;
		pSVar7.MaxValue = 3.4028235e+38;
		pSVar7 = new FloatSetting();
		pSVar7.MinValue = -3.4028235e+38;
		pSVar7.MaxValue = 3.4028235e+38;
		fVar8 = pSVar7.SanitizeValue(1.0);
		pSVar7.DefaultValue = fVar8;
		pSVar7.SetDefault();
		this.SkinHookRTiling = pSVar7;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 200);
		this.SkinHat = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 200);
		this.SkinHead = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 200);
		this.SkinBack = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		method_00 = new StringSetting(pSVar1, 200);
		this.SkinCloak = (StringSetting)method_00;
		base();
		return;
	}
}
