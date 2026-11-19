// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BasicTitanComponentCache
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/BasicTitanComponentCache.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BasicTitanComponentCache.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000717")]
internal class BasicTitanComponentCache : BaseTitanComponentCache
{
	[Token(Token = "0x40022F4")]
	public const string ArmBloodParticle = "ArmBloodParticle";

	[Token(Token = "0x40022F5")]
	public const string ArmSmokeParticle = "ArmSmokeParticle";

	[Token(Token = "0x40022F6")]
	public const string NapeBloodParticle = "NapeBloodParticle";

	[Token(Token = "0x40022F7")]
	public const string WardedWeakSpotParticle = "WardedWeakSpotParticle";

	[Token(Token = "0x40022F8")]
	public const string DecapitationParticle = "DecapitationParticle";

	[Token(Token = "0x40022F9")]
	public const string NapeChunkParticle = "NapeChunkParticle";

	[Token(Token = "0x40022FA")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] Particles;

	[Token(Token = "0x40022FB")]
	public const string DissolveShader = "TitanDissolve";

	[Token(Token = "0x40022FC")]
	public const string RegrowthShader = "TitanRegrowth";

	[Token(Token = "0x40022FD")]
	public const string HaircutShader = "Haircut";

	[Token(Token = "0x40022FE")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] GoreShaders;

	[Token(Token = "0x40022FF")]
	private const int DissolveNoiseSize = 32;

	[Token(Token = "0x4002300")]
	private const int DissolveNoiseSeed = 1;

	[Token(Token = "0x4002301")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int DissolveNoiseProperty;

	[Token(Token = "0x4002302")]
	[FieldOffset(Offset = "0x18")]
	private static Texture3D _dissolveNoise;

	[Token(Token = "0x4002303")]
	private const string ForearmLPath = "Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.L/upper_arm.L/forearm.L";

	[Token(Token = "0x4002304")]
	private const string ForearmRPath = "Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.R/upper_arm.R/forearm.R";

	[Token(Token = "0x4002305")]
	[FieldOffset(Offset = "0x100")]
	public BaseHitbox BodyHitbox;

	[Token(Token = "0x4002306")]
	[FieldOffset(Offset = "0x108")]
	public BaseHitbox CrawlerHitbox;

	[Token(Token = "0x4002307")]
	[FieldOffset(Offset = "0x110")]
	public Transform ForearmL;

	[Token(Token = "0x4002308")]
	[FieldOffset(Offset = "0x118")]
	public Transform ForearmR;

	[Token(Token = "0x4002309")]
	[FieldOffset(Offset = "0x120")]
	public Transform HandL;

	[Token(Token = "0x400230A")]
	[FieldOffset(Offset = "0x128")]
	public Transform HandR;

	[Token(Token = "0x400230B")]
	[FieldOffset(Offset = "0x130")]
	public float HandLHurtboxRadius;

	[Token(Token = "0x400230C")]
	[FieldOffset(Offset = "0x134")]
	public float HandRHurtboxRadius;

	[Token(Token = "0x400230D")]
	[FieldOffset(Offset = "0x138")]
	public Transform Body;

	[Token(Token = "0x400230E")]
	[FieldOffset(Offset = "0x140")]
	public Transform HairSocket;

	[Token(Token = "0x400230F")]
	[FieldOffset(Offset = "0x148")]
	public CapsuleCollider HeadCollider;

	[Token(Token = "0x4002310")]
	[FieldOffset(Offset = "0x150")]
	public Collider ForearmLHurtbox;

	[Token(Token = "0x4002311")]
	[FieldOffset(Offset = "0x158")]
	public Collider ForearmRHurtbox;

	[Token(Token = "0x4002312")]
	[FieldOffset(Offset = "0x160")]
	public ParticleSystem ForearmBloodL;

	[Token(Token = "0x4002313")]
	[FieldOffset(Offset = "0x168")]
	public ParticleSystem ForearmBloodR;

	[Token(Token = "0x4002314")]
	[FieldOffset(Offset = "0x170")]
	public ParticleSystem ForearmSmokeL;

	[Token(Token = "0x4002315")]
	[FieldOffset(Offset = "0x178")]
	public ParticleSystem ForearmSmokeR;

	[Token(Token = "0x4002316")]
	[FieldOffset(Offset = "0x180")]
	public ParticleSystem WardedWeakSpotForearmL;

	[Token(Token = "0x4002317")]
	[FieldOffset(Offset = "0x188")]
	public ParticleSystem WardedWeakSpotForearmR;

	[Token(Token = "0x4002318")]
	[FieldOffset(Offset = "0x190")]
	public ParticleSystem WardedWeakSpotLegL;

	[Token(Token = "0x4002319")]
	[FieldOffset(Offset = "0x198")]
	public ParticleSystem WardedWeakSpotLegR;

	[Token(Token = "0x400231A")]
	[FieldOffset(Offset = "0x1A0")]
	public ParticleSystem NapeBlood;

	[Token(Token = "0x400231B")]
	[FieldOffset(Offset = "0x1A8")]
	public ParticleSystem DecapitationBlood;

	[Token(Token = "0x6004530")]
	[Address(RVA = "0x5B3FC10", Offset = "0x5B3EC10", VA = "0x5B3FC10")]
	public BasicTitanComponentCache(GameObject owner)
	{
		// Lifted from source/cpp/Characters/BasicTitanComponentCache.c (Characters.BasicTitanComponentCache$$.ctor): 12 lines keep C-only constructs
		int piVar1;
		Collider* ppUVar2;
		Collider* ppUVar3;
		byte bVar4;
		BaseHitbox __this_00;
		BaseHitbox[] pCVar5;
		SphereCollider pUVar6;
		bool bVar8;
		uint uVar9;
		Transform pUVar10;
		CapsuleCollider pUVar11;
		BaseCharacter owner_00;
		Object[] pSVar12;
		Object __this_01;
		String a;
		GameObject pUVar13;
		BaseHitbox pCVar14;
		uint uVar15;
		BaseHitbox* targetAddress;
		List<BaseHitbox> __this_02;
		float fVar16;

		if (Il2CppMethodInitialized_0754780c == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider) ;
			Il2CppMethodInitialized_0754780c = true;
		}
		base(owner);
		pUVar10 = this.Transform;
		if (pUVar10 != null) {
			pUVar10 = pUVar10.Find("Amarture_VER2/Core");
			this.Core = pUVar10;
			pUVar10 = this.Transform;
			if (pUVar10 != null) {
				pUVar10 = pUVar10.Find("Amarture_VER2/Core/Controller.Body");
				this.Body = pUVar10;
				pUVar10 = this.Transform;
				if (pUVar10 != null) {
					pUVar10 = pUVar10.Find("Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck");
					this.Neck = pUVar10;
					pUVar10 = this.Transform;
					if (pUVar10 != null) {
						pUVar10 = pUVar10.Find("Amarture_VER2/Core/Controller.Body/hip");
						this.Hip = pUVar10;
						pUVar10 = this.Neck;
						if (pUVar10 != null) {
							pUVar10 = pUVar10.Find("head");
							this.Head = pUVar10;
							pUVar10 = this.Head;
							if (pUVar10 != null) {
								pUVar10 = pUVar10.Find("HairSocket");
								this.HairSocket = pUVar10;
								pUVar10 = this.Head;
								if (pUVar10 != null) {
									pUVar11 = pUVar10.GetComponent<CapsuleCollider>();
									this.HeadCollider = pUVar11;
									pUVar10 = this.Transform;
									if (pUVar10 != null) {
										pUVar10 = pUVar10.Find("Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.L/upper_arm.L/forearm.L/hand.L/GrabLSocket");
										this.GrabLSocket = pUVar10;
										pUVar10 = this.Transform;
										if (pUVar10 != null) {
											pUVar10 = pUVar10.Find("Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.R/upper_arm.R/forearm.R/hand.R/GrabRSocket");
											this.GrabRSocket = pUVar10;
											if (owner != null) {
												owner_00 = owner.GetComponent<BaseCharacter>();
												pCVar14 = (BaseHitbox)MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider;
												pSVar12 = owner.GetComponentsInChildren<Collider>();
												if (pSVar12 != null) {
													uVar9 = (uint)pSVar12.Length;
													if (0 < (int)uVar9) {
														ppUVar2 = &this.ForearmRHurtbox;
														ppUVar3 = &this.ForearmLHurtbox;
														uVar15 = 0;
														do {
															if (uVar9 <= uVar15) {
																throw new IndexOutOfRangeException();
															}
															__this_00 = (BaseHitbox)pSVar12[(int)uVar15];
															if (__this_00 == null) goto label_05c401e6;
															__this_01 = (Object)__this_00.gameObject;
															if (__this_01 == null) goto label_05c401e6;
															a = __this_01.name;
															bVar8 = (a == "ForearmLHurtbox");
															if (bVar8) {
																*ppUVar3 = (Collider)__this_00;
	label_05c3ff76: ;
																pCVar14 = __this_00;
	label_05c3ff79: ;
															}
															else {
																bVar8 = (a == "ForearmRHurtbox");
																if (bVar8) {
																	*ppUVar2 = (Collider)__this_00;
																	goto label_05c3ff76;
																}
																bVar8 = (a == "BodyHitbox");
																if (bVar8) {
																	pUVar13 = __this_00.gameObject;
																	pCVar14 = BaseHitbox.Create(owner_00, pUVar13, (Collider)__this_00);
																	this.BodyHitbox = pCVar14;
																	__this_02 = this.Hitboxes;
																	if (__this_02 != null) {
																		pCVar14 = this.BodyHitbox;
	label_05c400da: ;
																		piVar1 = &__this_02._version;
																		*piVar1 = *piVar1 + 1;
																		pCVar5 = __this_02._items;
																		if (pCVar5 != null) {
																			uVar9 = __this_02._size;
																			if ((uint)pCVar5.Length <= uVar9) {
																				__this_02.AddWithResize((object)pCVar14);
																				goto label_05c3ff7e;
																			}
																			__this_02._size = uVar9 + 1;
																			targetAddress = pCVar5.m_Items + (int)uVar9;
																			pCVar5[(int)uVar9] = pCVar14;
																			goto label_05c3ff79;
																		}
																	}
																	goto label_05c401e6;
																}
																pCVar14 = (Characters_BaseHitbox_o *)"CrawlerHitbox";
																bVar8 = (a == "CrawlerHitbox");
																if (bVar8) {
																	pUVar13 = __this_00.gameObject;
																	pCVar14 = BaseHitbox.Create(owner_00, pUVar13, (Collider)__this_00);
																	this.CrawlerHitbox = pCVar14;
																	__this_02 = this.Hitboxes;
																	if (__this_02 != null) {
																		pCVar14 = this.CrawlerHitbox;
																		goto label_05c400da;
																	}
																	goto label_05c401e6;
																}
															}
	label_05c3ff7e: ;
															uVar15 = uVar15 + 1;
															uVar9 = (uint)pSVar12.Length;
														} while ((int)uVar15 < (int)uVar9);
													}
													pUVar6 = (SphereCollider)this.HandLHurtbox;
													if (pUVar6 != null) {
														bVar4 = (typeof(SphereCollider)._2).typeHierarchyDepth;
														if ((bVar4 <= (pUVar6.klass._2).typeHierarchyDepth) &&((pUVar6.klass._2).typeHierarchy[(ulong)bVar4 - 1] ==typeof(SphereCollider))) {
															pCVar14 = null;
															fVar16 = pUVar6.radius;
															this.HandLHurtboxRadius = fVar16;
														}
													}
													pUVar6 = (SphereCollider)this.HandRHurtbox;
													if (pUVar6 != null) {
														bVar4 = (typeof(SphereCollider)._2).typeHierarchyDepth;
														if ((bVar4 <= (pUVar6.klass._2).typeHierarchyDepth) &&((pUVar6.klass._2).typeHierarchy[(ulong)bVar4 - 1] ==typeof(SphereCollider))) {
															pCVar14 = null;
															fVar16 = pUVar6.radius;
															this.HandRHurtboxRadius = fVar16;
														}
													}
													this.SetupParticles();
													this.LoadAudio("Titans/Prefabs/TitanSounds", this.Neck);
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
	label_05c401e6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004531")]
	[Address(RVA = "0x5B401F0", Offset = "0x5B3F1F0", VA = "0x5B401F0")]
	private void SetupParticles()
	{
		// Lifted from source/cpp/Characters/BasicTitanComponentCache.c (Characters.BasicTitanComponentCache$$SetupParticles): 64 lines keep C-only constructs
		Transform* targetAddress;
		ParticleSystem* ppUVar1;
		ParticleSystem* targetAddress_00;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		uint uVar11;
		uint uVar12;
		uint uVar13;
		uint uVar14;
		uint uVar15;
		uint uVar16;
		uint uVar17;
		UnityEngine_Vector3_StaticFields pUVar18;
		Component pUVar19;
		Transform pUVar20;
		MethodInfo pMVar21;
		ParticleSystem pUVar22;
		Transform pUVar23;
		Quaternion UVar24;
		Vector3 value;
		Vector3 value_00;
		Vector3 value_01;
		Vector3 value_02;
		Vector3 value_03;
		Vector3 value_04;
		Vector3 value_05;
		Vector3 value_06;
		Vector3 value_07;
		Vector3 local_48;
		Transform* local_38;

		pUVar20 = this.Transform;
		if (pUVar20 != null) {
			pUVar20 = pUVar20.Find("Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.L/upper_arm.L/forearm.");
			targetAddress = &this.ForearmL;
			this.ForearmL = pUVar20;
			pUVar20 = this.Transform;
			if (pUVar20 != null) {
				pUVar20 = pUVar20.Find("Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.R/upper_arm.R/forearm.R");
				local_38 = &this.ForearmR;
				this.ForearmR = pUVar20;
				pUVar20 = this.ForearmL;
				if (pUVar20 != null) {
					pUVar20 = pUVar20.Find("hand.");
					this.HandL = pUVar20;
					pUVar20 = this.ForearmR;
					if (pUVar20 != null) {
						pMVar21 = (MethodInfo)pUVar20.Find("hand.R") ;
						this.HandR = (Transform)pMVar21;
						pMVar21 = (MethodInfo)BasicTitanComponentCache.InstantiateParticle("ArmBloodParticle");
						ppUVar1 = &this.ForearmBloodL;
						this.ForearmBloodL = (ParticleSystem)pMVar21;
						pUVar22 = BasicTitanComponentCache.InstantiateParticle("ArmBloodParticle");
						targetAddress_00 = &this.ForearmBloodR;
						this.ForearmBloodR = pUVar22;
						pUVar22 = this.ForearmBloodL;
						if (pUVar22 != null) {
							pUVar20 = pUVar22.transform;
							if (pUVar20 != null) {
								pUVar20.SetParent(*targetAddress);
								if (*ppUVar1 != null) {
									pUVar20 = (*ppUVar1).transform;
									if (pUVar20 != null) {
										pUVar20.localPosition = (Vector3)(Vector3.zeroVector);
										if (*ppUVar1 != null) {
											pUVar20 = (*ppUVar1).transform;
											local_48.x = -1.5707964;
											local_48.y = 0.0;
											local_48.z = 0.0;
											UVar24 = Quaternion.Internal_FromEulerRad(ref local_48);
											if (pUVar20 != null) {
												pUVar20.localRotation = UVar24;
												if (*ppUVar1 != null) {
													pUVar20 = (*ppUVar1).transform;
													if (pUVar20 != null) {
														pUVar18 = typeof(Vector3).static_fields;
														value.z = (pUVar18.oneVector).z * 0.01;
														uVar2 = (pUVar18.oneVector).x;
														uVar10 = (pUVar18.oneVector).y;
														value.x = (float)uVar2 * 0.01;
														value.y = (float)uVar10 * 0.01;
														pUVar20.localScale = value;
														if (*targetAddress_00 != null) {
															pUVar20 = (*targetAddress_00).transform;
															if (pUVar20 != null) {
																pUVar20.SetParent(*local_38);
																if (*targetAddress_00 != null) {
																	pUVar20 = (*targetAddress_00).transform;
																	if (pUVar20 != null) {
																		pUVar20.localPosition = (Vector3)(Vector3.zeroVector) ;
																		if (*targetAddress_00 != null) {
																			pUVar20 = (*targetAddress_00).transform;
																			local_48.x = -1.5707964;
																			local_48.y = 0.0;
																			local_48.z = 0.0;
																			UVar24 = Quaternion.Internal_FromEulerRad(ref local_48);
																			if (pUVar20 != null) {
																				pUVar20.localRotation = UVar24;
																				if (*targetAddress_00 != null) {
																					pUVar20 = (*targetAddress_00).transform;
																					if (pUVar20 != null) {
																						pUVar18 = typeof(Vector3).static_fields;
																						value_00.z = (pUVar18.oneVector).z * 0.01;
																						uVar3 = (pUVar18.oneVector).x;
																						uVar11 = (pUVar18.oneVector).y;
																						value_00.x = (float)uVar3 * 0.01;
																						value_00.y = (float)uVar11 * 0.01;
																						pMVar21 = null;
																						pUVar20.localScale = value_00;
																						pMVar21 = (MethodInfo)BasicTitanComponentCache.InstantiateParticle("ArmSmokeParticle");
																						this.ForearmSmokeL =(ParticleSystem)pMVar21;
																						pMVar21 = (MethodInfo)BasicTitanComponentCache.InstantiateParticle("ArmSmokeParticle");
																						this.ForearmSmokeR =(ParticleSystem)pMVar21;
																						pUVar22 = BasicTitanComponentCache.InstantiateParticle("NapeBloodParticle");
																						ppUVar1 = &this.NapeBlood;
																						this.NapeBlood = pUVar22;
																						pUVar22 = this.NapeBlood;
																						if (pUVar22 != null) {
																							pUVar20 = pUVar22.transform;
																							if (pUVar20 != null) {
																								pUVar20.SetParent(this.Neck);
																								pUVar22 = this.NapeBlood;
																								if (pUVar22 != null) {
																									pUVar20 = pUVar22.transform;
																									if (pUVar20 != null) {
																										value_01.z = -0.1;
																										value_01.x = 0.0;
																										value_01.y = 0.02;
																										pUVar20.localPosition = value_01;
																										if (*ppUVar1 != null) {
																											pUVar20 = (*ppUVar1).transform;
																											local_48.x = 0.0;
																											local_48.y = 3.1415927;
																											local_48.z = 0.0;
																											UVar24 = Quaternion.Internal_FromEulerRad(ref local_48);
																											if (pUVar20 != null) {
																												pUVar20.localRotation = UVar24;
																												if (*ppUVar1 != null) {
																													pUVar20 = (*ppUVar1).transform;
																													if (pUVar20 != null) {
																														pUVar18 = typeof(Vector3). static_fields;
																														value_02.z =(pUVar18.oneVector).z * 0.01;
																														uVar4 = (pUVar18.oneVector).x;
																														uVar12 = (pUVar18.oneVector).y;
																														value_02.x = (float)uVar4 * 0.01;
																														value_02.y = (float)uVar12 * 0.01;
																														pMVar21 = null;
																														pUVar20.localScale = value_02;
																														pUVar22 = BasicTitanComponentCache.InstantiateParticle("WardedWeakSpotParticle");
																												ppUVar1 = &this.WardedWeakSpotForearmL;
																												this.WardedWeakSpotForearmL = pUVar22;
																												pUVar22 = this.WardedWeakSpotForearmL;
																												if (pUVar22 != null) {
																													pUVar20 = pUVar22.transform;
																													if (pUVar20 != null) {
																														pUVar20.SetParent(*targetAddress);
																														if (*ppUVar1 != null ) {
																															pUVar20 = (*ppUVar1).transform;
																															if (pUVar20 != null) {
																																pUVar20.localPosition = (Vector3)(Vector3.zeroVector );
																												if (*ppUVar1 != null) {
																													pUVar20 = (*ppUVar1).transform;
																													local_48.x = -1.5707964;
																													local_48.y = 0.0;
																													local_48.z = 0.0;
																													UVar24 = Quaternion.Internal_FromEulerRad(ref local_48);
																												if (pUVar20 != null) {
																													pUVar20.localRotation = UVar24;
																													if (*ppUVar1 != null) {
																														pUVar20 = (*ppUVar1).transform;
																														if (pUVar20 != null) {
																															pUVar18 = typeof(Vector3). static_fields;
																															value_03.z =(pUVar18.oneVector).z * 0.05;
																															uVar5 = (pUVar18.oneVector).x;
																															uVar13 = (pUVar18.oneVector).y;
																															value_03.x = (float)uVar5 * 0.05;
																															value_03.y = (float)uVar13 * 0.05;
																															pMVar21 = null;
																															pUVar20.localScale = value_03;
																															pUVar22 = BasicTitanComponentCache.InstantiateParticle("WardedWeakSpotParticle");
																												ppUVar1 = &this.WardedWeakSpotForearmR;
																												this.WardedWeakSpotForearmR = pUVar22;
																												pUVar22 = this.WardedWeakSpotForearmR;
																												if (pUVar22 != null) {
																													pUVar20 = pUVar22.transform;
																													if (pUVar20 != null) {
																														pUVar20.SetParent(*local_38);
																														if (*ppUVar1 != null ) {
																															pUVar20 = (*ppUVar1).transform;
																															if (pUVar20 != null) {
																																pUVar20.localPosition = (Vector3)(Vector3.zeroVector );
																												if (*ppUVar1 != null) {
																													pUVar20 = (*ppUVar1).transform;
																													local_48.x = -1.5707964;
																													local_48.y = 0.0;
																													local_48.z = 0.0;
																													UVar24 = Quaternion.Internal_FromEulerRad(ref local_48);
																												if (pUVar20 != null) {
																													pUVar20.localRotation = UVar24;
																													if (*ppUVar1 != null) {
																														pUVar20 = (*ppUVar1).transform;
																														if (pUVar20 != null) {
																															pUVar18 = typeof(Vector3). static_fields;
																															value_04.z =(pUVar18.oneVector).z * 0.05;
																															uVar6 = (pUVar18.oneVector).x;
																															uVar14 = (pUVar18.oneVector).y;
																															value_04.x = (float)uVar6 * 0.05;
																															value_04.y = (float)uVar14 * 0.05;
																															pMVar21 = null;
																															pUVar20.localScale = value_04;
																															pUVar22 = BasicTitanComponentCache.InstantiateParticle("WardedWeakSpotParticle");
																												ppUVar1 = &this.WardedWeakSpotLegL;
																												this.WardedWeakSpotLegL = pUVar22;
																												pUVar22 = this.WardedWeakSpotLegL;
																												if (pUVar22 != null) {
																													pUVar20 = pUVar22.transform;
																													pUVar19 = (Component)this.LegLHurtbox;
																													if (pUVar19 != null) {
																														pUVar23 = pUVar19.transform;
																														if (pUVar20 != null) {
																															pUVar20.SetParent(pUVar23);
																															if (*ppUVar1 !=null) {
																																pUVar20 = (*ppUVar1).transform;
																																if (pUVar20 != null) {
																																	pUVar20.localPosition = (Vector3)(Vector3.zeroVector );
																												if (*ppUVar1 != null) {
																													pUVar20 = (*ppUVar1).transform;
																													local_48.x = -1.5707964;
																													local_48.y = 0.0;
																													local_48.z = 0.0;
																													UVar24 = Quaternion.Internal_FromEulerRad(ref local_48);
																												if (pUVar20 != null) {
																													pUVar20.localRotation = UVar24;
																													if (*ppUVar1 != null) {
																														pUVar20 = (*ppUVar1).transform;
																														if (pUVar20 != null) {
																															pUVar18 = typeof(Vector3). static_fields;
																															value_05.z =(pUVar18.oneVector).z * 0.05;
																															uVar7 = (pUVar18.oneVector).x;
																															uVar15 = (pUVar18.oneVector).y;
																															value_05.x = (float)uVar7 * 0.05;
																															value_05.y = (float)uVar15 * 0.05;
																															pMVar21 = null;
																															pUVar20.localScale = value_05;
																															pUVar22 = BasicTitanComponentCache.InstantiateParticle("WardedWeakSpotParticle");
																												ppUVar1 = &this.WardedWeakSpotLegR;
																												this.WardedWeakSpotLegR = pUVar22;
																												pUVar22 = this.WardedWeakSpotLegR;
																												if (pUVar22 != null) {
																													pUVar20 = pUVar22.transform;
																													pUVar19 = (Component)this.LegRHurtbox;
																													if (pUVar19 != null) {
																														pUVar23 = pUVar19.transform;
																														if (pUVar20 != null) {
																															pUVar20.SetParent(pUVar23);
																															if (*ppUVar1 !=null) {
																																pUVar20 = (*ppUVar1).transform;
																																if (pUVar20 != null) {
																																	pUVar20.localPosition = (Vector3)(Vector3.zeroVector );
																												if (*ppUVar1 != null) {
																													pUVar20 = (*ppUVar1).transform;
																													local_48.x = -1.5707964;
																													local_48.y = 0.0;
																													local_48.z = 0.0;
																													UVar24 = Quaternion.Internal_FromEulerRad(ref local_48);
																												if (pUVar20 != null) {
																													pUVar20.localRotation = UVar24;
																													if (*ppUVar1 != null) {
																														pUVar20 = (*ppUVar1).transform;
																														if (pUVar20 != null) {
																															pUVar18 = typeof(Vector3). static_fields;
																															value_06.z =(pUVar18.oneVector).z * 0.05;
																															uVar8 = (pUVar18.oneVector).x;
																															uVar16 = (pUVar18.oneVector).y;
																															value_06.x = (float)uVar8 * 0.05;
																															value_06.y = (float)uVar16 * 0.05;
																															pMVar21 = null;
																															pUVar20.localScale = value_06;
																															pUVar22 = BasicTitanComponentCache.InstantiateParticle("DecapitationParticle");
																												ppUVar1 = &this.DecapitationBlood;
																												this.DecapitationBlood = pUVar22;
																												pUVar22 = this.DecapitationBlood;
																												if (pUVar22 != null) {
																													pUVar20 = pUVar22.transform;
																													if (pUVar20 != null) {
																														pUVar20.SetParent(this.Neck);
																														pUVar22 = this.DecapitationBlood;
																														if (pUVar22 != null) {
																															pUVar20 = pUVar22.transform;
																															if (pUVar20 != null) {
																																pUVar20.localPosition = (Vector3)(Vector3.zeroVector );
																												if (*ppUVar1 != null) {
																													pUVar20 = (*ppUVar1).transform;
																													local_48.x = -1.5707964;
																													local_48.y = 0.0;
																													local_48.z = 0.0;
																													UVar24 = Quaternion.Internal_FromEulerRad(ref local_48);
																												if (pUVar20 != null) {
																													pUVar20.localRotation = UVar24;
																													if (*ppUVar1 != null) {
																														pUVar20 = (*ppUVar1).transform;
																														if (pUVar20 != null) {
																															pUVar18 = typeof(Vector3). static_fields;
																															value_07.z =(pUVar18.oneVector).z * 0.01;
																															uVar9 = (pUVar18.oneVector).x;
																															uVar17 = (pUVar18.oneVector).y;
																															value_07.x = (float)uVar9 * 0.01;
																															value_07.y = (float)uVar17 * 0.01;
																															pUVar20.localScale = value_07;
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
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004532")]
	[Address(RVA = "0x5B40F80", Offset = "0x5B3FF80", VA = "0x5B40F80")]
	public static GameObject LoadParticle(string name)
	{
		// Lifted from source/cpp/Characters/BasicTitanComponentCache.c (Characters.BasicTitanComponentCache$$LoadParticle): 1 lines keep C-only constructs
		String path;
		Object pUVar1;

		path = ResourcePaths.TitanParticles;
		pUVar1 = ResourceManager.LoadAsset(path, name, false, true);
		if ((pUVar1 != null) &&(pUVar1.klass != (Object)typeof(GameObject))) {
			throw new InvalidCastException();
		}
		return (GameObject)pUVar1;
	}

	[Token(Token = "0x6004533")]
	[Address(RVA = "0x5B41040", Offset = "0x5B40040", VA = "0x5B41040")]
	public static Material LoadWoundMaterial()
	{
		// Lifted from source/cpp/Characters/BasicTitanComponentCache.c (Characters.BasicTitanComponentCache$$LoadWoundMaterial): 1 lines keep C-only constructs
		byte bVar1;
		String path;
		Material pUVar2;

		path = ResourcePaths.Characters;
		pUVar2 = (Material)ResourceManager.LoadAsset(path, "Titans/Bodies/Materials/TitanWound", false, true);
		if (pUVar2 != null) {
			bVar1 = (typeof(Material)._2).typeHierarchyDepth;
			if (((pUVar2.klass._2).typeHierarchyDepth < bVar1) ||((pUVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Material))) {
				throw new InvalidCastException();
			}
		}
		return pUVar2;
	}

	[Token(Token = "0x6004534")]
	[Address(RVA = "0x5B41120", Offset = "0x5B40120", VA = "0x5B41120")]
	public static Shader LoadShader(string name)
	{
		// Lifted from source/cpp/Characters/BasicTitanComponentCache.c (Characters.BasicTitanComponentCache$$LoadShader): 1 lines keep C-only constructs
		String path;
		Object pUVar1;

		path = ResourcePaths.Shaders;
		pUVar1 = ResourceManager.LoadAsset(path, name, false, true);
		if ((pUVar1 != null) &&(pUVar1.klass != (Object)typeof(Shader))) {
			throw new InvalidCastException();
		}
		return (Shader)pUVar1;
	}

	[Token(Token = "0x6004535")]
	[Address(RVA = "0x5B411E0", Offset = "0x5B401E0", VA = "0x5B411E0")]
	public static Shader LoadDissolveShader()
	{
		// Lifted from source/cpp/Characters/BasicTitanComponentCache.c (Characters.BasicTitanComponentCache$$LoadDissolveShader): clean
		bool bVar2;
		Texture3D pUVar3;
		Shader pUVar4;
		MethodInfo method_00;

		pUVar3 = BasicTitanComponentCache._dissolveNoise;
		method_00 = null;
		bVar2 = ((Object)pUVar3 == null);
		if (bVar2) {
			pUVar3 = BasicTitanComponentCache.CreateDissolveNoise();
			BasicTitanComponentCache._dissolveNoise = pUVar3;
			method_00 = (MethodInfo)BasicTitanComponentCache._dissolveNoise;
			Shader.SetGlobalTexture(BasicTitanComponentCache.DissolveNoiseProperty, (Texture)method_00);
		}
		pUVar4 = BasicTitanComponentCache.LoadShader("TitanDissolve");
		return pUVar4;
	}

	[Token(Token = "0x6004536")]
	[Address(RVA = "0x5B412E0", Offset = "0x5B402E0", VA = "0x5B412E0")]
	private static Texture3D CreateDissolveNoise()
	{
		// Lifted from source/cpp/Characters/BasicTitanComponentCache.c (Characters.BasicTitanComponentCache$$CreateDissolveNoise): clean
		Random __this;
		Byte[] data;
		Texture __this_00;

		__this = new Random(1);
		data = (Byte[])new byte[0x8000];
		if (__this != null) {
			__this.NextBytes(data) ;
			__this_00 = new Texture3D(0x20, 0x20, 0x20, 0x3f, false);
			if (__this_00 != null) {
				__this_00.wrapMode = 0;
				__this_00.filterMode = 1;
				__this_00.hideFlags = 0x20;
				__this_00.SetPixelData<byte>(data, 0, 0);
				__this_00.Apply(false, true);
				return (Texture3D)__this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004537")]
	[Address(RVA = "0x5B41420", Offset = "0x5B40420", VA = "0x5B41420")]
	public static void PrewarmAssets(bool gore)
	{
		// Lifted from source/cpp/Characters/BasicTitanComponentCache.c (Characters.BasicTitanComponentCache$$PrewarmAssets): 5 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		String[] pSVar3;
		String name;
		ulong uVar4;
		ulong uVar5;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07547813 == false) {
			Il2CppMethodInitialized_07547813 = true;
			uVar1 = (typeof(BasicTitanComponentCache)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(BasicTitanComponentCache)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = BasicTitanComponentCache.Particles;
		}
		else {
			pSVar3 = *(String[]*)(typeof(BasicTitanComponentCache)).static_fields;
		}
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		if (0 < (int)pSVar3.Length) {
			uVar4 = pSVar3.Length & 0xffffffff;
			uVar5 = 0;
			do {
				if (uVar4 <= uVar5) {
					throw new IndexOutOfRangeException();
				}
				name = pSVar3[uVar5];
				BasicTitanComponentCache.LoadParticle(name);
				uVar5 = uVar5 + 1;
				uVar2 = (uint)pSVar3.Length;
				uVar4 = (ulong)uVar2;
			} while ((long)uVar5 < (long)(int)uVar2);
		}
		if ((typeof(BasicTitanComponentCache)._2).cctor_finished_or_no_cctor == 0) {
			BasicTitanComponentCache.LoadWoundMaterial();
			klass = typeof(BasicTitanComponentCache);
		}
		else {
			BasicTitanComponentCache.LoadWoundMaterial();
			klass = typeof(BasicTitanComponentCache);
		}
		if (gore) {
			typeof(BasicTitanComponentCache) = (BasicTitanComponentCache)klass;
			BasicTitanComponentCache.PrewarmGore();
			return;
		}
		typeof(BasicTitanComponentCache) = (BasicTitanComponentCache)klass;
		return;
	}

	[Token(Token = "0x6004538")]
	[Address(RVA = "0x5B41560", Offset = "0x5B40560", VA = "0x5B41560")]
	private static void PrewarmGore()
	{
		// Lifted from source/cpp/Characters/BasicTitanComponentCache.c (Characters.BasicTitanComponentCache$$PrewarmGore): 7 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		String[] pSVar3;
		String pSVar4;
		bool bVar5;
		ulong in_RAX;
		ulong uVar6;
		String str1;
		String pSVar7;
		Object x;
		Transform pUVar8;
		Transform pUVar9;
		SkinnedMeshRenderer renderer;
		MethodInfo method_00;
		TitanLimbMesh.CachedBody __this;
		String* method_01;
		int iVar10;
		ulong uVar11;
		ulong uStack_38;

		uStack_38 = in_RAX;
		BasicTitanComponentCache.LoadDissolveShader();
		BasicTitanComponentCache.LoadParticle("NapeChunkParticle");
		pSVar3 = BasicTitanComponentCache.GoreShaders;
		if (pSVar3 == null) {
	label_05c41948: ;
			throw new NullReferenceException();
		}
		if (0 < (int)pSVar3.Length) {
			uVar6 = pSVar3.Length & 0xffffffff;
			uVar11 = 0;
			do {
				if (uVar6 <= uVar11) {
					throw new IndexOutOfRangeException();
				}
				pSVar4 = pSVar3[uVar11];
				BasicTitanComponentCache.LoadShader(pSVar4);
				uVar11 = uVar11 + 1;
				uVar1 = (uint)pSVar3.Length;
				uVar6 = (ulong)uVar1;
			} while ((long)uVar11 < (long)(int)uVar1);
		}
		iVar10 = 0;
		do {
			uStack_38 = CONCAT44(iVar10, (undefined4)uStack_38);
			if (BasicTitanSetup.BodyCount <= iVar10) {
				return;
			}
			pSVar4 = ResourcePaths.Characters;
			pSVar7 = CharacterPrefabs.BasicTitanPrefix;
			str1 = (((long)&uStack_38 + 4)).ToString();
			pSVar7 = String.Concat(pSVar7, str1);
			x = ResourceManager.LoadAsset(pSVar4, pSVar7, false, false);
			if ((x != null) &&(x.klass != (Object)typeof(GameObject))) {
				throw new InvalidCastException();
			}
			bVar5 = (x == null);
			if (!bVar5) {
				if (((x == null) ||(pUVar8 = x.transform, pUVar8 == null)) ||(pUVar9 = pUVar8.Find("Body"), pUVar9 == null)) goto label_05c41948;
				renderer = pUVar9.GetComponent<SkinnedMeshRenderer>();
				pUVar9 = pUVar8.Find("Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.L/upper_arm.L/forearm.");
				if (pUVar9 == null) goto label_05c41948;
				method_00 = (MethodInfo)pUVar9.Find("hand.");
				pUVar8 = pUVar8.Find("Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.R/upper_arm.R/forearm.R");
				if (pUVar8 == null) goto label_05c41948;
				method_01 = &"hand.R";
				pUVar8 = pUVar8.Find("hand.R");
				if ((typeof(TitanLimbMesh)._2).cctor_finished_or_no_cctor == 0) {
					if (g_data_07547862 != false) goto label_05c418c1;
	label_05c4190c: ;
					g_data_07547862 = true;
					uVar2 = (typeof(TitanLimbMesh)._2).cctor_finished_or_no_cctor;
				}
				else {
					if (g_data_07547862 == false) goto label_05c4190c;
	label_05c418c1: ;
					uVar2 = (typeof(TitanLimbMesh)._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				__this = TitanLimbMesh.GetBody(renderer, (Transform)method_00, pUVar8);
				if (__this == null) goto label_05c41948;
				__this.Prewarm();
			}
			iVar10 = uStack_38._4_4_ + 1;
		} while(true);
	}

	[Token(Token = "0x6004539")]
	[Address(RVA = "0x5B40ED0", Offset = "0x5B3FED0", VA = "0x5B40ED0")]
	private static ParticleSystem InstantiateParticle(string name)
	{
		// Lifted from source/cpp/Characters/BasicTitanComponentCache.c (Characters.BasicTitanComponentCache$$InstantiateParticle): 1 lines keep C-only constructs
		GameObject pUVar1;
		ParticleSystem pUVar2;

		if (Il2CppMethodInitialized_07547815 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem) ;
			Il2CppMethodInitialized_07547815 = true;
		}
		pUVar1 = BasicTitanComponentCache.LoadParticle(name);
		pUVar1 = Object.Instantiate<GameObject>((object)pUVar1);
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar2 = pUVar1.GetComponent<ParticleSystem>();
		return pUVar2;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/BasicTitanComponentCache.c.

	// Characters.BasicTitanComponentCache$$.cctor: 1 lines keep C-only constructs
	static BasicTitanComponentCache()
	{
		int iVar2;
		String[] pSVar3;

		pSVar3 = (String[])new string[5];
		if (pSVar3 == null) {
	label_05c41bed: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar3.Length != 0) {
			pSVar3[0] = "ArmBloodParticle";
			if ((pSVar3.Length & 0xfffffffe) != 0) {
				pSVar3[1] = "ArmSmokeParticle";
				if (2 < (uint)pSVar3.Length) {
					pSVar3[2] = "NapeBloodParticle";
					if ((pSVar3.Length & 0xfffffffc) != 0) {
						pSVar3[3] = "WardedWeakSpotParticle";
						if (4 < (uint)pSVar3.Length) {
							pSVar3[4] = "DecapitationParticle";
							BasicTitanComponentCache.Particles = pSVar3;
							Il2CppCodeGenWriteBarrier(&BasicTitanComponentCache.Particles) ;
							pSVar3 = (String[])new string[2];
							if (pSVar3 == null) goto label_05c41bed;
							if ((int)pSVar3.Length != 0) {
								pSVar3[0] = "TitanRegrowth";
								if ((pSVar3.Length & 0xfffffffe) != 0) {
									pSVar3[1] = "Haircut";
									BasicTitanComponentCache.GoreShaders = pSVar3;
									iVar2 = Shader.PropertyToID("_DissolveNoise");
									BasicTitanComponentCache.DissolveNoiseProperty = iVar2;
									return;
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
