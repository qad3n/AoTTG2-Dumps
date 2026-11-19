// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.HumanLoadout
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameManagers/HumanLoadout.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Characters;
using Il2CppDummyDll;

namespace GameManagers;

[Token(Token = "0x20003A4")]
internal class HumanLoadout
{
	[Token(Token = "0x4001290")]
	[FieldOffset(Offset = "0x0")]
	public static string Blade;

	[Token(Token = "0x4001291")]
	[FieldOffset(Offset = "0x8")]
	public static string AHSS;

	[Token(Token = "0x4001292")]
	[FieldOffset(Offset = "0x10")]
	public static string Thunderspear;

	[Token(Token = "0x4001293")]
	[FieldOffset(Offset = "0x18")]
	public static string APG;

	[Token(Token = "0x4001294")]
	[FieldOffset(Offset = "0x20")]
	public static string Unarmed;

	[Token(Token = "0x4001295")]
	[FieldOffset(Offset = "0x28")]
	public static string Civilian;

	[Token(Token = "0x6001752")]
	[Address(RVA = "0x5857FA0", Offset = "0x5856FA0", VA = "0x5857FA0")]
	public static List<string> GetAllowed()
	{
		// Lifted from source/cpp/GameManagers/HumanLoadout.c (GameManagers.HumanLoadout$$GetAllowed): 14 lines keep C-only constructs
		int piVar1;
		int iVar2;
		InGameSet pSVar3;
		InGameMiscSettings pSVar4;
		BoolSetting pSVar5;
		String pSVar6;
		String[] pSVar7;
		uint uVar9;
		List<string> __this;

		pSVar3 = SettingsManager.InGameCurrent;
		if (pSVar3 != null) {
			pSVar4 = pSVar3.Misc;
			__this = new List<string>();
			if ((pSVar4 != null) &&(pSVar5 = pSVar4.AllowBlades, pSVar5 != null)) {
				if (pSVar5._value != false) {
					if (__this == null) goto label_0595849e;
					pSVar6 = HumanLoadout.Blade;
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pSVar7 = __this._items;
					if (pSVar7 == null) goto label_0595849e;
					uVar9 = __this._size;
					if (uVar9 < (uint)pSVar7.Length) {
						__this._size = uVar9 + 1;
						pSVar7[(int)uVar9] = pSVar6;
					}
					else {
						__this.AddWithResize((object)pSVar6);
					}
				}
				pSVar5 = pSVar4.AllowAHSS;
				if (pSVar5 != null) {
					if (pSVar5._value != false) {
						if (__this == null) goto label_0595849e;
						pSVar6 = HumanLoadout.AHSS;
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pSVar7 = __this._items;
						if (pSVar7 == null) goto label_0595849e;
						uVar9 = __this._size;
						if (uVar9 < (uint)pSVar7.Length) {
							__this._size = uVar9 + 1;
							pSVar7[(int)uVar9] = pSVar6;
						}
						else {
							__this.AddWithResize((object)pSVar6);
						}
					}
					pSVar5 = pSVar4.AllowAPG;
					if (pSVar5 != null) {
						if (pSVar5._value != false) {
							if (__this == null) goto label_0595849e;
							pSVar6 = HumanLoadout.APG;
							piVar1 = &__this._version;
							*piVar1 = *piVar1 + 1;
							pSVar7 = __this._items;
							if (pSVar7 == null) goto label_0595849e;
							uVar9 = __this._size;
							if (uVar9 < (uint)pSVar7.Length) {
								__this._size = uVar9 + 1;
								pSVar7[(int)uVar9] = pSVar6;
							}
							else {
								__this.AddWithResize((object)pSVar6);
							}
						}
						pSVar5 = pSVar4.AllowThunderspears;
						if (pSVar5 != null) {
							if (pSVar5._value != false) {
								if (__this == null) goto label_0595849e;
								pSVar6 = HumanLoadout.Thunderspear;
								piVar1 = &__this._version;
								*piVar1 = *piVar1 + 1;
								pSVar7 = __this._items;
								if (pSVar7 == null) goto label_0595849e;
								uVar9 = __this._size;
								if (uVar9 < (uint)pSVar7.Length) {
									__this._size = uVar9 + 1;
									pSVar7[(int)uVar9] = pSVar6;
								}
								else {
									__this.AddWithResize((object)pSVar6);
								}
							}
							pSVar5 = pSVar4.AllowUnarmed;
							if (pSVar5 != null) {
								if (pSVar5._value != false) {
									if (__this == null) goto label_0595849e;
									pSVar6 = HumanLoadout.Unarmed;
									piVar1 = &__this._version;
									*piVar1 = *piVar1 + 1;
									pSVar7 = __this._items;
									if (pSVar7 == null) goto label_0595849e;
									uVar9 = __this._size;
									if (uVar9 < (uint)pSVar7.Length) {
										__this._size = uVar9 + 1;
										pSVar7[(int)uVar9] = pSVar6;
									}
									else {
										__this.AddWithResize((object)pSVar6);
									}
								}
								pSVar5 = pSVar4.AllowCivilian;
								if (pSVar5 != null) {
									if (pSVar5._value == false) {
										if (__this == null) goto label_0595849e;
										iVar2 = __this._size;
									}
									else {
										if (__this == null) goto label_0595849e;
										pSVar6 = HumanLoadout.Civilian;
										piVar1 = &__this._version;
										*piVar1 = *piVar1 + 1;
										pSVar7 = __this._items;
										if (pSVar7 == null) goto label_0595849e;
										uVar9 = __this._size;
										if (uVar9 < (uint)pSVar7.Length) {
											__this._size = uVar9 + 1;
											pSVar7[(int)uVar9] = pSVar6;
											iVar2 = __this._size;
										}
										else {
											__this.AddWithResize((object)pSVar6);
											iVar2 = __this._size;
										}
									}
									if (iVar2 == 0) {
										uVar9 = 0;
										if (((typeof(HumanLoadout))._2).cctor_finished_or_no_cctor == 0) {
											uVar9 = __this._size;
										}
										pSVar6 = HumanLoadout.Blade;
										piVar1 = &__this._version;
										*piVar1 = *piVar1 + 1;
										pSVar7 = __this._items;
										if (pSVar7 == null) goto label_0595849e;
										if (uVar9 < (uint)pSVar7.Length) {
											__this._size = uVar9 + 1;
											pSVar7[(int)uVar9] = pSVar6;
										}
										else {
											__this.AddWithResize((object)pSVar6);
										}
									}
									return __this;
								}
							}
						}
					}
				}
			}
		}
	label_0595849e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001753")]
	[Address(RVA = "0x58584B0", Offset = "0x58574B0", VA = "0x58584B0")]
	public static bool AnyAllowed()
	{
		// Lifted from source/cpp/GameManagers/HumanLoadout.c (GameManagers.HumanLoadout$$AnyAllowed): clean
		InGameSet pSVar1;
		InGameMiscSettings pSVar2;
		BoolSetting pSVar3;

		pSVar1 = SettingsManager.InGameCurrent;
		if (((pSVar1 != null) &&(pSVar2 = pSVar1.Misc, pSVar2 != null)) &&(pSVar3 = pSVar2.AllowBlades, pSVar3 != null)) {
			if (pSVar3._value != false) {
				return true;
			}
			pSVar3 = pSVar2.AllowAHSS;
			if (pSVar3 != null) {
				if (pSVar3._value != false) {
					return true;
				}
				pSVar3 = pSVar2.AllowAPG;
				if (pSVar3 != null) {
					if (pSVar3._value != false) {
						return true;
					}
					pSVar3 = pSVar2.AllowThunderspears;
					if (pSVar3 != null) {
						if (pSVar3._value != false) {
							return true;
						}
						pSVar3 = pSVar2.AllowUnarmed;
						if (pSVar3 != null) {
							if (pSVar3._value != false) {
								return true;
							}
							pSVar3 = pSVar2.AllowCivilian;
							if (pSVar3 != null) {
								return pSVar3._value != false;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001754")]
	[Address(RVA = "0x5858570", Offset = "0x5857570", VA = "0x5858570")]
	public static HumanWeapon ToWeapon(string loadout)
	{
		// Lifted from source/cpp/GameManagers/HumanLoadout.c (GameManagers.HumanLoadout$$ToWeapon): clean
		bool bVar1;
		int iVar2;

		bVar1 = (loadout == HumanLoadout.AHSS);
		if (!bVar1) {
			bVar1 = (loadout == HumanLoadout.APG);
			if (!bVar1) {
				bVar1 = (loadout == HumanLoadout.Thunderspear);
				if (!bVar1) {
					bVar1 = (loadout == HumanLoadout.Unarmed);
					if (!bVar1) {
						bVar1 = (loadout == HumanLoadout.Civilian);
						iVar2 = (uint)bVar1 * 5;
					}
				}
			}
		}
		return iVar2;
	}

	[Token(Token = "0x6001755")]
	[Address(RVA = "0x58586B0", Offset = "0x58576B0", VA = "0x58586B0")]
	public HumanLoadout()
	{
		// Lifted from source/cpp/GameManagers/HumanLoadout.c (GameManagers.HumanLoadout$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/GameManagers/HumanLoadout.c.

	// GameManagers.HumanLoadout$$.cctor: clean
	static HumanLoadout()
	{
		GameManagers_HumanLoadout_StaticFields pGVar1;

		HumanLoadout.Blade = "Blade";
		pGVar1 = typeof(HumanLoadout).static_fields;
		pGVar1.AHSS = "AHSS";
		pGVar1 = typeof(HumanLoadout).static_fields;
		pGVar1.Thunderspear = "Thunderspear";
		pGVar1 = typeof(HumanLoadout).static_fields;
		pGVar1.APG = "APG";
		pGVar1 = typeof(HumanLoadout).static_fields;
		pGVar1.Unarmed = "Unarmed";
		pGVar1 = typeof(HumanLoadout).static_fields;
		pGVar1.Civilian = "Civilian";
		return;
	}
}
