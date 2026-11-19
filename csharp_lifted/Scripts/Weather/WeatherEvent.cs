// ==================== AoTTG2 cross-reference ====================
// Type: Weather.WeatherEvent
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Weather/WeatherEvent.c
// Prior real C# source (older reference): Assets/Scripts/Weather/WeatherEvent.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;

namespace Weather;

[Token(Token = "0x2000035")]
internal class WeatherEvent
{
	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x0")]
	private static string[] AllWeatherEffects;

	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x8")]
	private static string[] AllWeatherValueSelectTypes;

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x10")]
	public WeatherAction Action;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x14")]
	public WeatherEffect Effect;

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x18")]
	public WeatherValueSelectType ValueSelectType;

	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x20")]
	public List<object> Values;

	[Token(Token = "0x400011A")]
	[FieldOffset(Offset = "0x28")]
	public List<float> Weights;

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x57575F0", Offset = "0x57565F0", VA = "0x57575F0")]
	public WeatherEvent()
	{
		// Lifted from source/cpp/Weather/WeatherEvent.c (Weather.WeatherEvent$$.ctor): clean
		List<object> __this_00;
		List<float> __this_01;

		__this_00 = new List<object>();
		this.Values = __this_00;
		__this_01 = new List<float>();
		this.Weights = __this_01;
		base();
		return;
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x57576B0", Offset = "0x57566B0", VA = "0x57576B0")]
	public object GetValue()
	{
		// Lifted from source/cpp/Weather/WeatherEvent.c (Weather.WeatherEvent$$GetValue): 36 lines keep C-only constructs
		byte bVar1;
		List<object> pSVar2;
		List<float> weights;
		bool bVar3;
		int iVar4;
		int r;
		int iVar5;
		int b;
		int a;
		object pIVar6;
		object obj;
		float pfVar7;
		Color255 __this_00;
		int piVar8;
		int piVar9;
		int iVar10;
		int iVar11;
		Il2CppClass klass;
		float minInclusive;
		float fVar12;
		float fVar13;
		float maxInclusive;
		float maxInclusive_00;
		float local_48;
		float local_44;
		float local_40;
		float local_38;
		float local_34;

		bVar3 = false;
		iVar4 = 0;
		switch(this.Action) {
		case 0:
		case 1:
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 0x10:
			goto switchD_0585772c_caseD_0;
		case 2:
		case 3:
			iVar10 = 2;
			break;
		default: ;
			iVar4 = 3;
			bVar3 = false;
			iVar10 = 0;
			switch(this.Effect) {
			case 1:
			case 4:
			case 6:
			case 7:
			case 9:
				iVar10 = 4;
				goto switchD_05857c37_default;
			case 2:
			case 8:
			case 10:
			case 0xb:
			case 0xc:
			case 0xd:
			case 0xf:
			case 0x10:
			case 0x11:
				goto switchD_0585772c_caseD_b;
			case 3:
			case 0xe:
				iVar4 = 6;
				bVar3 = true;
				break;
			case 5:
				break;
			default: ;
				goto switchD_05857c37_default;
			}
			goto switchD_0585772c_caseD_0;
		case 0xb:
		case 0xc:
		case 0xd:
	switchD_0585772c_caseD_b: ;
			iVar10 = 1;
			break;
		case 0xe:
		case 0xf:
		case 0x11:
			iVar10 = 3;
		}
	switchD_05857c37_default: ;
		iVar4 = iVar10;
		bVar3 = false;
	switchD_0585772c_caseD_0: ;
		iVar10 = this.ValueSelectType;
		if (iVar10 == 3) {
			pSVar2 = this.Values;
			weights = this.Weights;
			pIVar6 = Util.GetRandomFromWeightedList(pSVar2, weights);
			return pIVar6;
		}
		if (iVar10 != 2) {
			if (iVar10 != 1) {
				return null;
			}
			pSVar2 = this.Values;
			if (pSVar2 != null) {
				pIVar6 = pSVar2.get_Item(0);
				return pIVar6;
			}
	label_05857cf1: ;
			throw new NullReferenceException();
		}
		if (iVar4 != 4) {
			if (iVar4 == 2) {
				pSVar2 = this.Values;
				if (pSVar2 != null) {
					pIVar6 = pSVar2.get_Item(0);
					pSVar2 = this.Values;
					if ((pSVar2 != null) &&(obj = pSVar2.get_Item(1), pIVar6 != null)) {
						if ((pIVar6.klass._1).element_class != (g_data_07556710._1).element_class) {
	label_05857cfe: ;
							throw new InvalidCastException();
						}
						piVar8 = il2cpp_vm_Object_Unbox(pIVar6);
						if (obj != null) {
							if ((obj.klass._1).element_class == (g_data_07556710._1).element_class) {
								iVar5 = *piVar8;
								piVar9 = il2cpp_vm_Object_Unbox(obj);
								local_48 = (float)Random.Range(iVar5, *piVar9 + 1);
								klass = g_data_07556710;
								goto label_05857bef;
							}
							goto label_05857cf6;
						}
					}
				}
			}
			else if (iVar4 == 1) {
				pSVar2 = this.Values;
				if (pSVar2 != null) {
					pIVar6 = pSVar2.get_Item(0);
					pSVar2 = this.Values;
					if ((pSVar2 != null) &&(obj = pSVar2.get_Item(1), pIVar6 != null)) {
						if ((pIVar6.klass._1).element_class != (g_data_07556740._1).element_class) goto label_05857cfe;
						pfVar7 = il2cpp_vm_Object_Unbox(pIVar6);
						if (obj != null) {
							if ((obj.klass._1).element_class != (g_data_07556740._1).element_class) goto label_05857cf6;
							fVar13 = *pfVar7;
							pfVar7 = il2cpp_vm_Object_Unbox(obj);
							local_48 = Random.Range(fVar13, *pfVar7);
							klass = g_data_07556740;
	label_05857bef: ;
							pIVar6 = (object)local_48;
							return pIVar6;
						}
					}
				}
			}
			else {
				if (!bVar3) {
					return null;
				}
				pSVar2 = this.Values;
				if ((pSVar2 != null) &&(pIVar6 = pSVar2.get_Item(0), pIVar6 != null)) {
					if ((pIVar6.klass._1).element_class != (typeof(Vector3)._1).element_class) {
	label_05857d0e: ;
						throw new InvalidCastException();
					}
					pfVar7 = il2cpp_vm_Object_Unbox(pIVar6);
					pSVar2 = this.Values;
					if (pSVar2 != null) {
						fVar13 = *pfVar7;
						maxInclusive = pfVar7[1];
						maxInclusive_00 = pfVar7[2];
						pIVar6 = pSVar2.get_Item(1);
						if (pIVar6 != null) {
							if ((pIVar6.klass._1).element_class == (typeof(Vector3)._1).element_class) {
								pfVar7 = il2cpp_vm_Object_Unbox(pIVar6);
								fVar12 = *pfVar7;
								local_38 = pfVar7[1];
								local_34 = pfVar7[2];
								minInclusive = fVar13;
								if (fVar12 <= fVar13) {
									minInclusive = fVar12;
								}
								if (fVar13 <= fVar12) {
									fVar13 = fVar12;
								}
								fVar12 = Random.Range(minInclusive, fVar13);
								fVar13 = maxInclusive;
								if (local_38 <= maxInclusive) {
									fVar13 = local_38;
								}
								if (maxInclusive <= local_38) {
									maxInclusive = local_38;
								}
								local_44 = Random.Range(fVar13, maxInclusive);
								fVar13 = maxInclusive_00;
								if (local_34 <= maxInclusive_00) {
									fVar13 = local_34;
								}
								if (maxInclusive_00 <= local_34) {
									maxInclusive_00 = local_34;
								}
								local_40 = Random.Range(fVar13, maxInclusive_00);
								klass = typeof(Vector3);
								local_48 = fVar12;
								goto label_05857bef;
							}
							goto label_05857d0e;
						}
					}
				}
			}
			goto label_05857cf1;
		}
		pSVar2 = this.Values;
		if (pSVar2 == null) goto label_05857cf1;
		pIVar6 = pSVar2.get_Item(0);
		if (pIVar6 != null) {
			bVar1 = (typeof(Color255)._2).typeHierarchyDepth;
			if (((pIVar6.klass._2).typeHierarchyDepth < bVar1) ||((pIVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Color255))) {
				throw new InvalidCastException();
			}
		}
		pSVar2 = this.Values;
		if (pSVar2 == null) goto label_05857cf1;
		obj = pSVar2.get_Item(1);
		if (obj != null) {
			bVar1 = (typeof(Color255)._2).typeHierarchyDepth;
			if (((obj.klass._2).typeHierarchyDepth < bVar1) ||((obj.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Color255))) {
	label_05857cf6: ;
				throw new InvalidCastException();
			}
		}
		if (pIVar6 == null) goto label_05857cf1;
		if (((*(int)&pIVar6[1].klass == *(int)((long)&pIVar6[1].klass + 4)) &&(*(int)&pIVar6[1].klass == *(int)&pIVar6[1].monitor)) &&(*(int)((long)&pIVar6[1].monitor + 4) == 0xff)) {
			if (obj == null) goto label_05857cf1;
			iVar4 = *(int)&obj[1].klass;
			if (((iVar4 == *(int)((long)&obj[1].klass + 4)) && (iVar4 == *(int)&obj[1].monitor)) &&(*(int)((long)&obj[1].monitor + 4) == 0xff)) {
				r = Random.Range(*(int)&pIVar6[1].klass, iVar4);
				a = 0xff;
				iVar5 = r;
				b = r;
				goto label_05857cd8;
			}
		}
		else {
			if (obj == null) goto label_05857cf1;
			iVar4 = *(int)&obj[1].klass;
		}
		iVar10 = *(int)&pIVar6[1].klass;
		iVar11 = iVar4;
		if (iVar10 < iVar4) {
			iVar11 = iVar10;
		}
		if (iVar4 < iVar10) {
			iVar4 = iVar10;
		}
		r = Random.Range(iVar11, iVar4);
		iVar4 = *(int)((long)&pIVar6[1].klass + 4);
		iVar10 = *(int)((long)&obj[1].klass + 4);
		iVar11 = iVar10;
		if (iVar4 < iVar10) {
			iVar11 = iVar4;
		}
		if (iVar10 < iVar4) {
			iVar10 = iVar4;
		}
		iVar5 = Random.Range(iVar11, iVar10);
		iVar4 = *(int)&pIVar6[1].monitor;
		iVar10 = *(int)&obj[1].monitor;
		iVar11 = iVar10;
		if (iVar4 < iVar10) {
			iVar11 = iVar4;
		}
		if (iVar10 < iVar4) {
			iVar10 = iVar4;
		}
		b = Random.Range(iVar11, iVar10);
		iVar4 = *(int)((long)&pIVar6[1].monitor + 4);
		iVar10 = *(int)((long)&obj[1].monitor + 4);
		iVar11 = iVar10;
		if (iVar4 < iVar10) {
			iVar11 = iVar4;
		}
		if (iVar10 < iVar4) {
			iVar10 = iVar4;
		}
		a = Random.Range(iVar11, iVar10);
	label_05857cd8: ;
		__this_00 = new Color255(r, iVar5, b, a);
		return (object)__this_00;
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x5757D20", Offset = "0x5756D20", VA = "0x5757D20")]
	public WeatherValueType GetValueType()
	{
		// Lifted from source/cpp/Weather/WeatherEvent.c (Weather.WeatherEvent$$GetValueType): 2 lines keep C-only constructs
		ulong uVar1;
		uint uVar2;
		byte puVar3;

		uVar2 = this.Action;
		uVar1 = (ulong)(int)uVar2;
		if ((uVar1 < 0x12) && ((0x3fb7fU >> (uVar2 & 0x1f) & 1) != 0)) {
			puVar3 = &g_data_010a5274;
		}
		else {
			uVar2 = this.Effect - 1;
			if (0x10 < uVar2) {
				return 0;
			}
			uVar1 = (ulong)(int)uVar2;
			puVar3 = &g_data_010a52bc;
		}
		return *(int)(puVar3 + uVar1 * 4);
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x5757D60", Offset = "0x5756D60", VA = "0x5757D60")]
	public SettingType GetSettingType()
	{
		// Lifted from source/cpp/Weather/WeatherEvent.c (Weather.WeatherEvent$$GetSettingType): 2 lines keep C-only constructs
		ulong uVar1;
		uint uVar2;
		byte puVar3;

		uVar2 = this.Action;
		uVar1 = (ulong)(int)uVar2;
		if ((uVar1 < 0x12) && ((0x3fb7fU >> (uVar2 & 0x1f) & 1) != 0)) {
			puVar3 = &g_data_010a5300;
		}
		else {
			uVar2 = this.Effect - 1;
			if (0x10 < uVar2) {
				return 0;
			}
			uVar1 = (ulong)(int)uVar2;
			puVar3 = &g_data_010a5348;
		}
		return *(int)(puVar3 + uVar1 * 4);
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x5757DA0", Offset = "0x5756DA0", VA = "0x5757DA0")]
	public string[] SupportedWeatherEffects()
	{
		// Lifted from source/cpp/Weather/WeatherEvent.c (Weather.WeatherEvent$$SupportedWeatherEffects): clean
		uint uVar1;
		String[] pSVar2;

		uVar1 = this.Action;
		if ((0xc < uVar1) || ((0x16c0U >> (uVar1 & 0x1f) & 1) == 0)) {
			pSVar2 = (String[])new string[0];
			return pSVar2;
		}
		if ((typeof(WeatherEvent)._2).cctor_finished_or_no_cctor == 0) {
			return WeatherEvent.AllWeatherEffects;
		}
		return WeatherEvent.AllWeatherEffects;
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x5757E30", Offset = "0x5756E30", VA = "0x5757E30")]
	public bool SupportsWeatherEffects()
	{
		// Lifted from source/cpp/Weather/WeatherEvent.c (Weather.WeatherEvent$$SupportsWeatherEffects): clean
		uint uVar1;
		String[] pSVar2;

		uVar1 = this.Action;
		if ((uVar1 < 0xd) && ((0x16c0U >> (uVar1 & 0x1f) & 1) != 0)) {
			pSVar2 = WeatherEvent.AllWeatherEffects;
		}
		else {
			pSVar2 = (String[])new string[0];
		}
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		return (int)pSVar2.Length != 0;
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x5757EC0", Offset = "0x5756EC0", VA = "0x5757EC0")]
	public string[] SupportedWeatherValueSelectTypes()
	{
		// Lifted from source/cpp/Weather/WeatherEvent.c (Weather.WeatherEvent$$SupportedWeatherValueSelectTypes): 4 lines keep C-only constructs
		int iVar1;
		int iVar2;
		String[] pSVar3;
		String pSVar4;
		String* targetAddress;
		Enum local_40;
		Enum local_28;

		iVar1 = this.Action;
		switch(iVar1) {
		case 0:
		case 1:
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 0x10:
	switchD_05857f15_caseD_0: ;
			pSVar3 = (String[])new string[0];
			return pSVar3;
		default: ;
			iVar2 = this.Effect;
			if ((0xb < iVar2 - 6U) && (3 < iVar2 - 1U)) {
				if (iVar2 != 5) goto switchD_05857f15_caseD_0;
				if ((iVar1 != 0x11) && (iVar1 != 0xf)) goto switchD_05857f15_caseD_e;
				goto switchD_05857f15_caseD_f;
			}
		case 2:
		case 3:
		case 0xb:
		case 0xc:
		case 0xd:
			pSVar3 = WeatherEvent.AllWeatherValueSelectTypes;
			break;
		case 0xe:
	switchD_05857f15_caseD_e: ;
			pSVar3 = (String[])new string[2];
			local_40.klass = (Enum)typeof(WeatherValueSelectType);
			local_40.monitor = (IntPtr)0xffffffffffffffff;
			pSVar4 = local_40.ToString();
			if (pSVar3 == null) goto label_05858091;
			if ((int)pSVar3.Length == 0) goto label_0585808c;
			pSVar3[0] = pSVar4;
			local_28.klass = (Enum)typeof(WeatherValueSelectType);
			local_28.monitor = (IntPtr)0xffffffffffffffff;
			pSVar4 = local_28.ToString();
			if ((pSVar3.Length & 0xfffffffe) == 0) goto label_0585808c;
			targetAddress = pSVar3.m_Items + 1;
			pSVar3[1] = pSVar4;
			goto label_05858079;
		case 0xf:
		case 0x11:
	switchD_05857f15_caseD_f: ;
			pSVar3 = (String[])new string[1];
			local_40.klass = (Enum)typeof(WeatherValueSelectType);
			local_40.monitor = (IntPtr)0xffffffffffffffff;
			pSVar4 = local_40.ToString();
			if (pSVar3 == null) {
	label_05858091: ;
				throw new NullReferenceException();
			}
			if ((int)pSVar3.Length == 0) {
	label_0585808c: ;
				throw new IndexOutOfRangeException();
			}
			pSVar3[0] = pSVar4;
	label_05858079: ;
		}
		return pSVar3;
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x57580A0", Offset = "0x57570A0", VA = "0x57580A0")]
	public bool SupportsWeatherValueSelectTypes()
	{
		// Lifted from source/cpp/Weather/WeatherEvent.c (Weather.WeatherEvent$$SupportsWeatherValueSelectTypes): clean
		String[] pSVar1;

		pSVar1 = this.SupportedWeatherValueSelectTypes();
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		return (int)pSVar1.Length != 0;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Weather/WeatherEvent.c.

	// Weather.WeatherEvent$$.cctor: clean
	static WeatherEvent()
	{
		String[] pSVar2;

		pSVar2 = Util.EnumToStringArrayExceptNone<WeatherEffect>() ;
		WeatherEvent.AllWeatherEffects = pSVar2;
		pSVar2 = Util.EnumToStringArrayExceptNone<WeatherValueSelectType>();
		WeatherEvent.AllWeatherValueSelectTypes = pSVar2;
		return;
	}
}
