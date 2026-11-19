// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.DebugAttackKeyframes
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/DebugAttackKeyframes.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/DebugAttackKeyframes.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Characters;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace Controllers;

[Token(Token = "0x2000675")]
internal class DebugAttackKeyframes : MonoBehaviour
{
	[Token(Token = "0x2000676")]
	[CompilerGenerated]
	private sealed class _003CGenerateAttackFrames_003Ed__3 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001C9B")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001C9C")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001C9D")]
		[FieldOffset(Offset = "0x20")]
		public DebugAttackKeyframes _003C_003E4__this;

		[Token(Token = "0x4001C9E")]
		[FieldOffset(Offset = "0x28")]
		private JSONNode _003Cdata_003E5__2;

		[Token(Token = "0x4001C9F")]
		[FieldOffset(Offset = "0x30")]
		private JSONNode _003CnewData_003E5__3;

		[Token(Token = "0x4001CA0")]
		[FieldOffset(Offset = "0x38")]
		private int _003Ctotal_003E5__4;

		[Token(Token = "0x4001CA1")]
		[FieldOffset(Offset = "0x40")]
		private JSONNode.KeyEnumerator _003C_003E7__wrap4;

		[Token(Token = "0x4001CA2")]
		[FieldOffset(Offset = "0x88")]
		private string _003CattackName_003E5__6;

		[Token(Token = "0x4001CA3")]
		[FieldOffset(Offset = "0x90")]
		private JSONObject _003CnewInfo_003E5__7;

		[Token(Token = "0x4001CA4")]
		[FieldOffset(Offset = "0x98")]
		private JSONArray _003Cframes_003E5__8;

		[Token(Token = "0x4001CA5")]
		[FieldOffset(Offset = "0xA0")]
		private float _003CstartTime_003E5__9;

		[Token(Token = "0x4001CA6")]
		[FieldOffset(Offset = "0xA4")]
		private Vector3 _003CstartPosition_003E5__10;

		[Token(Token = "0x4001CA7")]
		[FieldOffset(Offset = "0xB0")]
		private float[] _003Cmins_003E5__11;

		[Token(Token = "0x4001CA8")]
		[FieldOffset(Offset = "0xB8")]
		private float[] _003Cmaxes_003E5__12;

		[Token(Token = "0x4001CA9")]
		[FieldOffset(Offset = "0xC0")]
		private int _003CcurrFrame_003E5__13;

		[Token(Token = "0x17000AE1")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003E1C")]
			[Address(RVA = "0x5A99E50", Offset = "0x5A98E50", VA = "0x5A99E50", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Controllers/DebugAttackKeyframes.c (Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000AE2")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003E1E")]
			[Address(RVA = "0x5A99EA0", Offset = "0x5A98EA0", VA = "0x5A99EA0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Controllers/DebugAttackKeyframes.c (Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6003E19")]
		[Address(RVA = "0x5A989B0", Offset = "0x5A979B0", VA = "0x5A989B0")]
		[DebuggerHidden]
		public _003CGenerateAttackFrames_003Ed__3(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Controllers/DebugAttackKeyframes.c (Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6003E1A")]
		[Address(RVA = "0x5A98D20", Offset = "0x5A97D20", VA = "0x5A98D20", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Controllers/DebugAttackKeyframes.c (Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6003E1B")]
		[Address(RVA = "0x5A98D30", Offset = "0x5A97D30", VA = "0x5A98D30", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Controllers/DebugAttackKeyframes.c (Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$MoveNext): 29 lines keep C-only constructs
			JSONNode.KeyEnumerator pSVar1;
			String* targetAddress;
			JSONObject* targetAddress_00;
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
			Dictionary<object, object> __this_00;
			BaseTitan pCVar13;
			BaseComponentCache pUVar14;
			Transform pUVar15;
			BaseTitanComponentCache pCVar16;
			BaseHitbox pCVar17;
			Single[] pSVar18;
			JSONObject pSVar19;
			JSONNode.Enumerator pSVar20;
			bool bVar21;
			sbyte cVar22;
			int iVar23;
			String pSVar24;
			JSONNode pSVar25;
			JSONObject pSVar26;
			JSONArray pSVar27;
			Single[] pSVar28;
			DebugAttackKeyframes pCVar29;
			DebugAttackKeyframes pCVar30;
			String path;
			object message;
			JSONArray __this_01;
			JSONArray __this_02;
			WaitForSeconds pUVar31;
			System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o targetAddress_01;
			int iVar32;
			float fVar33;
			Vector3 UVar34;
			Vector3 position;
			Vector3 position_00;
			Vector3 position_01;
			Vector3 position_02;
			Vector3 position_03;
			JSONNode.Enumerator SStack_108;
			JSONNode.KeyEnumerator SStack_c0;
			JSONNode.Enumerator SStack_78;

			SStack_108.m_Array._list = null;
			SStack_108.m_Array._index = 0;
			SStack_108.m_Array._version = 0;
			SStack_108.m_Object._current.value = null;
			SStack_108.m_Object._getEnumeratorRetType = 0;
			SStack_108.m_Object._36_4_ = 0;
			SStack_108.m_Object._version = 0;
			SStack_108.m_Object._index = 0;
			SStack_108.m_Object._current.key = null;
			SStack_108.type = 0;
			SStack_108._4_4_ = 0;
			SStack_108.m_Object._dictionary = null;
			SStack_108.m_Array._current = null;
			uVar12 = this.__1__state;
			if (4 < uVar12) {
				return false;
			}
			pCVar30 = this.__4__this;
			switch(uVar12) {
			case 0:
				this.__1__state = -1;
				if (((pCVar30 != null) &&(__this_00 = (Dictionary<object, object>)CharacterData.TitanAIInfos, __this_00 != null)) &&(pSVar25 = __this_00.get_Item((object)pCVar30._name), pSVar25 != null)) {
					pSVar25 = pSVar25.get_Item("AttackInfo");
					this._data_5__2 = pSVar25;
					pSVar26 = new JSONObject();
					this._newData_5__3 = (JSONNode)pSVar26;
					pCVar13 = pCVar30._titan;
					if ((pCVar13 != null) &&(pUVar14 = pCVar13.Cache, pUVar14 != null)) {
						pUVar15 = pUVar14.Transform;
						if (pUVar15 != null) {
							pUVar15.rotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
							pUVar31 = new WaitForSeconds(1.0);
							this.__2__current = (object)pUVar31;
							this.__1__state = 1;
							return true;
						}
					}
				}
				break;
			case 1:
				this.__1__state = -1;
				this._total_5__4 = 0;
				pSVar25 = this._data_5__2;
				if (pSVar25 == null) break;
				SStack_c0 = pSVar25.Keys;
				SStack_108.m_Array._current = SStack_c0.m_Enumerator.m_Array._current;
				SStack_108._4_4_ = SStack_c0.m_Enumerator._4_4_;
				SStack_108.type = SStack_c0.m_Enumerator.type;
				SStack_108.m_Array._list = SStack_c0.m_Enumerator.m_Array._list;
				SStack_108.m_Array._index = SStack_c0.m_Enumerator.m_Array._index;
				SStack_108.m_Array._version = SStack_c0.m_Enumerator.m_Array._version;
				SStack_108.m_Object._current.value = SStack_c0.m_Enumerator.m_Object._current.value;
				SStack_108.m_Object._getEnumeratorRetType = SStack_c0.m_Enumerator.m_Object._getEnumeratorRetType;
				SStack_108.m_Object._36_4_ = SStack_c0.m_Enumerator.m_Object._36_4_;
				SStack_108.m_Object._version = SStack_c0.m_Enumerator.m_Object._version;
				SStack_108.m_Object._index = SStack_c0.m_Enumerator.m_Object._index;
				SStack_108.m_Object._current.key = SStack_c0.m_Enumerator.m_Object._current.key;
				SStack_108.m_Object._dictionary = SStack_c0.m_Enumerator.m_Object._dictionary;
				SStack_78 = SStack_108.GetEnumerator();
				this.__7__wrap4.m_Enumerator.m_Array._current = SStack_78.m_Array._current;
				this.__7__wrap4.m_Enumerator.m_Array._list = SStack_78.m_Array._list;
				pSVar20 = &this.__7__wrap4.m_Enumerator;
				pSVar20.m_Array._index = SStack_78.m_Array._index;
				pSVar20.m_Array._version = SStack_78.m_Array._version;
				this.__7__wrap4.m_Enumerator.m_Object._current.value = SStack_78.m_Object._current.value;
				pSVar20 = &this.__7__wrap4.m_Enumerator;
				pSVar20.m_Object._getEnumeratorRetType = SStack_78.m_Object._getEnumeratorRetType;
				*(uint)&pSVar20.m_Object.field_0x24 = SStack_78.m_Object._36_4_;
				pSVar20 = &this.__7__wrap4.m_Enumerator;
				pSVar20.m_Object._version = SStack_78.m_Object._version;
				pSVar20.m_Object._index = SStack_78.m_Object._index;
				this.__7__wrap4.m_Enumerator.m_Object._current.key = SStack_78.m_Object._current.key;
				pSVar1 = &this.__7__wrap4;
				pSVar1.m_Enumerator.type = SStack_78.type;
				*(uint)&pSVar1.m_Enumerator.field_0x4 = SStack_78._4_4_;
				this.__7__wrap4.m_Enumerator.m_Object._dictionary = SStack_78.m_Object._dictionary;
				targetAddress_01 = &this.__7__wrap4.m_Enumerator.m_Object;
				goto label_05b99262;
			case 2:
				this.__1__state = -1;
				if (pCVar30 != null) {
					pCVar13 = pCVar30._titan;
		joined_r0x05b990d1: ;
					if (pCVar13 != null) {
						if (pCVar13.State == 10) {
							fVar33 = Time.fixedTime;
							iVar32 = (int)((fVar33 - this._startTime_5__9) * 50.0);
							if (iVar32 <= this._currFrame_5__13) {
		label_05b999d6: ;
								this.__2__current = null;
								this.__1__state = 2;
								return true;
							}
							this._currFrame_5__13 = iVar32;
							pCVar13 = pCVar30._titan;
							if (((pCVar13 == null) ||(pCVar16 = pCVar13.BaseTitanCache, pCVar16 == null)) ||(pCVar17 = pCVar16.HandLHitbox, pCVar17 == null)) break;
							bVar21 = pCVar17.IsActive();
							if (bVar21) {
								pCVar13 = pCVar30._titan;
								if (((pCVar13 == null) ||(pCVar16 = pCVar13.BaseTitanCache, pCVar16 == null)) ||(pCVar17 = pCVar16.HandLHitbox, pCVar17 == null)) break;
								pSVar27 = this._frames_5__8;
								pSVar28 = this._mins_5__11;
								pSVar18 = this._maxes_5__12;
								pCVar29 = (DebugAttackKeyframes)pCVar17.transform;
								if (pCVar29 == null) break;
								UVar34 = pCVar29.position ;
								uVar2 = this._startPosition_5__10.x;
								uVar7 = this._startPosition_5__10.y;
								position.x = UVar34.x - (float)uVar2;
								position.y = UVar34.y - (float)uVar7;
								position.z = UVar34.z - this._startPosition_5__10.z;
								pSVar26 = pCVar29.DebugCreateFrameJSON(iVar32, pCVar17, pSVar28, pSVar18, position);
								if (pSVar27 == null) break;
								pSVar27.Add((JSONNode)pSVar26);
							}
							pCVar13 = pCVar30._titan;
							if (((pCVar13 == null) ||(pCVar16 = pCVar13.BaseTitanCache, pCVar16 == null)) ||(pCVar17 = pCVar16.HandRHitbox, pCVar17 == null)) break;
							bVar21 = pCVar17.IsActive();
							if (bVar21) {
								pCVar13 = pCVar30._titan;
								if (((pCVar13 == null) ||(pCVar16 = pCVar13.BaseTitanCache, pCVar16 == null)) ||(pCVar17 = pCVar16.HandRHitbox, pCVar17 == null)) break;
								pSVar27 = this._frames_5__8;
								pSVar28 = this._mins_5__11;
								pSVar18 = this._maxes_5__12;
								pCVar29 = (DebugAttackKeyframes)pCVar17.transform;
								if (pCVar29 == null) break;
								UVar34 = pCVar29.position ;
								uVar3 = this._startPosition_5__10.x;
								uVar8 = this._startPosition_5__10.y;
								position_00.x = UVar34.x - (float)uVar3;
								position_00.y = UVar34.y - (float)uVar8;
								position_00.z = UVar34.z - this._startPosition_5__10.z;
								pSVar26 = pCVar29.DebugCreateFrameJSON(iVar32, pCVar17, pSVar28, pSVar18, position_00);
								if (pSVar27 == null) break;
								pSVar27.Add((JSONNode)pSVar26);
							}
							pCVar13 = pCVar30._titan;
							if (((pCVar13 == null) ||(pCVar16 = pCVar13.BaseTitanCache, pCVar16 == null)) ||(pCVar17 = pCVar16.FootLHitbox, pCVar17 == null)) break;
							bVar21 = pCVar17.IsActive();
							if (bVar21) {
								pCVar13 = pCVar30._titan;
								if (((pCVar13 == null) ||(pCVar16 = pCVar13.BaseTitanCache, pCVar16 == null)) ||(pCVar17 = pCVar16.FootLHitbox, pCVar17 == null)) break;
								pSVar27 = this._frames_5__8;
								pSVar28 = this._mins_5__11;
								pSVar18 = this._maxes_5__12;
								pCVar29 = (DebugAttackKeyframes)pCVar17.transform;
								if (pCVar29 == null) break;
								UVar34 = pCVar29.position ;
								uVar4 = this._startPosition_5__10.x;
								uVar9 = this._startPosition_5__10.y;
								position_01.x = UVar34.x - (float)uVar4;
								position_01.y = UVar34.y - (float)uVar9;
								position_01.z = UVar34.z - this._startPosition_5__10.z;
								pSVar26 = pCVar29.DebugCreateFrameJSON(iVar32, pCVar17, pSVar28, pSVar18, position_01);
								if (pSVar27 == null) break;
								pSVar27.Add((JSONNode)pSVar26);
							}
							pCVar13 = pCVar30._titan;
							if (((pCVar13 == null) ||(pCVar16 = pCVar13.BaseTitanCache, pCVar16 == null)) ||(pCVar17 = pCVar16.FootRHitbox, pCVar17 == null)) break;
							bVar21 = pCVar17.IsActive();
							if (bVar21) {
								pCVar13 = pCVar30._titan;
								if (((pCVar13 == null) ||(pCVar16 = pCVar13.BaseTitanCache, pCVar16 == null)) ||(pCVar17 = pCVar16.FootRHitbox, pCVar17 == null)) break;
								pSVar27 = this._frames_5__8;
								pSVar28 = this._mins_5__11;
								pSVar18 = this._maxes_5__12;
								pCVar29 = (DebugAttackKeyframes)pCVar17.transform;
								if (pCVar29 == null) break;
								UVar34 = pCVar29.position ;
								uVar5 = this._startPosition_5__10.x;
								uVar10 = this._startPosition_5__10.y;
								position_02.x = UVar34.x - (float)uVar5;
								position_02.y = UVar34.y - (float)uVar10;
								position_02.z = UVar34.z - this._startPosition_5__10.z;
								pSVar26 = pCVar29.DebugCreateFrameJSON(iVar32, pCVar17, pSVar28, pSVar18, position_02);
								if (pSVar27 == null) break;
								pSVar27.Add((JSONNode)pSVar26);
							}
							pCVar13 = pCVar30._titan;
							if ((pCVar13 != null) &&(pCVar16 = pCVar13.BaseTitanCache, pCVar16 != null)) {
								pCVar17 = pCVar16.MouthHitbox;
								bVar21 = ((Object)pCVar17 != null) ;
								if (!bVar21) goto label_05b999d6;
								pCVar13 = pCVar30._titan;
								if (((pCVar13 != null) &&(pCVar16 = pCVar13.BaseTitanCache, pCVar16 != null)) &&(pCVar17 = pCVar16.MouthHitbox, pCVar17 != null)) {
									bVar21 = pCVar17.IsActive();
									if (!bVar21) goto label_05b999d6;
									pCVar13 = pCVar30._titan;
									if (((pCVar13 != null) &&(pCVar16 = pCVar13.BaseTitanCache, pCVar16 != null)) &&(pCVar17 = pCVar16.MouthHitbox, pCVar17 != null)) {
										pSVar27 = this._frames_5__8;
										pSVar28 = this._mins_5__11;
										pSVar18 = this._maxes_5__12;
										pCVar30 = (DebugAttackKeyframes)pCVar17.transform;
										if (pCVar30 != null) {
											UVar34 = pCVar30.position;
											uVar6 = this._startPosition_5__10.x;
											uVar11 = this._startPosition_5__10.y;
											position_03.x = UVar34.x - (float)uVar6;
											position_03.y = UVar34.y - (float)uVar11;
											position_03.z = UVar34.z - this._startPosition_5__10.z;
											pSVar26 = pCVar30.DebugCreateFrameJSON(iVar32, pCVar17, pSVar28, pSVar18, position_03);
											if (pSVar27 != null) {
												pSVar27.Add((JSONNode)pSVar26);
												goto label_05b999d6;
											}
										}
									}
								}
							}
						}
						else {
							pSVar27 = this._frames_5__8;
							if (pSVar27 != null) {
								iVar32 = this._total_5__4;
								iVar23 = pSVar27.get_Count();
								this._total_5__4 = iVar23 + iVar32;
								pSVar26 = new JSONObject();
								pSVar27 = new JSONArray();
								pSVar28 = this._mins_5__11;
								if (pSVar28 != null) {
									if ((int)pSVar28.Length == 0) goto label_05b99e45;
									fVar33 = pSVar28[0];
									pSVar25 = ((JSONNode)fVar33);
									if (pSVar27 != null) {
										pSVar27.Add(pSVar25);
										pSVar28 = this._maxes_5__12;
										if (pSVar28 != null) {
											if ((int)pSVar28.Length == 0) {
		label_05b99e45: ;
												throw new IndexOutOfRangeException();
											}
											pSVar25 = ((JSONNode)pSVar28[0]);
											pSVar27.Add(pSVar25);
											__this_01 = new JSONArray();
											pSVar28 = this._mins_5__11;
											if (pSVar28 != null) {
												if ((pSVar28.Length & 0xfffffffe) == 0) goto label_05b99e45;
												pSVar25 = ((JSONNode)pSVar28[1]);
												if (__this_01 != null) {
													__this_01.Add(pSVar25);
													pSVar28 = this._maxes_5__12;
													if (pSVar28 != null) {
														if ((pSVar28.Length & 0xfffffffe) == 0) goto label_05b99e45;
														pSVar25 = ((JSONNode)pSVar28[1]);
														__this_01.Add(pSVar25);
														__this_02 = new JSONArray();
														pSVar28 = this._mins_5__11;
														if (pSVar28 != null) {
															if ((uint)pSVar28.Length < 3) goto label_05b99e45;
															pSVar25 = ((JSONNode)pSVar28[2]);
															if (__this_02 != null) {
																__this_02.Add(pSVar25);
																pSVar28 = this._maxes_5__12;
																if (pSVar28 != null) {
																	if ((uint)pSVar28.Length < 3) goto label_05b99e45;
																	pSVar25 = ((JSONNode)pSVar28[2]);
																	__this_02.Add(pSVar25);
																	if (pSVar26 != null) {
																		pSVar26.set_Item("X", (JSONNode)pSVar27);
																		pSVar26.set_Item("Y", (JSONNode)__this_01);
																		pSVar26.set_Item("Z", (JSONNode)__this_02);
																		pSVar19 = this._newInfo_5__7;
																		if (pSVar19 != null) {
																			pSVar19.set_Item("Ranges", (JSONNode)pSVar26);
																			pSVar26 = this._newInfo_5__7;
																			if (pSVar26 != null) {
																				pSVar26.set_Item("Keyframes", (JSONNode)this._frames_5__8);
																				pSVar25 = this._newData_5__3;
																				if (pSVar25 != null) {
																					pSVar25.set_Item(this._attackName_5__6, (JSONNode)this._newInfo_5__7);
																					pUVar31 = il2cpp_codegen_object_new(typeof(WaitForSeconds)) ;
																					pUVar31 = new WaitForSeconds(0.5);
																					this.__2__current = (object)pUVar31;
																					this.__1__state = 3;
																					return true;
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				break;
			case 3:
				this.__1__state = -1;
				if ((((pCVar30 != null) &&(pCVar13 = pCVar30._titan, pCVar13 != null)) &&(pUVar14 = pCVar13.Cache, pUVar14 != null)) &&(pUVar15 = pUVar14.Transform, pUVar15 != null)) {
					pUVar15.position = (Vector3)this._startPosition_5__10;
					pCVar13 = pCVar30._titan;
					if ((pCVar13 != null) &&(pUVar14 = pCVar13.Cache, pUVar14 != null)) {
						pUVar15 = pUVar14.Transform;
						if (pUVar15 != null) {
							pUVar15.rotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
							pUVar31 = new WaitForSeconds(0.5);
							this.__2__current = (object)pUVar31;
							this.__1__state = 4;
							return true;
						}
					}
				}
				break;
			case 4:
				this.__1__state = -1;
				this._newInfo_5__7 = null;
				this._frames_5__8 = null;
				this._startPosition_5__10.x = 0.0;
				this._startPosition_5__10.y = 0.0;
				*(ulong)&this._startPosition_5__10.z = 0;
				*(uint)((long)&this._mins_5__11 + 4) = 0;
				this._maxes_5__12 = null;
				targetAddress_01 =(System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o)&this._attackName_5__6;
				this._attackName_5__6 = null;
		label_05b99262: ;
				pSVar1 = &this.__7__wrap4;
				bVar21 = pSVar1.MoveNext();
				if (bVar21) {
					targetAddress = &this._attackName_5__6;
					targetAddress_00 = &this._newInfo_5__7;
					do {
						pSVar24 = pSVar1.Current;
						this._attackName_5__6 = pSVar24;
						pSVar25 = this._data_5__2;
						if (pSVar25 == null) goto label_05b99e40;
						pSVar25 = pSVar25.get_Item(*targetAddress);
						pSVar26 = new JSONObject();
						*targetAddress_00 = pSVar26;
						if ((pSVar25 == null) ||(pSVar25 = pSVar25.get_Item("Far"), pSVar25 == null)) goto label_05b99e40;
						cVar22 = pSVar25.get_AsBool();
						if ((cVar22 == false) &&(bVar21 = (*targetAddress == "AttackBellyFlop"), !bVar21)) {
							pSVar27 = new JSONArray();
							this._frames_5__8 = pSVar27;
							fVar33 = Time.fixedTime;
							this._startTime_5__9 = fVar33;
							if ((((pCVar30 == null) ||(pCVar13 = pCVar30._titan, pCVar13 == null)) ||(pUVar14 = pCVar13.Cache, pUVar14 == null)) ||(pUVar15 = pUVar14.Transform, pUVar15 == null)) goto label_05b99e40;
							UVar34 = pUVar15.position;
							this._startPosition_5__10.x = UVar34.x;
							this._startPosition_5__10.y = UVar34.y;
							this._startPosition_5__10.z = UVar34.z;
							pSVar28 = (Single[])new float[3];
							RuntimeHelpers.InitializeArray((Array)pSVar28, FieldRva_PrivateImplementationDetails_CA37AD904FC6BEA9F844804EA32D830AC222F833C1C12C44DAD8B67745FAF4DF);
							this._mins_5__11 = pSVar28;
							pSVar28 = (Single[])new float[3];
							RuntimeHelpers.InitializeArray((Array)pSVar28, FieldRva_PrivateImplementationDetails_DD6DFD036D588321FCD10D32CBA47D659057F3F8DA5C7AD402B7A50049F7EB84);
							this._maxes_5__12 = pSVar28;
							pCVar13 = pCVar30._titan;
							if (pCVar13 == null) goto label_05b99e40;
							pCVar13.Attack(this._attackName_5__6);
							this._currFrame_5__13 = -100;
							pCVar13 = pCVar30._titan;
							goto joined_r0x05b990d1;
						}
						bVar21 = pSVar1.MoveNext();
					} while (bVar21);
				}
				this.__7__wrap4.m_Enumerator.m_Array._list =null;
				pSVar20 = &this.__7__wrap4.m_Enumerator;
				pSVar20.m_Array._index = 0;
				pSVar20.m_Array._version = 0;
				this.__7__wrap4.m_Enumerator.m_Object._current.value =null;
				*(ulong)&this.__7__wrap4.m_Enumerator.m_Object._getEnumeratorRetType = 0;
				pSVar20 = &this.__7__wrap4.m_Enumerator;
				pSVar20.m_Object._version = 0;
				pSVar20.m_Object._index = 0;
				this.__7__wrap4.m_Enumerator.m_Object._current.key =null;
				*(ulong)&pSVar1.m_Enumerator = 0;
				this.__7__wrap4.m_Enumerator.m_Object._dictionary =null;
				this.__7__wrap4.m_Enumerator.m_Array._current =null;
				pSVar25 = this._newData_5__3;
				if (pSVar25 != null) {
					pSVar24 = pSVar25.ToString(4);
					path = String.Concat(FolderPaths.Documents, "/Keyframes.txt");
					File.WriteAllText(path, pSVar24);
					SStack_c0.m_Enumerator.type = this._total_5__4;
					message = (object)SStack_c0;
					Debug.Log(message);
					return false;
				}
			}
		label_05b99e40: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6003E1D")]
		[Address(RVA = "0x5A99E60", Offset = "0x5A98E60", VA = "0x5A99E60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Controllers/DebugAttackKeyframes.c (Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Controllers_DebugAttackKeyframes_GenerateAttackFrames_d__3_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4001C99")]
	[FieldOffset(Offset = "0x20")]
	protected BaseTitan _titan;

	[Token(Token = "0x4001C9A")]
	[FieldOffset(Offset = "0x28")]
	protected string _name;

	[Token(Token = "0x6003E15")]
	[Address(RVA = "0x5A986E0", Offset = "0x5A976E0", VA = "0x5A986E0")]
	protected void Awake()
	{
		// Lifted from source/cpp/Controllers/DebugAttackKeyframes.c (Controllers.DebugAttackKeyframes$$Awake): 9 lines keep C-only constructs
		BaseTitan* targetAddress;
		String* targetAddress_00;
		byte bVar1;
		byte bVar2;
		Dictionary<string, float> __this_00;
		Il2CppClass pIVar3;
		BaseTitan pCVar4;
		Type pSVar5;
		String pSVar6;
		DebugAttackKeyframes.d__3<GenerateAttackFrames> __this_01;

		pCVar4 = this.GetComponent<BaseTitan>();
		targetAddress = &this._titan;
		this._titan = pCVar4;
		pCVar4 = this._titan;
		if (pCVar4 != null) {
			pCVar4.AttackSpeedMultiplier = 1.0;
			__this_00 = pCVar4.AttackSpeeds;
			if (__this_00 != null) {
				__this_00.Clear();
				pCVar4 = *targetAddress;
				if (pCVar4 != null) {
					pIVar3 = (Il2CppClass)pCVar4.klass;
					bVar1 = (pIVar3._2).typeHierarchyDepth;
					bVar2 = (typeof(BasicTitan)._2).typeHierarchyDepth;
					if ((bVar1 < bVar2) ||((pIVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BasicTitan))) {
						bVar2 = (typeof(BaseShifter)._2).typeHierarchyDepth;
						if ((bVar1 < bVar2) ||((pIVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BaseShifter))) goto label_05b988cb;
						pSVar5 = pCVar4.GetType();
						if (pSVar5 == null) goto label_05b9892c;
						pSVar6 = pSVar5.ToString();
						targetAddress_00 = &this._name;
						this._name = pSVar6;
						pSVar6 = this._name;
						if (pSVar6 == null) goto label_05b9892c;
						pSVar6 = pSVar6.Replace("Shifter", "");
						*targetAddress_00 = pSVar6;
						if (*targetAddress_00 == null) goto label_05b9892c;
						pSVar6 = (*targetAddress_00).Replace("Characters.", "") ;
						*targetAddress_00 = pSVar6;
					}
					else {
						this._name = "Titan";
					}
				}
	label_05b988cb: ;
				__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(DebugAttackKeyframes.d__3<GenerateAttackFrames>));
				__this_01 = new Object();
				__this_01.__1__state = 0;
				__this_01.__4__this = this;
				this.StartCoroutine((IEnumerator)__this_01);
				return;
			}
		}
	label_05b9892c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E16")]
	[Address(RVA = "0x5A98940", Offset = "0x5A97940", VA = "0x5A98940")]
	[IteratorStateMachine(typeof(_003CGenerateAttackFrames_003Ed__3))]
	public IEnumerator GenerateAttackFrames()
	{
		// Lifted from source/cpp/Controllers/DebugAttackKeyframes.c (Controllers.DebugAttackKeyframes$$GenerateAttackFrames): clean
		DebugAttackKeyframes.d__3<GenerateAttackFrames> __this_00;

		__this_00 = new DebugAttackKeyframes.d__3<GenerateAttackFrames>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6003E17")]
	[Address(RVA = "0x5A989D0", Offset = "0x5A979D0", VA = "0x5A989D0")]
	private JSONObject DebugCreateFrameJSON(int frame, BaseHitbox hitbox, float[] mins, float[] maxes, Vector3 position)
	{
		// Lifted from source/cpp/Controllers/DebugAttackKeyframes.c (Controllers.DebugAttackKeyframes$$DebugCreateFrameJSON): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		SphereCollider __this_00;
		Transform __this_01;
		JSONObject __this_02;
		JSONNode pSVar3;
		float fVar4;
		float fVar5;
		float n;
		Vector3 UVar6;
		float local_48;
		float fStack_44;
		float local_38;

		n = position.z;
		if ((hitbox != null) &&(__this_00 = (SphereCollider)hitbox._collider, __this_00 != null)) {
			bVar1 = (typeof(SphereCollider)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(SphereCollider))) {
				throw new InvalidCastException();
			}
			fVar4 = __this_00.radius;
			__this_01 = __this_00.transform;
			if (__this_01 != null) {
				UVar6 = __this_01.lossyScale;
				__this_02 = new JSONObject();
				pSVar3 = ((JSONNode)frame);
				if (__this_02 != null) {
					local_38 = UVar6.x;
					fVar4 = fVar4 * local_38;
					__this_02.set_Item("f", pSVar3);
					pSVar3 = ((JSONNode)fVar4);
					__this_02.set_Item("r", pSVar3);
					local_48 = position.x;
					pSVar3 = ((JSONNode)local_48);
					__this_02.set_Item("x", pSVar3);
					fStack_44 = position.y;
					pSVar3 = ((JSONNode)fStack_44);
					__this_02.set_Item("y", pSVar3);
					pSVar3 = ((JSONNode)n);
					__this_02.set_Item("z", pSVar3);
					if (mins != null) {
						uVar2 = (uint)mins.Length;
						if (uVar2 != 0) {
							fVar5 = mins[0];
							if (local_48 - fVar4 <= mins[0]) {
								fVar5 = local_48 - fVar4;
							}
							mins[0] = fVar5;
							if (uVar2 != 1) {
								fVar5 = mins[1];
								if (fStack_44 - fVar4 <= mins[1]) {
									fVar5 = fStack_44 - fVar4;
								}
								mins[1] = fVar5;
								if (2 < uVar2) {
									fVar5 = mins[2];
									if (n - fVar4 <= mins[2]) {
										fVar5 = n - fVar4;
									}
									mins[2] = fVar5;
									if (maxes == null) goto label_05b98cf1;
									uVar2 = (uint)maxes.Length;
									if (uVar2 != 0) {
										fVar5 = maxes[0];
										if (maxes[0] <= local_48 + fVar4) {
											fVar5 = local_48 + fVar4;
										}
										maxes[0] = fVar5;
										if (uVar2 != 1) {
											fVar5 = maxes[1];
											if (maxes[1] <= fStack_44 + fVar4) {
												fVar5 = fStack_44 + fVar4;
											}
											maxes[1] = fVar5;
											if (2 < uVar2) {
												fVar5 = maxes[2];
												if (maxes[2] <= fVar4 + n) {
													fVar5 = fVar4 + n;
												}
												maxes[2] = fVar5;
												return __this_02;
											}
										}
									}
								}
							}
						}
						throw new IndexOutOfRangeException();
					}
				}
			}
		}
	label_05b98cf1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E18")]
	[Address(RVA = "0x5A98D10", Offset = "0x5A97D10", VA = "0x5A98D10")]
	public DebugAttackKeyframes()
	{
		// Lifted from source/cpp/Controllers/DebugAttackKeyframes.c (Controllers.DebugAttackKeyframes$$.ctor): clean
		base();
		return;
	}
}
