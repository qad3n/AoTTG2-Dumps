// ==================== AoTTG2 cross-reference ====================
// Type: Weather.WeatherScheduleRunner
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Weather/WeatherScheduleRunner.c
// Prior real C# source (older reference): Assets/Scripts/Weather/WeatherScheduleRunner.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Weather;

[Token(Token = "0x2000040")]
internal class WeatherScheduleRunner
{
	[Token(Token = "0x400018E")]
	private const int ScheduleMaxRecursion = 200;

	[Token(Token = "0x400018F")]
	[FieldOffset(Offset = "0x10")]
	private int _currentScheduleLine;

	[Token(Token = "0x4000190")]
	[FieldOffset(Offset = "0x18")]
	private LinkedList<int> _callerStack;

	[Token(Token = "0x4000191")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<string, int> _scheduleLabels;

	[Token(Token = "0x4000192")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<int, int> _repeatStartLines;

	[Token(Token = "0x4000193")]
	[FieldOffset(Offset = "0x30")]
	private Dictionary<int, int> _repeatCurrentCounts;

	[Token(Token = "0x4000194")]
	[FieldOffset(Offset = "0x38")]
	private WeatherManager _manager;

	[Token(Token = "0x4000195")]
	[FieldOffset(Offset = "0x40")]
	public WeatherSchedule Schedule;

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x57613D0", Offset = "0x57603D0", VA = "0x57613D0")]
	public WeatherScheduleRunner(WeatherManager manager)
	{
		// Lifted from source/cpp/Weather/WeatherScheduleRunner.c (Weather.WeatherScheduleRunner$$.ctor): 1 lines keep C-only constructs
		LinkedList<int> __this_00;
		Dictionary<string, int> __this_01;
		Dictionary<int, int> pSVar1;
		WeatherSchedule __this_02;
		List<WeatherEvent> __this_03;

		if (Il2CppMethodInitialized_075450b7 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor) ;
			Il2CppMethodInitialized_075450b7 = true;
		}
		__this_00 = new LinkedList<int>();
		this._callerStack = __this_00;
		__this_01 = new Dictionary<string, int>();
		this._scheduleLabels = __this_01;
		pSVar1 = new Dictionary<int, int>();
		this._repeatStartLines = pSVar1;
		pSVar1 = new Dictionary<int, int>();
		this._repeatCurrentCounts = pSVar1;
		__this_03 = new List<WeatherEvent>();
		__this_02.Events = __this_03;
		__this_02 = new WeatherSchedule();
		this.Schedule = __this_02;
		base();
		this._manager = manager;
		return;
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x57615C0", Offset = "0x57605C0", VA = "0x57615C0")]
	public void ProcessSchedule()
	{
		// Lifted from source/cpp/Weather/WeatherScheduleRunner.c (Weather.WeatherScheduleRunner$$ProcessSchedule): 2 lines keep C-only constructs
		List<WeatherEvent> pSVar1;
		Dictionary<object, int> pSVar2;
		bool bVar3;
		bool bVar4;
		int value;
		WeatherEvent pWVar5;
		Stack<int> __this_00;
		WeatherSchedule pWVar6;
		object key;
		int iVar7;
		int index;
		Dictionary<int, int> __this_01;

		if (Il2CppMethodInitialized_075450b8 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&"Weather schedule has an EndRepeat without a matching BeginRepeat; it will be ignored.");
			Il2CppMethodInitialized_075450b8 = true;
		}
		pWVar6 = this.Schedule;
		if (pWVar6 != null) {
			iVar7 = 0;
			while (true) {
				pSVar1 = pWVar6.Events;
				if (!(pSVar1 != null)) break;
				if (pSVar1._size + -1 <= iVar7) {
					__this_00 = new Stack<int>();
					pWVar6 = this.Schedule;
					if (pWVar6 != null) {
						bVar4 = false;
						index = 0;
						goto label_058617b0;
					}
					break;
				}
				pWVar5 = pSVar1.get_Item(iVar7);
				if (pWVar5 == null) break;
				if (pWVar5.Action == 2) {
					pWVar6 = this.Schedule;
					if (((pWVar6 == null) ||(pSVar1 = pWVar6.Events, pSVar1 == null)) ||(pWVar5 = pSVar1.get_Item(iVar7), pWVar5 == null)) break;
					pWVar5.Action = 3;
					pWVar5 = new WeatherEvent();
					if (pWVar5 == null) break;
					pWVar5.Action = 4;
					pWVar6 = this.Schedule;
					if ((pWVar6 == null) ||(pSVar1 = pWVar6.Events, pSVar1 == null )) break;
					pSVar1.Insert(iVar7 + 2, (object)pWVar5);
				}
				iVar7 = iVar7 + 1;
				pWVar6 = this.Schedule;
				if (pWVar6 == null) break;
			}
		}
		goto label_05861756;
	label_058617b0: ;
		do {
			pSVar1 = pWVar6.Events;
			if (pSVar1 == null) break;
			if (pSVar1._size <= index) {
				if (bVar4) {
					DebugConsole.Log("Weather schedule has an EndRepeat without a matching BeginRepeat; it will be ignored.", true);
					return;
				}
				return;
			}
			pWVar5 = pSVar1.get_Item(index);
			if (pWVar5 == null) break;
			iVar7 = pWVar5.Action;
			if (iVar7 == 3) {
				if (__this_00 == null) break;
				__this_00.Push(index);
				__this_01 = this._repeatCurrentCounts;
				if (__this_01 == null) break;
				value = 0;
	label_058617a0: ;
				__this_01.Add(index, value);
			}
			else if (iVar7 == 4) {
				if (__this_00 == null) break;
				if (0 < __this_00._size) {
					__this_01 = this._repeatStartLines;
					value = __this_00.Pop();
					if (__this_01 != null) goto label_058617a0;
					break;
				}
				bVar4 = true;
			}
			else if (iVar7 == 0xf) {
				key = pWVar5.GetValue();
				if ((key != null) && (key.klass != g_data_07556758)) {
					throw new InvalidCastException();
				}
				pSVar2 = (Dictionary<object, int>)this._scheduleLabels;
				if (pSVar2 == null) break;
				bVar3 = pSVar2.ContainsKey(key);
				if (!bVar3) {
					pSVar2 = (Dictionary<object, int>)this._scheduleLabels;
					if (pSVar2 == null) break;
					pSVar2.Add(key, index);
				}
			}
			index = index + 1;
			pWVar6 = this.Schedule;
		} while (pWVar6 != null);
	label_05861756: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x5761960", Offset = "0x5760960", VA = "0x5761960")]
	public void ConsumeSchedule()
	{
		// Lifted from source/cpp/Weather/WeatherScheduleRunner.c (Weather.WeatherScheduleRunner$$ConsumeSchedule): 63 lines keep C-only constructs
		WeatherManager* ppWVar1;
		byte bVar2;
		int index;
		WeatherSchedule pWVar3;
		List<WeatherEvent> pSVar4;
		Dictionary<WeatherScheduleRunner, float> __this_00;
		LinkedList<int> pSVar5;
		Dictionary<object, int> pSVar6;
		Dictionary<int, int> pSVar7;
		Dictionary<int, float> pSVar8;
		OrderedDictionary pSVar9;
		WeatherManager pWVar10;
		BoolSetting pSVar11;
		bool bVar12;
		int iVar13;
		int iVar14;
		WeatherEvent __this_01;
		int piVar15;
		object pIVar16;
		float pfVar17;
		LinkedListNode<T> pSVar18;
		String pSVar19;
		WeatherSet pSVar20;
		List<T> __this_02;
		Il2CppClass pIVar21;
		bool bVar22;
		int iVar23;
		byte[] local_98 = new byte[8];
		int local_88;
		uint uStack_84;
		int local_7c;
		object local_78;
		int local_70;
		float local_6c;
		byte[] local_68 = new byte[8];
		object local_58;
		object local_50;
		Enum local_48;

		if (Il2CppMethodInitialized_075450b9 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_LinkedList_int_get_Last) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherEvent_Clear) ;
			Il2CppMethodInitialized_075450b9 = true;
		}
		local_7c = 0;
		local_70 = 0;
		local_68 = (byte[])0x0;
		local_58 = null;
		ppWVar1 = &this._manager;
		iVar23 = 0;
		bVar22 = false;
		do {
			if (iVar23 == 200) {
				DebugConsole.Log("Weather schedule reached max usage (did you forget to use waits?)", true);
				pWVar3 = this.Schedule;
				if ((pWVar3 != null) &&(pSVar4 = pWVar3.Events, pSVar4 != null)) {
					piVar15 = &pSVar4._version;
					*piVar15 = *piVar15 + 1;
					iVar13 = pSVar4._size;
					pSVar4._size = 0;
					if (0 < iVar13) {
						Array.Clear((Array)pSVar4._items, 0, iVar13);
					}
					return;
				}
				goto label_0586279d;
			}
			pWVar3 = this.Schedule;
			if ((pWVar3 == null) ||(pSVar4 = pWVar3.Events, pSVar4 == null)) goto label_0586279d;
			iVar14 = pSVar4._size;
			if (iVar14 == 0) {
				return;
			}
			index = this._currentScheduleLine;
			if (index < 0) {
				return;
			}
			if (iVar14 <= index) {
				return;
			}
			__this_01 = pSVar4.get_Item(index);
			if (__this_01 == null) goto label_0586279d;
			switch(__this_01.Action) {
			case 3:
				pSVar7 = this._repeatCurrentCounts;
				iVar13 = this._currentScheduleLine;
				pIVar16 = __this_01.GetValue();
				if ((pSVar7 == null) ||(pIVar16 == null)) goto label_0586279d;
				if ((pIVar16.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_058627a2;
				piVar15 = il2cpp_vm_Object_Unbox(pIVar16);
				pSVar7.set_Item(iVar13, *piVar15);
				break;
			case 4:
				pSVar7 = this._repeatStartLines;
				if (pSVar7 == null) goto label_0586279d;
				bVar12 = pSVar7.TryGetValue(this._currentScheduleLine, ref local_7c);
				if (bVar12) {
					pSVar7 = this._repeatCurrentCounts;
					if (pSVar7 == null) goto label_0586279d;
					bVar12 = pSVar7.TryGetValue(local_7c, ref local_70);
					if ((bVar12) && (0 < local_70)) {
						this._currentScheduleLine = local_7c;
						pSVar7 = this._repeatCurrentCounts;
						if (pSVar7 == null) goto label_0586279d;
						pSVar7.set_Item(local_7c, local_70 + -1);
					}
				}
				break;
			case 5:
				if (((*ppWVar1 == null) ||(pSVar20 = ((*ppWVar1).fields)._currentWeather, pSVar20 == null)) ||(pSVar11 = pSVar20.ScheduleLoop, pSVar11 == null)) goto label_0586279d;
				bVar12 = pSVar11._value;
				pSVar20.SetDefault();
				if (((*ppWVar1 == null) ||(pSVar20 = ((*ppWVar1).fields)._currentWeather, pSVar20 == null)) ||(pSVar11 = pSVar20.UseSchedule, pSVar11 == null)) goto label_0586279d;
				pSVar11.Value = true;
				if (((*ppWVar1 == null) ||(pSVar20 = ((*ppWVar1).fields)._currentWeather, pSVar20 == null)) ||(pSVar11 = pSVar20.ScheduleLoop, pSVar11 == null)) goto label_0586279d;
				pSVar11.Value = bVar12;
				pWVar10 = *ppWVar1;
				goto joined_r0x05862631;
			case 6:
				if ((*ppWVar1 == null) ||(pSVar20 = ((*ppWVar1).fields)._currentWeather, pSVar20 == null)) goto label_0586279d;
				pSVar9 = pSVar20.Settings;
				local_98 = (byte[])typeof(WeatherEffect);
				local_88 = __this_01.Effect;
				pSVar19 = local_98.ToString();
				if ((pSVar9 == null) ||(pIVar16 = pSVar9.get_Item((object)pSVar19), pIVar16 == null)) goto label_0586279d;
				pIVar21 = pIVar16.klass;
				bVar2 = (typeof(BaseSetting)._2).typeHierarchyDepth;
				if ((bVar2 <= (pIVar21._2).typeHierarchyDepth) &&((pIVar21._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(BaseSetting))) {
	label_058620c2: ;
					(*pIVar21.vtable[4].methodPtr)(pIVar16,pIVar21.vtable[4].method);
					pWVar10 = *ppWVar1;
					goto joined_r0x05862631;
				}
				goto label_058627a2;
			case 7:
				if (*ppWVar1 == null) goto label_0586279d;
				pSVar20 = ((*ppWVar1).fields)._currentWeather;
				goto label_058620f3;
			case 8:
				if ((*ppWVar1 == null) ||(pSVar20 = ((*ppWVar1).fields)._targetWeather, pSVar20 == null)) goto label_0586279d;
				pSVar20.SetDefault();
				pWVar10 = *ppWVar1;
				goto joined_r0x05862631;
			case 9:
				if ((*ppWVar1 == null) ||(pSVar20 = ((*ppWVar1).fields)._targetWeather, pSVar20 == null)) goto label_0586279d;
				pSVar9 = pSVar20.Settings;
				local_98 = (byte[])typeof(WeatherEffect);
				local_88 = __this_01.Effect;
				pSVar19 = local_98.ToString();
				if ((pSVar9 == null) ||(pIVar16 = pSVar9.get_Item((object)pSVar19), pIVar16 == null)) goto label_0586279d;
				pIVar21 = pIVar16.klass;
				bVar2 = (typeof(BaseSetting)._2).typeHierarchyDepth;
				if ((bVar2 <= (pIVar21._2).typeHierarchyDepth) &&((pIVar21._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(BaseSetting))) goto label_058620c2;
	label_058627a2: ;
	label_058627a5: ;
				throw new InvalidCastException();
			case 10:
				if (*ppWVar1 == null) goto label_0586279d;
				pSVar20 = ((*ppWVar1).fields)._targetWeather;
	label_058620f3: ;
				if (pSVar20 == null) goto label_0586279d;
				pSVar9 = pSVar20.Settings;
				local_98 = (byte[])typeof(WeatherEffect);
				local_88 = __this_01.Effect;
				pSVar19 = local_98.ToString();
				if (pSVar9 == null) goto label_0586279d;
				pSVar19 = (String)pSVar9.get_Item((object)pSVar19);
				iVar13 = __this_01.GetSettingType();
				pIVar16 = __this_01.GetValue();
				if (pSVar19 != null) {
					bVar2 = (typeof(BaseSetting)._2).typeHierarchyDepth;
					if (((pSVar19.klass._2).typeHierarchyDepth < bVar2) ||((pSVar19.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(BaseSetting))) {
	label_058627aa: ;
						throw new InvalidCastException();
					}
				}
				SettingsUtil.SetSettingValue((BaseSetting)pSVar19, iVar13, pIVar16);
				if (*ppWVar1 == null) goto label_0586279d;
				((*ppWVar1).fields)._needSync = true;
				break;
			case 0xb:
				if ((*ppWVar1 == null) ||(pSVar8 = ((*ppWVar1).fields)._targetWeatherStartTimes, pSVar8 == null)) goto label_0586279d;
				pSVar8.Clear();
				if ((*ppWVar1 == null) ||(pSVar8 = ((*ppWVar1).fields)._targetWeatherEndTimes, pSVar8 == null)) goto label_0586279d;
				pSVar8.Clear();
				if (*ppWVar1 == null) goto label_0586279d;
				local_78 = (object)CONCAT44(local_78._4_4_, ((*ppWVar1).fields)._currentTime);
				pIVar16 = __this_01.GetValue();
				if (pIVar16 == null) goto label_0586279d;
				if ((pIVar16.klass._1).element_class != *(Il2CppClass*)(g_data_07556740 + 0x40)) goto label_058627a2;
				pfVar17 = il2cpp_vm_Object_Unbox(pIVar16);
				local_78 = (object)CONCAT44(local_78._4_4_, local_78._0_4_ + *pfVar17);
				__this_02 = Util.EnumToList<WeatherEffect>();
				if (__this_02 == null) goto label_0586279d;
				local_98.GetEnumerator(__this_02) ;
				local_58 = (object)CONCAT44(uStack_84, local_88);
				local_68 = local_98;
				local_98 = (byte[])0x0;
				while (bVar12 = local_68.MoveNext()) {
					pWVar10 = *ppWVar1;
					if (pWVar10 == null) {
						throw new NullReferenceException();
					}
					pSVar8 = pWVar10._targetWeatherStartTimes;
					if (pSVar8 == null) {
						throw new NullReferenceException();
					}
					iVar13 = (int32_t)local_58;
					pSVar8.Add((int32_t)local_58, pWVar10._currentTime);
					if (*ppWVar1 == null) {
						throw new NullReferenceException();
					}
					pSVar8 = ((*ppWVar1).fields)._targetWeatherEndTimes;
					if (pSVar8 == null) {
						throw new NullReferenceException();
					}
					pSVar8.Add(iVar13, local_78._0_4_);
				}
				local_68.Dispose();
				pWVar10 = *ppWVar1;
				goto joined_r0x05862631;
			case 0xc:
				if ((*ppWVar1 == null) ||(pSVar8 = ((*ppWVar1).fields)._targetWeatherStartTimes, pSVar8 == null)) goto label_0586279d;
				bVar12 = pSVar8.ContainsKey(__this_01.Effect);
				if (!bVar12) {
					if ((*ppWVar1 == null) ||(pSVar8 = ((*ppWVar1).fields)._targetWeatherStartTimes, pSVar8 == null)) goto label_0586279d;
					pSVar8.Add(__this_01.Effect, 0.0);
					if ((*ppWVar1 == null) ||(pSVar8 = ((*ppWVar1).fields)._targetWeatherEndTimes, pSVar8 == null)) goto label_0586279d;
					pSVar8.Add(__this_01.Effect, 0.0);
				}
				if ((*ppWVar1 == null) ||(pSVar20 = ((*ppWVar1).fields)._startWeather, pSVar20 == null)) goto label_0586279d;
				pSVar9 = pSVar20.Settings;
				local_98 = (byte[])typeof(WeatherEffect);
				local_88 = __this_01.Effect;
				pSVar19 = local_98.ToString();
				if (pSVar9 == null) goto label_0586279d;
				pIVar16 = pSVar9.get_Item((object)pSVar19);
				if ((*ppWVar1 == null) ||(pSVar20 = ((*ppWVar1).fields)._currentWeather, local_78 = pIVar16, pSVar20 == null)) goto label_0586279d;
				pSVar9 = pSVar20.Settings;
				local_48.klass = (Enum)typeof(WeatherEffect);
				local_48.monitor = (IntPtr)0xffffffffffffffff;
				pSVar19 = local_48.ToString();
				if (pSVar9 == null) goto label_0586279d;
				pIVar16 = pSVar9.get_Item((object)pSVar19);
				if (pIVar16 != null) {
					bVar2 = (typeof(BaseSetting)._2).typeHierarchyDepth;
					if (((pIVar16.klass._2).typeHierarchyDepth < bVar2) ||((pIVar16.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(BaseSetting))) {
						throw new InvalidCastException();
					}
				}
				pWVar10 = *ppWVar1;
				if ((pWVar10 == null) ||(pSVar8 = pWVar10._targetWeatherStartTimes, pSVar8 == null)) goto label_0586279d;
				local_50 = pIVar16;
				pSVar8.set_Item(__this_01.Effect, pWVar10._currentTime);
				pWVar10 = *ppWVar1;
				if (pWVar10 == null) goto label_0586279d;
				pSVar8 = pWVar10._targetWeatherEndTimes;
				iVar13 = __this_01.Effect;
				local_6c = pWVar10._currentTime;
				pIVar16 = __this_01.GetValue();
				if ((pSVar8 == null) ||(pIVar16 == null)) goto label_0586279d;
				if ((pIVar16.klass._1).element_class != *(Il2CppClass*)(g_data_07556740 + 0x40)) goto label_058627a2;
				pfVar17 = il2cpp_vm_Object_Unbox(pIVar16);
				pSVar8.set_Item(iVar13, local_6c + *pfVar17);
				if (local_78 == null) goto label_0586279d;
				pIVar21 = local_78.klass;
				bVar2 = (typeof(BaseSetting)._2).typeHierarchyDepth;
				pIVar16 = local_78;
				if (((pIVar21._2).typeHierarchyDepth < bVar2) ||((pIVar21._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BaseSetting))) goto label_058627a5;
				(*pIVar21.vtable[10].methodPtr)(local_78,local_50,pIVar21.vtable[10].method);
				pWVar10 = *ppWVar1;
	joined_r0x05862631: ;
				if (pWVar10 == null) goto label_0586279d;
				pWVar10._needSync = true;
				break;
			case 0xd:
				if (*ppWVar1 == null) goto label_0586279d;
				__this_00 = ((*ppWVar1).fields)._currentScheduleWait;
				pIVar16 = __this_01.GetValue();
				if ((__this_00 == null) ||(pIVar16 == null)) goto label_0586279d;
				if ((pIVar16.klass._1).element_class != *(Il2CppClass*)(g_data_07556740 + 0x40)) goto label_058627a2;
				pfVar17 = il2cpp_vm_Object_Unbox(pIVar16);
				__this_00.set_Item((object)this, *pfVar17);
				bVar22 = true;
				break;
			case 0xe:
				pSVar19 = (String)__this_01.GetValue();
				if ((pSVar19 != null) && (pSVar19.klass != g_data_07556758)) goto label_058627aa;
				bVar12 = (pSVar19 != "NextLine");
				if (bVar12) {
					pSVar6 = (Dictionary<object, int>)this._scheduleLabels;
					if (pSVar6 == null) goto label_0586279d;
					bVar12 = pSVar6.ContainsKey((object)pSVar19);
					if (bVar12) {
						pSVar5 = this._callerStack;
						if (pSVar5 == null) goto label_0586279d;
						pSVar5.AddLast(this._currentScheduleLine);
						pSVar5 = this._callerStack;
						if (pSVar5 == null) goto label_0586279d;
						if (200 < pSVar5.count) {
							pSVar5.RemoveFirst();
						}
						pSVar6 = (Dictionary<object, int>)this._scheduleLabels;
						if (pSVar6 == null) goto label_0586279d;
						iVar13 = pSVar6.get_Item((object)pSVar19);
						this._currentScheduleLine = iVar13;
					}
				}
				break;
			case 0x10:
				pSVar5 = this._callerStack;
				if (pSVar5 == null) goto label_0586279d;
				if (0 < pSVar5.count) {
					pSVar18 = pSVar5.Last;
					if (pSVar18 == null) goto label_0586279d;
					this._currentScheduleLine = *(int)&pSVar18.item;
					pSVar5 = this._callerStack;
					if (pSVar5 == null) goto label_0586279d;
					pSVar5.RemoveLast();
				}
			}
			iVar14 = this._currentScheduleLine + 1;
			this._currentScheduleLine = iVar14;
			pWVar3 = this.Schedule;
			if ((pWVar3 == null) ||(pSVar4 = pWVar3.Events, pSVar4 == null)) {
	label_0586279d: ;
				throw new NullReferenceException();
			}
			if (pSVar4._size <= iVar14) {
				if (((*ppWVar1 == null) ||(pSVar20 = ((*ppWVar1).fields)._currentWeather, pSVar20 == null)) ||(pSVar11 = pSVar20.ScheduleLoop, pSVar11 == null)) goto label_0586279d;
				if (pSVar11._value != false) {
					this._currentScheduleLine = 0;
				}
			}
			iVar23 = iVar23 + 1;
			if (bVar22) {
				return;
			}
		} while(true);
	}
}
