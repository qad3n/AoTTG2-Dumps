// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameCharacterSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InGameCharacterSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameCharacterSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000DD")]
internal class InGameCharacterSettings : BaseSettingsContainer
{
	[Token(Token = "0x400049F")]
	[FieldOffset(Offset = "0x30")]
	public IntSetting ChooseStatus;

	[Token(Token = "0x40004A0")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting CharacterType;

	[Token(Token = "0x40004A1")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting Loadout;

	[Token(Token = "0x40004A2")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting Special;

	[Token(Token = "0x40004A3")]
	[FieldOffset(Offset = "0x50")]
	public IntSetting CustomSet;

	[Token(Token = "0x40004A4")]
	[FieldOffset(Offset = "0x58")]
	public IntSetting Costume;

	[Token(Token = "0x40004A5")]
	[FieldOffset(Offset = "0x60")]
	public StringSetting Team;

	[Token(Token = "0x600051B")]
	[Address(RVA = "0x5A46AF0", Offset = "0x5A45AF0", VA = "0x5A46AF0")]
	public void CopyHumanChoices(InGameCharacterSettings source)
	{
		// Lifted from source/cpp/Settings/InGameCharacterSettings.c (Settings.InGameCharacterSettings$$CopyHumanChoices): clean
		IntSetting pSVar1;
		IntSetting pSVar2;
		StringSetting pSVar3;
		StringSetting pSVar4;

		if (((source != null) &&(pSVar1 = source.CustomSet, pSVar1 != null)) &&(pSVar2 = this.CustomSet, pSVar2 != null)) {
			pSVar2.Value = pSVar1._value;
			pSVar1 = source.Costume;
			if ((pSVar1 != null) &&(pSVar2 = this.Costume, pSVar2 != null)) {
				pSVar2.Value = pSVar1._value;
				pSVar3 = source.Loadout;
				if ((pSVar3 != null) &&(pSVar4 = this.Loadout, pSVar4 != null)) {
					pSVar4.Value = (object)pSVar3._value;
					pSVar3 = source.Special;
					if ((pSVar3 != null) &&(pSVar4 = this.Special, pSVar4 != null)) {
						pSVar4.Value = (object)pSVar3._value;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600051C")]
	[Address(RVA = "0x5A46BE0", Offset = "0x5A45BE0", VA = "0x5A46BE0")]
	public InGameCharacterSettings()
	{
		// Lifted from source/cpp/Settings/InGameCharacterSettings.c (Settings.InGameCharacterSettings$$.ctor): clean
		String pSVar1;
		int iVar2;
		IntSetting pSVar3;
		StringSetting pSVar4;
		MethodInfo method_00;

		pSVar3.MinValue = -0x80000000;
		pSVar3.MaxValue = 0x7fffffff;
		pSVar3 = new IntSetting();
		pSVar3.MinValue = -0x80000000;
		pSVar3.MaxValue = 0x7fffffff;
		iVar2 = pSVar3.SanitizeValue(0);
		pSVar3.DefaultValue = iVar2;
		pSVar3.SetDefault();
		this.ChooseStatus = pSVar3;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 0x7fffffff);
		this.CharacterType = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 0x7fffffff);
		this.Loadout = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 0x7fffffff);
		this.Special = pSVar4;
		pSVar3.MinValue = -0x80000000;
		pSVar3.MaxValue = 0x7fffffff;
		pSVar3 = new IntSetting();
		pSVar3.MinValue = -0x80000000;
		pSVar3.MaxValue = 0x7fffffff;
		iVar2 = pSVar3.SanitizeValue(0);
		pSVar3.DefaultValue = iVar2;
		pSVar3.SetDefault();
		this.CustomSet = pSVar3;
		pSVar3.MinValue = -0x80000000;
		pSVar3.MaxValue = 0x7fffffff;
		pSVar3 = new IntSetting();
		pSVar3.MinValue = -0x80000000;
		pSVar3.MaxValue = 0x7fffffff;
		iVar2 = pSVar3.SanitizeValue(0);
		pSVar3.DefaultValue = iVar2;
		pSVar3.SetDefault();
		this.Costume = pSVar3;
		method_00 = new StringSetting("Blue", 0x7fffffff);
		this.Team = (StringSetting)method_00;
		base();
		return;
	}
}
