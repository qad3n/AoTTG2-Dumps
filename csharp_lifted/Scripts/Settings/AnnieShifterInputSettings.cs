// ==================== AoTTG2 cross-reference ====================
// Type: Settings.AnnieShifterInputSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/AnnieShifterInputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/AnnieShifterInputSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000EF")]
internal class AnnieShifterInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000535")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting Kick;

	[Token(Token = "0x4000536")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting Jump;

	[Token(Token = "0x4000537")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting Walk;

	[Token(Token = "0x4000538")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting AttackCombo;

	[Token(Token = "0x4000539")]
	[FieldOffset(Offset = "0x58")]
	public KeybindSetting AttackSwing;

	[Token(Token = "0x400053A")]
	[FieldOffset(Offset = "0x60")]
	public KeybindSetting AttackStomp;

	[Token(Token = "0x400053B")]
	[FieldOffset(Offset = "0x68")]
	public KeybindSetting AttackBite;

	[Token(Token = "0x400053C")]
	[FieldOffset(Offset = "0x70")]
	public KeybindSetting AttackHead;

	[Token(Token = "0x400053D")]
	[FieldOffset(Offset = "0x78")]
	public KeybindSetting AttackBrushBack;

	[Token(Token = "0x400053E")]
	[FieldOffset(Offset = "0x80")]
	public KeybindSetting AttackBrushFront;

	[Token(Token = "0x400053F")]
	[FieldOffset(Offset = "0x88")]
	public KeybindSetting AttackBrushHead;

	[Token(Token = "0x4000540")]
	[FieldOffset(Offset = "0x90")]
	public KeybindSetting AttackGrabBottom;

	[Token(Token = "0x4000541")]
	[FieldOffset(Offset = "0x98")]
	public KeybindSetting AttackGrabMid;

	[Token(Token = "0x4000542")]
	[FieldOffset(Offset = "0xA0")]
	public KeybindSetting AttackGrabUp;

	[Token(Token = "0x170000B7")]
	protected override string FileName
	{
		[Token(Token = "0x6000537")]
		[Address(RVA = "0x5A4AFC0", Offset = "0x5A49FC0", VA = "0x5A4AFC0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Settings/AnnieShifterInputSettings.c (Settings.AnnieShifterInputSettings$$get_FileName): clean
			return "AnnieShifterInput.json";
		}
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x5A4AFF0", Offset = "0x5A49FF0", VA = "0x5A4AFF0")]
	public AnnieShifterInputSettings()
	{
		// Lifted from source/cpp/Settings/AnnieShifterInputSettings.c (Settings.AnnieShifterInputSettings$$.ctor): 5 lines keep C-only constructs
		String[] pSVar1;
		KeybindSetting pSVar2;

		pSVar1 = (String[])new string[2];
		if (pSVar1 == null) {
	label_05b4b7f6: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar1.Length != 0) {
			pSVar1[0] = "LeftControl";
			if ((pSVar1.Length & 0xfffffffe) != 0) {
				pSVar1[1] = "None";
				pSVar2 = new KeybindSetting(pSVar1);
				this.Kick = pSVar2;
				pSVar1 = (String[])new string[2];
				if (pSVar1 == null) goto label_05b4b7f6;
				if ((int)pSVar1.Length != 0) {
					pSVar1[0] = "Space";
					if ((pSVar1.Length & 0xfffffffe) != 0) {
						pSVar1[1] = "None";
						pSVar2 = new KeybindSetting(pSVar1);
						this.Jump = pSVar2;
						pSVar1 = (String[])new string[2];
						if (pSVar1 == null) goto label_05b4b7f6;
						if ((int)pSVar1.Length != 0) {
							pSVar1[0] = "LeftAlt";
							if ((pSVar1.Length & 0xfffffffe) != 0) {
								pSVar1[1] = "None";
								pSVar2 = new KeybindSetting(pSVar1);
								this.Walk = pSVar2;
								pSVar1 = (String[])new string[2];
								if (pSVar1 == null) goto label_05b4b7f6;
								if ((int)pSVar1.Length != 0) {
									pSVar1[0] = "Mouse0";
									if ((pSVar1.Length & 0xfffffffe) != 0) {
										pSVar1[1] = "None";
										pSVar2 = new KeybindSetting(pSVar1);
										this.AttackCombo = pSVar2;
										pSVar1 = (String[])new string[2];
										if (pSVar1 == null) goto label_05b4b7f6;
										if ((int)pSVar1.Length != 0) {
											pSVar1[0] = "Mouse1";
											if ((pSVar1.Length & 0xfffffffe) != 0) {
												pSVar1[1] = "None";
												pSVar2 = new KeybindSetting(pSVar1);
												this.AttackSwing = pSVar2;
												pSVar1 = (String[])new string[2];
												if (pSVar1 == null) goto label_05b4b7f6;
												if ((int)pSVar1.Length != 0) {
													pSVar1[0] = "Q";
													if ((pSVar1.Length & 0xfffffffe) != 0) {
														pSVar1[1] = "None";
														pSVar2 = new KeybindSetting(pSVar1);
														this.AttackStomp = pSVar2;
														pSVar1 = (String[])new string[2];
														if (pSVar1 == null) goto label_05b4b7f6;
														if ((int)pSVar1.Length != 0) {
															pSVar1[0] = "E";
															if ((pSVar1.Length & 0xfffffffe) != 0) {
																pSVar1[1] = "None";
																pSVar2 = new KeybindSetting(pSVar1);
																this.AttackBite = pSVar2;
																pSVar1 = (String[])new string[2];
																if (pSVar1 == null) goto label_05b4b7f6;
																if ((int)pSVar1.Length != 0) {
																	pSVar1[0] = "Alpha1";
																	if ((pSVar1.Length & 0xfffffffe) != 0) {
																		pSVar1[1] = "None";
																		pSVar2 = new KeybindSetting(pSVar1);
																		this.AttackHead = pSVar2;
																		pSVar1 = (String[])new string[2];
																		if (pSVar1 == null) goto label_05b4b7f6;
																		if ((int)pSVar1.Length != 0) {
																			pSVar1[0] = "Alpha2";
																			if ((pSVar1.Length & 0xfffffffe) != 0) {
																				pSVar1[1] = "None";
																				pSVar2 = new KeybindSetting(pSVar1);
																				this.AttackBrushBack = pSVar2;
																				pSVar1 = (String[])new string[2];
																				if (pSVar1 == null) goto label_05b4b7f6;
																				if ((int)pSVar1.Length != 0) {
																					pSVar1[0] = "None";
																					if ((pSVar1.Length & 0xfffffffe) != 0) {
																						pSVar1[1] = "None";
																						pSVar2 = il2cpp_codegen_object_new(typeof(KeybindSetting)) ;
																						pSVar2 = new KeybindSetting(pSVar1);
																						this.AttackBrushFront = pSVar2;
																						pSVar1 = (String[])new string[2];
																						if (pSVar1 == null) goto label_05b4b7f6;
																						if ((int)pSVar1.Length != 0) {
																							pSVar1[0] = "None";
																							if ((pSVar1.Length & 0xfffffffe) != 0) {
																								pSVar1[1] = "None";
																								pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																								pSVar2 = new KeybindSetting(pSVar1);
																								this.AttackBrushHead = pSVar2;
																								pSVar1 = (String[])new string[2];
																								if (pSVar1 == null) goto label_05b4b7f6;
																								if ((int)pSVar1.Length != 0) {
																									pSVar1[0] = "None";
																									if ((pSVar1.Length & 0xfffffffe) != 0) {
																										pSVar1[1] = "None";
																										pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																										pSVar2 = new KeybindSetting(pSVar1);
																										this.AttackGrabBottom = pSVar2;
																										pSVar1 = (String[])new string[2];
																										if (pSVar1 == null) goto label_05b4b7f6;
																										if ((int)pSVar1.Length != 0) {
																											pSVar1[0] = "None";
																											if ((pSVar1.Length & 0xfffffffe) != 0) {
																												pSVar1[1] = "None";
																												pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1);
																												this.AttackGrabMid = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4b7f6;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "None";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																														pSVar2 = new KeybindSetting(pSVar1);
																														this.AttackGrabUp = pSVar2;
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
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
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
