// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.ReparentObjectsCommand
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/ReparentObjectsCommand.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x2000145")]
internal class ReparentObjectsCommand : BaseCommand
{
	[Token(Token = "0x2000146")]
	private class ObjectState
	{
		[Token(Token = "0x4000770")]
		[FieldOffset(Offset = "0x10")]
		public int Parent;

		[Token(Token = "0x4000771")]
		[FieldOffset(Offset = "0x14")]
		public Vector3 Position;

		[Token(Token = "0x4000772")]
		[FieldOffset(Offset = "0x20")]
		public Vector3 Rotation;

		[Token(Token = "0x4000773")]
		[FieldOffset(Offset = "0x2C")]
		public Vector3 Scale;

		[Token(Token = "0x6000697")]
		[Address(RVA = "0x5B8FE60", Offset = "0x5B8EE60", VA = "0x5B8FE60")]
		public ObjectState()
		{
			// Lifted from source/cpp/MapEditor/ReparentObjectsCommand.c (MapEditor.ReparentObjectsCommand.ObjectState$$.ctor): clean
			base();
			return;
		}
	}

	[Token(Token = "0x400076C")]
	[FieldOffset(Offset = "0x10")]
	private Dictionary<int, ObjectState> _oldStates;

	[Token(Token = "0x400076D")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<int, ObjectState> _newStates;

	[Token(Token = "0x400076E")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<int, int> _targetParents;

	[Token(Token = "0x400076F")]
	[FieldOffset(Offset = "0x28")]
	private bool _capturedNewState;

	[Token(Token = "0x6000691")]
	[Address(RVA = "0x5B8C480", Offset = "0x5B8B480", VA = "0x5B8C480")]
	public ReparentObjectsCommand(List<MapObject> mapObjects, int newParentId)
	{
		// Lifted from source/cpp/MapEditor/ReparentObjectsCommand.c (MapEditor.ReparentObjectsCommand$$.ctor): 9 lines keep C-only constructs
		Dictionary<int, int>* targetAddress;
		int key;
		MapScriptBaseObject pMVar1;
		Dictionary<int, object> __this_00;
		bool bVar2;
		Dictionary<int, ReparentObjectsCommand.ObjectState> pSVar3;
		Dictionary<int, int> pSVar4;
		ReparentObjectsCommand.ObjectState value;
		ReparentObjectsCommand __this_01;
		byte[] local_60 = new byte[16];
		MapObject local_50;
		byte[] local_48 = new byte[16];
		MapObject local_38;

		if (Il2CppMethodInitialized_075479d1 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor) ;
			Il2CppMethodInitialized_075479d1 = true;
		}
		pSVar3 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<int, ReparentObjectsCommand.ObjectState>));
		pSVar3 = new Dictionary<int, object>();
		this._oldStates = pSVar3;
		pSVar3 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<int, ReparentObjectsCommand.ObjectState>));
		pSVar3 = new Dictionary<int, object>();
		this._newStates = pSVar3;
		pSVar4 = new Dictionary<int, int>();
		targetAddress = &this._targetParents;
		this._targetParents = pSVar4;
		base();
		if (mapObjects == null) {
			throw new NullReferenceException();
		}
		local_60.GetEnumerator((List<object>)mapObjects);
		local_38 = local_50;
		local_48._0_8_ = local_60._0_8_;
		local_48._8_8_ = local_60._8_8_;
		local_60._0_8_ = null;
		local_60._8_8_ = (ReparentObjectsCommand)local_48;
		while(true) {
			__this_01 = (ReparentObjectsCommand)local_48;
			bVar2 = local_48.MoveNext();
			if (!bVar2) {
				local_48.Dispose();
				return;
			}
			if (local_38 == null) {
				throw new NullReferenceException();
			}
			pMVar1 = local_38.ScriptObject;
			if (pMVar1 == null) {
				throw new NullReferenceException();
			}
			key = pMVar1.Id;
			__this_00 = (Dictionary<int, object>)this._oldStates;
			value = __this_01.CaptureState(local_38);
			if (__this_00 == null) break;
			__this_00.set_Item(key, (object)value);
			pSVar4 = *targetAddress;
			if (pSVar4 == null) {
				throw new NullReferenceException();
			}
			pSVar4.set_Item(key, newParentId);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000692")]
	[Address(RVA = "0x5B8F2A0", Offset = "0x5B8E2A0", VA = "0x5B8F2A0", Slot = "4")]
	public override void Execute()
	{
		// Lifted from source/cpp/MapEditor/ReparentObjectsCommand.c (MapEditor.ReparentObjectsCommand$$Execute): 13 lines keep C-only constructs
		uint uVar1;
		Dictionary<int, int> pSVar2;
		bool bVar3;
		int iVar4;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o pSVar5;
		MapObject pMVar6;
		MapObject parent;
		ReparentObjectsCommand.ObjectState state;
		MapLoader* __this_00;
		Dictionary<int, object> pSVar7;
		byte[] auStack_60 = new byte[16];
		object pIStack_50;
		byte[] auStack_48 = new byte[8];
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o pSStack_40;
		object pIStack_38;

		__this_00 = (MapLoader*)this;
		if (Il2CppMethodInitialized_075479d2 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_int_get_Current) ;
			__this_00 = &typeof(MapLoader);
			Il2CppMethodInitialized_075479d2 = true;
		}
		auStack_48 = (byte[])0x0;
		pIStack_38 = null;
		if (this._capturedNewState != false) {
			__this_00.ApplyStates(this._newStates);
			return;
		}
		pSVar2 = this._targetParents;
		if ((pSVar2 != null) &&(pSVar5 = pSVar2.Keys, pSVar5 != null)) {
			auStack_60.GetEnumerator(pSVar5);
			pIStack_38 = pIStack_50;
			auStack_48 = (byte[])auStack_60._0_8_;
			pSStack_40 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)auStack_60._8_8_;
			auStack_60._0_8_ = null;
			auStack_60._8_8_ =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)auStack_48;
			while (bVar3 = auStack_48.MoveNext()) {
				iVar4 = (int32_t)pIStack_38;
				pSVar7 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (pSVar7 == null) {
					throw new NullReferenceException();
				}
				bVar3 = pSVar7.ContainsKey(iVar4);
				if (bVar3) {
					pSVar7 = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if (pSVar7 == null) {
						throw new NullReferenceException();
					}
					pMVar6 = pSVar7.get_Item(iVar4);
					pSVar2 = this._targetParents;
					if (pSVar2 == null) {
						throw new NullReferenceException();
					}
					iVar4 = pSVar2.get_Item(iVar4);
					if (iVar4 < 0) {
	label_05c8f3f0: ;
						parent = null;
						uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
					}
					else {
						pSVar7 = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (pSVar7 == null) {
							throw new NullReferenceException();
						}
						bVar3 = pSVar7.ContainsKey(iVar4);
						if (!bVar3) goto label_05c8f3f0;
						pSVar7 = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (pSVar7 == null) {
							throw new NullReferenceException();
						}
						parent = pSVar7.get_Item(iVar4);
						uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					MapLoader.SetParentLogical(pMVar6, parent);
				}
			}
			auStack_48.Dispose();
			pSVar2 = this._targetParents;
			if ((pSVar2 != null) &&(pSVar5 = pSVar2.Keys, pSVar5 != null)) {
				auStack_60.GetEnumerator(pSVar5);
				pIStack_38 = pIStack_50;
				auStack_48 = (byte[])auStack_60._0_8_;
				pSStack_40 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)auStack_60._8_8_;
				auStack_60._0_8_ = null;
				auStack_60._8_8_ =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)auStack_48;
				while(true) {
					bVar3 = auStack_48.MoveNext();
					if (!bVar3) {
						auStack_48.Dispose();
						this._capturedNewState = true;
						return;
					}
					iVar4 = (int32_t)pIStack_38;
					pSVar7 = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if (pSVar7 == null) break;
					bVar3 = pSVar7.ContainsKey(iVar4);
					if (bVar3) {
						pSVar7 = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (pSVar7 == null) {
							throw new NullReferenceException();
						}
						pMVar6 = pSVar7.get_Item(iVar4);
						state = pSVar7.CaptureState(pMVar6);
						pSVar7 = (Dictionary<int, object>)this._newStates;
						if (pSVar7 == null) {
							throw new NullReferenceException();
						}
						pSVar7.set_Item(iVar4, (object)state);
						pSVar7.ApplyState(pMVar6, state);
					}
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000693")]
	[Address(RVA = "0x5B8FE50", Offset = "0x5B8EE50", VA = "0x5B8FE50", Slot = "5")]
	public override void Unexecute()
	{
		// Lifted from source/cpp/MapEditor/ReparentObjectsCommand.c (MapEditor.ReparentObjectsCommand$$Unexecute): clean


		this.ApplyStates(this._oldStates);
		return;
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x5B8F990", Offset = "0x5B8E990", VA = "0x5B8F990")]
	private void ApplyStates(Dictionary<int, ObjectState> states)
	{
		// Lifted from source/cpp/MapEditor/ReparentObjectsCommand.c (MapEditor.ReparentObjectsCommand$$ApplyStates): 15 lines keep C-only constructs
		uint uVar1;
		Dictionary<int, object> pSVar2;
		int iVar3;
		bool bVar4;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o pSVar5;
		MapObject pMVar6;
		object pIVar7;
		MapObject parent;
		ReparentObjectsCommand.ObjectState state;
		MethodInfo* method_00;
		Dictionary<int, ReparentObjectsCommand.ObjectState> __this_00;
		byte[] auStack_70 = new byte[16];
		object pIStack_60;
		byte[] auStack_58 = new byte[8];
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o pSStack_50;
		object pIStack_48;
		Dictionary<int, ReparentObjectsCommand.ObjectState> pSStack_38;

		auStack_58 = (byte[])0x0;
		pIStack_48 = null;
		if ((states != null) &&(pSStack_38 = states, pSVar5 = states.Keys, pSVar5 != null)) {
			auStack_70.GetEnumerator(pSVar5);
			pIStack_48 = pIStack_60;
			auStack_58 = (byte[])auStack_70._0_8_;
			pSStack_50 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)auStack_70._8_8_;
			auStack_70._0_8_ = null;
			auStack_70._8_8_ =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)auStack_58;
			while (bVar4 = auStack_58.MoveNext()) {
				iVar3 = (int32_t)pIStack_48;
				pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				bVar4 = pSVar2.ContainsKey(iVar3);
				if (bVar4) {
					pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if (pSVar2 == null) {
						throw new NullReferenceException();
					}
					pMVar6 = pSVar2.get_Item(iVar3);
					pIVar7 = pSStack_38.get_Item(iVar3);
					if (pIVar7 == null) {
						throw new NullReferenceException();
					}
					if (*(int)&pIVar7[1].klass < 0) {
	label_05c8fab0: ;
						parent = null;
						uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
					}
					else {
						pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (pSVar2 == null) {
							throw new NullReferenceException();
						}
						bVar4 = pSVar2.ContainsKey(*(int)&pIVar7[1].klass);
						if (!bVar4) goto label_05c8fab0;
						pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (pSVar2 == null) {
							throw new NullReferenceException();
						}
						parent = pSVar2.get_Item(*(int)&pIVar7[1].klass);
						uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					MapLoader.SetParentLogical(pMVar6, parent);
				}
			}
			auStack_58.Dispose();
			pSVar5 = pSStack_38.Keys;
			if (pSVar5 != null) {
				method_00 = & MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_ReparentObjectsCommand_ObjectState_GetEn ;
				auStack_70.GetEnumerator(pSVar5);
				pIStack_48 = pIStack_60;
				auStack_58 = (byte[])auStack_70._0_8_;
				pSStack_50 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)auStack_70._8_8_;
				auStack_70._0_8_ = null;
				auStack_70._8_8_ =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)auStack_58;
				while(true) {
					bVar4 = auStack_58.MoveNext();
					if (!bVar4) {
						auStack_58.Dispose();
						return;
					}
					iVar3 = (int32_t)pIStack_48;
					pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if (pSVar2 == null) break;
					bVar4 = pSVar2.ContainsKey(iVar3);
					if (bVar4) {
						pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (pSVar2 == null) {
							throw new NullReferenceException();
						}
						pMVar6 = pSVar2.get_Item(iVar3);
						__this_00 = pSStack_38;
						state = (ReparentObjectsCommand.ObjectState)pSStack_38.get_Item(iVar3);
						__this_00.ApplyState(pMVar6, state);
					}
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000695")]
	[Address(RVA = "0x5B8F0F0", Offset = "0x5B8E0F0", VA = "0x5B8F0F0")]
	private ObjectState CaptureState(MapObject obj)
	{
		// Lifted from source/cpp/MapEditor/ReparentObjectsCommand.c (MapEditor.ReparentObjectsCommand$$CaptureState): clean
		GameObject pUVar1;
		Vector3 b;
		int iVar2;
		ReparentObjectsCommand.ObjectState __this_00;
		Transform pUVar3;
		Vector3 UVar4;
		Vector3 euler;
		Quaternion local_20;

		__this_00 = new ReparentObjectsCommand.ObjectState();
		iVar2 = MapLoader.GetLogicalParentId(obj);
		if (((__this_00 != null) &&(__this_00.Parent = iVar2, obj != null)) &&(pUVar1 = obj.GameObject, pUVar1 != null)) {
			pUVar3 = pUVar1.transform;
			if (pUVar3 != null) {
				UVar4 = pUVar3.localPosition;
				__this_00.Position.x = UVar4.x;
				__this_00.Position.y = UVar4.y;
				__this_00.Position.z = UVar4.z;
				pUVar1 = obj.GameObject;
				if (pUVar1 != null) {
					pUVar3 = pUVar1.transform;
					if (pUVar3 != null) {
						local_20 = pUVar3.localRotation;
						UVar4 = Quaternion.Internal_ToEulerRad(ref local_20);
						euler.x = UVar4.x * 57.29578;
						euler.y = UVar4.y * 57.29578;
						euler.z = UVar4.z * 57.29578;
						UVar4 = Quaternion.Internal_MakePositive(euler);
						__this_00.Rotation.x = UVar4.x;
						__this_00.Rotation.y = UVar4.y;
						__this_00.Rotation.z = UVar4.z;
						pUVar1 = obj.GameObject;
						if (pUVar1 != null) {
							pUVar3 = pUVar1.transform;
							if (pUVar3 != null) {
								UVar4 = pUVar3.localScale;
								b = obj.BaseScale;
								UVar4 = Util.DivideVectors(UVar4, (Vector3)b);
								__this_00.Scale.x = UVar4.x;
								__this_00.Scale.y = UVar4.y;
								__this_00.Scale.z = UVar4.z;
								return __this_00;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000696")]
	[Address(RVA = "0x5B8F7D0", Offset = "0x5B8E7D0", VA = "0x5B8F7D0")]
	private void ApplyState(MapObject obj, ObjectState state)
	{
		// Lifted from source/cpp/MapEditor/ReparentObjectsCommand.c (MapEditor.ReparentObjectsCommand$$ApplyState): 12 lines keep C-only constructs
		float fVar1;
		float fVar2;
		uint uVar3;
		uint uVar6;
		ulong uVar4;
		ulong uVar5;
		GameObject pUVar7;
		MapScriptBaseObject pMVar8;
		Transform pUVar9;
		Quaternion value;
		Vector3 UVar10;
		Vector3 b;
		Vector3 local_48;
		ulong local_38;
		ulong local_28;

		if ((obj != null) &&(pUVar7 = obj.GameObject, pUVar7 != null)) {
			pUVar9 = pUVar7.transform;
			if ((state != null) &&(pUVar9 != null)) {
				pUVar9.localPosition = (Vector3)state.Position;
				pUVar7 = obj.GameObject;
				if (pUVar7 != null) {
					pUVar9 = pUVar7.transform;
					uVar3 = state.Rotation.x;
					uVar6 = state.Rotation.y;
					local_48.z = state.Rotation.z * 0.017453292;
					local_48.y = (float)uVar6 * 0.017453292;
					local_48.x = (float)uVar3 * 0.017453292;
					value = Quaternion.Internal_FromEulerRad(ref local_48);
					if (pUVar9 != null) {
						pUVar9.localRotation = value;
						pUVar7 = obj.GameObject;
						if (pUVar7 != null) {
							pUVar9 = pUVar7.transform;
							uVar4._0_4_ = obj.BaseScale.x;
							uVar4._4_4_ = obj.BaseScale.y;
							fVar1 = obj.BaseScale.z;
							uVar5._0_4_ = state.Scale.x;
							uVar5._4_4_ = state.Scale.y;
							fVar2 = state.Scale.z;
							if ((typeof(Util)._2).cctor_finished_or_no_cctor == 0) {
								local_38 = uVar5;
								local_28 = uVar4;
								uVar4._0_4_ = (undefined4)local_28;
								uVar4._4_4_ = local_28._4_4_;
								uVar5._0_4_ = (undefined4)local_38;
								uVar5._4_4_ = local_38._4_4_;
							}
							UVar10.y = (float)uVar4._4_4_;
							UVar10.x = (float)(undefined4)uVar4;
							UVar10.z = fVar1;
							b.y = (float)uVar5._4_4_;
							b.x = (float)(undefined4)uVar5;
							b.z = fVar2;
							UVar10 = Util.MultiplyVectors(UVar10, b);
							if (pUVar9 != null) {
								pUVar9.localScale = UVar10;
								pMVar8 = obj.ScriptObject;
								if (pMVar8 != null) {
									pMVar8.Parent = state.Parent;
									pMVar8.SetPosition((Vector3)state.Position);
									pMVar8 = obj.ScriptObject;
									if (pMVar8 != null) {
										pMVar8.SetRotation((Vector3)state.Rotation);
										pMVar8 = obj.ScriptObject;
										if (pMVar8 != null) {
											pMVar8.SetScale((Vector3)state.Scale);
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
		throw new NullReferenceException();
	}
}
