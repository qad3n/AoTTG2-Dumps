// ==================== AoTTG2 cross-reference ====================
// Type: Settings.TitanInputSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/TitanInputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/TitanInputSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000F7")]
internal class TitanInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x40005C1")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting Kick;

	[Token(Token = "0x40005C2")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting Jump;

	[Token(Token = "0x40005C3")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting Sit;

	[Token(Token = "0x40005C4")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting Walk;

	[Token(Token = "0x40005C5")]
	[FieldOffset(Offset = "0x58")]
	public KeybindSetting Sprint;

	[Token(Token = "0x40005C6")]
	[FieldOffset(Offset = "0x60")]
	public KeybindSetting CoverNape1;

	[Token(Token = "0x40005C7")]
	[FieldOffset(Offset = "0x68")]
	public KeybindSetting AttackPunch;

	[Token(Token = "0x40005C8")]
	[FieldOffset(Offset = "0x70")]
	public KeybindSetting AttackBellyFlop;

	[Token(Token = "0x40005C9")]
	[FieldOffset(Offset = "0x78")]
	public KeybindSetting AttackSlapL;

	[Token(Token = "0x40005CA")]
	[FieldOffset(Offset = "0x80")]
	public KeybindSetting AttackSlapR;

	[Token(Token = "0x40005CB")]
	[FieldOffset(Offset = "0x88")]
	public KeybindSetting AttackRockThrow;

	[Token(Token = "0x40005CC")]
	[FieldOffset(Offset = "0x90")]
	public KeybindSetting AttackBiteL;

	[Token(Token = "0x40005CD")]
	[FieldOffset(Offset = "0x98")]
	public KeybindSetting AttackBiteF;

	[Token(Token = "0x40005CE")]
	[FieldOffset(Offset = "0xA0")]
	public KeybindSetting AttackBiteR;

	[Token(Token = "0x40005CF")]
	[FieldOffset(Offset = "0xA8")]
	public KeybindSetting AttackHitFace;

	[Token(Token = "0x40005D0")]
	[FieldOffset(Offset = "0xB0")]
	public KeybindSetting AttackHitBack;

	[Token(Token = "0x40005D1")]
	[FieldOffset(Offset = "0xB8")]
	public KeybindSetting AttackSlam;

	[Token(Token = "0x40005D2")]
	[FieldOffset(Offset = "0xC0")]
	public KeybindSetting AttackStomp;

	[Token(Token = "0x40005D3")]
	[FieldOffset(Offset = "0xC8")]
	public KeybindSetting AttackSwing;

	[Token(Token = "0x40005D4")]
	[FieldOffset(Offset = "0xD0")]
	public KeybindSetting AttackGrabAirFar;

	[Token(Token = "0x40005D5")]
	[FieldOffset(Offset = "0xD8")]
	public KeybindSetting AttackGrabAir;

	[Token(Token = "0x40005D6")]
	[FieldOffset(Offset = "0xE0")]
	public KeybindSetting AttackGrabBody;

	[Token(Token = "0x40005D7")]
	[FieldOffset(Offset = "0xE8")]
	public KeybindSetting AttackGrabCore;

	[Token(Token = "0x40005D8")]
	[FieldOffset(Offset = "0xF0")]
	public KeybindSetting AttackGrabGround;

	[Token(Token = "0x40005D9")]
	[FieldOffset(Offset = "0xF8")]
	public KeybindSetting AttackGrabHead;

	[Token(Token = "0x40005DA")]
	[FieldOffset(Offset = "0x100")]
	public KeybindSetting AttackGrabHigh;

	[Token(Token = "0x40005DB")]
	[FieldOffset(Offset = "0x108")]
	public KeybindSetting AttackSlapHighL;

	[Token(Token = "0x40005DC")]
	[FieldOffset(Offset = "0x110")]
	public KeybindSetting AttackSlapHighR;

	[Token(Token = "0x40005DD")]
	[FieldOffset(Offset = "0x118")]
	public KeybindSetting AttackSlapLowL;

	[Token(Token = "0x40005DE")]
	[FieldOffset(Offset = "0x120")]
	public KeybindSetting AttackSlapLowR;

	[Token(Token = "0x40005DF")]
	[FieldOffset(Offset = "0x128")]
	public KeybindSetting AttackBrushChest;

	[Token(Token = "0x170000BE")]
	protected override string FileName
	{
		[Token(Token = "0x6000545")]
		[Address(RVA = "0x5A50F30", Offset = "0x5A4FF30", VA = "0x5A50F30", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Settings/TitanInputSettings.c (Settings.TitanInputSettings$$get_FileName): clean
			return "TitanInput.json";
		}
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x5A4DC00", Offset = "0x5A4CC00", VA = "0x5A4DC00")]
	public TitanInputSettings()
	{
		// Lifted from source/cpp/Settings/TitanInputSettings.c (Settings.TitanInputSettings$$.ctor): 24 lines keep C-only constructs
		String[] pSVar1;
		KeybindSetting pSVar2;

		pSVar1 = (String[])new string[2];
		if (pSVar1 == null) {
	label_05b4ed37: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar1.Length != 0) {
			pSVar1[0] = "LeftControl";
			if ((pSVar1.Length & 0xfffffffe) != 0) {
				pSVar1[1] = "None";
				pSVar2 = new KeybindSetting(pSVar1);
				this.Kick = pSVar2;
				pSVar1 = (String[])new string[2];
				if (pSVar1 == null) goto label_05b4ed37;
				if ((int)pSVar1.Length != 0) {
					pSVar1[0] = "Space";
					if ((pSVar1.Length & 0xfffffffe) != 0) {
						pSVar1[1] = "None";
						pSVar2 = new KeybindSetting(pSVar1);
						this.Jump = pSVar2;
						pSVar1 = (String[])new string[2];
						if (pSVar1 == null) goto label_05b4ed37;
						if ((int)pSVar1.Length != 0) {
							pSVar1[0] = "Z";
							if ((pSVar1.Length & 0xfffffffe) != 0) {
								pSVar1[1] = "None";
								pSVar2 = new KeybindSetting(pSVar1);
								this.Sit = pSVar2;
								pSVar1 = (String[])new string[2];
								if (pSVar1 == null) goto label_05b4ed37;
								if ((int)pSVar1.Length != 0) {
									pSVar1[0] = "LeftAlt";
									if ((pSVar1.Length & 0xfffffffe) != 0) {
										pSVar1[1] = "None";
										pSVar2 = new KeybindSetting(pSVar1);
										this.Walk = pSVar2;
										pSVar1 = (String[])new string[2];
										if (pSVar1 == null) goto label_05b4ed37;
										if ((int)pSVar1.Length != 0) {
											pSVar1[0] = "LeftShift";
											if ((pSVar1.Length & 0xfffffffe) != 0) {
												pSVar1[1] = "None";
												pSVar2 = new KeybindSetting(pSVar1);
												this.Sprint = pSVar2;
												pSVar1 = (String[])new string[2];
												if (pSVar1 == null) goto label_05b4ed37;
												if ((int)pSVar1.Length != 0) {
													pSVar1[0] = "Mouse2";
													if ((pSVar1.Length & 0xfffffffe) != 0) {
														pSVar1[1] = "None";
														pSVar2 = new KeybindSetting(pSVar1);
														this.CoverNape1 = pSVar2;
														pSVar1 = (String[])new string[2];
														if (pSVar1 == null) goto label_05b4ed37;
														if ((int)pSVar1.Length != 0) {
															pSVar1[0] = "Mouse0";
															if ((pSVar1.Length & 0xfffffffe) != 0) {
																pSVar1[1] = "None";
																pSVar2 = new KeybindSetting(pSVar1);
																this.AttackPunch = pSVar2;
																pSVar1 = (String[])new string[2];
																if (pSVar1 == null) goto label_05b4ed37;
																if ((int)pSVar1.Length != 0) {
																	pSVar1[0] = "Mouse1";
																	if ((pSVar1.Length & 0xfffffffe) != 0) {
																		pSVar1[1] = "None";
																		pSVar2 = new KeybindSetting(pSVar1);
																		this.AttackBellyFlop = pSVar2;
																		pSVar1 = (String[])new string[2];
																		if (pSVar1 == null) goto label_05b4ed37;
																		if ((int)pSVar1.Length != 0) {
																			pSVar1[0] = "Q";
																			if ((pSVar1.Length & 0xfffffffe) != 0) {
																				pSVar1[1] = "None";
																				pSVar2 = new KeybindSetting(pSVar1);
																				this.AttackSlapL = pSVar2;
																				pSVar1 = (String[])new string[2];
																				if (pSVar1 == null) goto label_05b4ed37;
																				if ((int)pSVar1.Length != 0) {
																					pSVar1[0] = "E";
																					if ((pSVar1.Length & 0xfffffffe) != 0) {
																						pSVar1[1] = "None";
																						pSVar2 = il2cpp_codegen_object_new(typeof(KeybindSetting)) ;
																						pSVar2 = new KeybindSetting(pSVar1);
																						this.AttackSlapR = pSVar2;
																						pSVar1 = (String[])new string[2];
																						if (pSVar1 == null) goto label_05b4ed37;
																						if ((int)pSVar1.Length != 0) {
																							pSVar1[0] = "R";
																							if ((pSVar1.Length & 0xfffffffe) != 0) {
																								pSVar1[1] = "None";
																								pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																								pSVar2 = new KeybindSetting(pSVar1);
																								this.AttackRockThrow = pSVar2;
																								pSVar1 = (String[])new string[2];
																								if (pSVar1 == null) goto label_05b4ed37;
																								if ((int)pSVar1.Length != 0) {
																									pSVar1[0] = "Alpha1";
																									if ((pSVar1.Length & 0xfffffffe) != 0) {
																										pSVar1[1] = "None";
																										pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																										pSVar2 = new KeybindSetting(pSVar1);
																										this.AttackBiteL = pSVar2;
																										pSVar1 = (String[])new string[2];
																										if (pSVar1 == null) goto label_05b4ed37;
																										if ((int)pSVar1.Length != 0) {
																											pSVar1[0] = "Alpha2";
																											if ((pSVar1.Length & 0xfffffffe) != 0) {
																												pSVar1[1] = "None";
																												pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1);
																												this.AttackBiteF = pSVar2;
																												Il2CppCodeGenWriteBarrier(&this.AttackBiteF) ;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4ed37;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "Alpha3";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																														pSVar2 = new KeybindSetting(pSVar1);
																														this.AttackBiteR = pSVar2;
																														pSVar1 = (String[])new string[2];
																														if (pSVar1 == null) goto label_05b4ed37;
																														if ((int)pSVar1.Length != 0) {
																															pSVar1[0] = "Alpha4";
																															if ((pSVar1.Length & 0xfffffffe) != 0) {
																																pSVar1[1] = "None";
																																pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.AttackHitFace = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4ed37;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "Alpha5";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.AttackHitBack = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4ed37;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "None";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.AttackSlam = pSVar2;
																												Il2CppCodeGenWriteBarrier(&this.AttackSlam) ;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4ed37;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "None";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.AttackStomp = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4ed37;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "None";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.AttackSwing = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4ed37;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "None";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.AttackGrabAirFar = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4ed37;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "None";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.AttackGrabAir = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4ed37;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "None";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.AttackGrabBody = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4ed37;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "None";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.AttackGrabCore = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4ed37;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "None";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.AttackGrabGround = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4ed37;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "None";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.AttackGrabHead = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4ed37;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "None";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.AttackGrabHigh = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4ed37;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "None";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.AttackSlapHighL = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4ed37;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "None";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.AttackSlapHighR = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4ed37;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "None";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.AttackSlapLowL = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4ed37;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "None";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.AttackSlapLowR = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b4ed37;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "None";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.AttackBrushChest = pSVar2;
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
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}
}
