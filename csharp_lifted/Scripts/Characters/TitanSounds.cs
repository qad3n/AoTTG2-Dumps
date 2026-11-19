// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanSounds
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/TitanSounds.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/TitanSounds.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000731")]
internal class TitanSounds
{
	[Token(Token = "0x40023FD")]
	[FieldOffset(Offset = "0x0")]
	public static string Footstep1;

	[Token(Token = "0x40023FE")]
	[FieldOffset(Offset = "0x8")]
	public static string Footstep2;

	[Token(Token = "0x40023FF")]
	[FieldOffset(Offset = "0x10")]
	public static string Footstep3;

	[Token(Token = "0x4002400")]
	[FieldOffset(Offset = "0x18")]
	public static string Swing1;

	[Token(Token = "0x4002401")]
	[FieldOffset(Offset = "0x20")]
	public static string Swing2;

	[Token(Token = "0x4002402")]
	[FieldOffset(Offset = "0x28")]
	public static string Swing3;

	[Token(Token = "0x4002403")]
	[FieldOffset(Offset = "0x30")]
	public static string Hurt1;

	[Token(Token = "0x4002404")]
	[FieldOffset(Offset = "0x38")]
	public static string Hurt2;

	[Token(Token = "0x4002405")]
	[FieldOffset(Offset = "0x40")]
	public static string Hurt3;

	[Token(Token = "0x4002406")]
	[FieldOffset(Offset = "0x48")]
	public static string Hurt4;

	[Token(Token = "0x4002407")]
	[FieldOffset(Offset = "0x50")]
	public static string Hurt5;

	[Token(Token = "0x4002408")]
	[FieldOffset(Offset = "0x58")]
	public static string Hurt6;

	[Token(Token = "0x4002409")]
	[FieldOffset(Offset = "0x60")]
	public static string Hurt7;

	[Token(Token = "0x400240A")]
	[FieldOffset(Offset = "0x68")]
	public static string Hurt8;

	[Token(Token = "0x400240B")]
	[FieldOffset(Offset = "0x70")]
	public static string Grunt1;

	[Token(Token = "0x400240C")]
	[FieldOffset(Offset = "0x78")]
	public static string Grunt2;

	[Token(Token = "0x400240D")]
	[FieldOffset(Offset = "0x80")]
	public static string Grunt3;

	[Token(Token = "0x400240E")]
	[FieldOffset(Offset = "0x88")]
	public static string Grunt4;

	[Token(Token = "0x400240F")]
	[FieldOffset(Offset = "0x90")]
	public static string Grunt5;

	[Token(Token = "0x4002410")]
	[FieldOffset(Offset = "0x98")]
	public static string Grunt6;

	[Token(Token = "0x4002411")]
	[FieldOffset(Offset = "0xA0")]
	public static string Grunt7;

	[Token(Token = "0x4002412")]
	[FieldOffset(Offset = "0xA8")]
	public static string Grunt8;

	[Token(Token = "0x4002413")]
	[FieldOffset(Offset = "0xB0")]
	public static string Grunt9;

	[Token(Token = "0x4002414")]
	[FieldOffset(Offset = "0xB8")]
	public static string Grunt10;

	[Token(Token = "0x4002415")]
	[FieldOffset(Offset = "0xC0")]
	public static string Hit;

	[Token(Token = "0x4002416")]
	[FieldOffset(Offset = "0xC8")]
	public static string Roar1;

	[Token(Token = "0x4002417")]
	[FieldOffset(Offset = "0xD0")]
	public static string Roar2;

	[Token(Token = "0x4002418")]
	[FieldOffset(Offset = "0xD8")]
	public static string DeathFall;

	[Token(Token = "0x4002419")]
	[FieldOffset(Offset = "0xE0")]
	public static string DeathNoFall;

	[Token(Token = "0x400241A")]
	[FieldOffset(Offset = "0xE8")]
	public static string Steam;

	[Token(Token = "0x400241B")]
	[FieldOffset(Offset = "0xF0")]
	public static string Bite1;

	[Token(Token = "0x400241C")]
	[FieldOffset(Offset = "0xF8")]
	public static string Bite2;

	[Token(Token = "0x400241D")]
	[FieldOffset(Offset = "0x100")]
	public static string Laugh1;

	[Token(Token = "0x400241E")]
	[FieldOffset(Offset = "0x108")]
	public static string Laugh2;

	[Token(Token = "0x400241F")]
	[FieldOffset(Offset = "0x110")]
	public static string Huff1;

	[Token(Token = "0x4002420")]
	[FieldOffset(Offset = "0x118")]
	public static string Huff2;

	[Token(Token = "0x4002421")]
	[FieldOffset(Offset = "0x120")]
	public static string Huff3;

	[Token(Token = "0x4002422")]
	[FieldOffset(Offset = "0x128")]
	public static string Huff4;

	[Token(Token = "0x4002423")]
	[FieldOffset(Offset = "0x130")]
	public static string Huff5;

	[Token(Token = "0x4002424")]
	[FieldOffset(Offset = "0x138")]
	public static string Huff6;

	[Token(Token = "0x4002425")]
	[FieldOffset(Offset = "0x140")]
	public static string TitanJump;

	[Token(Token = "0x4002426")]
	[FieldOffset(Offset = "0x148")]
	public static string RockPickup;

	[Token(Token = "0x4002427")]
	[FieldOffset(Offset = "0x150")]
	public static string RockThrow1;

	[Token(Token = "0x4002428")]
	[FieldOffset(Offset = "0x158")]
	public static string RockThrow2;

	[Token(Token = "0x4002429")]
	[FieldOffset(Offset = "0x160")]
	public static string Decapitate;

	[Token(Token = "0x400242A")]
	[FieldOffset(Offset = "0x168")]
	private static string[] Footsteps;

	[Token(Token = "0x60045CE")]
	[Address(RVA = "0x5B5FB70", Offset = "0x5B5EB70", VA = "0x5B5FB70")]
	public static string GetRandom(params string[] sounds)
	{
		// Lifted from source/cpp/Characters/TitanSounds.c (Characters.TitanSounds$$GetRandom): clean
		uint uVar1;

		if (sounds == null) {
			throw new NullReferenceException();
		}
		uVar1 = Random.Range(0, (int32_t)sounds.Length);
		if ((uint)sounds.Length <= uVar1) {
			throw new IndexOutOfRangeException();
		}
		return sounds[(int)uVar1];
	}

	[Token(Token = "0x60045CF")]
	[Address(RVA = "0x5B5FBA0", Offset = "0x5B5EBA0", VA = "0x5B5FBA0")]
	public static string GetRandomFromList(string[] sounds)
	{
		// Lifted from source/cpp/Characters/TitanSounds.c (Characters.TitanSounds$$GetRandomFromList): clean
		uint uVar1;

		if (sounds == null) {
			throw new NullReferenceException();
		}
		uVar1 = Random.Range(0, (int32_t)sounds.Length);
		if ((uint)sounds.Length <= uVar1) {
			throw new IndexOutOfRangeException();
		}
		return sounds[(int)uVar1];
	}

	[Token(Token = "0x60045D0")]
	[Address(RVA = "0x5B5FBD0", Offset = "0x5B5EBD0", VA = "0x5B5FBD0")]
	public static string GetRandomFootstep()
	{
		// Lifted from source/cpp/Characters/TitanSounds.c (Characters.TitanSounds$$GetRandomFootstep): clean
		uint uVar1;
		String[] pSVar2;
		uint uVar3;

		if (Il2CppMethodInitialized_07547893 == false) {
			Il2CppMethodInitialized_07547893 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = TitanSounds.Footsteps;
		}
		else {
			pSVar2 = *(String[]*)((long)(typeof(TitanSounds)).static_fields + 0x168);
		}
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		uVar3 = Random.Range(0, (int32_t)pSVar2.Length);
		if ((uint)pSVar2.Length <= uVar3) {
			throw new IndexOutOfRangeException();
		}
		return pSVar2[(int)uVar3];
	}

	[Token(Token = "0x60045D1")]
	[Address(RVA = "0x5B5FC70", Offset = "0x5B5EC70", VA = "0x5B5FC70")]
	public static string GetRandomHurt()
	{
		// Lifted from source/cpp/Characters/TitanSounds.c (Characters.TitanSounds$$GetRandomHurt): 12 lines keep C-only constructs
		uint uVar1;
		object pIVar2;

		pIVar2 = new string[8];
		if (pIVar2 == null) {
			throw new NullReferenceException();
		}
		if (*(int)&pIVar2[1].monitor != 0) {
			pIVar2[2].klass = (Il2CppClass)TitanSounds.Hurt1;
			if (((ulong)pIVar2[1].monitor & 0xfffffffe) != 0) {
				pIVar2[2].monitor = TitanSounds.Hurt2;
				if (2 < *(uint)&pIVar2[1].monitor) {
					pIVar2[3].klass = (Il2CppClass)TitanSounds.Hurt3;
					if (((ulong)pIVar2[1].monitor & 0xfffffffc) != 0) {
						pIVar2[3].monitor = TitanSounds.Hurt4;
						if (4 < *(uint)&pIVar2[1].monitor) {
							pIVar2[4].klass = (Il2CppClass)TitanSounds.Hurt5;
							if (5 < *(uint)&pIVar2[1].monitor) {
								pIVar2[4].monitor = TitanSounds.Hurt6;
								if (6 < *(uint)&pIVar2[1].monitor) {
									pIVar2[5].klass = (Il2CppClass)TitanSounds.Hurt7;
									if (((ulong)pIVar2[1].monitor & 0xfffffff8) != 0) {
										pIVar2[5].monitor = TitanSounds.Hurt8;
										uVar1 = Random.Range(0, *(int)&pIVar2[1].monitor);
										if (uVar1 < *(uint)&pIVar2[1].monitor) {
											return (String)(&pIVar2[2].klass)[(int)uVar1];
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

	[Token(Token = "0x60045D2")]
	[Address(RVA = "0x5B5FE30", Offset = "0x5B5EE30", VA = "0x5B5FE30")]
	public static string GetRandomGrabGrunt()
	{
		// Lifted from source/cpp/Characters/TitanSounds.c (Characters.TitanSounds$$GetRandomGrabGrunt): 15 lines keep C-only constructs
		uint uVar1;
		object pIVar2;

		pIVar2 = new string[10];
		if (pIVar2 == null) {
			throw new NullReferenceException();
		}
		if (*(int)&pIVar2[1].monitor != 0) {
			pIVar2[2].klass = (Il2CppClass)TitanSounds.Grunt1;
			if (((ulong)pIVar2[1].monitor & 0xfffffffe) != 0) {
				pIVar2[2].monitor = TitanSounds.Grunt2;
				if (2 < *(uint)&pIVar2[1].monitor) {
					pIVar2[3].klass = (Il2CppClass)TitanSounds.Grunt3;
					if (((ulong)pIVar2[1].monitor & 0xfffffffc) != 0) {
						pIVar2[3].monitor = TitanSounds.Grunt4;
						if (4 < *(uint)&pIVar2[1].monitor) {
							pIVar2[4].klass = (Il2CppClass)TitanSounds.Grunt5;
							if (5 < *(uint)&pIVar2[1].monitor) {
								pIVar2[4].monitor = TitanSounds.Grunt6;
								if (6 < *(uint)&pIVar2[1].monitor) {
									pIVar2[5].klass = (Il2CppClass)TitanSounds.Grunt7;
									if (((ulong)pIVar2[1].monitor & 0xfffffff8) != 0) {
										pIVar2[5].monitor = TitanSounds.Grunt8;
										if (8 < *(uint)&pIVar2[1].monitor) {
											pIVar2[6].klass = (Il2CppClass)TitanSounds.Grunt9;
											if (9 < *(uint)&pIVar2[1].monitor) {
												pIVar2[6].monitor = TitanSounds.Grunt10;
												uVar1 = Random.Range(0, *(int)&pIVar2[1].monitor);
												if (uVar1 < *(uint)&pIVar2[1].monitor) {
													return (String)(&pIVar2[2].klass)[(int)uVar1];
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

	[Token(Token = "0x60045D3")]
	[Address(RVA = "0x5B60050", Offset = "0x5B5F050", VA = "0x5B60050")]
	public static string GetRandomLaugh()
	{
		// Lifted from source/cpp/Characters/TitanSounds.c (Characters.TitanSounds$$GetRandomLaugh): 5 lines keep C-only constructs
		uint uVar1;
		object pIVar2;

		pIVar2 = new string[2];
		if (pIVar2 == null) {
			throw new NullReferenceException();
		}
		if (*(int)&pIVar2[1].monitor != 0) {
			pIVar2[2].klass = (Il2CppClass)TitanSounds.Laugh1;
			if (((ulong)pIVar2[1].monitor & 0xfffffffe) != 0) {
				pIVar2[2].monitor = TitanSounds.Laugh2;
				uVar1 = Random.Range(0, *(int)&pIVar2[1].monitor);
				if (uVar1 < *(uint)&pIVar2[1].monitor) {
					return (String)(&pIVar2[2].klass)[(int)uVar1];
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60045D4")]
	[Address(RVA = "0x5B60130", Offset = "0x5B5F130", VA = "0x5B60130")]
	public static string GetRandomBite()
	{
		// Lifted from source/cpp/Characters/TitanSounds.c (Characters.TitanSounds$$GetRandomBite): 5 lines keep C-only constructs
		uint uVar1;
		object pIVar2;

		pIVar2 = new string[2];
		if (pIVar2 == null) {
			throw new NullReferenceException();
		}
		if (*(int)&pIVar2[1].monitor != 0) {
			pIVar2[2].klass = (Il2CppClass)TitanSounds.Bite1;
			if (((ulong)pIVar2[1].monitor & 0xfffffffe) != 0) {
				pIVar2[2].monitor = TitanSounds.Bite2;
				uVar1 = Random.Range(0, *(int)&pIVar2[1].monitor);
				if (uVar1 < *(uint)&pIVar2[1].monitor) {
					return (String)(&pIVar2[2].klass)[(int)uVar1];
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60045D5")]
	[Address(RVA = "0x5B60210", Offset = "0x5B5F210", VA = "0x5B60210")]
	public TitanSounds()
	{
		// Lifted from source/cpp/Characters/TitanSounds.c (Characters.TitanSounds$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/TitanSounds.c.

	// Characters.TitanSounds$$.cctor: clean
	static TitanSounds()
	{
		Characters_TitanSounds_StaticFields pCVar1;
		String[] pSVar2;

		TitanSounds.Footstep1 = "Footstep1";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Footstep2 = "Footstep2";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Footstep3 = "Footstep3";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Swing1 = "Swing1";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Swing2 = "Swing2";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Swing3 = "Swing3";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Hurt1 = "Hurt1";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Hurt2 = "Hurt2";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Hurt3 = "Hurt3";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Hurt4 = "Hurt4";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Hurt5 = "Hurt5";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Hurt6 = "Hurt6";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Hurt7 = "Hurt7";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Hurt8 = "Hurt8";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Grunt1 = "Grunt1";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Grunt2 = "Grunt2";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Grunt3 = "Grunt3";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Grunt4 = "Grunt4";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Grunt5 = "Grunt5";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Grunt6 = "Grunt6";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Grunt7 = "Grunt7";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Grunt8 = "Grunt8";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Grunt9 = "Grunt9";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Grunt10 = "Grunt10";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Hit = "Hit";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Roar1 = "Roar1";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Roar2 = "Roar2";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.DeathFall = "DeathFall";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.DeathNoFall = "DeathNoFall";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Steam = "Steam";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Bite1 = "Bite1";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Bite2 = "Bite2";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Laugh1 = "Laugh1";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Laugh2 = "Laugh2";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Huff1 = "Huff1";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Huff2 = "Huff2";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Huff3 = "Huff3";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Huff4 = "Huff4";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Huff5 = "Huff5";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Huff6 = "Huff6";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.TitanJump = "TitanJump";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.RockPickup = "RockPickup";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.RockThrow1 = "RockThrow1";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.RockThrow2 = "RockThrow2";
		pCVar1 = typeof(TitanSounds).static_fields;
		pCVar1.Decapitate = "Decapitate";
		pSVar2 = (String[])new string[3];
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar2.Length != 0) {
			pSVar2[0] = TitanSounds.Footstep1;
			if ((pSVar2.Length & 0xfffffffe) != 0) {
				pSVar2[1] = TitanSounds.Footstep2;
				if (2 < (uint)pSVar2.Length) {
					pSVar2[2] = TitanSounds.Footstep3;
					pCVar1 = typeof(TitanSounds).static_fields;
					pCVar1.Footsteps = pSVar2;
					return;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}
}
