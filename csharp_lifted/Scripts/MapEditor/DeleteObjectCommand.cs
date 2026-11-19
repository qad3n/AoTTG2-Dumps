// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.DeleteObjectCommand
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/DeleteObjectCommand.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/DeleteObjectCommand.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x2000140")]
internal class DeleteObjectCommand : BaseCommand
{
	[Token(Token = "0x2000141")]
	private struct OrphanState
	{
		[Token(Token = "0x400075D")]
		[FieldOffset(Offset = "0x0")]
		public int OriginalParentId;

		[Token(Token = "0x400075E")]
		[FieldOffset(Offset = "0x4")]
		public Vector3 LocalPosition;

		[Token(Token = "0x400075F")]
		[FieldOffset(Offset = "0x10")]
		public Vector3 LocalRotation;

		[Token(Token = "0x4000760")]
		[FieldOffset(Offset = "0x1C")]
		public Vector3 LocalScale;
	}

	[Token(Token = "0x400075A")]
	[FieldOffset(Offset = "0x10")]
	private string _script;

	[Token(Token = "0x400075B")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<int, OrphanState> _orphans;

	[Token(Token = "0x400075C")]
	[FieldOffset(Offset = "0x20")]
	private List<int> _oldOrder;

	[Token(Token = "0x6000683")]
	[Address(RVA = "0x5B8C760", Offset = "0x5B8B760", VA = "0x5B8C760")]
	public DeleteObjectCommand(List<MapObject> objs, bool includeDescendants)
	{
		// Lifted from source/cpp/MapEditor/DeleteObjectCommand.c (MapEditor.DeleteObjectCommand$$.ctor): 58 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		object pIVar3;
		Dictionary<int, object> pSVar4;
		GameObject __this_00;
		List<int> pSVar5;
		List<object> __this_01;
		MapScriptBaseObject item;
		Object[] pSVar6;
		DeleteObjectCommand.OrphanState value;
		DeleteObjectCommand pMVar8;
		int key;
		bool bVar9;
		int iVar10;
		Dictionary<int, DeleteObjectCommand.OrphanState> pSVar11;
		Func<MapObject, int> __this_02;
		System_Collections_Generic_IEnumerable_TResult__o source;
		MapEditor_DeleteObjectCommand___c_StaticFields pMVar12;
		Func<int, bool> __this_03;
		System_Collections_Generic_IEnumerable_TSource__o collection;
		HashSet<int> __this_04;
		Queue<int> __this_05;
		HashSet<int> pSVar13;
		Transform __this_06;
		List<int> __this_07;
		MapScriptObjects __this_08;
		MapObject pMVar14;
		String pSVar15;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		Vector3 UVar16;
		Vector3 euler;
		Vector3 b;
		byte[] local_158 = new byte[8];
		System_Collections_Generic_HashSet_Enumerator_T__o pSStack_150;
		object local_148;
		byte[] local_140 = new byte[16];
		object local_130;
		byte[] local_128 = new byte[8];
		object local_118;
		DeleteObjectCommand local_108;
		byte[] local_100 = new byte[12];
		float fStack_f4;
		object local_f0;
		float fStack_e4;
		float local_d8;
		float local_d4;
		float local_d0;
		float local_cc;
		byte[] local_c8 = new byte[8];
		object local_b8;
		byte[] local_a8 = new byte[16];
		Dictionary<int, DeleteObjectCommand.OrphanState>* local_90;
		Quaternion local_78;
		ulong local_68;
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[16];

		if (Il2CppMethodInitialized_075479c8 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_DeleteObjectCommand_OrphanState_set_Item) ;
			Il2CppMethodInitialized_075479c8 = true;
		}
		local_158 = (byte[])0x0;
		local_148 = null;
		local_c8 = (byte[])0x0;
		local_b8 = null;
		local_78 = (Quaternion)ZEXT816(0);
		local_128 = (byte[])0x0;
		local_118 = null;
		pSVar11 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<int, DeleteObjectCommand.OrphanState>));
		pSVar11 = new Dictionary<int, DeleteObjectCommand.OrphanState>();
		local_90 = &this._orphans;
		this._orphans = pSVar11;
		base();
		if ((typeof(DeleteObjectCommand.c)._2).cctor_finished_or_no_cctor == 0) {
			pMVar12 = typeof(DeleteObjectCommand.c).static_fields;
			__this_02 = pMVar12.__9__4_0;
		}
		else {
			pMVar12 = typeof(DeleteObjectCommand.c).static_fields;
			__this_02 = pMVar12.__9__4_0;
		}
		if (__this_02 == null) {
			if (((typeof(DeleteObjectCommand.c))._2).cctor_finished_or_no_cctor == 0) {
				pMVar12 = typeof(DeleteObjectCommand.c).static_fields;
			}
			pIVar3 = (object)pMVar12.__9;
			__this_02 = new Func<MapObject, int>(pIVar3, (intptr_t)MethodInfo_MapEditor_DeleteObjectCommand_c_ctor_b__4_0);
			pMVar12 = typeof(DeleteObjectCommand.c).static_fields;
			pMVar12.__9__4_0 = __this_02;
		}
		source = Enumerable.Select<MapObject, int>((System_Collections_Generic_IEnumerable_TSource__o)objs, (System_Func_TSource__TResult__o)__this_02);
		if ((typeof(DeleteObjectCommand.c)._2).cctor_finished_or_no_cctor == 0) {
			pMVar12 = typeof(DeleteObjectCommand.c).static_fields;
			__this_03 = pMVar12.__9__4_1;
		}
		else {
			pMVar12 = typeof(DeleteObjectCommand.c).static_fields;
			__this_03 = pMVar12.__9__4_1;
		}
		if (__this_03 == null) {
			if (((typeof(DeleteObjectCommand.c))._2).cctor_finished_or_no_cctor == 0) {
				pMVar12 = typeof(DeleteObjectCommand.c).static_fields;
			}
			pIVar3 = (object)pMVar12.__9;
			__this_03 = new Func<int, bool>(pIVar3, (intptr_t)MethodInfo_MapEditor_DeleteObjectCommand_c_ctor_b__4_1);
			pMVar12 = typeof(DeleteObjectCommand.c).static_fields;
			pMVar12.__9__4_1 = __this_03;
		}
		collection = Enumerable.Where<int>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_03);
		__this_04 = new HashSet<int>((IEnumerable<T>)collection);
		local_108 = this;
		if (includeDescendants) {
			__this_05 = new Queue<int>((IEnumerable<T>)__this_04);
			if (__this_05 == null) goto label_05c8d65f;
			if (0 < __this_05._size) {
				do {
					iVar10 = __this_05.Dequeue();
					pSVar4 = (Dictionary<int, object>)MapLoader.IdToChildren;
					if (pSVar4 == null) goto label_05c8d65f;
					bVar9 = pSVar4.ContainsKey(iVar10);
					if (bVar9) {
						pSVar4 = (Dictionary<int, object>)MapLoader.IdToChildren;
						if (pSVar4 == null) goto label_05c8d65f;
						pSVar13 = (HashSet<int>)pSVar4.get_Item(iVar10);
						if (pSVar13 == null) goto label_05c8d65f;
						local_100.GetEnumerator(pSVar13);
						local_148 = local_f0;
						local_158 = (byte[])CONCAT44(local_100._4_4_, local_100._0_4_);
						local_100._0_4_ = 0;
						local_100._4_4_ = 0;
						if (__this_04 == null) {
							while(true) {
								bVar9 = local_158.MoveNext();
								if (!bVar9) break;
								iVar10 = (int32_t)local_148;
								pSVar4 = (Dictionary<int, object>)MapLoader.IdToMapObject;
								if (pSVar4 == null) goto label_05c8cdb3;
								bVar9 = pSVar4.ContainsKey(iVar10);
								if (bVar9) {
									throw new NullReferenceException();
								}
							}
						}
						else {
							while(true) {
								bVar9 = local_158.MoveNext();
								if (!bVar9) break;
								iVar10 = (int32_t)local_148;
								pSVar4 = (Dictionary<int, object>)MapLoader.IdToMapObject;
								if (pSVar4 == null) {
	label_05c8cdb3: ;
									throw new NullReferenceException();
								}
								bVar9 = pSVar4.ContainsKey(iVar10);
								if (bVar9) {
									bVar9 = __this_04.Add(iVar10);
									if (bVar9) {
										__this_05.Enqueue(iVar10);
									}
								}
							}
						}
						local_158.Dispose();
					}
				} while (0 < __this_05._size);
			}
		}
		else {
			if (__this_04 == null) goto label_05c8d65f;
			local_100.GetEnumerator(__this_04);
			local_148 = local_f0;
			local_158 = (byte[])CONCAT44(local_100._4_4_, local_100._0_4_);
			pSStack_150 = (System_Collections_Generic_HashSet_Enumerator_T__o)CONCAT44(fStack_f4, local_100._8_4_);
			while (bVar9 = local_158.MoveNext()) {
				iVar10 = (int32_t)local_148;
				pSVar4 = (Dictionary<int, object>)MapLoader.IdToChildren;
				if (pSVar4 == null) {
					throw new NullReferenceException();
				}
				bVar9 = pSVar4.ContainsKey(iVar10);
				if (bVar9) {
					pSVar4 = (Dictionary<int, object>)MapLoader.IdToChildren;
					if (pSVar4 == null) {
						throw new NullReferenceException();
					}
					pSVar13 = (HashSet<int>)pSVar4.get_Item(iVar10);
					if (pSVar13 == null) {
						throw new NullReferenceException();
					}
					local_140.GetEnumerator(pSVar13);
					local_b8 = local_130;
					local_c8 = (byte[])local_140._0_8_;
					local_140._0_8_ = null;
					local_140._8_8_ = local_c8;
					while (bVar9 = local_c8.MoveNext()) {
						key = (int32_t)local_b8;
						pSVar4 = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (pSVar4 == null) {
							throw new NullReferenceException();
						}
						bVar9 = pSVar4.ContainsKey(key);
						if ((bVar9) &&(bVar9 = __this_04.Contains(key), !bVar9)) {
							pSVar4 = (Dictionary<int, object>)MapLoader.IdToMapObject;
							if (pSVar4 == null) {
								throw new NullReferenceException();
							}
							pMVar14 = pSVar4.get_Item(key);
							if (pMVar14 == null) {
								throw new NullReferenceException();
							}
							__this_00 = pMVar14.GameObject;
							if (__this_00 == null) {
								throw new NullReferenceException();
							}
							__this_06 = __this_00.transform;
							if (__this_06 == null) {
								throw new NullReferenceException();
							}
							pSVar11 = *local_90;
							UVar16 = __this_06.localPosition;
							local_cc = UVar16.z;
							local_a8._8_4_ = extraout_XMM0_Dc;
							local_a8._0_8_ = UVar16._0_8_;
							local_a8._12_4_ = extraout_XMM0_Dd;
							local_78 = (Quaternion)__this_06.localRotation;
							UVar16 = Quaternion.Internal_ToEulerRad(ref local_78);
							euler.z = UVar16.z * 57.29578;
							euler.y = UVar16.y * 57.29578;
							euler.x = UVar16.x * 57.29578;
							UVar16 = Quaternion.Internal_MakePositive(euler);
							local_d0 = UVar16.z;
							local_58._8_4_ = extraout_XMM0_Dc_00;
							local_58._0_8_ = UVar16._0_8_;
							local_58._12_4_ = extraout_XMM0_Dd_00;
							UVar16 = __this_06.localScale;
							local_d4 = UVar16.z;
							local_48._8_4_ = extraout_XMM0_Dc_01;
							local_48._0_8_ = UVar16._0_8_;
							local_48._12_4_ = extraout_XMM0_Dd_01;
							local_68._0_4_ = pMVar14.BaseScale.x;
							local_68._4_4_ = pMVar14.BaseScale.y;
							local_d8 = pMVar14.BaseScale.z;
							UVar16.z = local_d4;
							UVar16.x = (float)local_48._0_4_;
							UVar16.y = (float)local_48._4_4_;
							b.z = local_d8;
							b.x = (float)(undefined4)local_68;
							b.y = (float)local_68._4_4_;
							UVar16 = Util.DivideVectors(UVar16, b);
							if (pSVar11 ==null) {
								throw new NullReferenceException();
							}
							local_100._0_4_ = iVar10;
							local_100._4_4_ = local_a8._0_4_;
							local_100._8_4_ = local_a8._4_4_;
							fStack_f4 = local_cc;
							local_f0 = (object)local_58._0_8_;
							fStack_e4 = UVar16.x;
							value.LocalPosition.x = (float)local_100._4_4_;
							value.OriginalParentId = iVar10;
							value.LocalPosition.z = local_cc;
							value.LocalPosition.y = (float)local_100._8_4_;
							value.LocalScale.x = fStack_e4;
							value.LocalRotation.z = local_d0;
							value.LocalRotation.x = (float)local_58._0_4_;
							value.LocalRotation.y = (float)local_58._4_4_;
							value.LocalScale.y = UVar16.y;
							value.LocalScale.z = UVar16.z;
							pSVar11.set_Item(key, value);
						}
					}
					local_c8.Dispose() ;
				}
			}
			local_158.Dispose();
		}
		pMVar8 = local_108;
		pSVar5 = MapLoader.ObjectOrder;
		__this_07 = new List<int>((IEnumerable<T>)pSVar5);
		pMVar8._oldOrder = __this_07;
		__this_08 = new MapScriptObjects();
		pSVar5 = MapLoader.ObjectOrder;
		if (pSVar5 != null) {
			local_140.GetEnumerator(pSVar5);
			local_118 = local_130;
			local_128 = (byte[])local_140._0_8_;
			local_140._0_8_ = null;
			local_140._8_8_ = local_128;
			local_a8._0_8_ = __this_08;
			if (__this_04 == null) {
				bVar9 = local_128.MoveNext();
				if (bVar9) {
					throw new NullReferenceException();
				}
			}
			else if (__this_08 == null) {
				while(true) {
					bVar9 = local_128.MoveNext();
					if (!bVar9) break;
					iVar10 = (int32_t)local_118;
					bVar9 = __this_04.Contains((int32_t)local_118);
					if (bVar9) {
						pSVar4 = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (pSVar4 == null) goto label_05c8d669;
						bVar9 = pSVar4.ContainsKey(iVar10);
						if (bVar9) {
							throw new NullReferenceException();
						}
					}
				}
			}
			else {
	label_05c8d440: ;
				bVar9 = local_128.MoveNext();
				if (bVar9) {
					iVar10 = (int32_t)local_118;
					bVar9 = __this_04.Contains((int32_t)local_118);
					if (bVar9) {
						pSVar4 = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (pSVar4 == null) {
	label_05c8d669: ;
							throw new NullReferenceException();
						}
						bVar9 = pSVar4.ContainsKey(iVar10);
						if (bVar9) {
							__this_01 = *(List<object>*)(local_a8._0_8_ + 0x10);
							pSVar4 = (Dictionary<int, object>)MapLoader.IdToMapObject;
							if (pSVar4 == null) {
								throw new NullReferenceException();
							}
							pMVar14 = pSVar4.get_Item(iVar10);
							if (pMVar14 == null) {
								throw new NullReferenceException();
							}
							if (__this_01 != null) {
								item = pMVar14.ScriptObject;
								piVar1 = &__this_01._version;
								*piVar1 = *piVar1 + 1;
								pSVar6 = __this_01._items;
								if (pSVar6 != null) {
									uVar2 = __this_01._size;
									if (uVar2 < (uint)pSVar6.Length) {
										__this_01._size = uVar2 + 1;
										pSVar6[(int)uVar2] = (object)item;
									}
									else {
										__this_01.AddWithResize((object)item);
									}
									goto label_05c8d440;
								}
							}
							throw new NullReferenceException();
						}
					}
					goto label_05c8d440;
				}
			}
			local_128.Dispose();
			pMVar8 = local_108;
			if ((long)local_a8._0_8_ != null) {
				pSVar15 = (String)(**(code*)(*(long)local_a8._0_8_ + 0x1b8))(local_a8._0_8_,*(ulong)(*(long)local_a8._0_8_ + 0x1c0));
				pMVar8._script = pSVar15;
				return;
			}
		}
	label_05c8d65f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x5B8D7B0", Offset = "0x5B8C7B0", VA = "0x5B8D7B0", Slot = "4")]
	public override void Execute()
	{
		// Lifted from source/cpp/MapEditor/DeleteObjectCommand.c (MapEditor.DeleteObjectCommand$$Execute): 3 lines keep C-only constructs
		int id;
		List<MapScriptBaseObject> __this_00;
		bool bVar1;
		MapScriptObjects __this_01;
		System_Collections_Generic_List_Enumerator_T__o SStack_48;
		byte puStack_28;

		SStack_48._list = null;
		SStack_48._index = 0;
		SStack_48._version = 0;
		SStack_48._current = null;
		__this_01 = new MapScriptObjects();
		if (__this_01 != null) {
			__this_01.Deserialize(this._script);
			__this_00 = __this_01.Objects;
			if (__this_00 != null) {
				SStack_48 = __this_00.GetEnumerator();
				puStack_28 = (byte)&SStack_48;
				while(true) {
					bVar1 = SStack_48.MoveNext() ;
					if (!bVar1) {
						SStack_48.Dispose();
						return;
					}
					if (SStack_48._current == null) break;
					id = *(int)&SStack_48._current[2].klass;
					MapLoader.DeleteObject(id);
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x5B8D970", Offset = "0x5B8C970", VA = "0x5B8D970", Slot = "5")]
	public override void Unexecute()
	{
		// Lifted from source/cpp/MapEditor/DeleteObjectCommand.c (MapEditor.DeleteObjectCommand$$Unexecute): 38 lines keep C-only constructs
		int piVar1;
		float fVar2;
		uint uVar3;
		uint uVar4;
		List<MapScriptBaseObject> __this_00;
		List<int> __this_01;
		List<int> source;
		Dictionary<int, MapObject> @object;
		Dictionary<int, DeleteObjectCommand.OrphanState> __this_02;
		Dictionary<int, @object> pSVar6;
		MapScriptBaseObject pMVar7;
		GameObject __this_03;
		int key;
		int key_00;
		float fVar8;
		float fVar9;
		float fVar10;
		bool bVar11;
		MapScriptObjects __this_04;
		Func<int, bool> __this_05;
		System_Collections_Generic_IEnumerable_TSource__o collection;
		MapObject obj;
		MapObject parent;
		Transform __this_06;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		Quaternion value;
		Vector3 UVar12;
		Vector3 value_00;
		Vector3 value_01;
		Vector3 position;
		Vector3 rotation;
		Vector3 scale;
		Vector3 b;
		byte[] auStack_128 = new byte[8];
		MapScriptBaseObject pMStack_118;
		byte[] auStack_108 = new byte[8];
		ulong uStack_100;
		ulong uStack_f8;
		object pIStack_f0;
		float fStack_e8;
		uint uStack_e4;
		uint uStack_e0;
		float fStack_dc;
		ulong uStack_d8;
		ulong uStack_d0;
		byte[] auStack_c8 = new byte[16];
		byte[] auStack_b8 = new byte[16];
		MapScriptBaseObject pMStack_a8;
		object pIStack_a0;
		ulong uStack_98;
		ulong uStack_90;
		ulong uStack_88;
		ulong uStack_80;
		Vector3 UStack_78;
		ulong uStack_68;
		ulong uStack_58;
		object pIStack_48;

		auStack_128 = (byte[])0x0;
		pMStack_118 = null;
		uStack_d8 = 0;
		uStack_d0 = 0;
		fStack_e8 = 0.0;
		uStack_e4 = 0;
		uStack_e0 = 0;
		fStack_dc = 0.0;
		uStack_f8 = null;
		pIStack_f0 = null;
		auStack_108 = (byte[])0x0;
		uStack_100._0_4_ = 0;
		uStack_100._4_4_ = 0;
		__this_04 = new MapScriptObjects();
		if (__this_04 != null) {
			__this_04.Deserialize(this._script);
			__this_00 = __this_04.Objects;
			if (__this_00 != null) {
				auStack_b8.GetEnumerator((List<@object>)__this_00);
				pMStack_118 = pMStack_a8;
				auStack_128 = (byte[])auStack_b8._0_8_;
				auStack_b8._0_8_ = null;
				auStack_b8._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_128;
				while(true) {
					bVar11 = auStack_128.MoveNext();
					pMVar7 = pMStack_118;
					if (!bVar11) break;
					MapLoader.LoadObject(pMVar7, true);
				}
				auStack_128.Dispose();
				__this_01 = MapLoader.ObjectOrder;
				if (__this_01 != null) {
					piVar1 = &__this_01._version;
					*piVar1 = *piVar1 + 1;
					__this_01._size = 0;
					source = this._oldOrder;
					@object = MapLoader.IdToMapObject;
					if (@object != null) {
						__this_05 = new Func<int, bool>((object)@object, (intptr_t)((Il2CppClass)@object.klass).vtable[0x24].method);
						collection = Enumerable.Where<int>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_05);
						__this_01.AddRange((IEnumerable<T>)collection);
						__this_02 = this._orphans;
						if (__this_02 !=null) {
							auStack_b8.GetEnumerator(__this_02);
							uStack_d8 = uStack_88;
							uStack_d0 = uStack_80;
							fStack_e8 = (float)uStack_98;
							uStack_e4 = SUB84(uStack_98, 4);
							uStack_e0 = (undefined4)uStack_90;
							fStack_dc = (float)((ulong)uStack_90 >> 0x20);
							uStack_f8 = pMStack_a8;
							pIStack_f0 = pIStack_a0;
							auStack_108 = (byte[])auStack_b8._0_8_;
							uStack_100 = (System_Collections_Generic_List_Enumerator_object__o)auStack_b8._8_8_;
							auStack_b8._0_8_ = null;
							auStack_b8._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o)auStack_108 ;
							while(true) {
								do {
									do {
										bVar11 = auStack_108.MoveNext();
										fVar9 = fStack_dc;
										fVar8 = fStack_e8;
										if (!bVar11) {
											auStack_108.Dispose();
											return;
										}
										key = (int32_t)uStack_f8;
										key_00 = uStack_f8._4_4_;
										pIStack_48 = pIStack_f0;
										uStack_68 = CONCAT44(uStack_e0, uStack_e4);
										uStack_58 = uStack_d8;
										fVar10 = (float)uStack_d0;
										pSVar6 = (Dictionary<int, @object>)MapLoader.IdToMapObject;
										if (pSVar6 == null) {
											throw new NullReferenceException();
										}
										bVar11 = pSVar6.ContainsKey(key);
									} while (!bVar11);
									pSVar6 = (Dictionary<int, @object>)MapLoader.IdToMapObject;
									if (pSVar6 == null) {
										throw new NullReferenceException();
									}
									bVar11 = pSVar6.ContainsKey(key_00);
								} while (!bVar11);
								pSVar6 = (Dictionary<int, @object>)MapLoader.IdToMapObject;
								if (pSVar6 == null) {
									throw new NullReferenceException();
								}
								obj = pSVar6.get_Item(key);
								pSVar6 = (Dictionary<int, @object>)MapLoader.IdToMapObject;
								if (pSVar6 == null) {
									throw new NullReferenceException();
								}
								parent = pSVar6.get_Item(key_00);
								MapLoader.SetParentLogical(obj, parent);
								if (obj == null) {
									throw new NullReferenceException();
								}
								pMVar7 = obj.ScriptObject;
								if (pMVar7 == null) {
									throw new NullReferenceException();
								}
								pMVar7.Parent = key_00;
								__this_03 = obj.GameObject;
								if (__this_03 == null) {
									throw new NullReferenceException();
								}
								__this_06 = __this_03.transform;
								uVar3 = obj.BaseScale.x;
								uVar4 = obj.BaseScale.y;
								auStack_c8._4_4_ = uVar4;
								auStack_c8._0_4_ = uVar3;
								auStack_c8._8_8_ = 0;
								fVar2 = obj.BaseScale.z;
								UVar12.z = fVar2;
								UVar12.x = (float)auStack_c8._0_4_;
								UVar12.y = (float)auStack_c8._4_4_;
								b.z = fVar10;
								b.x = (float)(undefined4)uStack_58;
								b.y = (float)uStack_58._4_4_;
								UVar12 = Util.MultiplyVectors(UVar12, b);
								value_01.z = UVar12.z;
								auStack_c8._8_4_ = extraout_XMM0_Dc;
								auStack_c8._0_8_ = UVar12._0_8_;
								auStack_c8._12_4_ = extraout_XMM0_Dd;
								if (__this_06 == null) {
									throw new NullReferenceException();
								}
								value_00.z = fVar8;
								value_00._0_8_ = pIStack_48;
								__this_06.localPosition = value_00;
								UStack_78.z = fVar9 * 0.017453292;
								UStack_78.y = uStack_68._4_4_ * 0.017453292;
								UStack_78.x = (float)uStack_68 * 0.017453292;
								value = Quaternion.Internal_FromEulerRad(ref UStack_78);
								__this_06.localRotation = value;
								value_01.x = (float)auStack_c8._0_4_;
								value_01.y = (float)auStack_c8._4_4_;
								__this_06.localScale = value_01;
								pMVar7 = obj.ScriptObject;
								if (pMVar7 == null) {
									throw new NullReferenceException();
								}
								position.z = fVar8;
								position._0_8_ = pIStack_48;
								pMVar7.SetPosition(position);
								pMVar7 = obj.ScriptObject;
								if (pMVar7 == null) break;
								rotation.z = fVar9;
								rotation.x = (float)uStack_68;
								rotation.y = uStack_68._4_4_;
								pMVar7.SetRotation(rotation);
								pMVar7 = obj.ScriptObject;
								if (pMVar7 == null) {
									throw new NullReferenceException();
								}
								scale.z = fVar10;
								scale.x = (float)(undefined4)uStack_58;
								scale.y = (float)uStack_58._4_4_;
								pMVar7.SetScale(scale);
							}
							throw new NullReferenceException();
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/MapEditor/DeleteObjectCommand.c.

	// MapEditor.DeleteObjectCommand.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new DeleteObjectCommand.c();
		DeleteObjectCommand.c.__9 = (DeleteObjectCommand.c)__this ;
		return;
	}

	// MapEditor.DeleteObjectCommand.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// MapEditor.DeleteObjectCommand.<>c$$<.ctor>b__4_0: clean
	private int c__ctor_b__4_0(MapObject o)
	{
		MapScriptBaseObject pMVar1;

		if ((o == null) ||(pMVar1 = o.ScriptObject, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		return pMVar1.Id;
	}

	// MapEditor.DeleteObjectCommand.<>c$$<.ctor>b__4_1: clean
	private bool c__ctor_b__4_1(int id)
	{
		return 0 < id;
	}
}
