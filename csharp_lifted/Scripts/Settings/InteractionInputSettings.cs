// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InteractionInputSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InteractionInputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/InteractionInputSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000F5")]
internal class InteractionInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000588")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting Interact;

	[Token(Token = "0x4000589")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting Interact2;

	[Token(Token = "0x400058A")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting Interact3;

	[Token(Token = "0x400058B")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting ItemMenu;

	[Token(Token = "0x400058C")]
	[FieldOffset(Offset = "0x58")]
	public KeybindSetting ActionMenu;

	[Token(Token = "0x400058D")]
	[FieldOffset(Offset = "0x60")]
	public KeybindSetting EmoteMenu;

	[Token(Token = "0x400058E")]
	[FieldOffset(Offset = "0x68")]
	public KeybindSetting MenuNext;

	[Token(Token = "0x400058F")]
	[FieldOffset(Offset = "0x70")]
	public KeybindSetting QuickSelect1;

	[Token(Token = "0x4000590")]
	[FieldOffset(Offset = "0x78")]
	public KeybindSetting QuickSelect2;

	[Token(Token = "0x4000591")]
	[FieldOffset(Offset = "0x80")]
	public KeybindSetting QuickSelect3;

	[Token(Token = "0x4000592")]
	[FieldOffset(Offset = "0x88")]
	public KeybindSetting QuickSelect4;

	[Token(Token = "0x4000593")]
	[FieldOffset(Offset = "0x90")]
	public KeybindSetting QuickSelect5;

	[Token(Token = "0x4000594")]
	[FieldOffset(Offset = "0x98")]
	public KeybindSetting QuickSelect6;

	[Token(Token = "0x4000595")]
	[FieldOffset(Offset = "0xA0")]
	public KeybindSetting QuickSelect7;

	[Token(Token = "0x4000596")]
	[FieldOffset(Offset = "0xA8")]
	public KeybindSetting QuickSelect8;

	[Token(Token = "0x4000597")]
	[FieldOffset(Offset = "0xB0")]
	public KeybindSetting Function1;

	[Token(Token = "0x4000598")]
	[FieldOffset(Offset = "0xB8")]
	public KeybindSetting Function2;

	[Token(Token = "0x4000599")]
	[FieldOffset(Offset = "0xC0")]
	public KeybindSetting Function3;

	[Token(Token = "0x400059A")]
	[FieldOffset(Offset = "0xC8")]
	public KeybindSetting Function4;

	[Token(Token = "0x170000BC")]
	protected override string FileName
	{
		[Token(Token = "0x6000541")]
		[Address(RVA = "0x5A50ED0", Offset = "0x5A4FED0", VA = "0x5A50ED0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Settings/InteractionInputSettings.c (Settings.InteractionInputSettings$$get_FileName): clean
			return "InteractionInput.json";
		}
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x5A4ED40", Offset = "0x5A4DD40", VA = "0x5A4ED40")]
	public InteractionInputSettings()
	{
		// Lifted from source/cpp/Settings/InteractionInputSettings.c (Settings.InteractionInputSettings$$.ctor): 10 lines keep C-only constructs
		String[] pSVar1;
		KeybindSetting pSVar2;

		pSVar1 = (String[])new string[2];
		if (pSVar1 == null) {
	label_05b4f889: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar1.Length != 0) {
			pSVar1[0] = "G";
			if ((pSVar1.Length & 0xfffffffe) != 0) {
				pSVar1[1] = "None";
				pSVar2 = new KeybindSetting(pSVar1);
				this.Interact = pSVar2;
				pSVar1 = (String[])new string[2];
				if (pSVar1 == null) goto label_05b4f889;
				if ((int)pSVar1.Length != 0) {
					pSVar1[0] = "H";
					if ((pSVar1.Length & 0xfffffffe) != 0) {
						pSVar1[1] = "None";
						pSVar2 = new KeybindSetting(pSVar1);
						this.Interact2 = pSVar2;
						pSVar1 = (String[])new string[2];
						if (pSVar1 == null) goto label_05b4f889;
						if ((int)pSVar1.Length != 0) {
							pSVar1[0] = "J";
							if ((pSVar1.Length & 0xfffffffe) != 0) {
								pSVar1[1] = "None";
								pSVar2 = new KeybindSetting(pSVar1);
								this.Interact3 = pSVar2;
								pSVar1 = (String[])new string[2];
								if (pSVar1 == null) goto label_05b4f889;
								if ((int)pSVar1.Length != 0) {
									pSVar1[0] = "F";
									if ((pSVar1.Length & 0xfffffffe) != 0) {
										pSVar1[1] = "None";
										pSVar2 = new KeybindSetting(pSVar1);
										this.ItemMenu = pSVar2;
										pSVar1 = (String[])new string[2];
										if (pSVar1 == null) goto label_05b4f889;
										if ((int)pSVar1.Length != 0) {
											pSVar1[0] = "B";
											if ((pSVar1.Length & 0xfffffffe) != 0) {
												pSVar1[1] = "None";
												pSVar2 = new KeybindSetting(pSVar1);
												this.ActionMenu = pSVar2;
												pSVar1 = (String[])new string[2];
												if (pSVar1 == null) goto label_05b4f889;
												if ((int)pSVar1.Length != 0) {
													pSVar1[0] = "N";
													if ((pSVar1.Length & 0xfffffffe) != 0) {
														pSVar1[1] = "None";
														pSVar2 = new KeybindSetting(pSVar1);
														this.EmoteMenu = pSVar2;
														pSVar1 = (String[])new string[2];
														if (pSVar1 == null) goto label_05b4f889;
														if ((int)pSVar1.Length != 0) {
															pSVar1[0] = "Space";
															if ((pSVar1.Length & 0xfffffffe) != 0) {
																pSVar1[1] = "None";
																pSVar2 = new KeybindSetting(pSVar1);
																this.MenuNext = pSVar2;
																pSVar1 = (String[])new string[2];
																if (pSVar1 == null) goto label_05b4f889;
																if ((int)pSVar1.Length != 0) {
																	pSVar1[0] = "Alpha1";
																	if ((pSVar1.Length & 0xfffffffe) != 0) {
																		pSVar1[1] = "None";
																		pSVar2 = new KeybindSetting(pSVar1);
																		this.QuickSelect1 = pSVar2;
																		pSVar1 = (String[])new string[2];
																		if (pSVar1 == null) goto label_05b4f889;
																		if ((int)pSVar1.Length != 0) {
																			pSVar1[0] = "Alpha2";
																			if ((pSVar1.Length & 0xfffffffe) != 0) {
																				pSVar1[1] = "None";
																				pSVar2 = new KeybindSetting(pSVar1);
																				this.QuickSelect2 = pSVar2;
																				pSVar1 = (String[])new string[2];
																				if (pSVar1 == null) goto label_05b4f889;
																				if ((int)pSVar1.Length != 0) {
																					pSVar1[0] = "Alpha3";
																					if ((pSVar1.Length & 0xfffffffe) != 0) {
																						pSVar1[1] = "None";
																						pSVar2 = il2cpp_codegen_object_new(typeof(KeybindSetting)) ;
																						pSVar2 = new KeybindSetting(pSVar1);
																						this.QuickSelect3 = pSVar2;
																						pSVar1 = (String[])new string[2];
																						if (pSVar1 == null) goto label_05b4f889;
																						if ((int)pSVar1.Length != 0) {
																							pSVar1[0] = "Alpha4";
																							if ((pSVar1.Length & 0xfffffffe) != 0) {
																								pSVar1[1] = "None";
																								pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																								pSVar2 = new KeybindSetting(pSVar1);
																								this.QuickSelect4 = pSVar2;
																								pSVar1 = (String[])new string[2];
																								if (pSVar1 == null) goto label_05b4f889;
																								if ((int)pSVar1.Length != 0) {
																									pSVar1[0] = "Alpha5";
																									if ((pSVar1.Length & 0xfffffffe) != 0) {
																										pSVar1[1] = "None";
																										pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																										pSVar2 = new KeybindSetting(pSVar1);
																										this.QuickSelect5 = pSVar2;
																										pSVar1 = (String[])new string[2];
																										if (pSVar1 == null) goto label_05b4f889;
																										if ((int)pSVar1.Length != 0) {
																											pSVar1[0] = "Alpha6";
																											if ((pSVar1.Length & 0xfffffffe) != 0) {
																												pSVar1[1] = "None";
																												pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1);
																												this.QuickSelect6 = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4f889;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "Alpha7";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																														pSVar2 = new KeybindSetting(pSVar1);
																														this.QuickSelect7 = pSVar2;
																														pSVar1 = (String[])new string[2];
																														if (pSVar1 == null) goto label_05b4f889;
																														if ((int)pSVar1.Length != 0) {
																															pSVar1[0] = "Alpha8";
																															if ((pSVar1.Length & 0xfffffffe) != 0) {
																																pSVar1[1] = "None";
																																pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.QuickSelect8 = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4f889;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "F1";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.Function1 = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4f889;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "F2";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.Function2 = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4f889;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "F3";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.Function3 = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4f889;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "F4";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.Function4 = pSVar2;
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
