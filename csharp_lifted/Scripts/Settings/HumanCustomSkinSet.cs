// ==================== AoTTG2 cross-reference ====================
// Type: Settings.HumanCustomSkinSet
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/HumanCustomSkinSet.c
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/HumanCustomSkinSet.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000A1")]
internal class HumanCustomSkinSet : BaseSetSetting
{
	[Token(Token = "0x4000348")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting Hair;

	[Token(Token = "0x4000349")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting Eye;

	[Token(Token = "0x400034A")]
	[FieldOffset(Offset = "0x58")]
	public StringSetting Glass;

	[Token(Token = "0x400034B")]
	[FieldOffset(Offset = "0x60")]
	public StringSetting Face;

	[Token(Token = "0x400034C")]
	[FieldOffset(Offset = "0x68")]
	public StringSetting Skin;

	[Token(Token = "0x400034D")]
	[FieldOffset(Offset = "0x70")]
	public StringSetting Costume;

	[Token(Token = "0x400034E")]
	[FieldOffset(Offset = "0x78")]
	public StringSetting Logo;

	[Token(Token = "0x400034F")]
	[FieldOffset(Offset = "0x80")]
	public StringSetting GearL;

	[Token(Token = "0x4000350")]
	[FieldOffset(Offset = "0x88")]
	public StringSetting GearR;

	[Token(Token = "0x4000351")]
	[FieldOffset(Offset = "0x90")]
	public StringSetting Gas;

	[Token(Token = "0x4000352")]
	[FieldOffset(Offset = "0x98")]
	public StringSetting Hoodie;

	[Token(Token = "0x4000353")]
	[FieldOffset(Offset = "0xA0")]
	public StringSetting WeaponTrail;

	[Token(Token = "0x4000354")]
	[FieldOffset(Offset = "0xA8")]
	public StringSetting Horse;

	[Token(Token = "0x4000355")]
	[FieldOffset(Offset = "0xB0")]
	public StringSetting ThunderspearL;

	[Token(Token = "0x4000356")]
	[FieldOffset(Offset = "0xB8")]
	public StringSetting ThunderspearR;

	[Token(Token = "0x4000357")]
	[FieldOffset(Offset = "0xC0")]
	public StringSetting HookL;

	[Token(Token = "0x4000358")]
	[FieldOffset(Offset = "0xC8")]
	public FloatSetting HookLTiling;

	[Token(Token = "0x4000359")]
	[FieldOffset(Offset = "0xD0")]
	public StringSetting HookR;

	[Token(Token = "0x400035A")]
	[FieldOffset(Offset = "0xD8")]
	public FloatSetting HookRTiling;

	[Token(Token = "0x400035B")]
	[FieldOffset(Offset = "0xE0")]
	public StringSetting Hat;

	[Token(Token = "0x400035C")]
	[FieldOffset(Offset = "0xE8")]
	public StringSetting Head;

	[Token(Token = "0x400035D")]
	[FieldOffset(Offset = "0xF0")]
	public StringSetting Back;

	[Token(Token = "0x400035E")]
	[FieldOffset(Offset = "0xF8")]
	public StringSetting Cloak;

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x58D1B60", Offset = "0x58D0B60", VA = "0x58D1B60")]
	public HumanCustomSkinSet()
	{
		// Lifted from source/cpp/Settings/HumanCustomSkinSet.c (Settings.HumanCustomSkinSet$$.ctor): clean
		String pSVar1;
		StringSetting pSVar2;
		FloatSetting pSVar3;

		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.Hair = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.Eye = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.Glass = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.Face = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.Skin = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.Costume = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.Logo = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.GearL = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.GearR = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.Gas = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.Hoodie = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.WeaponTrail = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.Horse = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.ThunderspearL = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.ThunderspearR = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.HookL = pSVar2;
		pSVar3 = new FloatSetting(1.0, -3.4028235e+38, 3.4028235e+38);
		this.HookLTiling = pSVar3;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.HookR = pSVar2;
		pSVar3 = new FloatSetting(1.0, -3.4028235e+38, 3.4028235e+38);
		this.HookRTiling = pSVar3;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.Hat = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.Head = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.Back = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.Cloak = pSVar2;
		base();
		return;
	}
}
