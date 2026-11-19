// ==================== AoTTG2 cross-reference ====================
// Type: Utility.PhysicsLayer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/PhysicsLayer.c
// Prior real C# source (older reference): Assets/Scripts/Utility/PhysicsLayer.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x200092F")]
internal class PhysicsLayer
{
	[Token(Token = "0x4002E39")]
	[FieldOffset(Offset = "0x0")]
	public static int UI;

	[Token(Token = "0x4002E3A")]
	[FieldOffset(Offset = "0x4")]
	public static int NoCollision;

	[Token(Token = "0x4002E3B")]
	[FieldOffset(Offset = "0x8")]
	public static int Hitbox;

	[Token(Token = "0x4002E3C")]
	[FieldOffset(Offset = "0xC")]
	public static int Human;

	[Token(Token = "0x4002E3D")]
	[FieldOffset(Offset = "0x10")]
	public static int TitanMovebox;

	[Token(Token = "0x4002E3E")]
	[FieldOffset(Offset = "0x14")]
	public static int TitanPushbox;

	[Token(Token = "0x4002E3F")]
	[FieldOffset(Offset = "0x18")]
	public static int Hurtbox;

	[Token(Token = "0x4002E40")]
	[FieldOffset(Offset = "0x1C")]
	public static int Projectile;

	[Token(Token = "0x4002E41")]
	[FieldOffset(Offset = "0x20")]
	public static int ProjectileDetection;

	[Token(Token = "0x4002E42")]
	[FieldOffset(Offset = "0x24")]
	public static int CharacterDetection;

	[Token(Token = "0x4002E43")]
	[FieldOffset(Offset = "0x28")]
	public static int NPC;

	[Token(Token = "0x4002E44")]
	[FieldOffset(Offset = "0x2C")]
	public static int MapObjectMapObjects;

	[Token(Token = "0x4002E45")]
	[FieldOffset(Offset = "0x30")]
	public static int MapObjectProjectiles;

	[Token(Token = "0x4002E46")]
	[FieldOffset(Offset = "0x34")]
	public static int MapObjectCharacters;

	[Token(Token = "0x4002E47")]
	[FieldOffset(Offset = "0x38")]
	public static int MapObjectEntities;

	[Token(Token = "0x4002E48")]
	[FieldOffset(Offset = "0x3C")]
	public static int MapObjectAll;

	[Token(Token = "0x4002E49")]
	[FieldOffset(Offset = "0x40")]
	public static int MapEditorObject;

	[Token(Token = "0x4002E4A")]
	[FieldOffset(Offset = "0x44")]
	public static int MapEditorGizmo;

	[Token(Token = "0x4002E4B")]
	[FieldOffset(Offset = "0x48")]
	public static int MinimapIcon;

	[Token(Token = "0x4002E4C")]
	[FieldOffset(Offset = "0x4C")]
	public static int Background;

	[Token(Token = "0x4002E4D")]
	[FieldOffset(Offset = "0x50")]
	public static int MapObjectTitans;

	[Token(Token = "0x4002E4E")]
	[FieldOffset(Offset = "0x54")]
	public static int MapObjectHumans;

	[Token(Token = "0x4002E4F")]
	[FieldOffset(Offset = "0x58")]
	private static Dictionary<int, LayerMask> _masks;

	[Token(Token = "0x60056A5")]
	[Address(RVA = "0x5CEF560", Offset = "0x5CEE560", VA = "0x5CEF560")]
	public static void Init()
	{
		// Lifted from source/cpp/Utility/PhysicsLayer.c (Utility.PhysicsLayer$$Init): 6 lines keep C-only constructs
		int iVar1;
		uint uVar2;
		int iVar3;
		Utility_PhysicsLayer_StaticFields pUVar4;
		Int32[] pSVar5;

		iVar1 = PhysicsLayer.NoCollision;
		pSVar5 = (Int32[])new int[0];
		PhysicsLayer.SetLayerCollisions(iVar1, pSVar5);
		iVar1 = PhysicsLayer.Hitbox;
		pSVar5 = (Int32[])new int[4];
		if (pSVar5 == null) goto label_05defe6c;
		uVar2 = (uint)pSVar5.Length;
		if (uVar2 != 0) {
			pUVar4 = typeof(PhysicsLayer).static_fields;
			pSVar5[0] = pUVar4.Human;
			if (((uVar2 != 1) && (pSVar5[1] = pUVar4.TitanPushbox, 2 < uVar2)) &&(pSVar5[2] = pUVar4.Hurtbox, uVar2 != 3)) {
				pSVar5[3] = pUVar4.NPC;
				PhysicsLayer.SetLayerCollisions(iVar1, pSVar5);
				iVar1 = PhysicsLayer.Human;
				pSVar5 = (Int32[])new int[8];
				if (pSVar5 == null) goto label_05defe6c;
				uVar2 = (uint)pSVar5.Length;
				if (uVar2 != 0) {
					pUVar4 = typeof(PhysicsLayer).static_fields;
					pSVar5[0] = pUVar4.Hitbox;
					if ((((uVar2 != 1) && (pSVar5[1] = pUVar4.TitanPushbox, 2 < uVar2)) &&((pSVar5[2] = pUVar4.Projectile, uVar2 != 3 &&((pSVar5[3] = pUVar4.CharacterDetection, 4 < uVar2 &&(pSVar5[4] = pUVar4.MapObjectAll, uVar2 != 5)))))) &&((pSVar5[5] = *(int)&((_union_13)&pUVar4.MapObjectEntities).rgctx_data, 6 < uVar2 && (pSVar5[6] = pUVar4.MapObjectCharacters, uVar2 != 7)))) {
						pSVar5[7] = pUVar4.MapObjectHumans;
						PhysicsLayer.SetLayerCollisions(iVar1, pSVar5);
						iVar1 = PhysicsLayer.TitanMovebox;
						pSVar5 = (Int32[])new int[6];
						if (pSVar5 == null) goto label_05defe6c;
						uVar2 = (uint)pSVar5.Length;
						if (uVar2 != 0) {
							pUVar4 = typeof(PhysicsLayer).static_fields;
							pSVar5[0] = pUVar4.TitanMovebox;
							if ((((uVar2 != 1) && (pSVar5[1] = pUVar4.CharacterDetection, 2 < uVar2)) &&(pSVar5[2] = pUVar4.MapObjectAll, uVar2 != 3)) &&((pSVar5[3] = *(int)&((_union_13)&pUVar4.MapObjectEntities).rgctx_data, 4 < uVar2 && (pSVar5[4] = pUVar4.MapObjectCharacters, uVar2 != 5)))) {
								pSVar5[5] = pUVar4.MapObjectTitans;
								PhysicsLayer.SetLayerCollisions(iVar1, pSVar5);
								iVar1 = PhysicsLayer.TitanPushbox;
								pSVar5 = (Int32[])new int[4];
								if (pSVar5 == null) goto label_05defe6c;
								uVar2 = (uint)pSVar5.Length;
								if (uVar2 != 0) {
									pUVar4 = typeof(PhysicsLayer).static_fields;
									pSVar5[0] = pUVar4.Hitbox;
									if (((uVar2 != 1) && (pSVar5[1] = pUVar4.Human, 2 < uVar2)) &&(pSVar5[2] = pUVar4.Projectile, uVar2 != 3)) {
										pSVar5[3] = pUVar4.NPC;
										PhysicsLayer.SetLayerCollisions(iVar1, pSVar5);
										iVar1 = PhysicsLayer.Projectile;
										pSVar5 = (Int32[])new int[7];
										if (pSVar5 == null) goto label_05defe6c;
										uVar2 = (uint)pSVar5.Length;
										if (uVar2 != 0) {
											pUVar4 = typeof(PhysicsLayer).static_fields;
											pSVar5[0] = pUVar4.Human;
											if ((((uVar2 != 1) && (pSVar5[1] = pUVar4.TitanPushbox, 2 < uVar2)) &&(pSVar5[2] = pUVar4.ProjectileDetection, uVar2 != 3)) &&(((pSVar5[3] = *(int)&((_union_13)&pUVar4.MapObjectEntities).rgctx_data, 4 < uVar2 && (pSVar5[4] = pUVar4.MapObjectAll, uVar2 != 5)) &&(pSVar5[5] = pUVar4.MapObjectProjectiles, 6 < uVar2)))) {
												pSVar5[6] = pUVar4.NPC;
												PhysicsLayer.SetLayerCollisions(iVar1, pSVar5);
												iVar1 = PhysicsLayer.ProjectileDetection;
												pSVar5 = (Int32[])new int[1];
												if (pSVar5 == null) {
	label_05defe6c: ;
													throw new NullReferenceException();
												}
												if ((int)pSVar5.Length != 0) {
													pSVar5[0] = PhysicsLayer.Projectile;
													PhysicsLayer.SetLayerCollisions(iVar1, pSVar5);
													iVar1 = PhysicsLayer.CharacterDetection;
													pSVar5 = (Int32[])new int[2];
													if (pSVar5 == null) goto label_05defe6c;
													iVar3 = (int)pSVar5.Length;
													if (iVar3 != 0) {
														pUVar4 = typeof(PhysicsLayer).static_fields;
														pSVar5[0] = pUVar4.Human;
														if (iVar3 != 1) {
															pSVar5[1] = pUVar4.TitanMovebox;
															PhysicsLayer.SetLayerCollisions(iVar1, pSVar5);
															iVar1 = PhysicsLayer.NPC;
															pSVar5 = (Int32[])new int[6];
															if (pSVar5 == null) goto label_05defe6c;
															uVar2 = (uint)pSVar5.Length;
															if (uVar2 != 0) {
																pUVar4 = typeof(PhysicsLayer).static_fields;
																pSVar5[0] = pUVar4.TitanPushbox;
																if (((uVar2 != 1) &&(pSVar5[1] = pUVar4.MapObjectCharacters, 2 < uVar2)) &&((pSVar5[2] = *(int)&((_union_13)&pUVar4.MapObjectEntities).rgctx_data, uVar2 != 3 &&((pSVar5[3] = pUVar4.MapObjectAll, 4 < uVar2 &&(pSVar5[4] = pUVar4.Hitbox, uVar2 != 5)))))) {
																	pSVar5[5] = pUVar4.Projectile;
																	PhysicsLayer.SetLayerCollisions(iVar1, pSVar5);
																	iVar1 = PhysicsLayer.Hurtbox;
																	pSVar5 = (Int32[])new int[1];
																	if (pSVar5 == null) goto label_05defe6c;
																	if ((int)pSVar5.Length != 0) {
																		pSVar5[0] = PhysicsLayer.Hitbox;
																		PhysicsLayer.SetLayerCollisions(iVar1, pSVar5);
																		iVar1 = PhysicsLayer.MapObjectMapObjects;
																		pSVar5 = (Int32[])new int[7];
																		if (pSVar5 == null) goto label_05defe6c;
																		uVar2 = (uint)pSVar5.Length;
																		if (uVar2 != 0) {
																			pUVar4 = typeof(PhysicsLayer).static_fields;
																			pSVar5[0] = pUVar4.MapObjectAll;
																			if (((((uVar2 != 1) &&(pSVar5[1] = pUVar4.MapObjectMapObjects, 2 < uVar2)) &&(pSVar5[2] = pUVar4.MapObjectProjectiles, uVar2 != 3)) &&((pSVar5[3] = pUVar4.MapObjectTitans, 4 < uVar2 &&(pSVar5[4] = pUVar4.MapObjectHumans, uVar2 != 5)))) &&(pSVar5[5] = pUVar4.MapObjectCharacters, 6 < uVar2)) {
																				pSVar5[6] = *(int)&((_union_13)&pUVar4.MapObjectEntities).rgctx_data;
																				PhysicsLayer.SetLayerCollisions(iVar1, pSVar5);
																				iVar1 = PhysicsLayer. MapObjectProjectiles;
																				pSVar5 = (Int32[])new int[3];
																				if (pSVar5 == null) goto label_05defe6c;
																				uVar2 = (uint)pSVar5.Length;
																				if (uVar2 != 0) {
																					pUVar4 = typeof(PhysicsLayer).static_fields;
																					pSVar5[0] = pUVar4.MapObjectAll;
																					if ((uVar2 != 1) &&(pSVar5[1] = pUVar4.MapObjectMapObjects, 2 < uVar2)) {
																						pSVar5[2] = pUVar4.Projectile;
																						PhysicsLayer.SetLayerCollisions(iVar1, pSVar5);
																						iVar1 = PhysicsLayer. MapObjectTitans;
																						pSVar5 = (Int32[])new int[3];
																						if (pSVar5 == null) goto label_05defe6c;
																						uVar2 = (uint)pSVar5.Length;
																						if (uVar2 != 0) {
																							pUVar4 = typeof(PhysicsLayer).static_fields;
																							pSVar5[0] = pUVar4.MapObjectAll;
																							if ((uVar2 != 1) &&(pSVar5[1] = pUVar4.MapObjectMapObjects, 2 < uVar2)) {
																								pSVar5[2] = pUVar4.TitanMovebox;
																								PhysicsLayer.SetLayerCollisions(iVar1, pSVar5);
																								iVar1 = PhysicsLayer. MapObjectHumans;
																								pSVar5 = (Int32[])new int[3];
																								if (pSVar5 == null) goto label_05defe6c;
																								uVar2 = (uint)pSVar5.Length;
																								if (uVar2 != 0) {
																									pUVar4 = typeof(PhysicsLayer).static_fields;
																									pSVar5[0] = pUVar4.MapObjectAll;
																									if ((uVar2 != 1) &&(pSVar5[1] = pUVar4.MapObjectMapObjects, 2 < uVar2)) {
																										pSVar5[2] = pUVar4.Human;
																										PhysicsLayer.SetLayerCollisions(iVar1, pSVar5);
																										iVar1 = PhysicsLayer. MapObjectCharacters;
																										pSVar5 = (Int32[])new int[5];
																										if (pSVar5 == null) goto label_05defe6c;
																										uVar2 = (uint)pSVar5.Length;
																										if (uVar2 != 0) {
																											pUVar4 = typeof(PhysicsLayer).static_fields;
																											pSVar5[0] = pUVar4.MapObjectAll;
																											if ((((uVar2 != 1) &&(pSVar5[1] = pUVar4.MapObjectMapObjects, 2 < uVar2)) &&(pSVar5[2] = pUVar4.Human, uVar2 != 3)) &&(pSVar5[3] = pUVar4.TitanMovebox, 4 < uVar2)) {
																												pSVar5[4] = pUVar4.NPC;
																												PhysicsLayer.SetLayerCollisions(iVar1, pSVar5);
																												iVar1 = PhysicsLayer. MapObjectEntities;
																												pSVar5 = (Int32[])new int[6];
																												if (pSVar5 == null) goto label_05defe6c;
																												uVar2 = (uint)pSVar5.Length;
																												if (uVar2 != 0) {
																													pUVar4 = typeof(PhysicsLayer).static_fields;
																													pSVar5[0] = pUVar4.MapObjectAll;
																													if (((uVar2 != 1) &&(pSVar5[1] = pUVar4.MapObjectMapObjects, 2 < uVar2)) &&((pSVar5[2] = pUVar4.TitanMovebox, uVar2 != 3 &&((pSVar5[3] = pUVar4.Human, 4 < uVar2 &&(pSVar5[4] = pUVar4.Projectile, uVar2 != 5)))))) {
																														pSVar5[5] = pUVar4.NPC;
																														PhysicsLayer.SetLayerCollisions(iVar1, pSVar5);
																														iVar1 = typeof(PhysicsLayer).static_fields .MapObjectAll;
																														pSVar5 = (Int32[])new int[0xb];
																														if (pSVar5 == null) goto label_05defe6c;
																														uVar2 = (uint)pSVar5.Length;
																														if (uVar2 != 0) {
																															pUVar4 = typeof(PhysicsLayer). static_fields;
																															pSVar5[0] = pUVar4.Human;
																															if ((((((uVar2 != 1) &&(pSVar5[1] = pUVar4.TitanMovebox, 2 < uVar2)) &&(pSVar5[2] = pUVar4.Projectile, uVar2 != 3)) &&((pSVar5[3] = pUVar4.MapObjectAll, 4 < uVar2 &&(pSVar5[4] = pUVar4.MapObjectTitans, uVar2 != 5))) ) && (((pSVar5[5] = pUVar4.MapObjectHumans, 6 < uVar2 &&((pSVar5[6] = pUVar4.MapObjectMapObjects, uVar2 != 7 &&(pSVar5[7] = *(int)&((_union_13)&pUVar4.MapObjectEntities). rgctx_data, 8 < uVar2)))) &&(pSVar5[8] = pUVar4.MapObjectCharacters, uVar2 != 9)))) &&(pSVar5[9] = pUVar4.MapObjectProjectiles, 10 < uVar2) ) {
																																pSVar5[10] = pUVar4.NPC;
																																PhysicsLayer.SetLayerCollisions(iVar1, pSVar5);
																																iVar1 = typeof(PhysicsLayer). static_fields.MapEditorObject;
																																pSVar5 = (Int32[])new int[0];
																																PhysicsLayer.SetLayerCollisions(iVar1, pSVar5);
																																iVar1 = typeof(PhysicsLayer). static_fields.MapEditorGizmo;
																																pSVar5 = (Int32[])new int[0];
																																PhysicsLayer.SetLayerCollisions(iVar1, pSVar5);
																																iVar1 = typeof(PhysicsLayer). static_fields.MinimapIcon;
																																pSVar5 = (Int32[])new int[0];
																																PhysicsLayer.SetLayerCollisions(iVar1, pSVar5);
																																iVar1 = typeof(PhysicsLayer). static_fields.Background;
																																pSVar5 = (Int32[])new int[0];
																																PhysicsLayer.SetLayerCollisions(iVar1, pSVar5);
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
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60056A6")]
	[Address(RVA = "0x5CEFFC0", Offset = "0x5CEEFC0", VA = "0x5CEFFC0")]
	public static LayerMask GetMask(params int[] layers)
	{
		// Lifted from source/cpp/Utility/PhysicsLayer.c (Utility.PhysicsLayer$$GetMask): clean
		LayerMask UVar1;
		uint uVar2;
		long lVar3;
		long lVar4;

		if (layers == null) {
			throw new NullReferenceException();
		}
		if (layers.Length == 0) {
			UVar1 = ((LayerMask)0);
			return (LayerMask)(LayerMask)UVar1;
		}
		if ((int)layers.Length == 0) {
	label_05df004f: ;
			throw new IndexOutOfRangeException();
		}
		UVar1 = ((LayerMask)1 << ((byte)layers[0] & 0x1f)) ;
		if (1 < (int)layers.Length) {
			lVar3 = 9;
			do {
				uVar2 = ((LayerMask)UVar1);
				if ((ulong)(uint)layers.Length <= lVar3 - 8U) goto label_05df004f;
				UVar1 = ((LayerMask)uVar2 | 1 << ((byte)layers[lVar3 + -8] & 0x1f));
				lVar4 = lVar3 + -7;
				lVar3 = lVar3 + 1;
			} while (lVar4 < (int)layers.Length);
		}
		return (LayerMask)(LayerMask)UVar1;
	}

	[Token(Token = "0x60056A7")]
	[Address(RVA = "0x5CF0060", Offset = "0x5CEF060", VA = "0x5CF0060")]
	public static LayerMask CopyMask(int originLayer)
	{
		// Lifted from source/cpp/Utility/PhysicsLayer.c (Utility.PhysicsLayer$$CopyMask): clean
		uint uVar1;
		Dictionary<int, LayerMask> __this;
		LayerMask UVar2;

		if (Il2CppMethodInitialized_075482e9 == false) {
			Il2CppMethodInitialized_075482e9 = true;
			uVar1 = (typeof(PhysicsLayer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(PhysicsLayer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = PhysicsLayer._masks;
		}
		else {
			__this = *(Dictionary<int, LayerMask>*)((long)(typeof(PhysicsLayer)).static_fields + 0x58);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		UVar2 = __this.get_Item(originLayer);
		return (LayerMask)(LayerMask)UVar2;
	}

	[Token(Token = "0x60056A8")]
	[Address(RVA = "0x5CEFE80", Offset = "0x5CEEE80", VA = "0x5CEFE80")]
	private static void SetLayerCollisions(int layer, int[] others)
	{
		// Lifted from source/cpp/Utility/PhysicsLayer.c (Utility.PhysicsLayer$$SetLayerCollisions): clean
		Dictionary<int, LayerMask> __this;
		LayerMask value;
		ulong uVar1;
		uint uVar2;
		ulong uVar3;

		uVar2 = 0;
		do {
			Physics.IgnoreLayerCollision(layer, uVar2, true);
			uVar2 = uVar2 + 1;
		} while (uVar2 != 0x20);
		if (others != null) {
			if (0 < (int)others.Length) {
				uVar1 = others.Length & 0xffffffff;
				uVar3 = 0;
				do {
					if (uVar1 <= uVar3) {
						throw new IndexOutOfRangeException();
					}
					uVar2 = others[uVar3];
					Physics.IgnoreLayerCollision(layer, uVar2, false);
					uVar3 = uVar3 + 1;
					uVar2 = (uint)others.Length;
					uVar1 = (ulong)uVar2;
				} while ((long)uVar3 < (long)(int)uVar2);
			}
			__this = PhysicsLayer._masks;
			value = PhysicsLayer.GetMask(others);
			if (__this != null) {
				__this.Add(layer, value);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60056A9")]
	[Address(RVA = "0x5CF0100", Offset = "0x5CEF100", VA = "0x5CF0100")]
	public PhysicsLayer()
	{
		// Lifted from source/cpp/Utility/PhysicsLayer.c (Utility.PhysicsLayer$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Utility/PhysicsLayer.c.

	// Utility.PhysicsLayer$$.cctor: clean
	static PhysicsLayer()
	{
		Utility_PhysicsLayer_StaticFields pUVar1;
		Dictionary<int, LayerMask> __this;

		pUVar1 = typeof(PhysicsLayer).static_fields;
		pUVar1.UI = 5;
		pUVar1.NoCollision = 8;
		pUVar1.Hitbox = 9;
		pUVar1.Human = 10;
		pUVar1.TitanMovebox = 0xb;
		pUVar1.TitanPushbox = 0xc;
		pUVar1.Hurtbox = 0xd;
		pUVar1.Projectile = 0xe;
		pUVar1.ProjectileDetection = 0xf;
		pUVar1.CharacterDetection = 0x10;
		pUVar1.NPC = 0x11;
		pUVar1.MapObjectMapObjects = 0x14;
		pUVar1.MapObjectProjectiles = 0x15;
		pUVar1.MapObjectCharacters = 0x16;
		pUVar1.MapObjectEntities = 0x17;
		pUVar1.MapObjectAll = 0x18;
		pUVar1.MapEditorObject = 0x19;
		pUVar1.MapEditorGizmo = 0x1a;
		pUVar1.MinimapIcon = 0x1b;
		pUVar1.Background = 0x1c;
		pUVar1.MapObjectTitans = 0x1d;
		pUVar1.MapObjectHumans = 0x1e;
		__this = new Dictionary<int, LayerMask>() ;
		pUVar1 = typeof(PhysicsLayer).static_fields;
		pUVar1._masks = __this;
		return;
	}
}
