// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ErenShifterInputSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/ErenShifterInputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/ErenShifterInputSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000F0")]
internal class ErenShifterInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000543")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting Kick;

	[Token(Token = "0x4000544")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting Jump;

	[Token(Token = "0x4000545")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting Walk;

	[Token(Token = "0x4000546")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting AttackCombo;

	[Token(Token = "0x170000B8")]
	protected override string FileName
	{
		[Token(Token = "0x6000539")]
		[Address(RVA = "0x5A4B8F0", Offset = "0x5A4A8F0", VA = "0x5A4B8F0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Settings/ErenShifterInputSettings.c (Settings.ErenShifterInputSettings$$get_FileName): clean
			return "ErenShifterInput.json";
		}
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x5A4B920", Offset = "0x5A4A920", VA = "0x5A4B920")]
	public ErenShifterInputSettings()
	{
		// Lifted from source/cpp/Settings/ErenShifterInputSettings.c (Settings.ErenShifterInputSettings$$.ctor): clean
		String[] pSVar1;
		KeybindSetting pSVar2;

		pSVar1 = (String[])new string[2];
		if (pSVar1 == null) {
	label_05b4bbc8: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar1.Length != 0) {
			pSVar1[0] = "LeftControl";
			if ((pSVar1.Length & 0xfffffffe) != 0) {
				pSVar1[1] = "None";
				pSVar2 = new KeybindSetting(pSVar1);
				this.Kick = pSVar2;
				pSVar1 = (String[])new string[2];
				if (pSVar1 == null) goto label_05b4bbc8;
				if ((int)pSVar1.Length != 0) {
					pSVar1[0] = "Space";
					if ((pSVar1.Length & 0xfffffffe) != 0) {
						pSVar1[1] = "None";
						pSVar2 = new KeybindSetting(pSVar1);
						this.Jump = pSVar2;
						pSVar1 = (String[])new string[2];
						if (pSVar1 == null) goto label_05b4bbc8;
						if ((int)pSVar1.Length != 0) {
							pSVar1[0] = "LeftAlt";
							if ((pSVar1.Length & 0xfffffffe) != 0) {
								pSVar1[1] = "None";
								pSVar2 = new KeybindSetting(pSVar1);
								this.Walk = pSVar2;
								pSVar1 = (String[])new string[2];
								if (pSVar1 == null) goto label_05b4bbc8;
								if ((int)pSVar1.Length != 0) {
									pSVar1[0] = "Mouse0";
									if ((pSVar1.Length & 0xfffffffe) != 0) {
										pSVar1[1] = "None";
										pSVar2 = new KeybindSetting(pSVar1);
										this.AttackCombo = pSVar2;
										base();
										return;
									}
								}
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}
}
