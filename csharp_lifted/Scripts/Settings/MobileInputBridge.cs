// ==================== AoTTG2 cross-reference ====================
// Type: Settings.MobileInputBridge
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Settings/MobileInputBridge.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UI;
using UnityEngine;

namespace Settings;

[Token(Token = "0x200009B")]
internal class MobileInputBridge : MonoBehaviour
{
	[Token(Token = "0x400031F")]
	[FieldOffset(Offset = "0x0")]
	private static MobileInputBridge _instance;

	[Token(Token = "0x4000320")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<string, MobileInput> _inputs;

	[Token(Token = "0x4000321")]
	[FieldOffset(Offset = "0x10")]
	private static Vector2 _moveVector;

	[Token(Token = "0x4000322")]
	[FieldOffset(Offset = "0x18")]
	private static Vector2 _lookDelta;

	[Token(Token = "0x4000323")]
	[FieldOffset(Offset = "0x20")]
	private static int _lookDeltaFrame;

	[Token(Token = "0x4000324")]
	[FieldOffset(Offset = "0x24")]
	private static int _lookConsumedFrame;

	[Token(Token = "0x4000325")]
	[FieldOffset(Offset = "0x28")]
	private static bool _autoGas;

	[Token(Token = "0x4000326")]
	[FieldOffset(Offset = "0x29")]
	private static bool _autoReelIn;

	[Token(Token = "0x4000327")]
	[FieldOffset(Offset = "0x2A")]
	private static bool _autoReelOut;

	[Token(Token = "0x4000328")]
	[FieldOffset(Offset = "0x30")]
	private static MobileInput _forwardInput;

	[Token(Token = "0x4000329")]
	[FieldOffset(Offset = "0x38")]
	private static MobileInput _backInput;

	[Token(Token = "0x400032A")]
	[FieldOffset(Offset = "0x40")]
	private static MobileInput _leftInput;

	[Token(Token = "0x400032B")]
	[FieldOffset(Offset = "0x48")]
	private static MobileInput _rightInput;

	[Token(Token = "0x400032C")]
	private const float MovePressThreshold = 0.38f;

	[Token(Token = "0x400032D")]
	[FieldOffset(Offset = "0x50")]
	public static bool AutoUseGasEnabled;

	[Token(Token = "0x400032E")]
	[FieldOffset(Offset = "0x58")]
	[CompilerGenerated]
	private static Action m_OnStateCleared;

	[Token(Token = "0x170000A1")]
	public static Vector2 RawMoveVector
	{
		[Token(Token = "0x600045A")]
		[Address(RVA = "0x58CEAF0", Offset = "0x58CDAF0", VA = "0x58CEAF0")]
		get
		{
			// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$get_RawMoveVector): 1 lines keep C-only constructs
			uint uVar1;

			if (Il2CppMethodInitialized_07545c59 == false) {
				Il2CppMethodInitialized_07545c59 = true;
				uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return (Vector2)(MobileInputBridge._moveVector);
			}
			return (UnityEngine_Vector2_o) *(Vector2)((long)(typeof(MobileInputBridge)).static_fields + 0x10);
		}
	}

	[Token(Token = "0x170000A2")]
	public static bool Enabled
	{
		[Token(Token = "0x600045B")]
		[Address(RVA = "0x58CB850", Offset = "0x58CA850", VA = "0x58CB850")]
		get
		{
			// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$get_Enabled): clean
			return false;
		}
	}

	[Token(Token = "0x14000001")]
	public static event Action OnStateCleared
	{
		[Token(Token = "0x6000458")]
		[Address(RVA = "0x58CE930", Offset = "0x58CD930", VA = "0x58CE930")]
		[CompilerGenerated]
		add
		{
			// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$add_OnStateCleared): 2 lines keep C-only constructs
			Action pSVar1;
			Delegate value_00;
			Action a;
			bool bVar2;

			a = MobileInputBridge.OnStateCleared;
			do {
				value_00 = Delegate.Combine((Delegate)a, (Delegate)value);
				if ((value_00 != null) &&((Action)value_00.klass != typeof(Action))) {
					throw new InvalidCastException();
				}
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&MobileInputBridge.OnStateCleared, value_00, a);
				bVar2 = pSVar1 != a;
				a = pSVar1;
			} while (bVar2);
			return;
		}
		[Token(Token = "0x6000459")]
		[Address(RVA = "0x58CEA10", Offset = "0x58CDA10", VA = "0x58CEA10")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$remove_OnStateCleared): 2 lines keep C-only constructs
			Action pSVar1;
			Delegate value_00;
			Action source;
			bool bVar2;

			source = MobileInputBridge.OnStateCleared;
			do {
				value_00 = Delegate.Remove((Delegate)source, (Delegate)value);
				if ((value_00 != null) &&((Action)value_00.klass != typeof(Action))) {
					throw new InvalidCastException();
				}
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&MobileInputBridge.OnStateCleared, value_00, source);
				bVar2 = pSVar1 != source;
				source = pSVar1;
			} while (bVar2);
			return;
		}
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x58CEB60", Offset = "0x58CDB60", VA = "0x58CEB60")]
	private static bool IsEnabledInSettings()
	{
		// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$IsEnabledInSettings): clean
		GeneralSettings pSVar1;
		BoolSetting pSVar2;

		pSVar1 = SettingsManager.GeneralSettings;
		if (pSVar1 == null) {
			return true;
		}
		pSVar2 = pSVar1.MobileInputEnabled;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		return pSVar2._value != false;
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x58CEBD0", Offset = "0x58CDBD0", VA = "0x58CEBD0")]
	public static void Init()
	{
		// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$Init): 3 lines keep C-only constructs
		MobileInputBridge x;
		object pIVar1;
		bool bVar2;
		Func<bool> pSVar3;
		MobileInput pSVar4;
		Settings_MobileInputBridge___c_StaticFields pSVar5;

		Input.simulateMouseWithTouches = false;
		x = MobileInputBridge._instance;
		pSVar3 = null;
		bVar2 = ((Object)x == null);
		if (bVar2) {
			pSVar3 = (Func<bool>)SingletonFactory.CreateSingleton<MobileInputBridge>((object)MobileInputBridge._instance);
			MobileInputBridge._instance = (MobileInputBridge)pSVar3;
		}
		MobileInputLayoutManager.MigrateCustomLayouts();
		MobileInputBridge.RegisterMovementInputs();
		MobileInputBridge.RegisterDefaultBindings();
		pSVar4 = MobileInputBridge.GetActionInput("Human.Jump");
		if (pSVar4 != null) {
			if ((typeof(MobileInputBridge.c)._2).cctor_finished_or_no_cctor == 0) {
				pSVar5 = typeof(MobileInputBridge.c).static_fields;
				pSVar3 = pSVar5.__9__23_0;
			}
			else {
				pSVar5 = typeof(MobileInputBridge.c).static_fields;
				pSVar3 = pSVar5.__9__23_0;
			}
			if (pSVar3 == null) {
				if (((typeof(MobileInputBridge.c))._2).cctor_finished_or_no_cctor == 0) {
					pSVar5 = typeof(MobileInputBridge.c).static_fields;
				}
				pIVar1 = (object)pSVar5.__9;
				pSVar3 = new Func<bool>(pIVar1, (intptr_t)MethodInfo_Settings_MobileInputBridge_c_Init_b__23_0);
				pSVar5 = typeof(MobileInputBridge.c).static_fields;
				pSVar5.__9__23_0 = pSVar3;
			}
			pSVar4._pressedOverride = pSVar3;
		}
		pSVar4 = MobileInputBridge.GetActionInput("Human.ReelIn");
		if (pSVar4 != null) {
			if ((typeof(MobileInputBridge.c)._2).cctor_finished_or_no_cctor == 0) {
				pSVar5 = typeof(MobileInputBridge.c).static_fields;
				pSVar3 = pSVar5.__9__23_1;
			}
			else {
				pSVar5 = typeof(MobileInputBridge.c).static_fields;
				pSVar3 = pSVar5.__9__23_1;
			}
			if (pSVar3 == null) {
				if (((typeof(MobileInputBridge.c))._2).cctor_finished_or_no_cctor == 0) {
					pSVar5 = typeof(MobileInputBridge.c).static_fields;
				}
				pIVar1 = (object)pSVar5.__9;
				pSVar3 = new Func<bool>(pIVar1, (intptr_t)MethodInfo_Settings_MobileInputBridge_c_Init_b__23_1);
				pSVar5 = typeof(MobileInputBridge.c).static_fields;
				pSVar5.__9__23_1 = pSVar3;
			}
			pSVar4._pressedOverride = pSVar3;
		}
		pSVar4 = MobileInputBridge.GetActionInput("Human.ReelOut");
		if (pSVar4 == null) {
			return;
		}
		if ((typeof(MobileInputBridge.c)._2).cctor_finished_or_no_cctor == 0) {
			pSVar5 = typeof(MobileInputBridge.c).static_fields;
			pSVar3 = pSVar5.__9__23_2;
		}
		else {
			pSVar5 = typeof(MobileInputBridge.c).static_fields;
			pSVar3 = pSVar5.__9__23_2;
		}
		if (pSVar3 == null) {
			if (((typeof(MobileInputBridge.c))._2).cctor_finished_or_no_cctor == 0) {
				pSVar5 = typeof(MobileInputBridge.c).static_fields;
			}
			pIVar1 = (object)pSVar5.__9;
			pSVar3 = new Func<bool>(pIVar1, (intptr_t)MethodInfo_Settings_MobileInputBridge_c_Init_b__23_2);
			pSVar5 = typeof(MobileInputBridge.c).static_fields;
			pSVar5.__9__23_2 = pSVar3;
		}
		pSVar4._pressedOverride = pSVar3;
		return;
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x58CF6F0", Offset = "0x58CE6F0", VA = "0x58CF6F0")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$LateUpdate): 11 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		IntPtr pvVar1;
		object pIVar2;
		bool bVar3;
		byte uVar4;
		int iVar5;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_01;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o SStack_48;
		byte puStack_20;

		SStack_48._dictionary = null;
		SStack_48._index = 0;
		SStack_48._version = 0;
		SStack_48._currentValue = null;
		__this_00 = (Dictionary<object, object>)MobileInputBridge._inputs;
		if (__this_00 != null) {
			__this_01 = __this_00.Values;
			if (__this_01 != null) {
				SStack_48 = __this_01.GetEnumerator();
				puStack_20 = (byte)&SStack_48;
				while(true) {
					bVar3 = SStack_48.MoveNext();
					pIVar2 = SStack_48._currentValue;
					if (!bVar3) {
						SStack_48.Dispose();
						return;
					}
					if (SStack_48._currentValue == null) break;
					if (-1 < *(int)((long)&SStack_48._currentValue[2].klass + 4)) {
						iVar5 = Time.frameCount;
						if ((*(int)((long)&pIVar2[2].klass + 4) <= iVar5) &&(*(uint)((long)&pIVar2[2].klass + 4) = 0xffffffff, *(sbyte)&pIVar2[1].klass != false)) {
							*(byte)&pIVar2[1].klass = 0;
							iVar5 = Time.frameCount;
							*(int)&pIVar2[1].monitor = iVar5;
							*(uint)((long)&pIVar2[1].klass + 4) = 0xffffffff;
							*(uint)((long)&pIVar2[1].monitor + 4) = 0xffffffff;
						}
					}
					uVar4 = 1;
					if (*(sbyte)&pIVar2[1].klass == false) {
						pvVar1 = pIVar2[2].monitor;
						if (pvVar1 == null) {
							uVar4 = 0;
						}
						else {
							uVar4 = (**(code*)((long)pvVar1 + 0x18))(*(ulong)((long)pvVar1 + 0x40),*(ulong)((long)pvVar1 + 0x28));
						}
					}
					*(byte)((long)&pIVar2[1].klass + 1) = uVar4;
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x58CF8F0", Offset = "0x58CE8F0", VA = "0x58CF8F0")]
	public static void Bind(KeybindSetting keybind, string actionId)
	{
		// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$Bind): clean
		bool bVar1;
		MobileInput pSVar2;
		MethodInfo method_00;

		if (keybind != null) {
			bVar1 = String.IsNullOrEmpty(actionId);
			if (!bVar1) {
				method_00 = (MethodInfo *)"None";
				bVar1 = (actionId == "None");
				if (!bVar1) {
					pSVar2 = MobileInputBridge.GetActionInput(actionId);
					keybind.MobileInput = pSVar2;
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x58CF990", Offset = "0x58CE990", VA = "0x58CF990")]
	public static bool GetKey(KeybindSetting keybind)
	{
		// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$GetKey): clean
		if ((keybind != null) &&(keybind.MobileInput != null)) {
			if ((typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor == 0) {
				return false;
			}
		}
		return false;
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x58CF4D0", Offset = "0x58CE4D0", VA = "0x58CF4D0")]
	public static MobileInput GetActionInput(string id)
	{
		// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$GetActionInput): 3 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		MobileInput pSVar3;
		MobileInput pSVar4;
		Dictionary<MobileInputLayoutRole, List<string>> __this;
		MobileInput local_28;
		MobileInputBinding local_20;

		local_20 = null;
		local_28 = null;
		if ((typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor == 0) {
			pSVar3 = MobileInputBridge.GetMovementInput(id);
			pSVar4 = local_28;
		}
		else {
			pSVar3 = MobileInputBridge.GetMovementInput(id);
			pSVar4 = local_28;
		}
		local_28 = pSVar3;
		if (local_28 == null) {
			local_28 = pSVar4;
			if (((typeof(MobileInputBindingRegistry))._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar2 = MobileInputBindingRegistry.TryGetBinding(id, ref local_20);
			if (bVar2) {
				if ((local_20 == null) ||(pSVar1 = (Dictionary<object, object>)MobileInputBridge._inputs, pSVar1 == null)) {
	label_059cf6de: ;
					throw new NullReferenceException();
				}
				bVar2 = pSVar1.TryGetValue((object)local_20._Id_k__BackingField, (object*)&local_28);
				if (!bVar2) {
					if (Il2CppMethodInitialized_07545c56 == false) {
						il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_MobileInputLayoutRole_List_string_ctor) ;
						Il2CppMethodInitialized_07545c56 = true;
					}
					pSVar4._pressedFrame = -1;
					pSVar4._releasedFrame = -1;
					pSVar4._keyDownReturnedFrame = -1;
					pSVar4._keyUpReturnedFrame = -1;
					pSVar4._oneFrameReleaseFrame = -1;
					__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<MobileInputLayoutRole, List<string>>));
					__this = new Dictionary<Int32Enum, object>();
					pSVar4._displayNames = __this;
					pSVar4 = new MobileInput();
					local_28 = pSVar4;
					if ((local_20 == null) ||(pSVar1 = (Dictionary<object, object>)MobileInputBridge._inputs, pSVar1 == null)) goto label_059cf6de;
					pSVar1.set_Item((object)local_20._Id_k__BackingField, (object)local_28);
				}
			}
			else {
				local_28 = null;
			}
		}
		return local_28;
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x58CFC90", Offset = "0x58CEC90", VA = "0x58CFC90")]
	public static MobileInput[] GetActionInputs(string[] actionIds)
	{
		// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$GetActionInputs): 5 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		String pSVar3;
		MethodInfo pMVar4;
		List<MobileInput> __this;
		ulong uVar5;
		MethodInfo item;
		MobileInput pSVar6;
		MobileInput[] pSVar7;
		ulong uVar8;

		if (actionIds == null) {
			pSVar7 = (MobileInput[])new MobileInput[0];
			return pSVar7;
		}
		__this = new List<MobileInput>();
		if (0 < (int)actionIds.Length) {
			uVar5 = actionIds.Length & 0xffffffff;
			if (__this == null) {
				uVar8 = 0;
				do {
					if (uVar5 <= uVar8) goto label_059cfe8f;
					pSVar3 = actionIds[uVar8];
					pSVar6 = MobileInputBridge.GetActionInput(pSVar3);
					if (pSVar6 != null) goto label_059cfe94;
					uVar8 = uVar8 + 1;
					uVar2 = (uint)actionIds.Length;
					uVar5 = (ulong)uVar2;
				} while ((long)uVar8 < (long)(int)uVar2);
			}
			else {
				uVar8 = 0;
				do {
					if (uVar5 <= uVar8) {
	label_059cfe8f: ;
						throw new IndexOutOfRangeException();
					}
					pSVar3 = actionIds[uVar8];
					if ((typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor == 0) {
						item = (MethodInfo)MobileInputBridge.GetActionInput(pSVar3);
						pMVar4 = MethodInfo_System_Collections_Generic_List_MobileInput_Add;
					}
					else {
						item = (MethodInfo)MobileInputBridge.GetActionInput(pSVar3);
						pMVar4 = MethodInfo_System_Collections_Generic_List_MobileInput_Add;
					}
					MethodInfo_System_Collections_Generic_List_MobileInput_Add = pMVar4;
					if (item != null) {
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pSVar7 = __this._items;
						if (pSVar7 == null) goto label_059cfe94;
						uVar2 = __this._size;
						if (uVar2 < (uint)pSVar7.Length) {
							__this._size = uVar2 + 1;
							pSVar7[(int)uVar2] = (MobileInput)item;
						}
						else {
							__this.AddWithResize((object)item);
						}
					}
					uVar8 = uVar8 + 1;
					uVar2 = (uint)actionIds.Length;
					uVar5 = (ulong)uVar2;
				} while ((long)uVar8 < (long)(int)uVar2);
			}
		}
		if (__this != null) {
			pSVar7 = (MobileInput[])__this.ToArray();
			return pSVar7;
		}
	label_059cfe94: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x58CFEA0", Offset = "0x58CEEA0", VA = "0x58CFEA0")]
	public static void RegisterActionDisplayName(string actionId, MobileInputLayoutRole role, string displayName)
	{
		// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$RegisterActionDisplayName): 2 lines keep C-only constructs
		uint uVar1;
		MobileInput __this;
		uint in_register_00000034;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT44(in_register_00000034, role);
		if (Il2CppMethodInitialized_07545c60 == false) {
			Il2CppMethodInitialized_07545c60 = true;
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = MobileInputBridge.GetActionInput(actionId);
		}
		else {
			__this = MobileInputBridge.GetActionInput(actionId);
		}
		if (__this == null) {
			return;
		}
		__this.RegisterDisplayName(role, displayName);
		return;
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x58CFF30", Offset = "0x58CEF30", VA = "0x58CFF30")]
	public static void RegisterActionDisplayNames(string[] actionIds, MobileInputLayoutRole role, string displayName)
	{
		// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$RegisterActionDisplayNames): 2 lines keep C-only constructs
		uint uVar1;
		String id;
		ulong uVar2;
		MobileInput __this;
		ulong uVar3;
		uint in_register_00000034;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT44(in_register_00000034, role);
		if ((actionIds != null) && (0 < (int)actionIds.Length)) {
			uVar2 = actionIds.Length & 0xffffffff;
			uVar3 = 0;
			do {
				if (uVar2 <= uVar3) {
					throw new IndexOutOfRangeException();
				}
				id = actionIds[uVar3];
				if ((typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor == 0) {
					if (Il2CppMethodInitialized_07545c60 == false) goto label_059cfffe;
	label_059cffc9: ;
					if ((typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor != 0) goto label_059cffd6;
	label_059d001a: ;
					__this = MobileInputBridge.GetActionInput(id);
				}
				else {
					if (Il2CppMethodInitialized_07545c60 != false) goto label_059cffc9;
	label_059cfffe: ;
					Il2CppMethodInitialized_07545c60 = true;
					if ((typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor == 0) goto label_059d001a;
	label_059cffd6: ;
					__this = MobileInputBridge.GetActionInput(id);
				}
				if (__this != null) {
					__this.RegisterDisplayName(role, displayName);
				}
				uVar3 = uVar3 + 1;
				uVar1 = (uint)actionIds.Length;
				uVar2 = (ulong)uVar1;
				method = (MethodInfo)(long)(int)uVar1;
			} while ((long)uVar3 < (long)method);
		}
		return;
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x58D0060", Offset = "0x58CF060", VA = "0x58D0060")]
	public static void ClearDisplayNames()
	{
		// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$ClearDisplayNames): 5 lines keep C-only constructs
		Dictionary<object, object> __this;
		object pIVar1;
		bool bVar2;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_00;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
		byte local_28;

		local_48._dictionary = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._currentValue = null;
		__this = (Dictionary<object, object>)MobileInputBridge._inputs;
		if (__this != null) {
			__this_00 = __this.Values;
			if (__this_00 != null) {
				local_48 = __this_00.GetEnumerator();
				local_28 = (byte)&local_48;
				while(true) {
					bVar2 = local_48.MoveNext();
					pIVar1 = local_48._currentValue;
					if (!bVar2) {
						local_48.Dispose();
						return;
					}
					if (local_48._currentValue == null) break;
					if (pIVar1[3].klass == null) break;
					pIVar1[3].klass.Clear();
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x58D0220", Offset = "0x58CF220", VA = "0x58D0220")]
	public static void SetMoveVector(Vector2 move)
	{
		// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$SetMoveVector): 27 lines keep C-only constructs
		uint uVar1;
		MobileInput pSVar2;
		byte[] auVar3 = new byte[16];
		MobileInputBridge klass;
		int iVar4;
		Settings_MobileInputBridge_StaticFields pSVar5;
		float fVar6;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		Vector2 UVar7;
		byte[] auVar8 = new byte[16];
		byte[] auVar9 = new byte[16];

		auVar8._8_4_ = in_XMM0_Dc;
		auVar8._0_8_ = move;
		auVar8._12_4_ = in_XMM0_Dd;
		auVar9._8_4_ = in_XMM0_Dc;
		auVar9._0_8_ = move;
		auVar9._12_4_ = in_XMM0_Dd;
		if (Il2CppMethodInitialized_07545c63 == false) {
			Il2CppMethodInitialized_07545c63 = true;
			auVar8 = auVar9;
		}
		if (Il2CppMethodInitialized_07545ca1 == false) {
			Il2CppMethodInitialized_07545ca1 = true;
			auVar8 = auVar9;
		}
		UVar7 = auVar8._0_8_;
		fVar6 = auVar8._4_4_ * auVar8._4_4_ + auVar8._0_4_ * auVar8._0_4_;
		if (1.0 < fVar6) {
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
				auVar8 = auVar9;
				if (fVar6 < 0.0) goto label_059d02c4;
	label_059d02a3: ;
				auVar9 = auVar8;
				fVar6 = SQRT(fVar6);
			}
			else {
				if (0.0 <= fVar6) goto label_059d02a3;
	label_059d02c4: ;
				fVar6 = sqrtf(fVar6);
			}
			auVar3._4_4_ = fVar6;
			auVar3._0_4_ = fVar6;
			auVar3._8_4_ = fVar6;
			auVar3._12_4_ = fVar6;
			auVar9 = divps(auVar9, auVar3);
			UVar7 = auVar9._0_8_;
		}
		klass = typeof(MobileInputBridge);
		(MobileInputBridge._moveVector) = UVar7;
		pSVar5 = klass.static_fields;
		pSVar2 = pSVar5._forwardInput;
		if (pSVar2 == null) {
	label_059d0377: ;
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((klass._2).cctor_finished_or_no_cctor == 0) {
				pSVar5 = typeof(MobileInputBridge).static_fields;
			}
			fVar6 = (pSVar5._moveVector).y;
			pSVar2._oneFrameReleaseFrame = -1;
			if (pSVar2._current == 0.38 < fVar6) goto label_059d0377;
			pSVar2._current = 0.38 < fVar6;
			iVar4 = Time.frameCount;
			if (0.38 < fVar6) {
				pSVar2._pressedFrame = iVar4;
				pSVar2._releasedFrame = -1;
				pSVar2._keyUpReturnedFrame = -1;
				goto label_059d0377;
			}
			pSVar2._releasedFrame = iVar4;
			pSVar2._pressedFrame = -1;
			pSVar2._keyDownReturnedFrame = -1;
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar5 = typeof(MobileInputBridge).static_fields;
		pSVar2 = pSVar5._backInput;
		if (pSVar2 == null) {
	label_059d0404: ;
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor == 0) {
				pSVar5 = typeof(MobileInputBridge).static_fields;
			}
			fVar6 = (pSVar5._moveVector).y;
			pSVar2._oneFrameReleaseFrame = -1;
			if (pSVar2._current == fVar6 < -0.38) goto label_059d0404;
			pSVar2._current = fVar6 < -0.38;
			iVar4 = Time.frameCount;
			if (fVar6 < -0.38) {
				pSVar2._pressedFrame = iVar4;
				pSVar2._releasedFrame = -1;
				pSVar2._keyUpReturnedFrame = -1;
				goto label_059d0404;
			}
			pSVar2._releasedFrame = iVar4;
			pSVar2._pressedFrame = -1;
			pSVar2._keyDownReturnedFrame = -1;
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar5 = typeof(MobileInputBridge).static_fields;
		pSVar2 = pSVar5._rightInput;
		if (pSVar2 != null) {
			if ((typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor == 0) {
				pSVar5 = typeof(MobileInputBridge).static_fields;
			}
			fVar6 = (pSVar5._moveVector).x;
			pSVar2._oneFrameReleaseFrame = -1;
			if (pSVar2._current != 0.38 < fVar6) {
				pSVar2._current = 0.38 < fVar6;
				iVar4 = Time.frameCount;
				if (fVar6 <= 0.38) {
					pSVar2._releasedFrame = iVar4;
					pSVar2._pressedFrame = -1;
					pSVar2._keyDownReturnedFrame = -1;
					uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
					goto joined_r0x059d0497;
				}
				pSVar2._pressedFrame = iVar4;
				pSVar2._releasedFrame = -1;
				pSVar2._keyUpReturnedFrame = -1;
			}
		}
		uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
	joined_r0x059d0497: ;
		if (uVar1 == 0) {
		}
		pSVar2 = MobileInputBridge._leftInput;
		if (pSVar2 != null) {
			fVar6 = (MobileInputBridge._moveVector).x;
			pSVar2._oneFrameReleaseFrame = -1;
			if (pSVar2._current != fVar6 < -0.38) {
				pSVar2._current = fVar6 < -0.38;
				iVar4 = Time.frameCount;
				if (-0.38 <= fVar6) {
					pSVar2._releasedFrame = iVar4;
					pSVar2._pressedFrame = -1;
					pSVar2._keyDownReturnedFrame = -1;
					return;
				}
				pSVar2._pressedFrame = iVar4;
				pSVar2._releasedFrame = -1;
				pSVar2._keyUpReturnedFrame = -1;
			}
		}
		return;
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x58D05B0", Offset = "0x58CF5B0", VA = "0x58D05B0")]
	public static void AddLookDelta(Vector2 delta)
	{
		// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$AddLookDelta): clean
		if ((typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor == 0) {
			return;
		}
		return;
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x58D06D0", Offset = "0x58CF6D0", VA = "0x58D06D0")]
	public static void SetAutoGas(bool active)
	{
		// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$SetAutoGas): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07545c65 == false) {
			Il2CppMethodInitialized_07545c65 = true;
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			MobileInputBridge._autoGas = false;
			return;
		}
		*(byte)((long)(typeof(MobileInputBridge)).static_fields + 0x28) = 0;
		return;
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x58D0740", Offset = "0x58CF740", VA = "0x58D0740")]
	public static void SetAutoReel(bool reelIn, bool reelOut)
	{
		// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$SetAutoReel): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07545c66 == false) {
			Il2CppMethodInitialized_07545c66 = true;
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			MobileInputBridge._autoReelIn = false;
			MobileInputBridge._autoReelOut = false;
			return;
		}
		*(ushort)((long)(typeof(MobileInputBridge)).static_fields + 0x29) = 0;
		return;
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x58D07B0", Offset = "0x58CF7B0", VA = "0x58D07B0")]
	public static Vector2 ConsumeLookDelta()
	{
		// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$ConsumeLookDelta): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07545c67 == false) {
			Il2CppMethodInitialized_07545c67 = true;
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		return (Vector2)(Vector2.zeroVector);
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x58D05F0", Offset = "0x58CF5F0", VA = "0x58D05F0")]
	private static void DiscardUnconsumedLookDelta()
	{
		// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$DiscardUnconsumedLookDelta): clean
		Vector2 UVar1;
		int iVar2;
		int iVar3;

		iVar2 = MobileInputBridge._lookDeltaFrame;
		iVar3 = Time.frameCount;
		if (iVar2 < iVar3) {
			iVar2 = MobileInputBridge._lookConsumedFrame;
			iVar3 = Time.frameCount;
			if (iVar2 < iVar3 + -1) {
				UVar1 = (Vector2.zeroVector);
				(MobileInputBridge._lookDelta) = UVar1;
			}
		}
		return;
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x58D0840", Offset = "0x58CF840", VA = "0x58D0840")]
	public static void ClearState()
	{
		// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$ClearState): 9 lines keep C-only constructs
		Vector2 UVar1;
		Dictionary<object, object> __this;
		Settings_MobileInputBridge_StaticFields pSVar2;
		Action pSVar3;
		bool bVar4;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_00;
		MobileInputBridge pSVar5;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_58;
		byte local_30;
		Vector2 local_28;

		local_58._dictionary = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._currentValue = null;
		__this = (Dictionary<object, object>)MobileInputBridge._inputs;
		if (__this != null) {
			__this_00 = __this.Values;
			if (__this_00 != null) {
				local_58 = __this_00.GetEnumerator();
				local_30 = (byte)&local_58;
				while(true) {
					bVar4 = local_58.MoveNext();
					if (!bVar4) {
						local_58.Dispose();
						pSVar5 = typeof(MobileInputBridge);
						UVar1 = (Vector2.zeroVector);
						if ((typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor == 0) {
							local_28 = UVar1;
							pSVar5 = typeof(MobileInputBridge);
							bVar4 = Il2CppMethodInitialized_0753ecc8 == false;
							(MobileInputBridge._moveVector) = local_28;
							if (bVar4) {
								Il2CppMethodInitialized_0753ecc8 = true;
								pSVar5 = typeof(MobileInputBridge);
							}
						}
						else {
							(MobileInputBridge._moveVector) = UVar1;
						}
						(pSVar5.static_fields._lookDelta) =(Vector2.zeroVector);
						pSVar2 = pSVar5.static_fields;
						pSVar2._autoGas = false;
						pSVar2._autoReelIn = false;
						pSVar2._autoReelOut = false;
						pSVar3 = pSVar2.OnStateCleared;
						if (pSVar3 != null) {
							(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar3.method);
						}
						return;
					}
					if (local_58._currentValue == null) break;
					*(uint)((long)&local_58._currentValue[2].klass + 4) = 0xffffffff;
					*(ushort)&local_58._currentValue[1].klass = 0;
					*(uint)((long)&local_58._currentValue[1].klass + 4) = 0xffffffff;
					*(uint)&local_58._currentValue[1].monitor = 0xffffffff;
					*(uint)((long)&local_58._currentValue[1].monitor + 4) = 0xffffffff;
					*(uint)&local_58._currentValue[2].klass = 0xffffffff;
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x58D0AB0", Offset = "0x58CFAB0", VA = "0x58D0AB0")]
	public static bool TryGetKeyName(KeybindSetting keybind, out string keyName)
	{
		// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$TryGetKeyName): clean
		*keyName = (String)**(ulong*)(g_data_07556758 + 0xb8);
		if ((typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor == 0) {
			return false;
		}
		return false;
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x58D0B20", Offset = "0x58CFB20", VA = "0x58D0B20")]
	public static MobileInputLayoutRole[] GetActiveLayoutRoles()
	{
		// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$GetActiveLayoutRoles): 2 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		BaseGameManager pGVar3;
		BaseGameManager pGVar4;
		BaseCharacter character;
		BaseCharacter pCVar5;
		int iVar6;
		MobileInputLayoutRole[] pUVar7;

		if (SceneLoader.SceneName == 3) {
	label_059d0b93: ;
			pUVar7 = (MobileInputLayoutRole[])new MobileInputLayoutRole[1];
			if (pUVar7 == null) {
	label_059d0d31: ;
				throw new NullReferenceException();
			}
			if ((int)pUVar7.Length == 0) {
	label_059d0d36: ;
				throw new IndexOutOfRangeException();
			}
			pUVar7[0] = 5;
		}
		else {
			pGVar3 = SceneLoader.CurrentGameManager;
			if (pGVar3 != null) {
				pGVar4 = pGVar3.klass;
				bVar1 = (pGVar4._2).typeHierarchyDepth;
				bVar2 = (typeof(MapEditorGameManager)._2).typeHierarchyDepth;
				if ((bVar2 <= bVar1) &&((pGVar4._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(MapEditorGameManager))) goto label_059d0b93;
				bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if ((bVar2 <= bVar1) &&(((pGVar4._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(InGameManager) && (character = (*(ulong)((sbyte)pGVar3 + 0x80)), character != null)))) {
					pCVar5 = character.klass;
					bVar1 = (pCVar5._2).typeHierarchyDepth;
					bVar2 = (typeof(BasicTitan)._2).typeHierarchyDepth;
					if ((bVar2 <= bVar1) &&((pCVar5._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(BasicTitan))) {
						pUVar7 = (MobileInputLayoutRole[])new MobileInputLayoutRole[2];
						if (pUVar7 != null) {
							if ((pUVar7.Length & 0xfffffffe) != 0) {
								pUVar7[1] = 2;
								return pUVar7;
							}
							goto label_059d0d36;
						}
						goto label_059d0d31;
					}
					bVar2 = (typeof(BaseShifter)._2).typeHierarchyDepth;
					if ((bVar2 <= bVar1) &&((pCVar5._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(BaseShifter))) {
						pUVar7 = (MobileInputLayoutRole[])new MobileInputLayoutRole[2];
						iVar6 = MobileInputLayoutUtil.GetCharacterLayoutRole(character);
						if (pUVar7 == null) goto label_059d0d31;
						if ((pUVar7.Length & 0xfffffffe) != 0) {
							pUVar7[1] = iVar6;
							return pUVar7;
						}
						goto label_059d0d36;
					}
				}
			}
			pUVar7 = (MobileInputLayoutRole[])new MobileInputLayoutRole[2];
			if (pUVar7 == null) goto label_059d0d31;
			if ((pUVar7.Length & 0xfffffffe) == 0) goto label_059d0d36;
			pUVar7[1] = 1;
		}
		return pUVar7;
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x58CF110", Offset = "0x58CE110", VA = "0x58CF110")]
	private static void RegisterDefaultBindings()
	{
		// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$RegisterDefaultBindings): 8 lines keep C-only constructs
		uint uVar1;
		List<MobileInputBinding> obj;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		KeybindSetting keybind;
		bool bVar3;
		VirtualInvokeData pVVar4;
		object pIVar5;
		ulong uVar6;
		long lVar7;
		Il2CppClass pIVar8;
		object local_48;
		byte local_38;

		if (SettingsManager.InputSettings == null) {
			return;
		}
		if (Il2CppMethodInitialized_07545c48 == false) {
			Il2CppMethodInitialized_07545c48 = true;
			uVar1 = (typeof(MobileInputBindingRegistry)._2).cctor_finished_or_no_cctor;
			pIVar8 = typeof(MobileInputBindingRegistry);
		}
		else {
			uVar1 = ((typeof(MobileInputBindingRegistry))._2).cctor_finished_or_no_cctor;
			pIVar8 = typeof(MobileInputBindingRegistry);
		}
		typeof(MobileInputBindingRegistry) = (MobileInputBindingRegistry)pIVar8;
		if (uVar1 == 0) {
		}
		MobileInputBindingRegistry.EnsureLoaded();
		obj = MobileInputBindingRegistry._orderedBindings;
		if (obj == null) {
			throw new NullReferenceException();
		}
		pIVar8 = (Il2CppClass)obj.klass;
		uVar6 = (ulong)(pIVar8._2).interface_offsets_count;
		local_48 = obj.Dispose();
		local_38 = (byte)&local_48;
		do {
			pIVar5 = local_48;
			if (local_48 == null) {
				throw new NullReferenceException();
			}
			pIVar8 = local_48.klass;
			uVar6 = (ulong)(pIVar8._2).interface_offsets_count;
			bVar3 = pIVar5.Dispose();
			pIVar5 = local_48;
			if (!bVar3) {
				if (local_48 == null) {
					return;
				}
				pIVar8 = local_48.klass;
				uVar6 = (ulong)(pIVar8._2).interface_offsets_count;
				if (uVar6 == 0) goto label_059cf46f;
				pIVar2 = (pIVar8._1).interfaceOffsets;
				lVar7 = 0;
				break;
			}
			if (local_48 == null) {
				throw new NullReferenceException();
			}
			pIVar8 = local_48.klass;
			uVar6 = (ulong)(pIVar8._2).interface_offsets_count;
			pIVar5 = pIVar5.Dispose();
			if (pIVar5 == null) {
				throw new NullReferenceException();
			}
			pIVar8 = pIVar5[1].klass;
			keybind = pIVar5[2].monitor;
			if ((typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor == 0) {
			}
			MobileInputBridge.Bind(keybind, (String)pIVar8);
		} while(true);
		while (true) {
			lVar7 = lVar7 + 0x10;
			if (!(uVar6 * 0x10 != lVar7)) break;
			if (*(IDisposable*)((long)&pIVar2.interfaceType + lVar7) == typeof(IDisposable)) {
				pVVar4 = pIVar8.vtable + *(int)((long)&pIVar2.offset + lVar7);
				goto label_059cf48d;
			}
		}
	label_059cf46f: ;
	label_059cf48d: ;
		pIVar5.Dispose();
		return;
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x58CF000", Offset = "0x58CE000", VA = "0x58CF000")]
	private static void RegisterMovementInputs()
	{
		// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$RegisterMovementInputs): clean
		Settings_MobileInputBridge_StaticFields pSVar1;
		MethodInfo pMVar2;
		MobileInput pSVar3;

		pMVar2 = (MethodInfo)MobileInputBridge.GetOrCreateInput("Forward");
		pSVar1 = typeof(MobileInputBridge).static_fields;
		pSVar1._forwardInput = (MobileInput)pMVar2;
		pMVar2 = (MethodInfo)MobileInputBridge.GetOrCreateInput("Back");
		pSVar1 = typeof(MobileInputBridge).static_fields;
		pSVar1._backInput = (MobileInput)pMVar2;
		pMVar2 = (MethodInfo)MobileInputBridge.GetOrCreateInput("Right");
		pSVar1 = typeof(MobileInputBridge).static_fields;
		pSVar1._rightInput = (MobileInput)pMVar2;
		pSVar3 = MobileInputBridge.GetOrCreateInput("Left");
		pSVar1 = typeof(MobileInputBridge).static_fields;
		pSVar1._leftInput = pSVar3;
		return;
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x58D0D40", Offset = "0x58CFD40", VA = "0x58D0D40")]
	private static MobileInput GetOrCreateInput(string id)
	{
		// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$GetOrCreateInput): 2 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		MobileInput __this;
		Dictionary<MobileInputLayoutRole, List<string>> __this_00;
		MobileInput local_28;

		local_28 = null;
		pSVar1 = (Dictionary<object, object>)MobileInputBridge._inputs;
		if (pSVar1 == null) {
	label_059d0ebe: ;
			throw new NullReferenceException();
		}
		bVar2 = pSVar1.TryGetValue((object)id, (object*)&local_28);
		if (!bVar2) {
			__this._pressedFrame = -1;
			__this._releasedFrame = -1;
			__this._keyDownReturnedFrame = -1;
			__this._keyUpReturnedFrame = -1;
			__this._oneFrameReleaseFrame = -1;
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<MobileInputLayoutRole, List<string>>));
			__this_00 = new Dictionary<Int32Enum, object>();
			__this._displayNames = __this_00;
			__this = new MobileInput();
			local_28 = __this;
			pSVar1 = (Dictionary<object, object>)MobileInputBridge._inputs;
			if (pSVar1 == null) goto label_059d0ebe;
			pSVar1.set_Item((object)id, (object)local_28);
		}
		return local_28;
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x58CF9E0", Offset = "0x58CE9E0", VA = "0x58CF9E0")]
	private static MobileInput GetMovementInput(string id)
	{
		// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$GetMovementInput): 5 lines keep C-only constructs
		bool bVar1;
		MobileInput* ppSVar2;

		bVar1 = String.IsNullOrEmpty(id);
		if (bVar1) {
			return null;
		}
		MobileInputBridge.RegisterMovementInputs();
		bVar1 = (id == "Forward");
		if (((bVar1) || (bVar1 = (id == "General.Forward"))) ||(bVar1 = (id == "MapEditor.Forward"))) {
			ppSVar2 = &MobileInputBridge._forwardInput;
		}
		else {
			bVar1 = (id == "Back");
			if (((bVar1) || (bVar1 = (id == "General.Back"))) || (bVar1 = (id == "MapEditor.Back"))) {
				ppSVar2 = &MobileInputBridge._backInput;
			}
			else {
				bVar1 = (id == "Right");
				if (((bVar1) || (bVar1 = (id == "General.Right"))) || (bVar1 = (id == "MapEditor.Right"))) {
					ppSVar2 = &MobileInputBridge._rightInput;
				}
				else {
					bVar1 = (id == "Left");
					if (((!bVar1) &&(bVar1 = (id == "General.Left"), !bVar1)) &&(bVar1 = (id == "MapEditor.Left"), !bVar1)) {
						return null;
					}
					ppSVar2 = &MobileInputBridge._leftInput;
				}
			}
		}
		return *ppSVar2;
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x58D0ED0", Offset = "0x58CFED0", VA = "0x58D0ED0")]
	public MobileInputBridge()
	{
		// Lifted from source/cpp/Settings/MobileInputBridge.c (Settings.MobileInputBridge$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Settings/MobileInputBridge.c.

	// Settings.MobileInputBridge$$.cctor: clean
	static MobileInputBridge()
	{
		Settings_MobileInputBridge_StaticFields pSVar1;
		Dictionary<string, MobileInput> __this;

		__this = new Dictionary<string, MobileInput>();
		pSVar1 = typeof(MobileInputBridge).static_fields;
		pSVar1._inputs = __this;
		pSVar1 = typeof(MobileInputBridge).static_fields;
		pSVar1._lookDeltaFrame = -1;
		pSVar1._lookConsumedFrame = -1;
		pSVar1.AutoUseGasEnabled = true;
		return;
	}

	// Settings.MobileInputBridge.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new MobileInputBridge.c();
		MobileInputBridge.c.__9 = (MobileInputBridge.c)__this;
		return;
	}

	// Settings.MobileInputBridge.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Settings.MobileInputBridge.<>c$$<Init>b__23_0: clean
	private bool c__Init_b__23_0()
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07545c72 == false) {
			Il2CppMethodInitialized_07545c72 = true;
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return MobileInputBridge._autoGas;
		}
		return (bool)*(byte)((long)(typeof(MobileInputBridge)).static_fields + 0x28);
	}

	// Settings.MobileInputBridge.<>c$$<Init>b__23_1: clean
	private bool c__Init_b__23_1()
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07545c73 == false) {
			Il2CppMethodInitialized_07545c73 = true;
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return MobileInputBridge._autoReelIn;
		}
		return (bool)*(byte)((long)(typeof(MobileInputBridge)).static_fields + 0x29);
	}

	// Settings.MobileInputBridge.<>c$$<Init>b__23_2: clean
	private bool c__Init_b__23_2()
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07545c74 == false) {
			Il2CppMethodInitialized_07545c74 = true;
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return MobileInputBridge._autoReelOut;
		}
		return (bool)*(byte)((long)(typeof(MobileInputBridge)).static_fields + 0x2a);
	}
}
