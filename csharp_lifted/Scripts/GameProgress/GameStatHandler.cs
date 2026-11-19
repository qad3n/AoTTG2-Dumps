// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.GameStatHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/GameStatHandler.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameStatHandler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace GameProgress;

[Token(Token = "0x200036F")]
internal class GameStatHandler : BaseGameProgressHandler
{
	[Token(Token = "0x400112B")]
	private const int ExpPerKill = 10;

	[Token(Token = "0x400112C")]
	private const int ExpPerLevelBase = 500;

	[Token(Token = "0x400112D")]
	private const int MaxExpPerLevel = 2000;

	[Token(Token = "0x400112E")]
	private const float ExpPerLevelMultiplier = 1.2f;

	[Token(Token = "0x400112F")]
	private const int MaxLevel = 50;

	[Token(Token = "0x4001130")]
	[FieldOffset(Offset = "0x10")]
	private List<int> _expPerLevel;

	[Token(Token = "0x4001131")]
	[FieldOffset(Offset = "0x18")]
	private GameStatContainer _gameStat;

	[Token(Token = "0x600154B")]
	[Address(RVA = "0x581FFB0", Offset = "0x581EFB0", VA = "0x581FFB0")]
	public GameStatHandler(GameStatContainer gameStat)
	{
		// Lifted from source/cpp/GameProgress/GameStatHandler.c (GameProgress.GameStatHandler$$.ctor): 4 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Int32[] pSVar3;
		int iVar5;
		List<int> pSVar6;
		int index;
		float fVar7;

		pSVar6 = new List<int>();
		this._expPerLevel = pSVar6;
		base();
		this._gameStat = gameStat;
		pSVar6 = this._expPerLevel;
		if (pSVar6 != null) {
			piVar1 = &pSVar6._version;
			*piVar1 = *piVar1 + 1;
			pSVar3 = pSVar6._items;
			if (pSVar3 != null) {
				uVar2 = pSVar6._size;
				if (uVar2 < (uint)pSVar3.Length) {
					pSVar6._size = uVar2 + 1;
					pSVar3[(int)uVar2] = 500;
				}
				else {
					pSVar6.AddWithResize(500);
				}
				index = 0;
				while (true) {
					pSVar6 = this._expPerLevel;
					if (!(pSVar6 != null)) break;
					iVar5 = pSVar6.get_Item(index);
					piVar1 = &pSVar6._version;
					*piVar1 = *piVar1 + 1;
					fVar7 = (float)iVar5 * 1.2;
					if (2000.0 <= fVar7) {
						fVar7 = 2000.0;
					}
					pSVar3 = pSVar6._items;
					if (pSVar3 == null) break;
					uVar2 = pSVar6._size;
					if (uVar2 < (uint)pSVar3.Length) {
						pSVar6._size = uVar2 + 1;
						pSVar3[(int)uVar2] = (int)fVar7;
						index = index + 1;
						if (index == 0x31) {
							return;
						}
					}
					else {
						pSVar6.AddWithResize((int)fVar7);
						index = index + 1;
						if (index == 0x31) {
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600154C")]
	[Address(RVA = "0x58204D0", Offset = "0x581F4D0", VA = "0x58204D0")]
	public int GetExpToNext()
	{
		// Lifted from source/cpp/GameProgress/GameStatHandler.c (GameProgress.GameStatHandler$$GetExpToNext): clean
		GameStatContainer pGVar1;
		IntSetting pSVar2;
		List<int> __this_00;
		int iVar3;

		pGVar1 = this._gameStat;
		if ((pGVar1 != null) &&(pSVar2 = pGVar1.Level, pSVar2 != null)) {
			iVar3 = pSVar2._value;
			if (0x31 < iVar3) {
				return 0;
			}
			__this_00 = this._expPerLevel;
			if (__this_00 != null) {
				iVar3 = __this_00.get_Item(iVar3);
				return iVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600154D")]
	[Address(RVA = "0x5820620", Offset = "0x581F620", VA = "0x5820620")]
	public void AddExp(int exp)
	{
		// Lifted from source/cpp/GameProgress/GameStatHandler.c (GameProgress.GameStatHandler$$AddExp): clean
		GameStatContainer pGVar1;
		IntSetting __this_00;
		uint value;

		pGVar1 = this._gameStat;
		if ((pGVar1 == null) ||(__this_00 = pGVar1.Exp, __this_00 == null)) {
			throw new NullReferenceException();
		}
		value = exp + __this_00._value;
		__this_00.Value = value;
		this.CheckLevelUp();
		return;
	}

	[Token(Token = "0x600154E")]
	[Address(RVA = "0x5821B00", Offset = "0x5820B00", VA = "0x5821B00")]
	private void CheckLevelUp()
	{
		// Lifted from source/cpp/GameProgress/GameStatHandler.c (GameProgress.GameStatHandler$$CheckLevelUp): clean
		int iVar1;
		GameStatContainer pGVar2;
		IntSetting pSVar3;
		List<int> __this_00;
		int iVar4;

		pGVar2 = this._gameStat;
		if ((pGVar2 != null) &&(pSVar3 = pGVar2.Level, pSVar3 != null)) {
			iVar4 = pSVar3._value;
			pSVar3 = pGVar2.Exp;
			if (iVar4 < 0x32) {
				if (pSVar3 != null) {
					iVar1 = pSVar3._value;
					if (iVar1 < 1) {
						return;
					}
					__this_00 = this._expPerLevel;
					if (__this_00 != null) {
						iVar4 = __this_00.get_Item(iVar4);
						if (iVar1 < iVar4) {
							return;
						}
						pGVar2 = this._gameStat;
						if ((pGVar2 != null) &&(pSVar3 = pGVar2.Level, pSVar3 != null)) {
							pSVar3.Value = pSVar3._value + 1;
							pGVar2 = this._gameStat;
							if ((pGVar2 != null) &&(pSVar3 = pGVar2.Exp, pSVar3 != null)) {
								pSVar3.Value = 0;
								return;
							}
						}
					}
				}
			}
			else if (pSVar3 != null) {
				pSVar3.Value = 0;
				pGVar2 = this._gameStat;
				if ((pGVar2 != null) &&(pSVar3 = pGVar2.Level, pSVar3 != null)) {
					pSVar3.Value = 0x32;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600154F")]
	[Address(RVA = "0x5821C30", Offset = "0x5820C30", VA = "0x5821C30", Slot = "4")]
	public override void RegisterTitanKill(BasicTitan victim, KillMethod method)
	{
		// Lifted from source/cpp/GameProgress/GameStatHandler.c (GameProgress.GameStatHandler$$RegisterTitanKill): clean
		GameStatContainer pGVar1;
		uint value;
		IntSetting pSVar2;

		switch(method.Weapon) {
		case 0:
			pGVar1 = this._gameStat;
			if (pGVar1 == null) goto label_05921d69;
			pSVar2 = pGVar1.TitansKilledBlade;
			break;
		case 1:
			pGVar1 = this._gameStat;
			if (pGVar1 == null) goto label_05921d69;
			pSVar2 = pGVar1.TitansKilledAHSS;
			break;
		case 2:
			pGVar1 = this._gameStat;
			if (pGVar1 == null) goto label_05921d69;
			pSVar2 = pGVar1.TitansKilledThunderspear;
			break;
		case 3:
			pGVar1 = this._gameStat;
			if (pGVar1 == null) goto label_05921d69;
			pSVar2 = pGVar1.TitansKilledAPG;
			break;
		default: ;
			pGVar1 = this._gameStat;
			if (pGVar1 == null) goto label_05921d69;
			pSVar2 = pGVar1.TitansKilledOther;
		}
		if (pSVar2 != null) {
			pSVar2.Value = pSVar2._value + 1;
			pGVar1 = this._gameStat;
			if ((pGVar1 != null) &&(pSVar2 = pGVar1.TitansKilledTotal, pSVar2 != null)) {
				pSVar2.Value = pSVar2._value + 1;
				pGVar1 = this._gameStat;
				if ((pGVar1 != null) &&(pSVar2 = pGVar1.Exp, pSVar2 != null)) {
					value = pSVar2._value + 10;
					pSVar2.Value = value;
					this.CheckLevelUp();
					return;
				}
			}
		}
	label_05921d69: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001550")]
	[Address(RVA = "0x5821D70", Offset = "0x5820D70", VA = "0x5821D70", Slot = "5")]
	public override void RegisterHumanKill(Human victim, KillMethod method)
	{
		// Lifted from source/cpp/GameProgress/GameStatHandler.c (GameProgress.GameStatHandler$$RegisterHumanKill): clean
		GameStatContainer pGVar1;
		uint value;
		IntSetting pSVar2;

		switch(method.Weapon) {
		case 0:
			pGVar1 = this._gameStat;
			if (pGVar1 == null) goto label_05921ed1;
			pSVar2 = pGVar1.HumansKilledBlade;
			break;
		case 1:
			pGVar1 = this._gameStat;
			if (pGVar1 == null) goto label_05921ed1;
			pSVar2 = pGVar1.HumansKilledAHSS;
			break;
		case 2:
			pGVar1 = this._gameStat;
			if (pGVar1 == null) goto label_05921ed1;
			pSVar2 = pGVar1.HumansKilledThunderspear;
			break;
		case 3:
			pGVar1 = this._gameStat;
			if (pGVar1 == null) goto label_05921ed1;
			pSVar2 = pGVar1.HumansKilledAPG;
			break;
		default: ;
			pGVar1 = this._gameStat;
			if (pGVar1 == null) goto label_05921ed1;
			pSVar2 = pGVar1.HumansKilledOther;
			break;
		case 6:
			pGVar1 = this._gameStat;
			if (pGVar1 == null) goto label_05921ed1;
			pSVar2 = pGVar1.HumansKilledTitan;
		}
		if (pSVar2 != null) {
			pSVar2.Value = pSVar2._value + 1;
			pGVar1 = this._gameStat;
			if ((pGVar1 != null) &&(pSVar2 = pGVar1.HumansKilledTotal, pSVar2 != null)) {
				pSVar2.Value = pSVar2._value + 1;
				pGVar1 = this._gameStat;
				if ((pGVar1 != null) &&(pSVar2 = pGVar1.Exp, pSVar2 != null)) {
					value = pSVar2._value + 10;
					pSVar2.Value = value;
					this.CheckLevelUp();
					return;
				}
			}
		}
	label_05921ed1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001551")]
	[Address(RVA = "0x5821EE0", Offset = "0x5820EE0", VA = "0x5821EE0", Slot = "6")]
	public override void RegisterDamage(GameObject victim, KillMethod method, int damage)
	{
		// Lifted from source/cpp/GameProgress/GameStatHandler.c (GameProgress.GameStatHandler$$RegisterDamage): 1 lines keep C-only constructs
		GameStatContainer pGVar1;
		DamageSetting __this_00;
		KillMethod method_00;

		pGVar1 = this._gameStat;
		if ((pGVar1 == null) ||(__this_00 = pGVar1.Damage, __this_00 == null)) {
			throw new NullReferenceException();
		}
		method_00._4_4_ = 0;
		method_00.Weapon = method.Weapon;
		method_00.Special = method.Special;
		__this_00.Register(method_00, (long)damage);
		return;
	}

	[Token(Token = "0x6001552")]
	[Address(RVA = "0x5821F10", Offset = "0x5820F10", VA = "0x5821F10", Slot = "7")]
	public override void RegisterSpeed(float speed)
	{
		// Lifted from source/cpp/GameProgress/GameStatHandler.c (GameProgress.GameStatHandler$$RegisterSpeed): clean
		GameStatContainer pGVar1;
		FloatSetting __this_00;
		float value;

		pGVar1 = this._gameStat;
		if ((pGVar1 == null) ||(__this_00 = pGVar1.HighestSpeed, __this_00 == null)) {
			throw new NullReferenceException();
		}
		value = __this_00._value;
		if (value <= speed) {
			value = speed;
		}
		__this_00.Value = value;
		return;
	}

	[Token(Token = "0x6001553")]
	[Address(RVA = "0x5821F90", Offset = "0x5820F90", VA = "0x5821F90", Slot = "8")]
	public override void RegisterInteraction(GameObject interact, InteractionType type)
	{
		// Lifted from source/cpp/GameProgress/GameStatHandler.c (GameProgress.GameStatHandler$$RegisterInteraction): clean
		return;
	}
}
