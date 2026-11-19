// ==================== AoTTG2 cross-reference ====================
// Type: Weather.WeatherSchedule
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Weather/WeatherSchedule.c
// Prior real C# source (older reference): Assets/Scripts/Weather/WeatherSchedule.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Weather;

[Token(Token = "0x200003F")]
internal class WeatherSchedule
{
	[Token(Token = "0x400018A")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, WeatherAction> NameToWeatherAction;

	[Token(Token = "0x400018B")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<string, WeatherEffect> NameToWeatherEffect;

	[Token(Token = "0x400018C")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<string, WeatherValueSelectType> NameToWeatherValueSelectType;

	[Token(Token = "0x400018D")]
	[FieldOffset(Offset = "0x10")]
	public List<WeatherEvent> Events;

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x575F4E0", Offset = "0x575E4E0", VA = "0x575F4E0")]
	public WeatherSchedule()
	{
		// Lifted from source/cpp/Weather/WeatherSchedule.c (Weather.WeatherSchedule$$.ctor): clean
		List<WeatherEvent> __this_00;

		__this_00 = new List<WeatherEvent>();
		this.Events = __this_00;
		base();
		return;
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x575F560", Offset = "0x575E560", VA = "0x575F560")]
	public WeatherSchedule(string csv)
	{
		// Lifted from source/cpp/Weather/WeatherSchedule.c (Weather.WeatherSchedule$$.ctor): clean
		List<WeatherEvent> __this_00;

		__this_00 = new List<WeatherEvent>();
		this.Events = __this_00;
		base();
		this.DeserializeFromCSV(csv);
		return;
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x575F8F0", Offset = "0x575E8F0", VA = "0x575F8F0")]
	public string SerializeToCSV()
	{
		// Lifted from source/cpp/Weather/WeatherSchedule.c (Weather.WeatherSchedule$$SerializeToCSV): 32 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<WeatherEvent> __this_00;
		List<float> __this_01;
		MethodInfo pMVar3;
		WeatherEvent __this_02;
		bool bVar4;
		int iVar5;
		List<string> pSVar6;
		MethodInfo pMVar7;
		object pIVar8;
		String pSVar9;
		String str2;
		String[] pSVar10;
		Il2CppRGCTXData method_00;
		int iVar11;
		List<object> pSVar12;
		float fVar13;
		byte[] auStack_a0 = new byte[8];
		int iStack_90;
		uint uStack_8c;
		List<string> pSStack_88;
		WeatherSchedule pWStack_80;
		byte[] auStack_78 = new byte[8];
		WeatherEvent pWStack_68;
		byte[] auStack_58 = new byte[8];
		object pIStack_48;

		pWStack_80 = this;
		if (Il2CppMethodInitialized_075450ab == false) {
			il2cpp_codegen_initialize_runtime_metadata(&";\n");
			Il2CppMethodInitialized_075450ab = true;
		}
		auStack_78 = (byte[])0x0;
		pWStack_68 = null;
		auStack_58 = (byte[])0x0;
		pIStack_48 = null;
		pSVar6 = new List<string>();
		__this_00 = pWStack_80.Events;
		if (__this_00 != null) {
			auStack_a0.GetEnumerator((List<object>)__this_00);
			pWStack_68 = (WeatherEvent)CONCAT44(uStack_8c, iStack_90);
			auStack_78 = auStack_a0;
			pSStack_88 = pSVar6;
			while (true) {
				bVar4 = auStack_78.MoveNext();
				__this_02 = pWStack_68;
				if (!(bVar4)) break;
				pSVar6 = new List<string>();
				if (__this_02 == null) {
					throw new NullReferenceException();
				}
				auStack_a0 = (byte[])typeof(WeatherAction);
				iStack_90 = __this_02.Action;
				pMVar7 = (MethodInfo)auStack_a0.ToString();
				pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
				if (pSVar6 == null) {
	label_058600af: ;
					throw new NullReferenceException();
				}
				piVar1 = &pSVar6._version;
				*piVar1 = *piVar1 + 1;
				method_00 = (Il2CppRGCTXData)pSVar6._items;
				if (method_00 == null) goto label_058600af;
				uVar2 = pSVar6._size;
				if (uVar2 < *(uint)&method_00[3].rgctxDataDummy) {
					pSVar6._size = uVar2 + 1;
					method_00[(long)(int)uVar2 + 4].method = pMVar7;
				}
				else {
					method_00 = pMVar3.klass.rgctx_data;
					pSVar6.AddWithResize((object)pMVar7);
				}
				if (__this_02.Effect != 0) {
					auStack_a0 = (byte[])typeof(WeatherEffect);
					iStack_90 = __this_02.Effect;
					pMVar7 = (MethodInfo)auStack_a0.ToString();
					pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
					piVar1 = &pSVar6._version;
					*piVar1 = *piVar1 + 1;
					method_00 = (Il2CppRGCTXData)pSVar6._items;
					if (method_00 == null) {
						throw new NullReferenceException();
					}
					uVar2 = pSVar6._size;
					if (uVar2 < *(uint)&method_00[3].rgctxDataDummy) {
						pSVar6._size = uVar2 + 1;
						method_00[(long)(int)uVar2 + 4].method = pMVar7;
					}
					else {
						method_00 = pMVar3.klass.rgctx_data;
						pSVar6.AddWithResize((object)pMVar7);
					}
				}
				iVar11 = __this_02.ValueSelectType;
				if (iVar11 != 0) {
					if (__this_02.Action != 0xf) {
						auStack_a0 = (byte[])typeof(WeatherValueSelectType);
						iStack_90 = iVar11;
						pMVar7 = (MethodInfo)auStack_a0.ToString();
						pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
						piVar1 = &pSVar6._version;
						*piVar1 = *piVar1 + 1;
						method_00 = (Il2CppRGCTXData)pSVar6._items;
						if (method_00 == null) {
							throw new NullReferenceException();
						}
						uVar2 = pSVar6._size;
						if (uVar2 < *(uint)&method_00[3].rgctxDataDummy) {
							pSVar6._size = uVar2 + 1;
							method_00[(long)(int)uVar2 + 4].method = pMVar7;
						}
						else {
							method_00 = pMVar3.klass.rgctx_data;
							pSVar6.AddWithResize((object)pMVar7);
						}
						iVar11 = __this_02.ValueSelectType;
					}
					pSVar12 = __this_02.Values;
					if (iVar11 == 3) {
						if (pSVar12 == null) {
	label_0586009b: ;
							throw new NullReferenceException();
						}
						iVar11 = 0;
						while (iVar11 < pSVar12._size) {
							iVar5 = __this_02.GetValueType();
							pSVar12 = __this_02.Values;
							if (pSVar12 == null) {
								throw new NullReferenceException();
							}
							pIVar8 = pSVar12.get_Item(iVar11);
							__this_01 = __this_02.Weights;
							if (__this_01 == null) {
								throw new NullReferenceException();
							}
							fVar13 = __this_01.get_Item(iVar11);
							auStack_a0._0_4_ = fVar13;
							pSVar9 = pWStack_80.SerializeValue(iVar5, pIVar8);
							str2 = auStack_a0.ToString();
							pMVar7 = (MethodInfo)String.Concat(pSVar9, "-", str2);
							pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
							piVar1 = &pSVar6._version;
							*piVar1 = *piVar1 + 1;
							method_00 = (Il2CppRGCTXData)pSVar6._items;
							if (method_00 == null) {
								throw new NullReferenceException();
							}
							uVar2 = pSVar6._size;
							if (uVar2 < *(uint)&method_00[3].rgctxDataDummy) {
								pSVar6._size = uVar2 + 1;
								method_00[(long)(int)uVar2 + 4].method = pMVar7;
							}
							else {
								method_00 = pMVar3.klass.rgctx_data;
								pSVar6.AddWithResize((object)pMVar7);
							}
							iVar11 = iVar11 + 1;
							pSVar12 = __this_02.Values;
							if (pSVar12 == null) goto label_0586009b;
						}
					}
					else {
						if (pSVar12 == null) {
							throw new NullReferenceException();
						}
						auStack_a0.GetEnumerator(pSVar12);
						pIStack_48 = (object)CONCAT44(uStack_8c, iStack_90);
						auStack_58 = auStack_a0;
						auStack_a0 = (byte[])0x0;
						while (true) {
							bVar4 = auStack_58.MoveNext();
							pIVar8 = pIStack_48;
							if (!(bVar4)) break;
							iVar5 = __this_02.GetValueType();
							pMVar7 = (MethodInfo)pWStack_80.SerializeValue(iVar5, pIVar8);
							pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
							piVar1 = &pSVar6._version;
							*piVar1 = *piVar1 + 1;
							method_00 = (Il2CppRGCTXData)pSVar6._items;
							if (method_00 == null) {
								throw new NullReferenceException();
							}
							uVar2 = pSVar6._size;
							if (uVar2 < *(uint)&method_00[3].rgctxDataDummy) {
								pSVar6._size = uVar2 + 1;
								method_00[(long)(int)uVar2 + 4].method = pMVar7;
							}
							else {
								method_00 = pMVar3.klass.rgctx_data;
								pSVar6.AddWithResize((object)pMVar7);
							}
						}
						auStack_58.Dispose();
					}
				}
				pSVar10 = (String[])pSVar6.ToArray();
				pSVar6 = pSStack_88;
				pSVar9 = String.Join(",", pSVar10);
				pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
				if (pSVar6 == null) {
	label_058600b4: ;
					throw new NullReferenceException();
				}
				piVar1 = &pSVar6._version;
				*piVar1 = *piVar1 + 1;
				pSVar10 = pSVar6._items;
				if (pSVar10 == null) goto label_058600b4;
				uVar2 = pSVar6._size;
				if (uVar2 < (uint)pSVar10.Length) {
					pSVar6._size = uVar2 + 1;
					pSVar10[(int)uVar2] = pSVar9;
				}
				else {
					pSVar6.AddWithResize((object)pSVar9);
				}
			}
			auStack_78.Dispose();
			if (pSVar6 != null) {
				pSVar10 = (String[])pSVar6.ToArray();
				pSVar9 = String.Join(";\n", pSVar10);
				return pSVar9;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x575F5F0", Offset = "0x575E5F0", VA = "0x575F5F0")]
	public string DeserializeFromCSV(string csv)
	{
		// Lifted from source/cpp/Weather/WeatherSchedule.c (Weather.WeatherSchedule$$DeserializeFromCSV): 5 lines keep C-only constructs
		int piVar1;
		int length;
		List<WeatherEvent> pSVar2;
		WeatherEvent[] pWVar3;
		bool bVar5;
		uint uVar6;
		String[] pSVar7;
		String a;
		String[] pSVar8;
		WeatherEvent item;
		uint uVar9;

		if (Il2CppMethodInitialized_075450ac == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherEvent_Clear) ;
			Il2CppMethodInitialized_075450ac = true;
		}
		pSVar2 = this.Events;
		if (pSVar2 != null) {
			piVar1 = &pSVar2._version;
			*piVar1 = *piVar1 + 1;
			length = pSVar2._size;
			pSVar2._size = 0;
			if (0 < length) {
				Array.Clear((Array)pSVar2._items, 0, length);
			}
			if (csv != null) {
				pSVar7 = csv.Split(0x3b, 0);
				if (pSVar7 != null) {
					uVar6 = (uint)pSVar7.Length;
					if (0 < (int)uVar6) {
						uVar9 = 0;
						do {
							if (uVar6 <= uVar9) {
								throw new IndexOutOfRangeException();
							}
							if (pSVar7[(int)uVar9] == null) {
								throw new NullReferenceException();
							}
							a = (pSVar7[(int)uVar9]).Trim();
							if ((uint)pSVar7.Length <= uVar9) {
								throw new IndexOutOfRangeException();
							}
							if (pSVar7[(int)uVar9] == null) {
								throw new NullReferenceException();
							}
							pSVar8 = (pSVar7[(int)uVar9]).Split(10, 0);
							if (pSVar8 == null) {
								throw new NullReferenceException();
							}
							bVar5 = (a != (String)**(ulong*)(g_data_07556758 + 0xb8));
							if (bVar5) {
								if (a == null) {
									throw new NullReferenceException();
								}
								bVar5 = a.StartsWith("//");
								if (!bVar5) {
									pSVar2 = this.Events;
									item = this.DeserializeLine(a);
									if (pSVar2 == null) {
	label_0585f81b: ;
										throw new NullReferenceException();
									}
									piVar1 = &pSVar2._version;
									*piVar1 = *piVar1 + 1;
									pWVar3 = pSVar2._items;
									if (pWVar3 == null) goto label_0585f81b;
									uVar6 = pSVar2._size;
									if (uVar6 < (uint)pWVar3.Length) {
										pSVar2._size = uVar6 + 1;
										pWVar3[(int)uVar6] = item;
									}
									else {
										pSVar2.AddWithResize((object)item);
									}
								}
							}
							uVar9 = uVar9 + 1;
							uVar6 = (uint)pSVar7.Length;
						} while ((int)uVar9 < (int)uVar6);
					}
					return "";
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x5760200", Offset = "0x575F200", VA = "0x5760200")]
	private string SerializeValue(WeatherValueType type, object value)
	{
		// Lifted from source/cpp/Weather/WeatherSchedule.c (Weather.WeatherSchedule$$SerializeValue): 16 lines keep C-only constructs
		float pfVar1;
		int piVar2;
		Color pUVar3;
		IntPtr pvVar4;
		Vector3 pUVar5;
		String pSVar6;
		int local_20;
		float local_1c;

		if (Il2CppMethodInitialized_075450ad == false) {
			il2cpp_codegen_initialize_runtime_metadata(&";");
			Il2CppMethodInitialized_075450ad = true;
		}
		local_1c = 0.0;
		local_20 = 0;
		switch(type) {
		case 1:
			if (value == null) goto label_0586048c;
			if ((value.klass._1).element_class != *(Il2CppClass*)(g_data_07556740 + 0x40)) {
	label_05860491: ;
				throw new InvalidCastException();
			}
			pfVar1 = il2cpp_vm_Object_Unbox(value);
			local_1c = *pfVar1;
			value = (object)local_1c.ToString();
			break;
		case 2:
			if (value == null) goto label_0586048c;
			if ((value.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05860491;
			piVar2 = il2cpp_vm_Object_Unbox(value);
			local_20 = *piVar2;
			goto label_058603d1;
		case 3:
			if (value == null) goto label_0586048c;
			if (value.klass != g_data_07556758) goto label_05860491;
			goto label_05860433;
		case 4:
			if (value == null) goto label_0586048c;
			if ((value.klass._1).element_class != (typeof(Color)._1).element_class) goto label_05860491;
			pUVar3 = il2cpp_vm_Object_Unbox(value);
			value = (object)this.SerializeColor((UnityEngine_Color_o)*pUVar3);
			break;
		case 5:
			if (value == null) goto label_0586048c;
			if ((value.klass._1).element_class != *(Il2CppClass*)(g_data_075566f0 + 0x40)) goto label_05860491;
			pvVar4 = il2cpp_vm_Object_Unbox(value);
			local_20 = Convert.ToInt32(*(bool)pvVar4);
	label_058603d1: ;
			value = (object)local_20.ToString();
			break;
		case 6:
			if (value == null) goto label_0586048c;
			if ((value.klass._1).element_class != (typeof(Vector3)._1).element_class) goto label_05860491;
			pUVar5 = il2cpp_vm_Object_Unbox(value);
			value = (object)value.SerializeVector3((UnityEngine_Vector3_o)*pUVar5);
			break;
		default: ;
			value = (Il2CppObject *)"";
		}
		if ((String)value != null) {
	label_05860433: ;
			pSVar6 = value.Replace(",", *(String*)g_data_07556758.static_fields);
			if (pSVar6 != null) {
				pSVar6 = pSVar6.Replace(";", *(String*)g_data_07556758.static_fields);
				return pSVar6;
			}
		}
	label_0586048c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x5760190", Offset = "0x575F190", VA = "0x5760190")]
	private string SerializeRandomListValue(WeatherValueType type, object value, float weight)
	{
		// Lifted from source/cpp/Weather/WeatherSchedule.c (Weather.WeatherSchedule$$SerializeRandomListValue): clean
		String pSVar1;
		String str2;
		float fStack_1c;

		fStack_1c = weight;
		pSVar1 = this.SerializeValue(type, value);
		str2 = fStack_1c.ToString();
		pSVar1 = String.Concat(pSVar1, "-", str2);
		return pSVar1;
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x57609A0", Offset = "0x575F9A0", VA = "0x57609A0")]
	private string SerializeColor(Color color)
	{
		// Lifted from source/cpp/Weather/WeatherSchedule.c (Weather.WeatherSchedule$$SerializeColor): 19 lines keep C-only constructs
		String[] value;
		String pSVar1;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		int local_5c;
		byte[] local_58 = new byte[8];
		byte[] local_48 = new byte[16];
		byte[] local_38 = new byte[16];
		float local_28;

		local_48._8_4_ = in_XMM1_Dc;
		local_48._0_8_ = color._8_8_;
		local_48._12_4_ = in_XMM1_Dd;
		local_58 = (byte[])color._0_8_;
		local_38._8_4_ = in_XMM0_Dc;
		local_38._0_8_ = color._0_8_;
		local_38._12_4_ = in_XMM0_Dd;
		value = (String[])new string[4];
		local_5c = (int)((float)local_38._0_4_ * 255.0);
		pSVar1 = local_5c.ToString();
		if (value == null) {
			throw new NullReferenceException();
		}
		if ((int)value.Length != 0) {
			value[0] = pSVar1;
			local_58._0_4_ = local_58._4_4_;
			local_5c = (int)((float)local_58._4_4_ * 255.0);
			pSVar1 = local_5c.ToString();
			if ((value.Length & 0xfffffffe) != 0) {
				value[1] = pSVar1;
				local_5c = (int)((float)local_48._0_4_ * 255.0);
				pSVar1 = local_5c.ToString();
				if (2 < (uint)value.Length) {
					value[2] = pSVar1;
					local_28 = (float)local_48._4_4_;
					local_5c = (int)((float)local_48._4_4_ * 255.0);
					pSVar1 = local_5c.ToString();
					if ((value.Length & 0xfffffffc) != 0) {
						value[3] = pSVar1;
						if ((float)local_38._0_4_ == (float)local_48._0_4_) {
							if (((((float)local_38._0_4_ == (float)local_58._0_4_) &&(!NAN((float)local_38._0_4_) && !NAN((float)local_58._0_4_))) && (local_28 == 1.0)) &&(!NAN(local_28))) {
								if ((int)value.Length != 0) {
									return value[0];
								}
								goto label_05860b62;
							}
						}
						pSVar1 = String.Join("-", value);
						return pSVar1;
					}
				}
			}
		}
	label_05860b62: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x5760C60", Offset = "0x575FC60", VA = "0x5760C60")]
	private string SerializeColorValue(float value)
	{
		// Lifted from source/cpp/Weather/WeatherSchedule.c (Weather.WeatherSchedule$$SerializeColorValue): clean
		String pSVar1;

		return pSVar1;
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x5760B70", Offset = "0x575FB70", VA = "0x5760B70")]
	private string SerializeVector3(Vector3 v)
	{
		// Lifted from source/cpp/Weather/WeatherSchedule.c (Weather.WeatherSchedule$$SerializeVector3): 2 lines keep C-only constructs
		String[] value;
		String pSVar1;
		ulong local_20;
		float[] local_18 = new float[2];

		local_18[0] = v.z;
		local_20 = v._0_8_;
		value = (String[])new string[3];
		pSVar1 = local_20.ToString();
		if (value == null) {
			throw new NullReferenceException();
		}
		if ((int)value.Length != 0) {
			value[0] = pSVar1;
			pSVar1 = (((long)&local_20 + 4)).ToString();
			if ((value.Length & 0xfffffffe) != 0) {
				value[1] = pSVar1;
				pSVar1 = local_18.ToString();
				if (2 < (uint)value.Length) {
					value[2] = pSVar1;
					pSVar1 = String.Join("-", value);
					return pSVar1;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x57604A0", Offset = "0x575F4A0", VA = "0x57604A0")]
	private WeatherEvent DeserializeLine(string line)
	{
		// Lifted from source/cpp/Weather/WeatherSchedule.c (Weather.WeatherSchedule$$DeserializeLine): 16 lines keep C-only constructs
		int piVar1;
		System_Collections_Generic_Dictionary_string__WeatherAction__o __this_00;
		System_Collections_Generic_Dictionary_string__WeatherEffect__o __this_01;
		System_Collections_Generic_Dictionary_string__WeatherValueSelectType__o __this_02;
		List<object> pSVar2;
		Object[] pSVar3;
		List<float> __this_03;
		Single[] pSVar4;
		bool bVar5;
		int iVar6;
		int iVar7;
		WeatherEvent __this_04;
		String[] pSVar8;
		ulong uVar9;
		object item;
		List<string> __this_05;
		List<T> values;
		String pSVar10;
		MethodInfo pMVar11;
		MethodInfo pMVar12;
		String* method_00;
		uint uVar13;
		int count;
		ulong uVar14;
		float item_00;

		__this_04 = new WeatherEvent();
		if (line != null) {
			pSVar8 = line.Split(0x2c, 0);
			if (pSVar8 != null) {
				if ((int)pSVar8.Length == 0) {
	label_05860997: ;
					throw new IndexOutOfRangeException();
				}
				__this_00 = WeatherSchedule.NameToWeatherAction;
				if ((__this_00 != null) &&(iVar6 = __this_00.get_Item((object)pSVar8[0]), __this_04 != null)) {
					__this_04.Action = iVar6;
					bVar5 = __this_04.SupportsWeatherEffects();
					uVar13 = 1;
					if (bVar5) {
						if ((pSVar8.Length & 0xfffffffe) == 0) goto label_05860997;
						__this_01 = WeatherSchedule.NameToWeatherEffect;
						if (__this_01 == null) goto label_05860992;
						iVar6 = __this_01.get_Item((object)pSVar8[1]);
						__this_04.Effect = iVar6;
						uVar13 = 2;
					}
					if (__this_04.Action == 0xf) {
						__this_04.ValueSelectType = 1;
					}
					else {
						bVar5 = __this_04.SupportsWeatherValueSelectTypes();
						if (bVar5) {
							if ((uint)pSVar8.Length <= uVar13) goto label_05860997;
							__this_02 = WeatherSchedule.NameToWeatherValueSelectType;
							if (__this_02 == null) goto label_05860992;
							uVar9 = (ulong)uVar13;
							uVar13 = uVar13 + 1;
							iVar7 = __this_02.get_Item((object)pSVar8[uVar9]);
							__this_04.ValueSelectType = iVar7;
						}
						else {
							iVar7 = __this_04.ValueSelectType;
						}
						if (iVar7 == 3) {
							pMVar11 = null;
							iVar6 = __this_04.GetValueType();
							if ((int)pSVar8.Length <= (int)uVar13) {
								return __this_04;
							}
							uVar9 = pSVar8.Length & 0xffffffff;
							uVar14 = (ulong)uVar13;
							while (uVar14 < uVar9) {
								pSVar10 = pSVar8[uVar14];
								__this_05 = WeatherSchedule.SplitParts(pSVar10);
								if (__this_05 == null) goto label_05860992;
								iVar7 = __this_05._size;
								if (iVar6 == 4) {
									count = 4;
									if (iVar7 < 4) goto label_0586084b;
								}
								else {
									if (iVar6 == 6) {
										if (2 < iVar7) {
											iVar7 = 3;
										}
									}
									else {
	label_0586084b: ;
										if (0 < iVar7) {
											iVar7 = 1;
										}
									}
									count = iVar7;
								}
								pSVar2 = __this_04.Values;
								values = __this_05.GetRange(0, count);
								method_00 = &"-";
								pSVar10 = String.Join("-", (IEnumerable<string>)values);
								pMVar11 = (MethodInfo)this.DeserializeValue(iVar6, pSVar10);
								pMVar12 = MethodInfo_System_Collections_Generic_List_object_Add;
								if (pSVar2 == null) goto label_05860992;
								piVar1 = &pSVar2._version;
								*piVar1 = *piVar1 + 1;
								pSVar3 = pSVar2._items;
								if (pSVar3 == null) goto label_05860992;
								uVar13 = pSVar2._size;
								if (uVar13 < (uint)pSVar3.Length) {
									pSVar2._size = uVar13 + 1;
									pSVar3[(int)uVar13] = (object)pMVar11;
								}
								else {
									pSVar2.AddWithResize((object)pMVar11);
								}
								__this_03 = __this_04.Weights;
								item_00 = 1.0;
								if (count < __this_05._size) {
									pSVar10 = __this_05.get_Item(count);
									pMVar11 = null;
									item_00 = Single.Parse(pSVar10);
								}
								pMVar12 = MethodInfo_System_Collections_Generic_List_float_Add;
								if (__this_03 == null) goto label_05860992;
								piVar1 = &__this_03._version;
								*piVar1 = *piVar1 + 1;
								pSVar4 = __this_03._items;
								if (pSVar4 == null) goto label_05860992;
								uVar13 = __this_03._size;
								if (uVar13 < (uint)pSVar4.Length) {
									__this_03._size = uVar13 + 1;
									pSVar4[(int)uVar13] = item_00;
								}
								else {
									pMVar11 = pMVar12.klass.rgctx_data[0xe].method;
									__this_03.AddWithResize(item_00);
								}
								uVar14 = uVar14 + 1;
								uVar13 = (uint)pSVar8.Length;
								uVar9 = (ulong)uVar13;
								if ((long)(int)uVar13 <= (long)uVar14) {
									return __this_04;
								}
							}
							goto label_05860997;
						}
					}
					if ((int)uVar13 < (int)pSVar8.Length) {
						pMVar11 = (MethodInfo)(ulong)uVar13;
						do {
							while(true) {
								pSVar2 = __this_04.Values;
								iVar6 = __this_04.GetValueType();
								pMVar12 = (MethodInfo)(ulong)(uint)pSVar8.Length;
								if (pMVar12 <= pMVar11) goto label_05860997;
								item = this.DeserializeValue(iVar6, pSVar8[(long)pMVar11]);
								pMVar12 = MethodInfo_System_Collections_Generic_List_object_Add;
								if (pSVar2 == null) goto label_05860992;
								piVar1 = &pSVar2._version;
								*piVar1 = *piVar1 + 1;
								pSVar3 = pSVar2._items;
								if (pSVar3 == null) goto label_05860992;
								uVar13 = pSVar2._size;
								if ((uint)pSVar3.Length <= uVar13) break;
								pSVar2._size = uVar13 + 1;
								pSVar3[(int)uVar13] = item;
								pMVar11 = (MethodInfo)((long)&pMVar11.methodPointer + 1);
								if ((long)(int)pSVar8.Length <= (long)pMVar11) {
									return __this_04;
								}
							}
							pSVar2.AddWithResize(item);
							pMVar11 = (MethodInfo)((long)&pMVar11.methodPointer + 1);
						} while ((long)pMVar11 < (long)(int)pSVar8.Length);
					}
					return __this_04;
				}
			}
		}
	label_05860992: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x5760F00", Offset = "0x575FF00", VA = "0x5760F00")]
	private object DeserializeValue(WeatherValueType type, string item)
	{
		// Lifted from source/cpp/Weather/WeatherSchedule.c (Weather.WeatherSchedule$$DeserializeValue): 3 lines keep C-only constructs
		bool bVar1;
		float fVar2;
		int value;
		Color255 pUVar3;
		Vector3* __this_00;
		Vector3 local_28;

		__this_00 = (Vector3*)this;
		if (Il2CppMethodInitialized_075450b2 == false) {
			__this_00 = &typeof(Vector3);
			Il2CppMethodInitialized_075450b2 = true;
		}
		switch(type) {
		case 1:
			fVar2 = Single.Parse(item);
			local_28.x = fVar2;
			break;
		case 2:
			fVar2 = (float)Int32.Parse(item);
			local_28.x = fVar2;
			break;
		case 3:
			goto switchD_05860f4e_caseD_3;
		case 4:
			pUVar3 = this.DeserializeColor(item);
			return (object)pUVar3;
		case 5:
			value = Int32.Parse(item);
			bVar1 = Convert.ToBoolean(value);
			local_28.x._0_1_ = bVar1;
			break;
		case 6:
			local_28 = __this_00.DeserializeVector3(item);
			break;
		default: ;
			item = null;
			goto switchD_05860f4e_caseD_3;
		}
		item = (String)(object)local_28;
	switchD_05860f4e_caseD_3: ;
		return (object)item;
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x5760ED0", Offset = "0x575FED0", VA = "0x5760ED0")]
	private static int GetValuePartCount(WeatherValueType type, int partCount)
	{
		// Lifted from source/cpp/Weather/WeatherSchedule.c (Weather.WeatherSchedule$$GetValuePartCount): clean
		int iVar1;

		if (type == 4) {
			if (3 < partCount) {
				return 4;
			}
		}
		else if (type == 6) {
			if (partCount < 3) {
			}
			return iVar1;
		}
		if (partCount < 1) {
		}
		return iVar1;
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x5760C80", Offset = "0x575FC80", VA = "0x5760C80")]
	private static List<string> SplitParts(string item)
	{
		// Lifted from source/cpp/Weather/WeatherSchedule.c (Weather.WeatherSchedule$$SplitParts): 4 lines keep C-only constructs
		int piVar1;
		String[] pSVar2;
		bool bVar4;
		ushort uVar5;
		List<string> __this;
		String pSVar6;
		uint index;
		uint uVar7;

		__this = new List<string>();
		if (item != null) {
			uVar7 = 0;
			if (1 < item._stringLength) {
				index = 1;
				uVar7 = 0;
	label_05860d1c: ;
				do {
					uVar5 = item.get_Chars(index - 1);
					bVar4 = false;
					if (uVar5 == 0x65) {
						if (1 < index) {
	label_05860d57: ;
							uVar5 = item.get_Chars(index - 2);
							bVar4 = Char.IsDigit(uVar5);
						}
					}
					else {
						uVar5 = item.get_Chars(index - 1);
						if ((1 < index) && (uVar5 == 0x45)) goto label_05860d57;
					}
					uVar5 = item.get_Chars(index);
					if (((uVar5 != 0x2d) || (index - uVar7 == 0 || (int)index < (int)uVar7)) || (bVar4 != false)) {
						index = index + 1;
						if (item._stringLength <= (int)index) break;
						goto label_05860d1c;
					}
					pSVar6 = item.Substring(uVar7, index - uVar7);
					if (__this == null) goto label_05860ec5;
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pSVar2 = __this._items;
					if (pSVar2 == null) goto label_05860ec5;
					uVar7 = __this._size;
					if (uVar7 < (uint)pSVar2.Length) {
						__this._size = uVar7 + 1;
						pSVar2[(int)uVar7] = pSVar6;
					}
					else {
						__this.AddWithResize((object)pSVar6);
					}
					index = index + 1;
					uVar7 = index;
				} while ((int)index < item._stringLength);
			}
			pSVar6 = item.Substring(uVar7);
			if (__this != null) {
				piVar1 = &__this._version;
				*piVar1 = *piVar1 + 1;
				pSVar2 = __this._items;
				if (pSVar2 != null) {
					uVar7 = __this._size;
					if (uVar7 < (uint)pSVar2.Length) {
						__this._size = uVar7 + 1;
						pSVar2[(int)uVar7] = pSVar6;
					}
					else {
						__this.AddWithResize((object)pSVar6);
					}
					return __this;
				}
			}
		}
	label_05860ec5: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x5761020", Offset = "0x5760020", VA = "0x5761020")]
	private Color255 DeserializeColor(string item)
	{
		// Lifted from source/cpp/Weather/WeatherSchedule.c (Weather.WeatherSchedule$$DeserializeColor): clean
		uint uVar1;
		int iVar2;
		int r;
		int g;
		int b;
		int a;
		List<string> __this_00;
		String pSVar3;
		Color255 __this_01;

		if (Il2CppMethodInitialized_075450b4 == false) {
			Il2CppMethodInitialized_075450b4 = true;
			uVar1 = (typeof(WeatherSchedule)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(WeatherSchedule)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = WeatherSchedule.SplitParts(item);
		}
		else {
			__this_00 = WeatherSchedule.SplitParts(item);
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		iVar2 = __this_00._size;
		pSVar3 = __this_00.get_Item(0);
		r = Int32.Parse(pSVar3);
		if (iVar2 == 1) {
			a = 0xff;
			g = r;
			b = r;
		}
		else {
			pSVar3 = __this_00.get_Item(1);
			g = Int32.Parse(pSVar3);
			pSVar3 = __this_00.get_Item(2);
			b = Int32.Parse(pSVar3);
			pSVar3 = __this_00.get_Item(3);
			a = Int32.Parse(pSVar3);
		}
		__this_01 = new Color255(r, g, b, a);
		return __this_01;
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x57612D0", Offset = "0x57602D0", VA = "0x57612D0")]
	private int DeserializeColorValue(string str)
	{
		// Lifted from source/cpp/Weather/WeatherSchedule.c (Weather.WeatherSchedule$$DeserializeColorValue): clean
		int iVar1;

		return iVar1;
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x57611C0", Offset = "0x57601C0", VA = "0x57611C0")]
	private Vector3 DeserializeVector3(string item)
	{
		// Lifted from source/cpp/Weather/WeatherSchedule.c (Weather.WeatherSchedule$$DeserializeVector3): clean
		uint uVar1;
		List<string> __this_00;
		String pSVar2;
		float fVar4;
		float fVar5;
		Vector3 UVar6;

		if (Il2CppMethodInitialized_075450b5 == false) {
			Il2CppMethodInitialized_075450b5 = true;
			uVar1 = (typeof(WeatherSchedule)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(WeatherSchedule)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = WeatherSchedule.SplitParts(item);
		}
		else {
			__this_00 = WeatherSchedule.SplitParts(item);
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pSVar2 = __this_00.get_Item(0);
		UVar6.x = Single.Parse(pSVar2);
		pSVar2 = __this_00.get_Item(1);
		fVar4 = Single.Parse(pSVar2);
		pSVar2 = __this_00.get_Item(2);
		fVar5 = Single.Parse(pSVar2);
		UVar6.y = fVar4;
		UVar6.z = fVar5;
		return (Vector3)UVar6;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Weather/WeatherSchedule.c.

	// Weather.WeatherSchedule$$.cctor: 4 lines keep C-only constructs
	static WeatherSchedule()
	{
		Weather_WeatherSchedule_StaticFields pWVar1;
		System_Collections_Generic_Dictionary_string__T__o pSVar2;

		pSVar2 = Util.EnumToDict<WeatherAction>();
		WeatherSchedule.NameToWeatherAction =(System_Collections_Generic_Dictionary_string__WeatherAction__o)pSVar2;
		pSVar2 = Util.EnumToDict<WeatherEffect>();
		pWVar1 = typeof(WeatherSchedule).static_fields;
		pWVar1.NameToWeatherEffect = (System_Collections_Generic_Dictionary_string__WeatherEffect__o)pSVar2;
		pSVar2 = Util.EnumToDict<WeatherValueSelectType>();
		pWVar1 = typeof(WeatherSchedule).static_fields;
		pWVar1.NameToWeatherValueSelectType =(System_Collections_Generic_Dictionary_string__WeatherValueSelectType__o)pSVar2;
		return;
	}
}
