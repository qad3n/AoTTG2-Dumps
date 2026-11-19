// ==================== AoTTG2 cross-reference ====================
// Type: Settings.GeneralInputSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/GeneralInputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/GeneralInputSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000F1")]
internal class GeneralInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000547")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting Forward;

	[Token(Token = "0x4000548")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting Back;

	[Token(Token = "0x4000549")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting Left;

	[Token(Token = "0x400054A")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting Right;

	[Token(Token = "0x400054B")]
	[FieldOffset(Offset = "0x58")]
	public KeybindSetting Up;

	[Token(Token = "0x400054C")]
	[FieldOffset(Offset = "0x60")]
	public KeybindSetting Down;

	[Token(Token = "0x400054D")]
	[FieldOffset(Offset = "0x68")]
	public KeybindSetting Modifier;

	[Token(Token = "0x400054E")]
	[FieldOffset(Offset = "0x70")]
	public KeybindSetting Autorun;

	[Token(Token = "0x400054F")]
	[FieldOffset(Offset = "0x78")]
	public KeybindSetting Pause;

	[Token(Token = "0x4000550")]
	[FieldOffset(Offset = "0x80")]
	public KeybindSetting ChangeCharacter;

	[Token(Token = "0x4000551")]
	[FieldOffset(Offset = "0x88")]
	public KeybindSetting RestartGame;

	[Token(Token = "0x4000552")]
	[FieldOffset(Offset = "0x90")]
	public KeybindSetting ToggleScoreboard;

	[Token(Token = "0x4000553")]
	[FieldOffset(Offset = "0x98")]
	public KeybindSetting ToggleMap;

	[Token(Token = "0x4000554")]
	[FieldOffset(Offset = "0xA0")]
	public KeybindSetting Chat;

	[Token(Token = "0x4000555")]
	[FieldOffset(Offset = "0xA8")]
	public KeybindSetting PushToTalk;

	[Token(Token = "0x4000556")]
	[FieldOffset(Offset = "0xB0")]
	public KeybindSetting ChangeCamera;

	[Token(Token = "0x4000557")]
	[FieldOffset(Offset = "0xB8")]
	public KeybindSetting RotateWOWCamera;

	[Token(Token = "0x4000558")]
	[FieldOffset(Offset = "0xC0")]
	public KeybindSetting ZoomIn;

	[Token(Token = "0x4000559")]
	[FieldOffset(Offset = "0xC8")]
	public KeybindSetting ZoomOut;

	[Token(Token = "0x400055A")]
	[FieldOffset(Offset = "0xD0")]
	public KeybindSetting HideCursor;

	[Token(Token = "0x400055B")]
	[FieldOffset(Offset = "0xD8")]
	public KeybindSetting HideChat;

	[Token(Token = "0x400055C")]
	[FieldOffset(Offset = "0xE0")]
	public KeybindSetting SpectatePreviousPlayer;

	[Token(Token = "0x400055D")]
	[FieldOffset(Offset = "0xE8")]
	public KeybindSetting SpectateNextPlayer;

	[Token(Token = "0x400055E")]
	[FieldOffset(Offset = "0xF0")]
	public KeybindSetting SkipCutscene;

	[Token(Token = "0x400055F")]
	[FieldOffset(Offset = "0xF8")]
	public BoolSetting TapScoreboard;

	[Token(Token = "0x4000560")]
	[FieldOffset(Offset = "0x100")]
	public BoolSetting TapMap;

	[Token(Token = "0x4000561")]
	[FieldOffset(Offset = "0x108")]
	public KeybindSetting HideUI;

	[Token(Token = "0x4000562")]
	[FieldOffset(Offset = "0x110")]
	public KeybindSetting DebugWindow;

	[Token(Token = "0x4000563")]
	[FieldOffset(Offset = "0x118")]
	public KeybindSetting OpenSearchPalette;

	[Token(Token = "0x4000564")]
	[FieldOffset(Offset = "0x120")]
	public KeybindSetting OpenCurrentScreenSearch;

	[Token(Token = "0x170000B9")]
	protected override string FileName
	{
		[Token(Token = "0x600053B")]
		[Address(RVA = "0x5A4BBD0", Offset = "0x5A4ABD0", VA = "0x5A4BBD0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Settings/GeneralInputSettings.c (Settings.GeneralInputSettings$$get_FileName): clean
			return "GeneralInput.json";
		}
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x5A4BC00", Offset = "0x5A4AC00", VA = "0x5A4BC00")]
	public GeneralInputSettings()
	{
		// Lifted from source/cpp/Settings/GeneralInputSettings.c (Settings.GeneralInputSettings$$.ctor): 23 lines keep C-only constructs
		String[] pSVar1;
		KeybindSetting pSVar2;
		BoolSetting pSVar3;

		pSVar1 = (String[])new string[2];
		if (pSVar1 == null) {
	label_05b4cd67: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar1.Length != 0) {
			pSVar1[0] = "W";
			if ((pSVar1.Length & 0xfffffffe) != 0) {
				pSVar1[1] = "None";
				pSVar2 = new KeybindSetting(pSVar1);
				this.Forward = pSVar2;
				pSVar1 = (String[])new string[2];
				if (pSVar1 == null) goto label_05b4cd67;
				if ((int)pSVar1.Length != 0) {
					pSVar1[0] = "S";
					if ((pSVar1.Length & 0xfffffffe) != 0) {
						pSVar1[1] = "None";
						pSVar2 = new KeybindSetting(pSVar1);
						this.Back = pSVar2;
						pSVar1 = (String[])new string[2];
						if (pSVar1 == null) goto label_05b4cd67;
						if ((int)pSVar1.Length != 0) {
							pSVar1[0] = "A";
							if ((pSVar1.Length & 0xfffffffe) != 0) {
								pSVar1[1] = "None";
								pSVar2 = new KeybindSetting(pSVar1);
								this.Left = pSVar2;
								pSVar1 = (String[])new string[2];
								if (pSVar1 == null) goto label_05b4cd67;
								if ((int)pSVar1.Length != 0) {
									pSVar1[0] = "D";
									if ((pSVar1.Length & 0xfffffffe) != 0) {
										pSVar1[1] = "None";
										pSVar2 = new KeybindSetting(pSVar1);
										this.Right = pSVar2;
										pSVar1 = (String[])new string[2];
										if (pSVar1 == null) goto label_05b4cd67;
										if ((int)pSVar1.Length != 0) {
											pSVar1[0] = "E";
											if ((pSVar1.Length & 0xfffffffe) != 0) {
												pSVar1[1] = "None";
												pSVar2 = new KeybindSetting(pSVar1);
												this.Up = pSVar2;
												pSVar1 = (String[])new string[2];
												if (pSVar1 == null) goto label_05b4cd67;
												if ((int)pSVar1.Length != 0) {
													pSVar1[0] = "Q";
													if ((pSVar1.Length & 0xfffffffe) != 0) {
														pSVar1[1] = "None";
														pSVar2 = new KeybindSetting(pSVar1);
														this.Down = pSVar2;
														pSVar1 = (String[])new string[2];
														if (pSVar1 == null) goto label_05b4cd67;
														if ((int)pSVar1.Length != 0) {
															pSVar1[0] = "LeftShift";
															if ((pSVar1.Length & 0xfffffffe) != 0) {
																pSVar1[1] = "None";
																pSVar2 = new KeybindSetting(pSVar1);
																this.Modifier = pSVar2;
																pSVar1 = (String[])new string[2];
																if (pSVar1 == null) goto label_05b4cd67;
																if ((int)pSVar1.Length != 0) {
																	pSVar1[0] = "Period";
																	if ((pSVar1.Length & 0xfffffffe) != 0) {
																		pSVar1[1] = "None";
																		pSVar2 = new KeybindSetting(pSVar1);
																		this.Autorun = pSVar2;
																		pSVar1 = (String[])new string[2];
																		if (pSVar1 == null) goto label_05b4cd67;
																		if ((int)pSVar1.Length != 0) {
																			pSVar1[0] = "P";
																			if ((pSVar1.Length & 0xfffffffe) != 0) {
																				pSVar1[1] = "None";
																				pSVar2 = new KeybindSetting(pSVar1);
																				this.Pause = pSVar2;
																				pSVar1 = (String[])new string[2];
																				if (pSVar1 == null) goto label_05b4cd67;
																				if ((int)pSVar1.Length != 0) {
																					pSVar1[0] = "T";
																					if ((pSVar1.Length & 0xfffffffe) != 0) {
																						pSVar1[1] = "None";
																						pSVar2 = il2cpp_codegen_object_new(typeof(KeybindSetting)) ;
																						pSVar2 = new KeybindSetting(pSVar1);
																						this.ChangeCharacter = pSVar2;
																						pSVar1 = (String[])new string[2];
																						if (pSVar1 == null) goto label_05b4cd67;
																						if ((int)pSVar1.Length != 0) {
																							pSVar1[0] = "F5";
																							if ((pSVar1.Length & 0xfffffffe) != 0) {
																								pSVar1[1] = "None";
																								pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																								pSVar2 = new KeybindSetting(pSVar1);
																								this.RestartGame = pSVar2;
																								pSVar1 = (String[])new string[2];
																								if (pSVar1 == null) goto label_05b4cd67;
																								if ((int)pSVar1.Length != 0) {
																									pSVar1[0] = "Tab";
																									if ((pSVar1.Length & 0xfffffffe) != 0) {
																										pSVar1[1] = "None";
																										pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																										pSVar2 = new KeybindSetting(pSVar1);
																										this.ToggleScoreboard = pSVar2;
																										pSVar1 = (String[])new string[2];
																										if (pSVar1 == null) goto label_05b4cd67;
																										if ((int)pSVar1.Length != 0) {
																											pSVar1[0] = "M";
																											if ((pSVar1.Length & 0xfffffffe) != 0) {
																												pSVar1[1] = "None";
																												pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1);
																												this.ToggleMap = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4cd67;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "Return";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																														pSVar2 = new KeybindSetting(pSVar1);
																														this.Chat = pSVar2;
																														pSVar1 = (String[])new string[2];
																														if (pSVar1 == null) goto label_05b4cd67;
																														if ((int)pSVar1.Length != 0) {
																															pSVar1[0] = "V";
																															if ((pSVar1.Length & 0xfffffffe) != 0) {
																																pSVar1[1] = "None";
																																pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.PushToTalk = pSVar2;
																												Il2CppCodeGenWriteBarrier(&this.PushToTalk) ;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4cd67;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "C";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.ChangeCamera = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4cd67;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "Mouse1";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.RotateWOWCamera = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4cd67;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "WheelUp";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.ZoomIn = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4cd67;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "WheelDown";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.ZoomOut = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4cd67;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "X";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.HideCursor = pSVar2;
																												Il2CppCodeGenWriteBarrier(&this.HideCursor) ;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4cd67;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "F7";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.HideChat = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4cd67;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "1";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.SpectatePreviousPlayer = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4cd67;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "2";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.SpectateNextPlayer = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4cd67;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "Y";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.SkipCutscene = pSVar2;
																												pSVar3 = il2cpp_codegen_object_new((Il2CppClass)typeof(BoolSetting));
																												pSVar3 = new TypedSetting<bool>(true) ;
																												this.TapScoreboard = pSVar3;
																												pSVar3 = il2cpp_codegen_object_new((Il2CppClass)typeof(BoolSetting));
																												pSVar3 = new TypedSetting<bool>(true) ;
																												this.TapMap = pSVar3;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4cd67;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "F6";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.HideUI = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4cd67;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "F11";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.DebugWindow = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4cd67;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "LeftControl+K";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "RightControl+K";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.OpenSearchPalette = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4cd67;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "LeftControl+F";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "RightControl+F";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.OpenCurrentScreenSearch = pSVar2;
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
