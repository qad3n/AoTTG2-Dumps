// ==================== AoTTG2 cross-reference ====================
// Type: Settings.HumanInputSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/HumanInputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/HumanInputSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000F2")]
internal class HumanInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000565")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting AttackDefault;

	[Token(Token = "0x4000566")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting AttackSpecial;

	[Token(Token = "0x4000567")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting HookLeft;

	[Token(Token = "0x4000568")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting HookRight;

	[Token(Token = "0x4000569")]
	[FieldOffset(Offset = "0x58")]
	public KeybindSetting HookBoth;

	[Token(Token = "0x400056A")]
	[FieldOffset(Offset = "0x60")]
	public KeybindSetting Dash;

	[Token(Token = "0x400056B")]
	[FieldOffset(Offset = "0x68")]
	public KeybindSetting ReelIn;

	[Token(Token = "0x400056C")]
	[FieldOffset(Offset = "0x70")]
	public KeybindSetting ReelOut;

	[Token(Token = "0x400056D")]
	[FieldOffset(Offset = "0x78")]
	public KeybindSetting Dodge;

	[Token(Token = "0x400056E")]
	[FieldOffset(Offset = "0x80")]
	public KeybindSetting Jump;

	[Token(Token = "0x400056F")]
	[FieldOffset(Offset = "0x88")]
	public KeybindSetting Reload;

	[Token(Token = "0x4000570")]
	[FieldOffset(Offset = "0x90")]
	public KeybindSetting HorseMount;

	[Token(Token = "0x4000571")]
	[FieldOffset(Offset = "0x98")]
	public KeybindSetting HorseWalk;

	[Token(Token = "0x4000572")]
	[FieldOffset(Offset = "0xA0")]
	public KeybindSetting HorseJump;

	[Token(Token = "0x4000573")]
	[FieldOffset(Offset = "0xA8")]
	public KeybindSetting NapeLock;

	[Token(Token = "0x4000574")]
	[FieldOffset(Offset = "0xB0")]
	public KeybindSetting Walk;

	[Token(Token = "0x4000575")]
	[FieldOffset(Offset = "0xB8")]
	public BoolSetting DashDoubleTap;

	[Token(Token = "0x4000576")]
	[FieldOffset(Offset = "0xC0")]
	public BoolSetting WallSlideDash;

	[Token(Token = "0x4000577")]
	[FieldOffset(Offset = "0xC8")]
	public IntSetting WallSlideAttach;

	[Token(Token = "0x4000578")]
	[FieldOffset(Offset = "0xD0")]
	public FloatSetting ReelOutScrollSmoothing;

	[Token(Token = "0x4000579")]
	[FieldOffset(Offset = "0xD8")]
	public BoolSetting SwapTSAttackSpecial;

	[Token(Token = "0x400057A")]
	[FieldOffset(Offset = "0xE0")]
	public BoolSetting AutoRefillGas;

	[Token(Token = "0x400057B")]
	[FieldOffset(Offset = "0xE8")]
	public BoolSetting AutoUseGas;

	[Token(Token = "0x400057C")]
	[FieldOffset(Offset = "0xF0")]
	public BoolSetting ReelInHolding;

	[Token(Token = "0x170000BA")]
	protected override string FileName
	{
		[Token(Token = "0x600053D")]
		[Address(RVA = "0x5A4CD70", Offset = "0x5A4BD70", VA = "0x5A4CD70", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Settings/HumanInputSettings.c (Settings.HumanInputSettings$$get_FileName): clean
			return "HumanInput.json";
		}
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x5A4CDA0", Offset = "0x5A4BDA0", VA = "0x5A4CDA0")]
	public HumanInputSettings()
	{
		// Lifted from source/cpp/Settings/HumanInputSettings.c (Settings.HumanInputSettings$$.ctor): 18 lines keep C-only constructs
		int iVar1;
		String[] pSVar2;
		KeybindSetting pSVar3;
		BoolSetting pSVar4;
		IntSetting __this_00;
		FloatSetting __this_01;
		float fVar5;

		pSVar2 = (String[])new string[2];
		if (pSVar2 == null) {
	label_05b4da14: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar2.Length != 0) {
			pSVar2[0] = "Mouse0";
			if ((pSVar2.Length & 0xfffffffe) != 0) {
				pSVar2[1] = "None";
				pSVar3 = new KeybindSetting(pSVar2);
				this.AttackDefault = pSVar3;
				pSVar2 = (String[])new string[2];
				if (pSVar2 == null) goto label_05b4da14;
				if ((int)pSVar2.Length != 0) {
					pSVar2[0] = "Mouse1";
					if ((pSVar2.Length & 0xfffffffe) != 0) {
						pSVar2[1] = "None";
						pSVar3 = new KeybindSetting(pSVar2);
						this.AttackSpecial = pSVar3;
						pSVar2 = (String[])new string[2];
						if (pSVar2 == null) goto label_05b4da14;
						if ((int)pSVar2.Length != 0) {
							pSVar2[0] = "Q";
							if ((pSVar2.Length & 0xfffffffe) != 0) {
								pSVar2[1] = "None";
								pSVar3 = new KeybindSetting(pSVar2);
								this.HookLeft = pSVar3;
								pSVar2 = (String[])new string[2];
								if (pSVar2 == null) goto label_05b4da14;
								if ((int)pSVar2.Length != 0) {
									pSVar2[0] = "E";
									if ((pSVar2.Length & 0xfffffffe) != 0) {
										pSVar2[1] = "None";
										pSVar3 = new KeybindSetting(pSVar2);
										this.HookRight = pSVar3;
										pSVar2 = (String[])new string[2];
										if (pSVar2 == null) goto label_05b4da14;
										if ((int)pSVar2.Length != 0) {
											pSVar2[0] = "None";
											if ((pSVar2.Length & 0xfffffffe) != 0) {
												pSVar2[1] = "None";
												pSVar3 = new KeybindSetting(pSVar2);
												this.HookBoth = pSVar3;
												pSVar2 = (String[])new string[2];
												if (pSVar2 == null) goto label_05b4da14;
												if ((int)pSVar2.Length != 0) {
													pSVar2[0] = "LeftControl";
													if ((pSVar2.Length & 0xfffffffe) != 0) {
														pSVar2[1] = "None";
														pSVar3 = new KeybindSetting(pSVar2);
														this.Dash = pSVar3;
														pSVar2 = (String[])new string[2];
														if (pSVar2 == null) goto label_05b4da14;
														if ((int)pSVar2.Length != 0) {
															pSVar2[0] = "WheelDown";
															if ((pSVar2.Length & 0xfffffffe) != 0) {
																pSVar2[1] = "None";
																pSVar3 = new KeybindSetting(pSVar2);
																this.ReelIn = pSVar3;
																pSVar2 = (String[])new string[2];
																if (pSVar2 == null) goto label_05b4da14;
																if ((int)pSVar2.Length != 0) {
																	pSVar2[0] = "LeftAlt";
																	if ((pSVar2.Length & 0xfffffffe) != 0) {
																		pSVar2[1] = "None";
																		pSVar3 = new KeybindSetting(pSVar2);
																		this.ReelOut = pSVar3;
																		pSVar2 = (String[])new string[2];
																		if (pSVar2 == null) goto label_05b4da14;
																		if ((int)pSVar2.Length != 0) {
																			pSVar2[0] = "LeftControl";
																			if ((pSVar2.Length & 0xfffffffe) != 0) {
																				pSVar2[1] = "None";
																				pSVar3 = new KeybindSetting(pSVar2);
																				this.Dodge = pSVar3;
																				pSVar2 = (String[])new string[2];
																				if (pSVar2 == null) goto label_05b4da14;
																				if ((int)pSVar2.Length != 0) {
																					pSVar2[0] = "LeftShift";
																					if ((pSVar2.Length & 0xfffffffe) != 0) {
																						pSVar2[1] = "None";
																						pSVar3 = il2cpp_codegen_object_new(typeof(KeybindSetting)) ;
																						pSVar3 = new KeybindSetting(pSVar2);
																						this.Jump = pSVar3;
																						pSVar2 = (String[])new string[2];
																						if (pSVar2 == null) goto label_05b4da14;
																						if ((int)pSVar2.Length != 0) {
																							pSVar2[0] = "R";
																							if ((pSVar2.Length & 0xfffffffe) != 0) {
																								pSVar2[1] = "None";
																								pSVar3 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																								pSVar3 = new KeybindSetting(pSVar2);
																								this.Reload = pSVar3;
																								pSVar2 = (String[])new string[2];
																								if (pSVar2 == null) goto label_05b4da14;
																								if ((int)pSVar2.Length != 0) {
																									pSVar2[0] = "LeftControl";
																									if ((pSVar2.Length & 0xfffffffe) != 0) {
																										pSVar2[1] = "None";
																										pSVar3 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																										pSVar3 = new KeybindSetting(pSVar2);
																										this.HorseMount = pSVar3;
																										pSVar2 = (String[])new string[2];
																										if (pSVar2 == null) goto label_05b4da14;
																										if ((int)pSVar2.Length != 0) {
																											pSVar2[0] = "LeftShift";
																											if ((pSVar2.Length & 0xfffffffe) != 0) {
																												pSVar2[1] = "None";
																												pSVar3 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar3 = new KeybindSetting(pSVar2);
																												this.HorseWalk = pSVar3;
																												pSVar2 = (String[])new string[2];
																												if (pSVar2 == null) goto label_05b4da14;
																												if ((int)pSVar2.Length != 0) {
																													pSVar2[0] = "Space";
																													if ((pSVar2.Length & 0xfffffffe) != 0) {
																														pSVar2[1] = "None";
																														pSVar3 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																														pSVar3 = new KeybindSetting(pSVar2);
																														this.HorseJump = pSVar3;
																														pSVar2 = (String[])new string[2];
																														if (pSVar2 == null) goto label_05b4da14;
																														if ((int)pSVar2.Length != 0) {
																															pSVar2[0] = "None";
																															if ((pSVar2.Length & 0xfffffffe) != 0) {
																																pSVar2[1] = "None";
																																pSVar3 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar3 = new KeybindSetting(pSVar2) ;
																												this.NapeLock = pSVar3;
																												pSVar2 = (String[])new string[2];
																												if (pSVar2 == null) goto label_05b4da14;
																												if ((int)pSVar2.Length != 0) {
																													pSVar2[0] = "LeftAlt";
																													if ((pSVar2.Length & 0xfffffffe) != 0) {
																														pSVar2[1] = "None";
																														pSVar3 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar3 = new KeybindSetting(pSVar2) ;
																												this.Walk = pSVar3;
																												pSVar4 = il2cpp_codegen_object_new((Il2CppClass)typeof(BoolSetting));
																												pSVar4 = new TypedSetting<bool>(true) ;
																												this.DashDoubleTap = pSVar4;
																												pSVar4 = il2cpp_codegen_object_new((Il2CppClass)typeof(BoolSetting));
																												pSVar4 = new TypedSetting<bool>(true) ;
																												this.WallSlideDash = pSVar4;
																												__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(IntSetting));
																												__this_00.MinValue = -0x80000000;
																												__this_00.MaxValue = 0x7fffffff;
																												__this_00 = new TypedSetting<int>();
																												__this_00.MinValue = -0x80000000;
																												__this_00.MaxValue = 0x7fffffff;
																												iVar1 = (*(__this_00.klass.vtable)._11_SanitizeValue. methodPtr)(__this_00,2,(__this_00.klass.vtable). _11_SanitizeValue.method);
																												__this_00.DefaultValue = iVar1;
																												__this_00.SetDefault();
																												this.WallSlideAttach = __this_00;
																												__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(FloatSetting));
																												__this_01.MinValue = -3.4028235e+38;
																												__this_01.MaxValue = 3.4028235e+38;
																												__this_01 = new TypedSetting<float>() ;
																												__this_01.MinValue = 0.0;
																												__this_01.MaxValue = 1.0;
																												fVar5 = (*(__this_01.klass.vtable)._11_SanitizeValue. methodPtr)(__this_01,0.2,(__this_01.klass.vtable). _11_SanitizeValue.method);
																												__this_01.DefaultValue = fVar5;
																												__this_01.SetDefault();
																												this.ReelOutScrollSmoothing = __this_01;
																												pSVar4 = il2cpp_codegen_object_new((Il2CppClass)typeof(BoolSetting));
																												pSVar4 = new TypedSetting<bool>(false);
																												this.SwapTSAttackSpecial = pSVar4;
																												pSVar4 = il2cpp_codegen_object_new((Il2CppClass)typeof(BoolSetting));
																												pSVar4 = new TypedSetting<bool>(false);
																												this.AutoRefillGas = pSVar4;
																												pSVar4 = il2cpp_codegen_object_new((Il2CppClass)typeof(BoolSetting));
																												pSVar4 = new TypedSetting<bool>(false);
																												this.AutoUseGas = pSVar4;
																												Il2CppCodeGenWriteBarrier(&this.AutoUseGas) ;
																												pSVar4 = il2cpp_codegen_object_new((Il2CppClass)typeof(BoolSetting));
																												pSVar4 = new TypedSetting<bool>(true) ;
																												this.ReelInHolding = pSVar4;
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
		throw new IndexOutOfRangeException();
	}
}
