// ==================== AoTTG2 cross-reference ====================
// Type: MiscExtensions
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/MiscExtensions.c
// Prior real C# source (older reference): Assets/Scripts/Utility/Extensions/MiscExtensions.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Text.RegularExpressions;
using GameManagers;
using Il2CppDummyDll;
using Photon.Realtime;
using SimpleJSONFixed;
using UnityEngine;
using Utility;

[Token(Token = "0x2000025")]
internal static class MiscExtensions
{
	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string HexPattern;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string ColorTagPattern;

	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string ColorEndPattern;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string TagPattern;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string SizePattern;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x28")]
	private static readonly string MaterialPattern;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x30")]
	private static readonly string QuadPattern;

	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x38")]
	private static readonly Regex HexRegex;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x40")]
	private static readonly Regex ColorTagRegex;

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x48")]
	private static readonly Regex ColorEndRegex;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x50")]
	private static readonly Regex TagRegex;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x58")]
	private static readonly Regex IllegalStyleRegex;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x60")]
	private static readonly Regex NamedColorTagRegex;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x68")]
	public static readonly Dictionary<string, string> NamedColorHex;

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x574E640", Offset = "0x574D640", VA = "0x574E640")]
	public static string ResolveNamedColorHex(string name)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$ResolveNamedColorHex): 1 lines keep C-only constructs
		Dictionary<object, object> __this;
		bool bVar1;
		String pSVar2;
		String local_18;

		local_18 = null;
		bVar1 = String.IsNullOrEmpty(name);
		if (!bVar1) {
			__this = (Dictionary<object, object>)MiscExtensions.NamedColorHex;
			if (__this == null) {
	label_0584e723: ;
				throw new NullReferenceException();
			}
			bVar1 = __this.TryGetValue((object)name, (object*)&local_18);
			if (bVar1) {
				if (local_18 == null) goto label_0584e723;
				bVar1 = local_18.StartsWith("#");
				if (bVar1) {
					if (local_18 == null) goto label_0584e723;
				}
			}
			else {
			}
		}
		return pSVar2;
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x574E730", Offset = "0x574D730", VA = "0x574E730")]
	public static string ReplaceNamedColorTags(string input)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$ReplaceNamedColorTags): 1 lines keep C-only constructs
		Regex __this;
		object @object;
		bool bVar1;
		String pSVar2;
		MiscExtensions___c_StaticFields pMVar3;
		MatchEvaluator __this_00;

		bVar1 = String.IsNullOrEmpty(input);
		if (bVar1) {
			return input;
		}
		__this = MiscExtensions.NamedColorTagRegex;
		if ((typeof(c)._2).cctor_finished_or_no_cctor == 0) {
			pMVar3 = typeof(c).static_fields;
			__this_00 = pMVar3.__9__15_0;
		}
		else {
			pMVar3 = typeof(c).static_fields;
			__this_00 = pMVar3.__9__15_0;
		}
		if (__this_00 == null) {
			if (((typeof(c))._2).cctor_finished_or_no_cctor == 0) {
				pMVar3 = typeof(c).static_fields;
			}
			@object = (object)pMVar3.__9;
			__this_00 = new MatchEvaluator(@object, (intptr_t)MethodInfo_MiscExtensions_c_ReplaceNamedColorTags_b__15_0);
			pMVar3 = typeof(c).static_fields;
			pMVar3.__9__15_0 = __this_00;
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		pSVar2 = Regex.Replace(__this, input, __this_00);
		return pSVar2;
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x574E890", Offset = "0x574D890", VA = "0x574E890")]
	public static bool GetActive(this GameObject target)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$GetActive): clean
		bool bVar1;

		if (target == null) {
			throw new NullReferenceException();
		}
		return bVar1;
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x574E8B0", Offset = "0x574D8B0", VA = "0x574E8B0")]
	public static void BakeLocalMesh(this SkinnedMeshRenderer renderer, Mesh mesh)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$BakeLocalMesh): 1 lines keep C-only constructs
		bool bVar1;
		Cloth local_18;

		local_18 = null;
		if (renderer != null) {
			bVar1 = renderer.TryGetComponent<Cloth>((object*)&local_18);
			if (!bVar1) {
	label_0584e955: ;
				renderer.BakeMesh(mesh, true);
				return;
			}
			if (local_18 != null) {
				bVar1 = local_18.enabled;
				if (!bVar1) goto label_0584e955;
				if (local_18 != null) {
					local_18.enabled = false;
					renderer.BakeMesh(mesh, true);
					if (local_18 != null) {
						local_18.enabled = true;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x574E980", Offset = "0x574D980", VA = "0x574E980")]
	public static string ToDisplayString(this Vector3 vector)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$ToDisplayString): 2 lines keep C-only constructs
		String[] values;
		String pSVar1;
		ulong local_28;
		float[] local_20 = new float[2];

		local_20[0] = vector.z;
		local_28 = vector._0_8_;
		values = (String[])new string[7];
		if (values == null) {
			throw new NullReferenceException();
		}
		if ((int)values.Length != 0) {
			values[0] = "(";
			pSVar1 = local_28.ToString();
			if ((values.Length & 0xfffffffe) != 0) {
				values[1] = pSVar1;
				if (2 < (uint)values.Length) {
					values[2] = ",";
					pSVar1 = (((long)&local_28 + 4)).ToString();
					if ((values.Length & 0xfffffffc) != 0) {
						values[3] = pSVar1;
						if (4 < (uint)values.Length) {
							values[4] = ",";
							pSVar1 = local_20.ToString();
							if (5 < (uint)values.Length) {
								values[5] = pSVar1;
								if (6 < (uint)values.Length) {
									values[6] = ")";
									pSVar1 = String.Concat(values);
									return pSVar1;
								}
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x574EB00", Offset = "0x574DB00", VA = "0x574EB00")]
	public static double UnboxToDouble(this object obj)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$UnboxToDouble): 3 lines keep C-only constructs
		double pdVar1;
		int piVar2;

		if (obj == null) {
			throw new NullReferenceException();
		}
		if (obj.klass == g_data_07556710) {
			piVar2 = il2cpp_vm_Object_Unbox(obj);
			return (double)*piVar2;
		}
		if ((obj.klass._1).element_class != *(Il2CppClass*)(g_data_07556748 + 0x40)) {
			throw new InvalidCastException();
		}
		return *pdVar1;
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x574EB50", Offset = "0x574DB50", VA = "0x574EB50")]
	public static float UnboxToFloat(this object obj)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$UnboxToFloat): 17 lines keep C-only constructs
		CultureInfo provider;
		int piVar1;
		float pfVar2;
		double pdVar3;
		long plVar4;
		Decimal pSVar5;
		sbyte pcVar6;
		Il2CppClass klass;
		float fVar7;

		if (obj == null) {
	label_0584ebdf: ;
			provider = CultureInfo.InvariantCulture;
			fVar7 = Convert.ToSingle(obj, (IFormatProvider)provider);
			return fVar7;
		}
		klass = obj.klass;
		if (klass == g_data_07556710) {
			piVar1 = il2cpp_vm_Object_Unbox(obj);
			fVar7 = (float)*piVar1;
		}
		else {
			if (klass == g_data_07556740) {
				return *pfVar2;
			}
			if (klass == g_data_07556748) {
				pdVar3 = il2cpp_vm_Object_Unbox(obj);
				return (float)*pdVar3;
			}
			if (klass == g_data_07556730) {
				plVar4 = il2cpp_vm_Object_Unbox(obj);
				return (float)*plVar4;
			}
			if (klass == typeof(Decimal)) {
				if ((klass._2).cctor_finished_or_no_cctor == 0) {
					klass = typeof(Decimal);
				}
				pSVar5 = (Decimal)il2cpp_runtime_helper_02abd3a0(obj, klass);
				fVar7 = ((double)(System_Decimal_o)*pSVar5);
				return fVar7;
			}
			if (klass != g_data_075566f0) goto label_0584ebdf;
			pcVar6 = (sbyte)il2cpp_runtime_helper_02abd3a0(obj);
			if (*pcVar6 != false) {
				return 1.0;
			}
		}
		return fVar7;
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x574ECE0", Offset = "0x574DCE0", VA = "0x574ECE0")]
	public static int UnboxToInt(this object obj)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$UnboxToInt): 15 lines keep C-only constructs
		int iVar1;
		CultureInfo provider;
		int piVar2;
		float pfVar3;
		double pdVar4;
		Decimal pSVar5;
		byte pbVar6;
		Il2CppClass klass;

		if (obj == null) {
	label_0584ed6b: ;
			provider = CultureInfo.InvariantCulture;
			iVar1 = Convert.ToInt32(obj, (IFormatProvider)provider);
			return iVar1;
		}
		klass = obj.klass;
		if (klass != g_data_07556710) {
			if (klass == g_data_07556740) {
				pfVar3 = il2cpp_vm_Object_Unbox(obj);
				return (int)*pfVar3;
			}
			if (klass == g_data_07556748) {
				pdVar4 = il2cpp_vm_Object_Unbox(obj);
				return (int)*pdVar4;
			}
			if (klass != g_data_07556730) {
				if (klass == typeof(Decimal)) {
					if ((klass._2).cctor_finished_or_no_cctor == 0) {
						klass = typeof(Decimal);
					}
					pSVar5 = (Decimal)il2cpp_runtime_helper_02abd3a0(obj, klass);
					iVar1 = ((double)(System_Decimal_o)*pSVar5);
					return iVar1;
				}
				if (klass == g_data_075566f0) {
					pbVar6 = (byte)il2cpp_runtime_helper_02abd3a0(obj);
					return (int32_t)*pbVar6;
				}
				goto label_0584ed6b;
			}
		}
		return *piVar2;
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x574EE40", Offset = "0x574DE40", VA = "0x574EE40")]
	public static float MaxComponent(this Vector3 v)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$MaxComponent): 7 lines keep C-only constructs
		IntPtr pvVar1;
		object pIVar2;
		uint uVar3;
		ulong uVar4;
		ulong uVar5;
		long lVar6;
		ulong uVar7;
		ulong uVar8;
		float fVar9;
		float fVar10;
		float local_18;
		float fStack_14;

		pIVar2 = new float[3];
		if (pIVar2 == null) {
			throw new NullReferenceException();
		}
		pvVar1 = pIVar2[1].monitor;
		uVar3 = (uint)pvVar1;
		local_18 = v.x;
		fStack_14 = v.y;
		if (((uVar3 == 0) || (*(float)&pIVar2[2].klass = local_18, uVar3 == 1)) ||(*(float)((long)&pIVar2[2].klass + 4) = fStack_14, uVar3 < 3)) {
			throw new IndexOutOfRangeException();
		}
		*(float)&pIVar2[2].monitor = v.z;
		if ((int)uVar3 < 2) {
			return local_18;
		}
		uVar5 = (ulong)pvVar1 & 0xffffffff;
		uVar8 = uVar5 - 1;
		uVar4 = (ulong)((uint)uVar8 & 3);
		if (uVar5 - 2 < 3) {
			lVar6 = 1;
		}
		else {
			uVar5 = 0;
			do {
				uVar7 = uVar5;
				fVar9 = *(float)((long)&pIVar2[2].klass + uVar7 * 4 + 4);
				if (fVar9 <= local_18) {
					fVar9 = local_18;
				}
				fVar10 = *(float)((long)&pIVar2[2].monitor + uVar7 * 4);
				if (fVar10 <= fVar9) {
					fVar10 = fVar9;
				}
				fVar9 = *(float)((long)&pIVar2[2].monitor + uVar7 * 4 + 4);
				if (fVar9 <= fVar10) {
					fVar9 = fVar10;
				}
				local_18 = *(float)((long)&pIVar2[3].klass + uVar7 * 4);
				if (local_18 <= fVar9) {
					local_18 = fVar9;
				}
				uVar5 = uVar7 + 4;
			} while ((uVar8 & 0xfffffffffffffffc) != uVar7 + 4);
			lVar6 = uVar7 + 5;
		}
		if (uVar4 != 0) {
			uVar8 = 0;
			fVar9 = local_18;
			do {
				local_18 = *(float)((long)&pIVar2[2].klass + uVar8 * 4 + lVar6 * 4);
				if (local_18 <= fVar9) {
					local_18 = fVar9;
				}
				uVar8 = uVar8 + 1;
				fVar9 = local_18;
			} while (uVar4 != uVar8);
		}
		return local_18;
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x574EF80", Offset = "0x574DF80", VA = "0x574EF80")]
	public static string UpperFirstLetter(this string text)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$UpperFirstLetter): clean
		bool bVar1;
		ushort c;
		String pSVar2;
		String str1;
		ushort local_1a;

		bVar1 = (text == (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (!bVar1) {
			if (text == null) {
				throw new NullReferenceException();
			}
			if (text._stringLength < 2) {
				pSVar2 = text.ToUpper();
				return pSVar2;
			}
			c = text.get_Chars(0);
			local_1a = Char.ToUpper(c);
			pSVar2 = Char.ToString(ref local_1a);
			str1 = text.Substring(1);
			text = String.Concat(pSVar2, str1);
		}
		return text;
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x574F050", Offset = "0x574E050", VA = "0x574F050")]
	public static string StripHex(this string text)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$StripHex): clean
		uint uVar1;
		Regex __this;
		String pSVar2;

		if (Il2CppMethodInitialized_0754503d == false) {
			Il2CppMethodInitialized_0754503d = true;
			uVar1 = (typeof(MiscExtensions)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MiscExtensions)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = MiscExtensions.HexRegex;
		}
		else {
			__this = *(Regex*)((long)(typeof(MiscExtensions)).static_fields + 0x38);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		pSVar2 = Regex.Replace(__this, text, "");
		return pSVar2;
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x574F0F0", Offset = "0x574E0F0", VA = "0x574F0F0")]
	public static List<string> Tokenize(string input)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$Tokenize): 16 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		int iVar3;
		uint uVar4;
		Regex __this;
		Il2CppClass pIVar5;
		Il2CppRuntimeInterfaceOffsetPair pIVar6;
		String[] pSVar7;
		bool bVar9;
		List<string> __this_00;
		MatchCollection __this_01;
		VirtualInvokeData pVVar10;
		Capture __this_02;
		String pSVar11;
		object pIVar12;
		ulong uVar13;
		long lVar14;
		int index;
		ushort local_62;
		object local_60;
		long local_58;
		object local_50;
		object* local_40;
		object* local_38;

		local_62 = 0;
		local_50 = null;
		__this_00 = new List<string>();
		__this = MiscExtensions.TagRegex;
		if ((__this != null) &&(__this_01 = __this.Matches(input), __this_01 != null)) {
			local_60 = (object)__this_01.GetEnumerator();
			local_40 = &local_60;
			local_38 = &local_50;
			if (local_60 != null) {
				local_58 = 0;
				index = 0;
				do {
					pIVar12 = local_60;
					pIVar5 = local_60.klass;
					uVar13 = (ulong)(pIVar5._2).interface_offsets_count;
					bVar9 = pIVar12.Dispose();
					pIVar12 = local_60;
					if (!bVar9) {
						pIVar12 = (local_60 as IDisposable);
						local_50 = pIVar12;
						if (pIVar12 == null) goto label_0584f566;
						pIVar5 = pIVar12.klass;
						uVar13 = (ulong)(pIVar5._2).interface_offsets_count;
						if (uVar13 == 0) goto label_0584f53f;
						pIVar6 = (pIVar5._1).interfaceOffsets;
						lVar14 = 0;
						goto label_0584f530;
					}
					if (local_60 == null) {
						throw new NullReferenceException();
					}
					pIVar5 = local_60.klass;
					uVar13 = (ulong)(pIVar5._2).interface_offsets_count;
					__this_02 = (Capture)pIVar12.Dispose() ;
					if (__this_02 == null) {
						throw new NullReferenceException();
					}
					bVar2 = (typeof(Match)._2).typeHierarchyDepth;
					if (((__this_02.klass._2).typeHierarchyDepth < bVar2) ||((__this_02.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(Match))) {
						throw new InvalidCastException();
					}
					iVar3 = __this_02._Index_k__BackingField;
					if (input == null) {
						if (index < iVar3) {
							throw new NullReferenceException();
						}
					}
					else if (__this_00 == null) {
						if (index < iVar3) {
							local_62 = input.get_Chars(index);
							Char.ToString(ref local_62);
	label_0584f6d9: ;
							throw new NullReferenceException();
						}
					}
					else if (index < iVar3) {
						do {
							local_62 = input.get_Chars(index);
							pSVar11 = Char.ToString(ref local_62);
							piVar1 = &__this_00._version;
							*piVar1 = *piVar1 + 1;
							pSVar7 = __this_00._items;
							if (pSVar7 == null) goto label_0584f6d9;
							uVar4 = __this_00._size;
							if (uVar4 < (uint)pSVar7.Length) {
								__this_00._size = uVar4 + 1;
								pSVar7[(int)uVar4] = pSVar11;
							}
							else {
								__this_00.AddWithResize((object)pSVar11);
							}
							index = index + 1;
						} while (index < __this_02._Index_k__BackingField);
					}
					pSVar11 = __this_02.Value;
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar7 = __this_00._items;
					if (pSVar7 == null) {
						throw new NullReferenceException();
					}
					uVar4 = __this_00._size;
					if (uVar4 < (uint)pSVar7.Length) {
						__this_00._size = uVar4 + 1;
						pSVar7[(int)uVar4] = pSVar11;
					}
					else {
						__this_00.AddWithResize((object)pSVar11);
					}
					index = __this_02._Length_k__BackingField + __this_02._Index_k__BackingField;
				} while (local_60 != null);
			}
			throw new NullReferenceException();
		}
		goto label_0584f69a;
		while (true) {
			lVar14 = lVar14 + 0x10;
			if (!(uVar13 * 0x10 != lVar14)) break;
	label_0584f530: ;
			if (*(IDisposable*)((long)&pIVar6.interfaceType + lVar14) == typeof(IDisposable)) {
				pVVar10 = pIVar5.vtable + *(int)((long)&pIVar6.offset + lVar14);
				goto label_0584f55d;
			}
		}
	label_0584f53f: ;
	label_0584f55d: ;
		pIVar12.Dispose();
	label_0584f566: ;
		if (local_58 != 0) {
			throw;
		}
		if (input != null) {
			iVar3 = input._stringLength;
			if (__this_00 == null) {
				if (index < iVar3) {
					local_62 = input.get_Chars(index);
					Char.ToString(ref local_62);
					throw new NullReferenceException();
				}
			}
			else if (index < iVar3) {
				do {
					while(true) {
						local_62 = input.get_Chars(index);
						pSVar11 = Char.ToString(ref local_62);
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar7 = __this_00._items;
						if (pSVar7 == null) goto label_0584f69a;
						uVar4 = __this_00._size;
						if ((uint)pSVar7.Length <= uVar4) break;
						__this_00._size = uVar4 + 1;
						pSVar7[(int)uVar4] = pSVar11;
						index = index + 1;
						if (input._stringLength <= index) {
							return __this_00;
						}
					}
					__this_00.AddWithResize((object)pSVar11);
					index = index + 1;
				} while (index < input._stringLength);
			}
			return __this_00;
		}
	label_0584f69a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x574F790", Offset = "0x574E790", VA = "0x574F790")]
	public static string StripRichText(this string text)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$StripRichText): clean
		uint uVar1;
		Regex __this;
		String pSVar2;

		if (Il2CppMethodInitialized_0754503f == false) {
			Il2CppMethodInitialized_0754503f = true;
			uVar1 = (typeof(MiscExtensions)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MiscExtensions)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = MiscExtensions.TagRegex;
		}
		else {
			__this = *(Regex*)((long)(typeof(MiscExtensions)).static_fields + 0x50);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		pSVar2 = Regex.Replace(__this, text, "");
		return pSVar2;
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x574F830", Offset = "0x574E830", VA = "0x574F830")]
	public static string StripIllegalRichText(this string text)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$StripIllegalRichText): clean
		uint uVar1;
		Regex __this;
		String pSVar2;

		if (Il2CppMethodInitialized_07545040 == false) {
			Il2CppMethodInitialized_07545040 = true;
			uVar1 = (typeof(MiscExtensions)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MiscExtensions)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = MiscExtensions.IllegalStyleRegex;
		}
		else {
			__this = *(Regex*)((long)(typeof(MiscExtensions)).static_fields + 0x58);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		pSVar2 = Regex.Replace(__this, text, "");
		return pSVar2;
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x574F8D0", Offset = "0x574E8D0", VA = "0x574F8D0")]
	public static string ForceWhiteColorTag(this string text)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$ForceWhiteColorTag): clean
		uint uVar1;
		Regex __this;
		String pSVar2;

		if (Il2CppMethodInitialized_07545041 == false) {
			Il2CppMethodInitialized_07545041 = true;
			uVar1 = (typeof(MiscExtensions)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MiscExtensions)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = MiscExtensions.ColorTagRegex;
		}
		else {
			__this = *(Regex*)((long)(typeof(MiscExtensions)).static_fields + 0x40);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		pSVar2 = Regex.Replace(__this, text, "<color=#FFFFFF>");
		return pSVar2;
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x574F970", Offset = "0x574E970", VA = "0x574F970")]
	public static string StripColor(this string text)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$StripColor): clean
		uint uVar1;
		Regex pSVar2;
		String pSVar3;

		if (Il2CppMethodInitialized_07545042 == false) {
			Il2CppMethodInitialized_07545042 = true;
			uVar1 = (typeof(MiscExtensions)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MiscExtensions)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = MiscExtensions.ColorTagRegex;
		}
		else {
			pSVar2 = *(Regex*)((long)(typeof(MiscExtensions)).static_fields + 0x40);
		}
		if (pSVar2 != null) {
			pSVar3 = Regex.Replace(pSVar2, text, "");
			pSVar2 = MiscExtensions.ColorEndRegex;
			if (pSVar2 != null) {
				pSVar3 = Regex.Replace(pSVar2, pSVar3, "");
				return pSVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x574FA40", Offset = "0x574EA40", VA = "0x574FA40")]
	public static string ForceColor(this string text, Color color)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$ForceColor): clean
		int iVar1;
		String pSVar2;
		String pSVar3;
		String[] values;

		pSVar2 = MiscExtensions.StripColor(text);
		pSVar3 = XColor.ToHexString(color);
		if (pSVar3 != null) {
			iVar1 = pSVar3._stringLength;
			if (iVar1 < 3) {
				return pSVar2;
			}
			pSVar3 = pSVar3.Substring(0, iVar1 + -2);
			values = (String[])new string[5];
			if (values != null) {
				if ((int)values.Length != 0) {
					values[0] = "<color=#";
					if ((values.Length & 0xfffffffe) != 0) {
						values[1] = pSVar3;
						if (2 < (uint)values.Length) {
							values[2] = ">";
							if ((values.Length & 0xfffffffc) != 0) {
								values[3] = pSVar2;
								if (4 < (uint)values.Length) {
									values[4] = "</color>";
									pSVar2 = String.Concat(values);
									return pSVar2;
								}
							}
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x574FBE0", Offset = "0x574EBE0", VA = "0x574FBE0")]
	public static string ForceColor(this string text, string colorHex)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$ForceColor): clean
		String pSVar1;
		String[] values;

		pSVar1 = MiscExtensions.StripColor(text);
		values = (String[])new string[5];
		if (values == null) {
			throw new NullReferenceException();
		}
		if ((int)values.Length != 0) {
			values[0] = "<color=#";
			if ((values.Length & 0xfffffffe) != 0) {
				values[1] = colorHex;
				if (2 < (uint)values.Length) {
					values[2] = ">";
					if ((values.Length & 0xfffffffc) != 0) {
						values[3] = pSVar1;
						if (4 < (uint)values.Length) {
							values[4] = "</color>";
							pSVar1 = String.Concat(values);
							return pSVar1;
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x574FD30", Offset = "0x574ED30", VA = "0x574FD30")]
	public static string TruncateRichText(this string text, int length)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$TruncateRichText): 3 lines keep C-only constructs
		uint uVar1;
		int iVar2;
		Regex __this;
		bool bVar3;
		int iVar4;
		int iVar5;
		String pSVar6;
		List<string> __this_00;
		Stack<string> __this_01;
		String pSVar7;
		String a;
		Char[] pSVar8;
		String pSVar9;
		byte[] local_68 = new byte[8];
		String local_58;
		byte[] local_48 = new byte[16];
		String local_38;

		local_68 = (byte[])0x0;
		local_58 = null;
		if (Il2CppMethodInitialized_07545040 == false) {
			Il2CppMethodInitialized_07545040 = true;
			uVar1 = (typeof(MiscExtensions)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(MiscExtensions))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = MiscExtensions.IllegalStyleRegex;
		}
		else {
			__this = *(Regex*)((long)(typeof(MiscExtensions)).static_fields + 0x58);
		}
		if (__this != null) {
			pSVar6 = Regex.Replace(__this, text, "");
			__this_00 = MiscExtensions.Tokenize(pSVar6);
			__this_01 = new Stack<string>();
			if (__this_00 != null) {
				pSVar6 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				local_48.GetEnumerator((List<object>)__this_00);
				local_58 = local_38;
				local_68 = (byte[])local_48._0_8_;
				local_48._0_8_ = null;
				local_48._8_8_ = local_68;
				if (__this_01 == null) {
					iVar5 = 0;
					while (true) {
						bVar3 = local_68.MoveNext();
						pSVar9 = local_58;
						if (!(bVar3)) break;
						if (local_58 == null) {
	label_058501e2: ;
							throw new NullReferenceException();
						}
						if (local_58._stringLength == 1) {
							iVar5 = iVar5 + 1;
							if (length < iVar5) break;
							pSVar6 = String.Concat(pSVar6, local_58);
						}
						else {
							bVar3 = local_58.StartsWith("</");
							if (bVar3) {
								pSVar9.Substring(2, pSVar9._stringLength + -3) ;
								throw new NullReferenceException();
							}
							bVar3 = pSVar9.StartsWith("<");
							if (bVar3) {
								pSVar8 = (Char[])new char[2];
								if (pSVar8 != null) {
									iVar5 = (int)pSVar8.Length;
									if (iVar5 != 0) {
										pSVar8[0] = 0x3d;
										if (iVar5 != 1) {
											pSVar8[1] = 0x3e;
											iVar4 = pSVar9.IndexOfAny(pSVar8);
											pSVar9.Substring(1, iVar4 + -1);
											throw new NullReferenceException();
										}
	label_05850236: ;
										throw new IndexOutOfRangeException();
									}
	label_05850226: ;
									throw new IndexOutOfRangeException();
								}
	label_05850200: ;
								throw new NullReferenceException();
							}
						}
					}
				}
				else {
					iVar5 = 0;
					while (true) {
						bVar3 = local_68.MoveNext();
						pSVar9 = local_58;
						if (!(bVar3)) break;
						if (local_58 == null) goto label_058501e2;
						if (local_58._stringLength == 1) {
							iVar5 = iVar5 + 1;
							if (length < iVar5) break;
							pSVar6 = String.Concat(pSVar6, local_58);
						}
						else {
							bVar3 = local_58.StartsWith("</");
							if (bVar3) {
								pSVar7 = pSVar9.Substring(2, pSVar9._stringLength + -3);
								if (0 < __this_01._size) {
									a = __this_01.Peek();
									bVar3 = (a == pSVar7);
									if (bVar3) {
										__this_01.Pop();
										pSVar6 = String.Concat(pSVar6, pSVar9);
									}
								}
							}
							else {
								bVar3 = pSVar9.StartsWith("<");
								if (bVar3) {
									pSVar8 = (Char[])new char[2];
									if (pSVar8 == null) goto label_05850200;
									iVar2 = (int)pSVar8.Length;
									if (iVar2 == 0) goto label_05850226;
									pSVar8[0] = 0x3d;
									if (iVar2 == 1) goto label_05850236;
									pSVar8[1] = 0x3e;
									iVar4 = pSVar9.IndexOfAny(pSVar8);
									pSVar7 = pSVar9.Substring(1, iVar4 + -1);
									__this_01.Push((object)pSVar7);
									pSVar6 = String.Concat(pSVar6, pSVar9);
								}
							}
						}
					}
				}
				local_68.Dispose();
				if (__this_01 != null) {
					iVar5 = __this_01._size;
					while(true) {
						if (iVar5 < 1) {
							return pSVar6;
						}
						if (__this_01 == null) break;
						pSVar9 = __this_01.Pop();
						pSVar6 = String.Concat(pSVar6, "</", pSVar9, ">");
						iVar5 = __this_01._size;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x5750350", Offset = "0x574F350", VA = "0x5750350")]
	public static string HexColor(this string text)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$HexColor): clean
		uint uVar1;
		Regex __this;
		bool bVar2;
		bool bVar3;
		int iVar4;
		String pSVar5;
		String pSVar6;

		if (Il2CppMethodInitialized_07545046 == false) {
			Il2CppMethodInitialized_07545046 = true;
			uVar1 = (typeof(MiscExtensions)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MiscExtensions)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754503f == false) {
			Il2CppMethodInitialized_0754503f = true;
			uVar1 = (typeof(MiscExtensions)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(MiscExtensions))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = MiscExtensions.TagRegex;
		}
		else {
			__this = *(Regex*)((long)(typeof(MiscExtensions)).static_fields + 0x50);
		}
		if (((__this != null) &&(pSVar5 = Regex.Replace(__this, text, ""), pSVar5 != null)) &&((bVar2 = pSVar5.Contains("]"), !bVar2 ||(pSVar5 = pSVar5.Replace("]", ">"), pSVar5 != null)))) {
			do {
				bVar2 = true;
				do {
					bVar3 = pSVar5.Contains("[");
					if ((!bVar2) || (!bVar3)) {
						if (!bVar2) {
							pSVar5 = (String)**(ulong*)(g_data_07556758 + 0xb8);
						}
						return pSVar5;
					}
					bVar2 = false;
					iVar4 = pSVar5.IndexOf("[");
				} while (pSVar5._stringLength < iVar4 + 7);
				pSVar6 = pSVar5.Substring(iVar4 + 1, 6);
				pSVar5 = pSVar5.Remove(iVar4, 7);
				pSVar6 = String.Concat("<color=#", pSVar6);
				if ((pSVar5 == null) ||(pSVar5 = pSVar5.Insert(iVar4, pSVar6), pSVar5 == null)) break;
				iVar4 = pSVar5._stringLength;
				bVar2 = pSVar5.Contains("[");
				if (bVar2) {
					iVar4 = pSVar5.IndexOf("[");
				}
				pSVar5 = pSVar5.Insert(iVar4, "</color>");
			} while (pSVar5 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000106")]
	public static T ToEnum<T>(this string value, bool ignoreCase = true)
	{
		return (T)null;
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x5750600", Offset = "0x574F600", VA = "0x5750600")]
	public static float ParseFloat(string str)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$ParseFloat): clean
		float fVar1;

		return fVar1;
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x5750610", Offset = "0x574F610", VA = "0x5750610")]
	public static bool IsGray(this Color color)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$IsGray): clean
		bool bVar1;
		float fVar2;

		fVar2 = color.r;
		if (fVar2 == color.g) {
			if ((fVar2 == color.b) && (!NAN(fVar2) && !NAN(color.b))) {
				bVar1 = (bool)(-(color.a == 1.0) & 1);
			}
		}
		return bVar1;
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x5750640", Offset = "0x574F640", VA = "0x5750640")]
	public static bool IsGray(this Color255 color)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$IsGray): clean
		int iVar1;

		if (color == null) {
			throw new NullReferenceException();
		}
		iVar1 = color.R;
		if ((iVar1 == color.G) && (iVar1 == color.B)) {
			return color.A == 0xff;
		}
		return false;
	}

	[Token(Token = "0x600010A")]
	public static T GetRandomItem<T>(this List<T> list)
	{
		return (T)null;
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x5750670", Offset = "0x574F670", VA = "0x5750670")]
	public static JSONNode GetRandomItem(this JSONNode list)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$GetRandomItem): clean
		int iVar1;
		JSONNode pSVar2;

		if (list == null) {
			throw new NullReferenceException();
		}
		iVar1 = list.get_Count();
		iVar1 = Random.Range(0, iVar1);
		pSVar2 = list.get_Item(iVar1) ;
		return pSVar2;
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x57506C0", Offset = "0x574F6C0", VA = "0x57506C0")]
	public static Color ToColor(this JSONNode array)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$ToColor): clean
		int r;
		int g;
		int b;
		int a;
		JSONNode pSVar1;
		Color255 __this;
		Color UVar2;

		if (array != null) {
			pSVar1 = array.get_Item(0);
			if (pSVar1 != null) {
				r = pSVar1.get_AsInt();
				pSVar1 = array.get_Item(1);
				if (pSVar1 != null) {
					g = pSVar1.get_AsInt();
					pSVar1 = array.get_Item(2);
					if (pSVar1 != null) {
						b = pSVar1.get_AsInt();
						pSVar1 = array.get_Item(3);
						if (pSVar1 != null) {
							a = pSVar1.get_AsInt();
							__this = new Color255(r, g, b, a);
							if (__this != null) {
								UVar2 = (Color)__this.ToColor();
								return (Color)UVar2;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x5750810", Offset = "0x574F810", VA = "0x5750810")]
	public static PlayerInfo GetPlayerInfo(this Player player)
	{
		// Lifted from source/cpp/MiscExtensions.c (MiscExtensions$$GetPlayerInfo): clean
		uint uVar1;
		Dictionary<int, object> pSVar2;
		bool bVar3;
		PlayerInfo pGVar4;

		if (Il2CppMethodInitialized_07545048 == false) {
			Il2CppMethodInitialized_07545048 = true;
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if ((player != null) &&(pSVar2 = *(Dictionary<int, object>*)((long)(typeof(InGameManager)).static_fields + 0x28), pSVar2 != null)) {
			bVar3 = pSVar2.ContainsKey(player.actorNumber);
			if (!bVar3) {
				return null;
			}
			pSVar2 = (Dictionary<int, object>)InGameManager.AllPlayerInfo;
			if (pSVar2 != null) {
				return pGVar4;
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/MiscExtensions.c.

	// MiscExtensions$$GetRandomItem<int>: 1 lines keep C-only constructs
	private static int GetRandomItem_int(List<T> list)
	{
		int iVar1;

		if (method.rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
		}
		if (list == null) {
			throw new NullReferenceException();
		}
		iVar1 = Random.Range(0, list._size);
		iVar1 = list.get_Item(iVar1) ;
		return iVar1;
	}

	// MiscExtensions$$GetRandomItem<object>: 1 lines keep C-only constructs
	private static object GetRandomItem_object(List<T> list)
	{
		int index;
		object pIVar1;

		if (method.rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
		}
		if (list == null) {
			throw new NullReferenceException();
		}
		index = Random.Range(0, list._size);
		return pIVar1;
	}

	// MiscExtensions$$GetRandomItem<__Il2CppFullySharedGenericType>: 19 lines keep C-only constructs
	private static __Il2CppFullySharedGenericType GetRandomItem___Il2CppFullySharedGenericType(List<T> list)
	{
		Il2CppMethodPointer pIVar1;
		ulong puVar2;
		ulong uVar3;
		code *pcVar4;
		long lVar5;
		int maxExclusive;
		Il2CppRGCTXData pIVar6;
		MethodInfo in_RDX;
		IntPtr extraout_RDX;
		IntPtr __src;
		ulong __n;
		__Il2CppFullySharedGenericType UVar7;
		ulong uStack_50;
		int local_48;
		int local_34;

		pIVar6 = (in_RDX.field7_0x38).rgctx_data;
		if (pIVar6 == null) {
			uStack_50 = 0x368da8b;
			il2cpp_codegen_rgctx_method_init(in_RDX);
			pIVar6 = (in_RDX.field7_0x38).rgctx_data;
		}
		__n = (ulong)((pIVar6[3].klass)._2).stack_slot_size;
		lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
		__src = (IntPtr)((long)&local_48 + lVar5);
		if (list == null) {
			*(ulong)((long)&uStack_50 + lVar5) = 0x368db0d;
			throw new NullReferenceException();
		}
		pIVar1 = (pIVar6[1].method).methodPointer;
		*(ulong)((long)&uStack_50 + lVar5) = 0x368dab9;
		maxExclusive = (*pIVar1)();
		*(ulong)((long)&uStack_50 + lVar5) = 0x368dac4;
		local_34 = Random.Range(0, maxExclusive);
		puVar2 = *(ulong*)((long)(in_RDX.field7_0x38).methodMetadataHandle + 0x10);
		uVar3 = *puVar2;
		local_48 = &local_34;
		pcVar4 = (code)puVar2[2];
		*(ulong)((long)&uStack_50 + lVar5) = 0x368daeb;
		(*pcVar4)(uVar3,puVar2,list,&local_48,__src);
		*(ulong)((long)&uStack_50 + lVar5) = 0x368daf9;
		UVar7.klass = memcpy(method, __src, __n);
		UVar7.monitor = extraout_RDX;
		return UVar7;
	}

	// MiscExtensions$$ToEnum<Int32Enum>: 9 lines keep C-only constructs
	private static int ToEnum_Int32Enum(String value, bool ignoreCase)
	{
		RuntimeTypeHandle SVar1;
		bool bVar2;
		MethodInfo_358DB10_RGCTXs pMVar3;
		Type pSVar4;
		object obj;
		Il2CppClass klass;
		int piVar5;
		int iVar6;

		pMVar3 = method.rgctx_data;
		if (pMVar3 == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			pMVar3 = method.rgctx_data;
		}
		SVar1.value = (RuntimeTypeHandle)pMVar3._0_T;
		pSVar4 = Type.GetTypeFromHandle(SVar1);
		bVar2 = Enum.IsDefined(pSVar4, (object)value);
		if (bVar2) {
			SVar1.value = (RuntimeTypeHandle)method.rgctx_data._0_T;
			pSVar4 = Type.GetTypeFromHandle(SVar1);
			obj = Enum.Parse(pSVar4, value, ignoreCase);
			klass = method.rgctx_data._1_T;
			if (((klass._2).bitflags1 & 1) == 0) {
				klass = il2cpp_codegen_class_init_checked(klass);
			}
			if (obj == null) {
				throw new NullReferenceException();
			}
			if ((obj.klass._1).element_class != (klass._1).element_class) {
				throw new InvalidCastException();
			}
			piVar5 = il2cpp_vm_Object_Unbox(obj);
			iVar6 = *piVar5;
		}
		return iVar6;
	}

	// MiscExtensions$$ToEnum<__Il2CppFullySharedGenericType>: 20 lines keep C-only constructs
	private static __Il2CppFullySharedGenericType ToEnum___Il2CppFullySharedGenericType(String value, bool ignoreCase)
	{
		RuntimeTypeHandle SVar1;
		long lVar2;
		MethodInfo_358DC40 __dest;
		String pSVar3;
		ulong uVar4;
		bool bVar5;
		Il2CppRGCTXData pIVar6;
		Type pSVar7;
		object pIVar8;
		Il2CppClass klass;
		IntPtr __src;
		MethodInfo in_RCX;
		IntPtr extraout_RDX;
		byte puVar9;
		undefined7 in_register_00000031;
		byte __s;
		__Il2CppFullySharedGenericType UVar10;
		__Il2CppFullySharedGenericType UVar11;
		byte[] auStack_58 = new byte[8];
		MethodInfo_358DC40 local_50;
		String local_48;
		uint local_3c;
		ulong local_38;

		local_3c = (undefined4)CONCAT71(in_register_00000031, ignoreCase);
		pIVar6 = (in_RCX.field7_0x38).rgctx_data;
		local_48 = value;
		if (pIVar6 == null) {
			il2cpp_codegen_rgctx_method_init(in_RCX);
			pIVar6 = (in_RCX.field7_0x38).rgctx_data;
		}
		local_38 = (ulong)*(uint)((long)pIVar6[1].klass + 0xfc);
		lVar2 = -(local_38 + 0xf & 0xfffffffffffffff0);
		__s = auStack_58 + lVar2;
		SVar1.value = (RuntimeTypeHandle)pIVar6.rgctxDataDummy;
		puVar9 = __s;
		if ((g_data_075567a8._2).cctor_finished_or_no_cctor == 0) {
			*(ulong)(auStack_58 + lVar2 + -8) = 0x368dcb2;
			puVar9 = auStack_58 + lVar2;
		}
		*(ulong)(puVar9 + -8) = 0x368dcbc;
		pSVar7 = Type.GetTypeFromHandle(SVar1);
		if ((g_data_07556760._2).cctor_finished_or_no_cctor == 0) {
			*(ulong)(puVar9 + -8) = 0x368dcd4;
		}
		pSVar3 = local_48;
		*(ulong)(puVar9 + -8) = 0x368dce2;
		bVar5 = Enum.IsDefined(pSVar7, (object)pSVar3);
		uVar4 = local_38;
		if (bVar5) {
			SVar1.value = (RuntimeTypeHandle)((in_RCX.field7_0x38).rgctx_data).rgctxDataDummy;
			local_50 = method;
			if ((g_data_075567a8._2).cctor_finished_or_no_cctor == 0) {
				*(ulong)(puVar9 + -8) = 0x368dd0b;
			}
			*(ulong)(puVar9 + -8) = 0x368dd15;
			pSVar7 = Type.GetTypeFromHandle(SVar1);
			if ((g_data_07556760._2).cctor_finished_or_no_cctor == 0) {
				*(ulong)(puVar9 + -8) = 0x368dd2d;
			}
			pSVar3 = local_48;
			bVar5 = local_3c._0_1_;
			*(ulong)(puVar9 + -8) = 0x368dd3f;
			pIVar8 = Enum.Parse(pSVar7, pSVar3, bVar5);
			klass = (in_RCX.field7_0x38).rgctx_data[1].klass;
			if (((klass._2).bitflags1 & 1) == 0) {
				*(ulong)(puVar9 + -8) = 0x368dd5c;
				klass = il2cpp_codegen_class_init_checked(klass);
			}
			uVar4 = local_38;
			*(ulong)(puVar9 + -8) = 0x368dd6e;
			__src = (IntPtr)il2cpp_runtime_helper_030d6290(pIVar8, klass, __s);
			__dest = local_50;
			*(ulong)(puVar9 + -8) = 0x368dd7d;
			UVar10.klass = memcpy(__dest, __src, uVar4);
			UVar10.monitor = extraout_RDX;
			return UVar10;
		}
		*(ulong)(puVar9 + -8) = 0x368dd9d;
		memset(__s, 0, uVar4);
		UVar11.klass = memset(method, 0, uVar4);
		UVar11.monitor = UVar11.monitor;
		return UVar11;
	}

	// MiscExtensions$$.cctor: 1 lines keep C-only constructs
	static MiscExtensions()
	{
		uint uVar1;
		MiscExtensions_StaticFields pMVar2;
		OrdinalIgnoreCaseComparer comparer;
		Regex pSVar3;
		String[] values;
		String pSVar4;
		Dictionary<string, string> __this;

		MiscExtensions.HexPattern = "(\\[)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(\\])";
		pMVar2 = typeof(MiscExtensions).static_fields;
		pMVar2.ColorTagPattern = "(<color=#)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(>)";
		pMVar2 = typeof(MiscExtensions).static_fields;
		pMVar2.ColorEndPattern = "(</color>)";
		pMVar2 = typeof(MiscExtensions).static_fields;
		pMVar2.TagPattern = "<\\/?[^>]+>";
		pMVar2 = typeof(MiscExtensions).static_fields;
		pMVar2.SizePattern = "<\\/?size.*?>";
		pMVar2 = typeof(MiscExtensions).static_fields;
		pMVar2.MaterialPattern = "<\\/?material.*?>";
		pMVar2 = typeof(MiscExtensions).static_fields;
		pMVar2.QuadPattern = "<\\/?quad.*?>";
		pSVar4 = MiscExtensions.HexPattern;
		pSVar3 = new Regex(pSVar4);
		pMVar2 = typeof(MiscExtensions).static_fields;
		pMVar2.HexRegex = pSVar3;
		pSVar4 = MiscExtensions.ColorTagPattern;
		pSVar3 = new Regex(pSVar4);
		pMVar2 = typeof(MiscExtensions).static_fields;
		pMVar2.ColorTagRegex = pSVar3;
		pSVar4 = MiscExtensions.ColorEndPattern;
		pSVar3 = new Regex(pSVar4);
		pMVar2 = typeof(MiscExtensions).static_fields;
		pMVar2.ColorEndRegex = pSVar3;
		pSVar4 = MiscExtensions.TagPattern;
		pSVar3 = new Regex(pSVar4);
		pMVar2 = typeof(MiscExtensions).static_fields;
		pMVar2.TagRegex = pSVar3;
		values = (String[])new string[5];
		if (values == null) goto label_058510f0;
		if ((int)values.Length == 0) {
	label_058510eb: ;
			throw new IndexOutOfRangeException();
		}
		values[0] = MiscExtensions.SizePattern;
		if ((values.Length & 0xfffffffe) == 0) goto label_058510eb;
		values[1] = "|";
		if ((uint)values.Length < 3) goto label_058510eb;
		values[2] = MiscExtensions.MaterialPattern;
		if ((values.Length & 0xfffffffc) == 0) goto label_058510eb;
		values[3] = "|";
		if ((uint)values.Length < 5) goto label_058510eb;
		values[4] = MiscExtensions.QuadPattern;
		pSVar4 = String.Concat(values);
		pSVar3 = new Regex(pSVar4);
		pMVar2 = typeof(MiscExtensions).static_fields;
		pMVar2.IllegalStyleRegex = pSVar3;
		pSVar3 = new Regex("<color=(\\w+)>", 9);
		pMVar2 = typeof(MiscExtensions).static_fields;
		pMVar2.NamedColorTagRegex = pSVar3;
		if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_07542886 != false) goto label_05850e8a;
	label_058510bb: ;
			g_data_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_07542886 == false) goto label_058510bb;
	label_05850e8a: ;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		comparer = StringComparer.s_ordinalIgnoreCase;
		__this = new Dictionary<string, string>((System_Collections_Generic_IEqualityComparer_TKey__o)comparer);
		if (__this != null) {
			__this.Add((Il2CppObject *)"aqua", (Il2CppObject *)"#00ffffff");
			__this.Add((Il2CppObject *)"cyan", (Il2CppObject *)"#00ffffff");
			__this.Add((Il2CppObject *)"brown", (Il2CppObject *)"#a52a2aff");
			__this.Add((Il2CppObject *)"darkblue", (Il2CppObject *)"#0000a0ff");
			__this.Add((Il2CppObject *)"fuchsia", (Il2CppObject *)"#ff00ffff");
			__this.Add((Il2CppObject *)"magenta", (Il2CppObject *)"#ff00ffff");
			__this.Add((Il2CppObject *)"grey", (Il2CppObject *)"#808080ff");
			__this.Add((Il2CppObject *)"lightblue", (Il2CppObject *)"#add8e6ff");
			__this.Add((Il2CppObject *)"lime", (Il2CppObject *)"#00ff00ff");
			__this.Add((Il2CppObject *)"maroon", (Il2CppObject *)"#800000ff");
			__this.Add((Il2CppObject *)"navy", (Il2CppObject *)"#000080ff");
			__this.Add((Il2CppObject *)"olive", (Il2CppObject *)"#808000ff");
			__this.Add((Il2CppObject *)"silver", (Il2CppObject *)"#c0c0c0ff");
			__this.Add((Il2CppObject *)"teal", (Il2CppObject *)"#008080ff");
			pMVar2 = typeof(MiscExtensions).static_fields;
			pMVar2.NamedColorHex = __this;
			return;
		}
	label_058510f0: ;
		throw new NullReferenceException();
	}

	// MiscExtensions.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new c();
		c.__9 = (c)__this;
		return;
	}

	// MiscExtensions.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// MiscExtensions.<>c$$<ReplaceNamedColorTags>b__15_0: clean
	private String c__ReplaceNamedColorTags_b__15_0(Match match)
	{
		bool bVar1;
		GroupCollection __this_00;
		Group __this_01;
		String pSVar2;

		if (match != null) {
			__this_00 = match.get_Groups();
			if (__this_00 != null) {
				__this_01 = __this_00.get_Item(1);
				if (__this_01 != null) {
					pSVar2 = __this_01.Value;
					pSVar2 = MiscExtensions.ResolveNamedColorHex(pSVar2);
					bVar1 = String.IsNullOrEmpty(pSVar2);
					if (bVar1) {
						pSVar2 = match.Value;
						return pSVar2;
					}
					pSVar2 = String.Concat("<color=#", pSVar2, ">");
					return pSVar2;
				}
			}
		}
		throw new NullReferenceException();
	}
}
