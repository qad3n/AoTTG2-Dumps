// ==================== AoTTG2 cross-reference ====================
// Type: Settings.UIRule
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/UIRule.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Settings;

[Serializable]
[Token(Token = "0x20000BA")]
public class UIRule
{
	[Token(Token = "0x40003B1")]
	[FieldOffset(Offset = "0x10")]
	public UIRuleType Type;

	[Token(Token = "0x40003B2")]
	[FieldOffset(Offset = "0x18")]
	public string SettingId;

	[Token(Token = "0x40003B3")]
	[FieldOffset(Offset = "0x20")]
	public object DefaultValue;

	[Token(Token = "0x40003B4")]
	[FieldOffset(Offset = "0x28")]
	public float? Min;

	[Token(Token = "0x40003B5")]
	[FieldOffset(Offset = "0x30")]
	public float? Max;

	[Token(Token = "0x40003B6")]
	[FieldOffset(Offset = "0x38")]
	public List<string> AllowedValues;

	[Token(Token = "0x40003B7")]
	[FieldOffset(Offset = "0x40")]
	public bool DisableEditing;

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x5A3C6C0", Offset = "0x5A3B6C0", VA = "0x5A3C6C0")]
	public bool MatchesAllowedValues(string value)
	{
		// Lifted from source/cpp/Settings/UIRule.c (Settings.UIRule$$MatchesAllowedValues): 2 lines keep C-only constructs
		List<string> __this_00;
		object str;
		bool bVar1;
		bool bVar2;
		String pSVar3;
		int iVar4;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_38;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		bVar2 = false;
		bVar1 = String.IsNullOrEmpty(value);
		local_38 = (byte)&local_58;
		if (!bVar1) {
			__this_00 = this.AllowedValues;
			if ((__this_00 == null) || (__this_00._size == 0)) {
				bVar2 = false;
			}
			else {
				local_58 = __this_00.GetEnumerator();
				do {
					bVar2 = local_58.MoveNext();
					str = local_58._current;
					if (!bVar2) {
						iVar4 = 7;
						goto label_05b3c876;
					}
					pSVar3 = Regex.Escape((String)str);
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					pSVar3 = pSVar3.Replace("\\*", ".*");
					pSVar3 = String.Concat("^", pSVar3, "$");
					bVar1 = value.IsMatch(pSVar3, 1);
				} while (!bVar1);
				iVar4 = 6;
	label_05b3c876: ;
				local_58.Dispose();
				bVar2 = iVar4 == 6 && bVar2;
			}
		}
		return bVar2;
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x5A3C920", Offset = "0x5A3B920", VA = "0x5A3C920")]
	public static bool MatchesRule(object value, UIRule rule)
	{
		// Lifted from source/cpp/Settings/UIRule.c (Settings.UIRule$$MatchesRule): 3 lines keep C-only constructs
		List<string> __this;
		bool bVar1;
		String a;
		String b;
		object pIVar2;

		if ((value != null) && (rule != null)) {
			switch(rule.Type) {
			case 0:
			case 1:
			case 3:
				break;
			case 2:
				pIVar2 = rule.DefaultValue;
				a = (String)(*value.klass.vtable[3].methodPtr)(value);
				if (pIVar2 == null) {
					b = null;
				}
				else {
					b = (String)(*pIVar2.klass.vtable[3].methodPtr)(pIVar2,pIVar2.klass.vtable[3].method);
				}
				bVar1 = (a == b);
				return bVar1;
			case 4:
				bVar1 = UIRule.MatchesRange(value, (Nullable<float>)rule.Min, (Nullable<float>)rule.Max);
				return bVar1;
			case 5:
				__this = rule.AllowedValues;
				if (__this != null) {
					pIVar2 = (object)(*value.klass.vtable[3].methodPtr)(value,value.klass.vtable[3].method);
					return bVar1;
				}
			default: ;
				return false;
			}
		}
		return bVar1;
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x5A3CA20", Offset = "0x5A3BA20", VA = "0x5A3CA20")]
	private static bool MatchesDefault(object value, object defaultValue)
	{
		// Lifted from source/cpp/Settings/UIRule.c (Settings.UIRule$$MatchesDefault): 2 lines keep C-only constructs
		bool bVar1;
		String a;
		String b;

		if (value == null) {
			a = null;
		}
		else {
			a = (String)(*value.klass.vtable[3].methodPtr)();
		}
		if (defaultValue == null) {
			b = null;
		}
		else {
			b = (String)(*defaultValue.klass.vtable[3].methodPtr)(defaultValue,defaultValue.klass.vtable[3].method);
		}
		bVar1 = (a == b);
		return bVar1;
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x5A3CA80", Offset = "0x5A3BA80", VA = "0x5A3CA80")]
	private static bool MatchesRange(object value, float? min, float? max)
	{
		// Lifted from source/cpp/Settings/UIRule.c (Settings.UIRule$$MatchesRange): clean
		object pIVar1;
		bool bVar2;
		float fVar3;
		float fVar4;
		Nullable<float> SStack_28;
		Nullable<float> SStack_20;

		SStack_28 = max;
		SStack_20 = min;
		pIVar1 = (value as IConvertible);
		if (pIVar1 == null) {
	label_05b3cb9f: ;
		}
		else {
			fVar3 = Convert.ToSingle(value);
			if (min.hasValue != false) {
				fVar4 = SStack_20.Value;
				if (fVar3 < fVar4) goto label_05b3cb9f;
			}
			if (max.hasValue != false) {
				fVar4 = SStack_28.Value;
				if (fVar4 < fVar3) goto label_05b3cb9f;
			}
		}
		return bVar2;
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x5A3CBF0", Offset = "0x5A3BBF0", VA = "0x5A3CBF0")]
	private static bool MatchesAllowedValues(object value, List<string> allowedValues)
	{
		// Lifted from source/cpp/Settings/UIRule.c (Settings.UIRule$$MatchesAllowedValues): 1 lines keep C-only constructs
		bool bVar1;
		object item;

		if ((value == null) || (allowedValues == null)) {
			return false;
		}
		item = (object)(*value.klass.vtable[3].methodPtr)(value,value.klass.vtable[3].method);
		return bVar1;
	}

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x5A3CC60", Offset = "0x5A3BC60", VA = "0x5A3CC60")]
	public UIRule()
	{
		// Lifted from source/cpp/Settings/UIRule.c (Settings.UIRule$$.ctor): clean
		base();
		return;
	}
}
