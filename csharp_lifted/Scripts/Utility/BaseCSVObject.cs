// ==================== AoTTG2 cross-reference ====================
// Type: Utility.BaseCSVObject
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/BaseCSVObject.c
// Prior real C# source (older reference): Assets/Scripts/Utility/CSV/BaseCSVObject.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x2000910")]
public class BaseCSVObject
{
	[Token(Token = "0x4002DC8")]
	[FieldOffset(Offset = "0x0")]
	protected static Dictionary<Type, List<FieldInfo>> _fields;

	[Token(Token = "0x17000EEE")]
	public virtual char Delimiter
	{
		[Token(Token = "0x60055F9")]
		[Address(RVA = "0x5CE1380", Offset = "0x5CE0380", VA = "0x5CE1380", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Utility/BaseCSVObject.c (Utility.BaseCSVObject$$get_Delimiter): clean
			return 0x2c;
		}
	}

	[Token(Token = "0x17000EEF")]
	protected virtual char ParamDelimiter
	{
		[Token(Token = "0x60055FA")]
		[Address(RVA = "0x5CE1390", Offset = "0x5CE0390", VA = "0x5CE1390", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Utility/BaseCSVObject.c (Utility.BaseCSVObject$$get_ParamDelimiter): clean
			return 0x3a;
		}
	}

	[Token(Token = "0x17000EF0")]
	protected virtual char StructDelimiter
	{
		[Token(Token = "0x60055FB")]
		[Address(RVA = "0x5CE13A0", Offset = "0x5CE03A0", VA = "0x5CE13A0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/Utility/BaseCSVObject.c (Utility.BaseCSVObject$$get_StructDelimiter): clean
			return 0x2f;
		}
	}

	[Token(Token = "0x17000EF1")]
	protected virtual bool NamedParams
	{
		[Token(Token = "0x60055FC")]
		[Address(RVA = "0x5CE13B0", Offset = "0x5CE03B0", VA = "0x5CE13B0", Slot = "7")]
		get
		{
			// Lifted from source/cpp/Utility/BaseCSVObject.c (Utility.BaseCSVObject$$get_NamedParams): clean
			return false;
		}
	}

	[Token(Token = "0x60055FD")]
	[Address(RVA = "0x5CE1020", Offset = "0x5CE0020", VA = "0x5CE1020", Slot = "8")]
	public virtual string Serialize()
	{
		// Lifted from source/cpp/Utility/BaseCSVObject.c (Utility.BaseCSVObject$$Serialize): 7 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		ushort uVar4;
		ulong in_RAX;
		List<string> __this_00;
		List<object> __this_01;
		FieldInfo pSVar5;
		String pSVar6;
		String[] pSVar7;
		int iVar8;
		ulong uStack_38;

		uStack_38 = in_RAX;
		if (Il2CppMethodInitialized_07548284 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_FieldInfo_get_Item) ;
			Il2CppMethodInitialized_07548284 = true;
		}
		__this_00 = new List<string>();
		__this_01 = (List<object>)this.GetFields();
		if (__this_01 != null) {
			iVar8 = __this_01._size;
			if (__this_00 == null) {
				if (0 < iVar8) {
					pSVar5 = __this_01.get_Item(0);
					this.SerializeField(pSVar5, (object)this);
					throw new NullReferenceException();
				}
			}
			else if (0 < iVar8) {
				iVar8 = 0;
				do {
					while(true) {
						pSVar5 = __this_01.get_Item(iVar8);
						pSVar6 = this.SerializeField(pSVar5, (object)this);
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar7 = __this_00._items;
						if (pSVar7 == null) goto label_05de1201;
						uVar2 = __this_00._size;
						if ((uint)pSVar7.Length <= uVar2) break;
						__this_00._size = uVar2 + 1;
						pSVar7[(int)uVar2] = pSVar6;
						iVar8 = iVar8 + 1;
						if (__this_01._size <= iVar8) goto label_05de118b;
					}
					__this_00.AddWithResize((object)pSVar6);
					iVar8 = iVar8 + 1;
				} while (iVar8 < __this_01._size);
			}
	label_05de118b: ;
			uVar4 = this.get_Delimiter();
			uStack_38 = CONCAT26(uVar4, (undefined6)uStack_38);
			pSVar6 = Char.ToString((ushort)((long)&uStack_38 + 6));
			if (__this_00 != null) {
				pSVar7 = (String[])__this_00.ToArray();
				pSVar6 = String.Join(pSVar6, pSVar7);
				return pSVar6;
			}
		}
	label_05de1201: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60055FE")]
	[Address(RVA = "0x5CE13C0", Offset = "0x5CE03C0", VA = "0x5CE13C0", Slot = "9")]
	public virtual void Deserialize(string csv)
	{
		// Lifted from source/cpp/Utility/BaseCSVObject.c (Utility.BaseCSVObject$$Deserialize): 6 lines keep C-only constructs
		Type pSVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		IList pSVar4;
		bool bVar5;
		ushort uVar6;
		uint uVar7;
		String[] pSVar8;
		List<object> __this_00;
		String pSVar9;
		String[] pSVar10;
		FieldInfo pSVar11;
		long plVar12;
		object pIVar13;
		object obj;
		VirtualInvokeData pVVar14;
		ulong uVar15;
		int index;
		ulong uVar16;
		uint uVar17;
		long lVar18;

		if (Il2CppMethodInitialized_07548285 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_FieldInfo_get_Item) ;
			Il2CppMethodInitialized_07548285 = true;
		}
		uVar6 = this.get_Delimiter();
		if (csv != null) {
			pSVar8 = csv.Split(uVar6, 0);
			__this_00 = (List<object>)this.GetFields();
			if (pSVar8 != null) {
				uVar7 = (uint)pSVar8.Length;
				if (0 < (int)uVar7) {
					uVar17 = 0;
					do {
						if (uVar7 <= uVar17) goto label_05de1880;
						if (pSVar8[(int)uVar17] == null) goto label_05de1885;
						pSVar9 = (pSVar8[(int)uVar17]).Trim();
						if ((uint)pSVar8.Length <= uVar17) goto label_05de1880;
						pSVar8[(int)uVar17] = pSVar9;
						uVar17 = uVar17 + 1;
						uVar7 = (uint)pSVar8.Length;
					} while ((int)uVar17 < (int)uVar7);
				}
				bVar5 = this.get_NamedParams();
				if (bVar5) {
					uVar7 = (uint)pSVar8.Length;
					if (0 < (int)uVar7) {
						lVar18 = 0;
						do {
							if (uVar7 <= (uint)lVar18) goto label_05de1880;
							pSVar9 = pSVar8[lVar18];
							uVar6 = this.get_ParamDelimiter();
							if ((pSVar9 == null) ||(pSVar10 = pSVar9.Split(uVar6, 0), pSVar10 == null)) goto label_05de1885;
							if ((int)pSVar10.Length == 0) goto label_05de1880;
							pSVar11 = this.FindField(pSVar10[0]);
							bVar5 = (pSVar11 != null);
							if (bVar5) {
								if ((pSVar10.Length & 0xfffffffe) == 0) goto label_05de1880;
								this.DeserializeField(pSVar11, (object)this, pSVar10[1]);
							}
							uVar7 = (uint)pSVar8.Length;
							lVar18 = lVar18 + 1;
						} while ((int)lVar18 < (int)uVar7);
					}
				}
				else {
					if (__this_00 == null) goto label_05de1885;
					if (0 < __this_00._size) {
						uVar16 = 0;
						do {
							index = (int32_t)uVar16;
							pSVar11 = __this_00.get_Item(index);
							bVar5 = this.IsList(pSVar11);
							if (bVar5) {
								pSVar11 = __this_00.get_Item(index);
								if (((pSVar11 == null) ||(plVar12 = (long)pSVar11.unknown(), plVar12 == null)) ||(lVar18 = (**(code*)(*plVar12 + 0x468))(plVar12,*(ulong)(*plVar12 + 0x470)), lVar18 == 0)) goto label_05de1885;
								if (*(int)(lVar18 + 0x18) == 0) goto label_05de1880;
								pSVar1 = *(Type*)(lVar18 + 0x20);
								pSVar11 = __this_00.get_Item(index);
								if ((pSVar11 == null) ||(pIVar13 = (object)pSVar11.unknown(this), pSVar4 = typeof(IList), pIVar13 == null)) goto label_05de1885;
								obj = (pIVar13 as IList);
								if (obj == null) {
									throw new InvalidCastException();
								}
								pIVar2 = obj.klass;
								uVar15 = (ulong)(pIVar2._2).interface_offsets_count;
								if (uVar15 == 0) goto label_05de172f;
								pIVar3 = (pIVar2._1).interfaceOffsets;
								lVar18 = 0;
								goto label_05de1720;
							}
							pSVar11 = __this_00.get_Item(index);
							if ((uint)pSVar8.Length <= uVar16) goto label_05de1880;
							this.DeserializeField(pSVar11, (object)this, pSVar8[uVar16]);
							uVar16 = uVar16 + 1;
						} while ((long)uVar16 < (long)__this_00._size);
					}
				}
				return;
			}
		}
	label_05de1885: ;
		throw new NullReferenceException();
		while (true) {
			lVar18 = lVar18 + 0x10;
			if (!(uVar15 * 0x10 != lVar18)) break;
	label_05de1720: ;
			if (*(IList*)((long)&pIVar3.interfaceType + lVar18) == typeof(IList)) {
				pVVar14 = pIVar2.vtable + (*(int)((long)&pIVar3.offset + lVar18) + 4);
				goto label_05de1755;
			}
		}
	label_05de172f: ;
	label_05de1755: ;
		obj.Add();
		if ((int)pSVar8.Length <= index) {
			return;
		}
		uVar15 = pSVar8.Length & 0xffffffff;
		while (uVar16 < uVar15) {
			bVar5 = (pSVar8[uVar16] != (String)**(ulong*)(g_data_07556758 + 0xb8));
			if (bVar5) {
				if ((uint)pSVar8.Length <= uVar16) break;
				pIVar13 = this.DeserializeValue(pSVar1, pSVar8[uVar16]);
				pIVar2 = obj.klass;
				uVar15 = (ulong)(pIVar2._2).interface_offsets_count;
				obj.Add(pIVar13);
			}
			uVar16 = uVar16 + 1;
			uVar7 = (uint)pSVar8.Length;
			uVar15 = (ulong)uVar7;
			if ((long)(int)uVar7 <= (long)uVar16) {
				return;
			}
		}
	label_05de1880: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60055FF")]
	[Address(RVA = "0x5CE18A0", Offset = "0x5CE08A0", VA = "0x5CE18A0", Slot = "10")]
	public virtual void Copy(BaseCSVObject other)
	{
		// Lifted from source/cpp/Utility/BaseCSVObject.c (Utility.BaseCSVObject$$Copy): clean
		String pSVar1;

		if (other == null) {
			throw new NullReferenceException();
		}
		pSVar1 = other.Serialize();
		this.Deserialize(pSVar1);
		return;
	}

	[Token(Token = "0x6005600")]
	[Address(RVA = "0x5CE18E0", Offset = "0x5CE08E0", VA = "0x5CE18E0", Slot = "11")]
	protected virtual List<FieldInfo> GetFields()
	{
		// Lifted from source/cpp/Utility/BaseCSVObject.c (Utility.BaseCSVObject$$GetFields): 5 lines keep C-only constructs
		Dictionary<@object, @object> pSVar1;
		object @object;
		bool bVar2;
		Type __this_00;
		FieldInfo[] source;
		Utility_BaseCSVObject___c_StaticFields pUVar3;
		Func<FieldInfo, int> __this_01;
		System_Linq_IOrderedEnumerable_TSource__o source_00;
		System_Collections_Generic_List_TSource__o value;
		List<FieldInfo> pSVar4;

		__this_00 = this.GetType();
		pSVar1 = (Dictionary<@object, @object>)BaseCSVObject._fields;
		if (pSVar1 == null) goto label_05de1b29;
		bVar2 = pSVar1.ContainsKey((object)__this_00);
		if (!bVar2) {
			if (__this_00 == null) goto label_05de1b29;
			pSVar1 = (Dictionary<@object, @object>)BaseCSVObject._fields;
			source = __this_00.GetFields();
			if ((typeof(BaseCSVObject.c)._2).cctor_finished_or_no_cctor == 0) {
				pUVar3 = typeof(BaseCSVObject.c).static_fields;
				__this_01 = pUVar3.__9__12_0;
			}
			else {
				pUVar3 = typeof(BaseCSVObject.c).static_fields;
				__this_01 = pUVar3.__9__12_0;
			}
			if (__this_01 == null) {
				if (((typeof(BaseCSVObject.c))._2).cctor_finished_or_no_cctor == 0) {
					pUVar3 = typeof(BaseCSVObject.c).static_fields;
				}
				@object = (object)pUVar3.__9;
				__this_01 = new Func<FieldInfo, int>(@object, (intptr_t)MethodInfo_Utility_BaseCSVObject_c_GetFields_b__12_0);
				pUVar3 = typeof(BaseCSVObject.c).static_fields;
				pUVar3.__9__12_0 = __this_01;
			}
			source_00 = Enumerable.OrderBy<FieldInfo, int>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TKey__o)__this_01);
			value = Enumerable.ToList<FieldInfo>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
			if (pSVar1 == null) goto label_05de1b29;
			pSVar1.Add((object)__this_00, (object)value) ;
		}
		pSVar1 = (Dictionary<@object, @object>)BaseCSVObject._fields;
		if (pSVar1 != null) {
			pSVar4 = (List<FieldInfo>)pSVar1.get_Item((object)__this_00);
			return pSVar4;
		}
	label_05de1b29: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005601")]
	[Address(RVA = "0x5CE1B30", Offset = "0x5CE0B30", VA = "0x5CE1B30", Slot = "12")]
	protected virtual FieldInfo FindField(string name)
	{
		// Lifted from source/cpp/Utility/BaseCSVObject.c (Utility.BaseCSVObject$$FindField): 3 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		bool bVar1;
		Type key;
		List<object> __this_01;
		String a;
		object pIVar2;
		object pIVar3;
		int iVar4;
		System_Collections_Generic_List_Enumerator_T__o SStack_58;
		byte puStack_30;

		SStack_58._list = null;
		SStack_58._index = 0;
		SStack_58._version = 0;
		SStack_58._current = null;
		__this_00 = (Dictionary<object, object>)BaseCSVObject._fields;
		key = this.GetType();
		if (__this_00 != null) {
			__this_01 = (List<object>)__this_00.get_Item((object)key);
			if (__this_01 != null) {
				SStack_58 = __this_01.GetEnumerator();
				puStack_30 = (byte)&SStack_58;
				do {
					bVar1 = SStack_58.MoveNext();
					pIVar3 = SStack_58._current;
					if (!bVar1) {
						iVar4 = 5;
						pIVar3 = null;
						goto label_05de1c7c;
					}
					if (SStack_58._current == null) {
						throw new NullReferenceException();
					}
					a = (String)(*(((System_Reflection_FieldInfo_VTable)(SStack_58._current).klass.vtable)._8_unknown) .methodPtr)(SStack_58._current,(((System_Reflection_FieldInfo_VTable)(SStack_58._current).klass.vtable) ._8_unknown).method);
					bVar1 = (a == name);
				} while (!bVar1);
				iVar4 = 4;
	label_05de1c7c: ;
				SStack_58.Dispose();
				pIVar2 = null;
				if (iVar4 == 4) {
					pIVar2 = pIVar3;
				}
				return (FieldInfo)pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005602")]
	[Address(RVA = "0x5CE1D20", Offset = "0x5CE0D20", VA = "0x5CE1D20", Slot = "13")]
	protected virtual bool IsList(FieldInfo field)
	{
		// Lifted from source/cpp/Utility/BaseCSVObject.c (Utility.BaseCSVObject$$IsList): 2 lines keep C-only constructs
		Il2CppType handle;
		sbyte cVar1;
		bool bVar2;
		long plVar3;
		Type left;
		Type right;

		if (field != null) {
			plVar3 = (long)field.unknown();
			if (plVar3 != null) {
				cVar1 = (**(code*)(*plVar3 + 0x3b8))(plVar3,*(ulong)(*plVar3 + 0x3c0));
				if (cVar1 == false) {
					return false;
				}
				plVar3 = (long)field.unknown();
				if (plVar3 != null) {
					left = (Type)(**(code*)(*plVar3 + 0x448))(plVar3);
					handle = TypeRef_System_Collections_Generic_List_T;
					right = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
					bVar2 = (left == right);
					return bVar2;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005603")]
	[Address(RVA = "0x5CE1E00", Offset = "0x5CE0E00", VA = "0x5CE1E00", Slot = "14")]
	protected virtual string SerializeField(FieldInfo info, object instance)
	{
		// Lifted from source/cpp/Utility/BaseCSVObject.c (Utility.BaseCSVObject$$SerializeField): 13 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		bool bVar7;
		sbyte cVar8;
		String pSVar9;
		String pSVar10;
		List<string> __this_00;
		long plVar11;
		long lVar12;
		object pIVar13;
		object pIVar14;
		VirtualInvokeData pVVar15;
		Type pSVar16;
		String[] pSVar17;
		ulong uVar18;
		ushort uStack_6a;
		object pIStack_68;
		object pIStack_60;
		String pSStack_50;
		object* ppIStack_40;
		object* ppIStack_38;

		uStack_6a = 0;
		pIStack_68 = null;
		pIStack_60 = null;
		pSVar9 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		bVar7 = this.get_NamedParams();
		if (bVar7) {
			if (info == null) goto label_05de23f5;
			pSVar9 = (String)info.unknown();
			uStack_6a = this.get_ParamDelimiter();
			pSVar10 = Char.ToString(ref uStack_6a);
			pSVar9 = String.Concat(pSVar9, pSVar10);
		}
		bVar7 = this.IsList(info);
		if (bVar7) {
			__this_00 = new List<string>();
			if (((info != null) &&(plVar11 = (long)info.unknown(), plVar11 != null)) && (lVar12 = (**(code*)(*plVar11 + 0x468))(plVar11,*(ulong)(*plVar11 + 0x470)), lVar12 != 0)) {
				pSStack_50 = pSVar9;
				if (*(int)(lVar12 + 0x18) == 0) {
					throw new IndexOutOfRangeException();
				}
				pSVar16 = *(Type*)(lVar12 + 0x20);
				pIVar13 = (object)info.unknown(instance);
				if (pIVar13 != null) {
					pIVar14 = (pIVar13 as IList);
					if (pIVar14 == null) {
						throw new InvalidCastException();
					}
					pIVar14 = (pIVar13 as IList);
					if (pIVar14 == null) {
						throw new InvalidCastException();
					}
					pIVar3 = pIVar14.klass;
					uVar18 = (ulong)(pIVar3._2).interface_offsets_count;
					pIVar13 = (object)pIVar14.Dispose();
					ppIStack_40 = &pIStack_68;
					ppIStack_38 = &pIStack_60;
					do {
						pIStack_68 = pIVar13;
						if (pIVar13 == null) {
							throw new NullReferenceException();
						}
						pIVar3 = pIVar13.klass;
						uVar18 = (ulong)(pIVar3._2).interface_offsets_count;
						cVar8 = pIVar13.Dispose();
						pIVar13 = pIStack_68;
						if (cVar8 == false) {
							pIVar13 = (pIStack_68 as IDisposable);
							pIStack_60 = pIVar13;
							if (pIVar13 == null) goto label_05de2336;
							pIVar3 = pIVar13.klass;
							uVar18 = (ulong)(pIVar3._2).interface_offsets_count;
							if (uVar18 == 0) goto label_05de230f;
							pIVar4 = (pIVar3._1).interfaceOffsets;
							lVar12 = 0;
							goto label_05de2300;
						}
						if (pIStack_68 == null) {
							throw new NullReferenceException();
						}
						pIVar3 = pIStack_68.klass;
						uVar18 = (ulong)(pIVar3._2).interface_offsets_count;
						pIVar13 = pIVar13.Dispose();
						pSVar9 = this.SerializeValue(pSVar16, pIVar13);
						if (__this_00 == null) {
	label_05de23e6: ;
							throw new NullReferenceException();
						}
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar17 = __this_00._items;
						if (pSVar17 == null) goto label_05de23e6;
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pSVar17.Length) {
							__this_00._size = uVar2 + 1;
							pSVar17[(int)uVar2] = pSVar9;
							pIVar13 = pIStack_68;
						}
						else {
							__this_00.AddWithResize((object)pSVar9);
							pIVar13 = pIStack_68;
						}
					} while(true);
				}
			}
		}
		else if (info != null) {
			pSVar16 = (Type)info.unknown();
			pIVar13 = (object)info.unknown(instance);
			pSVar10 = this.SerializeValue(pSVar16, pIVar13);
			goto label_05de23c4;
		}
		goto label_05de23f5;
		while (true) {
			lVar12 = lVar12 + 0x10;
			if (!(uVar18 * 0x10 != lVar12)) break;
	label_05de2300: ;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar12) == typeof(IDisposable)) {
				pVVar15 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar12);
				goto label_05de232d;
			}
		}
	label_05de230f: ;
	label_05de232d: ;
		pIVar13.Dispose();
	label_05de2336: ;
		pSVar9 = pSStack_50;
		if (__this_00 != null) {
			if (__this_00._size < 1) {
				return pSStack_50;
			}
			uStack_6a = this.get_Delimiter();
			pSVar10 = Char.ToString(ref uStack_6a);
			pSVar17 = (String[])__this_00.ToArray();
			pSVar10 = String.Join(pSVar10, pSVar17);
	label_05de23c4: ;
			pSVar9 = String.Concat(pSVar9, pSVar10);
			return pSVar9;
		}
	label_05de23f5: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005604")]
	[Address(RVA = "0x5CE2470", Offset = "0x5CE1470", VA = "0x5CE2470", Slot = "15")]
	protected virtual void DeserializeField(FieldInfo info, object instance, string value)
	{
		// Lifted from source/cpp/Utility/BaseCSVObject.c (Utility.BaseCSVObject$$DeserializeField): clean
		Type pSVar1;
		object value_00;

		if (info == null) {
			throw new NullReferenceException();
		}
		pSVar1 = (Type)info.unknown();
		value_00 = this.DeserializeValue(pSVar1, value);
		info.SetValue(instance, value_00);
		return;
	}

	[Token(Token = "0x6005605")]
	[Address(RVA = "0x5CE24E0", Offset = "0x5CE14E0", VA = "0x5CE24E0", Slot = "16")]
	protected virtual string SerializeValue(Type t, object value)
	{
		// Lifted from source/cpp/Utility/BaseCSVObject.c (Utility.BaseCSVObject$$SerializeValue): 29 lines keep C-only constructs
		byte bVar1;
		Il2CppClass pIVar2;
		Il2CppClass_1 pIVar3;
		Il2CppType pIVar4;
		bool bVar5;
		Type pSVar6;
		String pSVar7;
		ulong puVar8;
		String[] value_00;
		String pSVar9;
		object pIVar10;
		Il2CppMethodPointer vtableDispatch;
		Il2CppClass* extraout_RDX;
		Il2CppClass* extraout_RDX_00;
		Il2CppClass* ppIVar11;
		RuntimeTypeHandle SVar12;
		int index;
		MethodInfo pMVar13;
		ushort local_46;
		int local_44;
		ulong local_40;
		float[] local_38 = new float[2];
		ulong local_30;

		local_44 = 0;
		local_38[0] = 0.0;
		local_40 = 0;
		local_46 = 0;
		local_30 = 0;
		pIVar3 = &g_data_07556758._1;
		pSVar6 = Type.GetTypeFromHandle(ref pIVar3.byval_arg);
		bVar5 = (t == pSVar6);
		if (bVar5) {
			if (value == null) {
				value = null;
			}
			else if (value.klass != g_data_07556758) {
	label_05de2603: ;
				throw new InvalidCastException();
			}
			return (String)value;
		}
		SVar12.value = (RuntimeTypeHandle)(g_data_07556710 + 0x20);
		pSVar6 = Type.GetTypeFromHandle(SVar12);
		bVar5 = (t == pSVar6);
		ppIVar11 = extraout_RDX;
		if (!bVar5) {
			SVar12.value = (RuntimeTypeHandle)(g_data_07556740 + 0x20);
			pSVar6 = Type.GetTypeFromHandle(SVar12);
			bVar5 = (t == pSVar6);
			ppIVar11 = extraout_RDX_00;
			if (!bVar5) {
				SVar12.value = (RuntimeTypeHandle)(g_data_075566f0 + 0x20);
				pSVar6 = Type.GetTypeFromHandle(SVar12);
				bVar5 = (t == pSVar6);
				pIVar4 = TypeRef_Utility_BaseCSVObject;
				if (bVar5) {
					local_44 = Convert.ToInt32(value);
					pSVar7 = local_44.ToString();
					return pSVar7;
				}
				pSVar6 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar4);
				if (pSVar6 == null) goto label_05de2afb;
				bVar5 = pSVar6.IsAssignableFrom(t);
				pIVar4 = TypeRef_UnityEngine_Vector3;
				if (!bVar5) {
					pSVar6 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar4);
					bVar5 = (t == pSVar6);
					pIVar4 = TypeRef_UnityEngine_Vector2;
					if (bVar5) {
						puVar8 = (ulong)il2cpp_runtime_helper_02abd3a0(value, typeof(Vector3));
						local_40 = *puVar8;
						local_38[0] = *(float)(puVar8 + 1);
						local_46 = this.get_StructDelimiter();
						pSVar7 = Char.ToString(ref local_46);
						value_00 = (String[])new string[3];
						pSVar9 = local_40.ToString();
						if (value_00 != null) {
							il2cpp_codegen_array_set_ref((Array)value_00, 0, (object)pSVar9);
							pSVar9 = (((long)&local_40 + 4)).ToString();
							il2cpp_codegen_array_set_ref((Array)value_00, 1, (object)pSVar9);
							pSVar9 = local_38.ToString();
							index = 2;
							goto label_05de2abc;
						}
					}
					else {
						pSVar6 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar4);
						bVar5 = (t == pSVar6);
						pIVar4 = TypeRef_Utility_Color255;
						if (bVar5) {
							puVar8 = (ulong)il2cpp_runtime_helper_02abd3a0(value, typeof(Vector2));
							local_30 = *puVar8;
							local_46 = this.get_StructDelimiter();
							pSVar7 = Char.ToString(ref local_46);
							value_00 = (String[])new string[2];
							pSVar9 = local_30.ToString();
							if (value_00 != null) {
								il2cpp_codegen_array_set_ref((Array)value_00, 0, (object)pSVar9);
								pSVar9 = (((long)&local_30 + 4)).ToString();
								index = 1;
	label_05de2abc: ;
								il2cpp_codegen_array_set_ref((Array)value_00, index, (object)pSVar9);
								pSVar7 = String.Join(pSVar7, value_00);
								return pSVar7;
							}
						}
						else {
							pSVar6 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar4);
							bVar5 = (t == pSVar6);
							if (!bVar5) {
								return *(String*)g_data_07556758.static_fields;
							}
							pIVar10 = il2cpp_codegen_is_inst_class(value, typeof(Color255));
							local_46 = this.get_StructDelimiter();
							pSVar7 = Char.ToString(ref local_46);
							value_00 = (String[])new string[4];
							if ((pIVar10 != null) &&(pSVar9 = ((pIVar10 + 1)).ToString(), value_00 != null)) {
								il2cpp_codegen_array_set_ref((Array)value_00, 0, (object)pSVar9);
								pSVar9 = (((long)&pIVar10[1].klass + 4)).ToString();
								il2cpp_codegen_array_set_ref((Array)value_00, 1, (object)pSVar9);
								pSVar9 = pIVar10[1].monitor.ToString();
								il2cpp_codegen_array_set_ref((Array)value_00, 2, (object)pSVar9);
								pSVar9 = (((long)&pIVar10[1].monitor + 4)).ToString();
								index = 3;
								goto label_05de2abc;
							}
						}
					}
					goto label_05de2afb;
				}
				if (value == null) goto label_05de2afb;
				pIVar2 = value.klass;
				bVar1 = (typeof(BaseCSVObject)._2).typeHierarchyDepth;
				if (((pIVar2._2).typeHierarchyDepth < bVar1) ||(ppIVar11 = (pIVar2._2).typeHierarchy, ppIVar11[(ulong)bVar1 - 1] != typeof(BaseCSVObject))) goto label_05de2603;
				vtableDispatch = pIVar2.vtable[8].methodPtr;
				pMVar13 = pIVar2.vtable[8].method;
				goto label_05de2696;
			}
		}
		if (value == null) {
	label_05de2afb: ;
			throw new NullReferenceException();
		}
		vtableDispatch = value.klass.vtable[3].methodPtr;
		pMVar13 = value.klass.vtable[3].method;
	label_05de2696: ;
		pSVar7 = (String)(*vtableDispatch)(value,pMVar13,ppIVar11,vtableDispatch);
		return pSVar7;
	}

	[Token(Token = "0x6005606")]
	[Address(RVA = "0x5CE2B00", Offset = "0x5CE1B00", VA = "0x5CE2B00", Slot = "17")]
	protected virtual object DeserializeValue(Type t, string value)
	{
		// Lifted from source/cpp/Utility/BaseCSVObject.c (Utility.BaseCSVObject$$DeserializeValue): 9 lines keep C-only constructs
		byte bVar1;
		Il2CppClass_1 pIVar2;
		Il2CppType pIVar3;
		bool bVar4;
		ushort uVar5;
		int iVar6;
		int g;
		int b;
		int a;
		Type pSVar7;
		String[] pSVar8;
		Vector3* ppUVar9;
		object pIVar10;
		Color255 __this_00;
		RuntimeTypeHandle handle;
		Il2CppClass pIVar11;
		float fStack_48;
		float fStack_38;
		float fStack_34;

		handle.value = (RuntimeTypeHandle)(g_data_07556758 + 0x20);
		pSVar7 = Type.GetTypeFromHandle(handle);
		bVar4 = (t == pSVar7);
		if (bVar4) {
			return (object)value;
		}
		pIVar2 = &g_data_07556710._1;
		pSVar7 = Type.GetTypeFromHandle(ref pIVar2.byval_arg);
		bVar4 = (t == pSVar7);
		if (bVar4) {
			fStack_48 = (float)Int32.Parse(value);
			pIVar11 = g_data_07556710;
		}
		else {
			pIVar2 = &g_data_07556740._1;
			pSVar7 = Type.GetTypeFromHandle(ref pIVar2.byval_arg);
			bVar4 = (t == pSVar7);
			if (bVar4) {
				fStack_48 = Single.Parse(value);
				pIVar11 = g_data_07556740;
			}
			else {
				pIVar2 = &g_data_075566f0._1;
				pSVar7 = Type.GetTypeFromHandle(ref pIVar2.byval_arg);
				bVar4 = (t == pSVar7);
				pIVar3 = TypeRef_Utility_BaseCSVObject;
				if (!bVar4) {
					pSVar7 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar3);
					if (pSVar7 != null) {
						bVar4 = pSVar7.IsAssignableFrom(t);
						pIVar3 = TypeRef_UnityEngine_Vector3;
						if (!bVar4) {
							pSVar7 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar3);
							bVar4 = (t == pSVar7);
							pIVar3 = TypeRef_UnityEngine_Vector2;
							if (bVar4) {
								uVar5 = this.get_StructDelimiter();
								if ((value == null) ||(pSVar8 = value.Split(uVar5, 0), pSVar8 == null)) goto label_05de305e;
								if ((((int)pSVar8.Length == 0) ||(fStack_38 = Single.Parse(pSVar8[0]),(pSVar8.Length & 0xfffffffe) == 0)) ||(fStack_34 = Single.Parse(pSVar8[1]),(uint)pSVar8.Length < 3)) goto label_05de3063;
								ppUVar9 = &typeof(Vector3);
							}
							else {
								pSVar7 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar3);
								bVar4 = (t == pSVar7);
								pIVar3 = TypeRef_Utility_Color255;
								if (!bVar4) {
									pSVar7 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar3);
									bVar4 = (t == pSVar7);
									if (!bVar4) {
										return null;
									}
									uVar5 = this.get_StructDelimiter();
									if ((value != null) &&(pSVar8 = value.Split(uVar5, 0), pSVar8 != null)) {
										if (((int)pSVar8.Length != 0) &&(((iVar6 = Int32.Parse(pSVar8[0]),(pSVar8.Length & 0xfffffffe) != 0 &&(g = Int32.Parse(pSVar8[1]), 2 < (uint)pSVar8.Length)) &&(b = Int32.Parse(pSVar8[2]),(pSVar8.Length & 0xfffffffc) != 0)))) {
											a = Int32.Parse(pSVar8[3]);
											__this_00 = new Color255(iVar6, g, b, a);
											return (object)__this_00;
										}
	label_05de3063: ;
										throw new IndexOutOfRangeException();
									}
									goto label_05de305e;
								}
								uVar5 = this.get_StructDelimiter();
								if ((value == null) ||(pSVar8 = value.Split(uVar5, 0), pSVar8 == null)) goto label_05de305e;
								if (((int)pSVar8.Length == 0) ||(fStack_38 = Single.Parse(pSVar8[0]),(pSVar8.Length & 0xfffffffe) == 0)) goto label_05de3063;
								ppUVar9 = (Vector3*)&typeof(Vector2);
							}
							pIVar11 = (Il2CppClass)*ppUVar9;
							fStack_48 = fStack_38;
							goto label_05de2f47;
						}
						pIVar10 = Activator.CreateInstance(t);
						if (pIVar10 != null) {
							pIVar11 = pIVar10.klass;
							bVar1 = (typeof(BaseCSVObject)._2).typeHierarchyDepth;
							if (((pIVar11._2).typeHierarchyDepth < bVar1) ||((pIVar11._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(BaseCSVObject) )) {
								throw new InvalidCastException();
							}
							(*pIVar11.vtable[9].methodPtr)(pIVar10,value,pIVar11.vtable[9].method);
							return pIVar10;
						}
					}
	label_05de305e: ;
					throw new NullReferenceException();
				}
				iVar6 = Int32.Parse(value);
				bVar4 = Convert.ToBoolean(iVar6);
				fStack_48 = (float)CONCAT31(fStack_48._1_3_, bVar4);
				pIVar11 = g_data_075566f0;
			}
		}
	label_05de2f47: ;
		pIVar10 = (object)fStack_48;
		return pIVar10;
	}

	[Token(Token = "0x6005607")]
	[Address(RVA = "0x5CE1370", Offset = "0x5CE0370", VA = "0x5CE1370")]
	public BaseCSVObject()
	{
		// Lifted from source/cpp/Utility/BaseCSVObject.c (Utility.BaseCSVObject$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Utility/BaseCSVObject.c.

	// Utility.BaseCSVObject$$.cctor: clean
	static BaseCSVObject()
	{
		Dictionary<Type, List<FieldInfo>> __this;

		__this = new Dictionary<Type, List<FieldInfo>>();
		BaseCSVObject._fields = __this;
		return;
	}

	// Utility.BaseCSVObject.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new BaseCSVObject.c();
		BaseCSVObject.c.__9 = (BaseCSVObject.c)__this;
		return;
	}

	// Utility.BaseCSVObject.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Utility.BaseCSVObject.<>c$$<GetFields>b__12_0: 2 lines keep C-only constructs
	private int c__GetFields_b__12_0(FieldInfo t)
	{
		byte bVar1;
		object pIVar2;
		Il2CppType pIVar3;
		bool bVar4;
		Type pSVar5;
		Object[] pSVar6;

		pIVar3 = TypeRef_Utility_OrderAttribute;
		pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar3);
		bVar4 = Attribute.IsDefined((MemberInfo)t, pSVar5);
		pIVar3 = TypeRef_Utility_OrderAttribute;
		if (!bVar4) {
			return 0;
		}
		pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar3);
		if ((t != null) &&(pSVar6 = t.GetCustomAttributes(pSVar5, true), pSVar6 != null)) {
			if ((int)pSVar6.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2 = pSVar6[0];
			if (pIVar2 != null) {
				bVar1 = (typeof(OrderAttribute)._2).typeHierarchyDepth;
				if (((pIVar2.klass._2).typeHierarchyDepth < bVar1) ||((pIVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(OrderAttribute))) {
					throw new InvalidCastException();
				}
				return *(int)&pIVar2[1].klass;
			}
		}
		throw new NullReferenceException();
	}
}
