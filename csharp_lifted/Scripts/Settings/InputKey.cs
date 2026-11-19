// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InputKey
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InputKey.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/InputKey.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Settings;

[Token(Token = "0x200010E")]
internal class InputKey
{
	[Token(Token = "0x4000648")]
	[FieldOffset(Offset = "0x10")]
	protected KeyCode _key;

	[Token(Token = "0x4000649")]
	[FieldOffset(Offset = "0x14")]
	protected bool _isSpecial;

	[Token(Token = "0x400064A")]
	[FieldOffset(Offset = "0x18")]
	protected SpecialKey _special;

	[Token(Token = "0x400064B")]
	[FieldOffset(Offset = "0x1C")]
	protected bool _isModifier;

	[Token(Token = "0x400064C")]
	[FieldOffset(Offset = "0x20")]
	protected KeyCode _modifier;

	[Token(Token = "0x400064D")]
	[FieldOffset(Offset = "0x28")]
	protected HashSet<KeyCode> ModifierKeys;

	[Token(Token = "0x400064E")]
	[FieldOffset(Offset = "0x30")]
	protected HashSet<string> AlphaDigits;

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x5A559E0", Offset = "0x5A549E0", VA = "0x5A559E0")]
	public InputKey()
	{
		// Lifted from source/cpp/Settings/InputKey.c (Settings.InputKey$$.ctor): clean
		HashSet<KeyCode> __this_00;
		HashSet<string> __this_01;

		__this_00 = new HashSet<KeyCode>();
		if (__this_00 != null) {
			__this_00.Add(0x130);
			__this_00.Add(0x134);
			__this_00.Add(0x132);
			__this_00.Add(0x12f);
			__this_00.Add(0x133);
			__this_00.Add(0x131);
			this.ModifierKeys = __this_00;
			__this_01 = new HashSet<string>();
			if (__this_01 != null) {
				__this_01.Add((Il2CppObject *)"0");
				__this_01.Add((Il2CppObject *)"1");
				__this_01.Add((Il2CppObject *)"2");
				__this_01.Add((Il2CppObject *)"3");
				__this_01.Add((Il2CppObject *)"4");
				__this_01.Add((Il2CppObject *)"5");
				__this_01.Add((Il2CppObject *)"6");
				__this_01.Add((Il2CppObject *)"7");
				__this_01.Add((Il2CppObject *)"8");
				__this_01.Add((Il2CppObject *)"9");
				this.AlphaDigits = __this_01;
				base();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x5A55C90", Offset = "0x5A54C90", VA = "0x5A55C90")]
	public InputKey(string keyStr)
	{
		// Lifted from source/cpp/Settings/InputKey.c (Settings.InputKey$$.ctor): clean
		HashSet<KeyCode> __this_00;
		HashSet<string> __this_01;

		__this_00 = new HashSet<KeyCode>();
		if (__this_00 != null) {
			__this_00.Add(0x130);
			__this_00.Add(0x134);
			__this_00.Add(0x132);
			__this_00.Add(0x12f);
			__this_00.Add(0x133);
			__this_00.Add(0x131);
			this.ModifierKeys = __this_00;
			__this_01 = new HashSet<string>();
			if (__this_01 != null) {
				__this_01.Add((Il2CppObject *)"0");
				__this_01.Add((Il2CppObject *)"1");
				__this_01.Add((Il2CppObject *)"2");
				__this_01.Add((Il2CppObject *)"3");
				__this_01.Add((Il2CppObject *)"4");
				__this_01.Add((Il2CppObject *)"5");
				__this_01.Add((Il2CppObject *)"6");
				__this_01.Add((Il2CppObject *)"7");
				__this_01.Add((Il2CppObject *)"8");
				__this_01.Add((Il2CppObject *)"9");
				this.AlphaDigits = __this_01;
				base();
				this.LoadFromString(keyStr);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x5A56130", Offset = "0x5A55130", VA = "0x5A56130")]
	public bool MatchesKeyCode(KeyCode key)
	{
		// Lifted from source/cpp/Settings/InputKey.c (Settings.InputKey$$MatchesKeyCode): clean
		if (this._isSpecial != false) {
			return false;
		}
		if (this._isModifier == false) {
			return this._key == key;
		}
		return false;
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x5A56150", Offset = "0x5A55150", VA = "0x5A56150")]
	public bool ReadNextInput()
	{
		// Lifted from source/cpp/Settings/InputKey.c (Settings.InputKey$$ReadNextInput): 27 lines keep C-only constructs
		HashSet<KeyCode> pSVar1;
		bool bVar4;
		Il2CppType pIVar5;
		ulong uVar6;
		int iVar7;
		bool bVar8;
		sbyte cVar9;
		Type pSVar10;
		Array pSVar11;
		Il2CppClass pIVar12;
		object pIVar14;
		int piVar15;
		int iVar17;
		float fVar19;
		byte[] local_70 = new byte[16];
		object local_58;
		byte[] local_50 = new byte[8];
		byte[] local_48 = new byte[8];
		object local_38;

		local_48 = (byte[])0x0;
		local_38 = null;
		local_70._0_8_ = null;
		local_50 = (byte[])0x0;
		this._isModifier = false;
		pSVar1 = this.ModifierKeys;
		if (pSVar1 != null) {
			((local_70 + 8)).GetEnumerator((HashSet<T>)pSVar1);
			local_38 = local_58;
			local_48 = (byte[])local_70._8_8_;
			local_70._8_8_ = null;
			while (bVar8 = local_48.MoveNext()) {
				iVar7 = (int32_t)local_38;
				bVar8 = Input.GetKey((int32_t)local_38);
				if (bVar8) {
					this._modifier = iVar7;
					this._isModifier = true;
				}
			}
			local_48.Dispose() ;
			pIVar5 = TypeRef_UnityEngine_KeyCode;
			pSVar10 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar5);
			pSVar11 = Enum.GetValues(pSVar10);
			if (pSVar11 != null) {
				pIVar12 = (Il2CppClass)pSVar11.GetEnumerator();
				local_70._8_8_ = null;
				local_58 = (object)local_50;
				do {
					do {
						local_70._0_8_ = pIVar12;
						if (pIVar12 == null) {
							throw new NullReferenceException();
						}
						cVar9 = pIVar12.Dispose();
						uVar6 = local_70._0_8_;
						if (cVar9 == false) {
							iVar17 = 10;
							bVar8 = false;
							goto label_05b56571;
						}
						if ((Il2CppClass)local_70._0_8_ == null) {
							throw new NullReferenceException();
						}
						pIVar12 = ((Il2CppClass_1)local_70._0_8_).image;
						pIVar14 = uVar6.Dispose();
						if (pIVar14 == null) {
							throw new NullReferenceException();
						}
						if ((pIVar14.klass._1).element_class != (typeof(KeyCode)._1).element_class) {
							throw new InvalidCastException();
						}
						piVar15 = il2cpp_vm_Object_Unbox(pIVar14);
						iVar17 = *piVar15;
						pIVar12 = (Il2CppClass)local_70._0_8_;
					} while (iVar17 - 0x141U < 2);
					pSVar1 = this.ModifierKeys;
					if (pSVar1 == null) {
						throw new NullReferenceException();
					}
					bVar8 = pSVar1.Contains(iVar17);
					if ((bVar8) && (bVar8 = Input.GetKeyUp(iVar17))) {
						this._isModifier = false;
						break;
					}
					pSVar1 = this.ModifierKeys;
					if (pSVar1 == null) {
						throw new NullReferenceException();
					}
					bVar8 = pSVar1.Contains(iVar17);
					if (((!bVar8) && (iVar17 == 0x143)) &&(bVar8 = Input.GetKeyUp(0x143))) {
						iVar17 = 0x143;
						break;
					}
					pSVar1 = this.ModifierKeys;
					if (pSVar1 == null) {
						throw new NullReferenceException();
					}
					bVar8 = pSVar1.Contains(iVar17);
					pIVar12 = (Il2CppClass)local_70._0_8_;
				} while ((bVar8 || iVar17 == 0x143) ||(bVar8 = Input.GetKeyDown(iVar17), pIVar12 = (Il2CppClass)local_70._0_8_, !bVar8));
				this._key = iVar17;
				this._isSpecial = false;
				bVar8 = true;
				iVar17 = 8;
	label_05b56571: ;
				pIVar12 = (Il2CppClass)((object)local_70._0_8_ as IDisposable);
				local_50 = (byte[])pIVar12;
				if (pIVar12 != null) {
					pIVar12.Dispose();
				}
				pIVar5 = TypeRef_Settings_SpecialKey;
				if ((iVar17 == 10) || ((iVar17 != 8 && (iVar17 == 0)))) {
					pSVar10 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar5);
					pSVar11 = Enum.GetValues(pSVar10);
					if (pSVar11 == null) goto label_05b56946;
					pIVar12 = (Il2CppClass)pSVar11.GetEnumerator();
					local_70._8_8_ = null;
					local_58 = (object)local_50;
	joined_r0x05b5669b: ;
					do {
						local_70._0_8_ = pIVar12;
						if (pIVar12 == null) {
							throw new NullReferenceException();
						}
						cVar9 = pIVar12.Dispose();
						uVar6 = local_70._0_8_;
						if (cVar9 == false) {
							bVar4 = false;
							goto label_05b56862;
						}
						if ((Il2CppClass)local_70._0_8_ == null) {
							throw new NullReferenceException();
						}
						pIVar12 = ((Il2CppClass_1)local_70._0_8_).image;
						pIVar14 = uVar6.Dispose();
						if (pIVar14 == null) {
							throw new NullReferenceException();
						}
						if ((pIVar14.klass._1).element_class != (typeof(SpecialKey)._1).element_class) {
							throw new InvalidCastException();
						}
						piVar15 = il2cpp_vm_Object_Unbox(pIVar14);
						iVar17 = *piVar15;
						if (iVar17 != 2) {
							pIVar12 = (Il2CppClass)local_70._0_8_;
							if ((iVar17 == 1) &&(fVar19 = Input.GetAxis("Mouse ScrollWheel"), pIVar12 = (Il2CppClass)local_70._0_8_, 0.0 < fVar19)) break;
							goto joined_r0x05b5669b;
						}
						fVar19 = Input.GetAxis("Mouse ScrollWheel");
						pIVar12 = (Il2CppClass)local_70._0_8_;
					} while (0.0 <= fVar19);
					this._special = iVar17;
					this._isSpecial = true;
					bVar4 = true;
					bVar8 = true;
	label_05b56862: ;
					pIVar12 = (Il2CppClass)((object)local_70._0_8_ as IDisposable);
					if (pIVar12 != null) {
						local_50 = (byte[])pIVar12;
						pIVar12.Dispose();
					}
					if (!bVar4) {
						bVar8 = false;
					}
				}
				return bVar8;
			}
		}
	label_05b56946: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x5A56AE0", Offset = "0x5A55AE0", VA = "0x5A56AE0")]
	public bool GetKeyDown()
	{
		// Lifted from source/cpp/Settings/InputKey.c (Settings.InputKey$$GetKeyDown): clean
		int iVar1;
		bool bVar2;
		float fVar3;

		bVar2 = this._isModifier;
		if (this._isSpecial == false) {
			if ((bVar2 == false) ||(bVar2 = Input.GetKey(this._modifier))) {
				bVar2 = Input.GetKeyDown(this._key);
				return bVar2;
			}
			return false;
		}
		if ((bVar2 != false) &&(bVar2 = Input.GetKey(this._modifier), !bVar2)) {
			return false;
		}
		iVar1 = this._special;
		if (iVar1 == 2) {
			fVar3 = Input.GetAxis("Mouse ScrollWheel");
			bVar2 = 0.0 < fVar3;
		}
		else {
			if (iVar1 != 1) {
				return false;
			}
			fVar3 = Input.GetAxis("Mouse ScrollWheel");
			bVar2 = fVar3 < 0.0;
		}
		return !bVar2 && fVar3 != 0.0;
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x5A56BC0", Offset = "0x5A55BC0", VA = "0x5A56BC0")]
	public bool GetKey()
	{
		// Lifted from source/cpp/Settings/InputKey.c (Settings.InputKey$$GetKey): clean
		int iVar1;
		bool bVar2;
		float fVar3;

		bVar2 = this._isModifier;
		if (this._isSpecial == false) {
			if ((bVar2 == false) ||(bVar2 = Input.GetKey(this._modifier))) {
				bVar2 = Input.GetKey(this._key);
				return bVar2;
			}
			return false;
		}
		if ((bVar2 != false) &&(bVar2 = Input.GetKey(this._modifier), !bVar2)) {
			return false;
		}
		iVar1 = this._special;
		if (iVar1 == 2) {
			fVar3 = Input.GetAxis("Mouse ScrollWheel");
			bVar2 = 0.0 < fVar3;
		}
		else {
			if (iVar1 != 1) {
				return false;
			}
			fVar3 = Input.GetAxis("Mouse ScrollWheel");
			bVar2 = fVar3 < 0.0;
		}
		return !bVar2 && fVar3 != 0.0;
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x5A56C80", Offset = "0x5A55C80", VA = "0x5A56C80")]
	public bool GetKeyUp()
	{
		// Lifted from source/cpp/Settings/InputKey.c (Settings.InputKey$$GetKeyUp): clean
		int iVar1;
		bool bVar2;
		float fVar3;

		bVar2 = this._isModifier;
		if (this._isSpecial == false) {
			if ((bVar2 == false) ||(bVar2 = Input.GetKey(this._modifier))) {
				bVar2 = Input.GetKeyUp(this._key);
				return bVar2;
			}
			return false;
		}
		if ((bVar2 != false) &&(bVar2 = Input.GetKey(this._modifier), !bVar2)) {
			return false;
		}
		iVar1 = this._special;
		if (iVar1 == 2) {
			fVar3 = Input.GetAxis("Mouse ScrollWheel");
			bVar2 = 0.0 < fVar3;
		}
		else {
			if (iVar1 != 1) {
				return false;
			}
			fVar3 = Input.GetAxis("Mouse ScrollWheel");
			bVar2 = fVar3 < 0.0;
		}
		return !bVar2 && fVar3 != 0.0;
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x5A56D40", Offset = "0x5A55D40", VA = "0x5A56D40")]
	public bool IsWheel()
	{
		// Lifted from source/cpp/Settings/InputKey.c (Settings.InputKey$$IsWheel): clean
		if (this._isSpecial == false) {
			return false;
		}
		return this._special - 1U < 2;
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x5A56D60", Offset = "0x5A55D60", VA = "0x5A56D60")]
	public bool IsNone()
	{
		// Lifted from source/cpp/Settings/InputKey.c (Settings.InputKey$$IsNone): clean
		if (this._isSpecial == false) {
			return false;
		}
		return this._special == 0;
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x5A56D80", Offset = "0x5A55D80", VA = "0x5A56D80", Slot = "3")]
	public override string ToString()
	{
		// Lifted from source/cpp/Settings/InputKey.c (Settings.InputKey$$ToString): 3 lines keep C-only constructs
		bool bVar1;
		String __this_00;
		String str0;
		Enum SStack_28;

		if (this._isSpecial == false) {
			SStack_28.klass = (Enum)typeof(KeyCode);
		}
		else {
			SStack_28.klass = (Enum)typeof(SpecialKey);
		}
		SStack_28.monitor = (IntPtr)0xffffffffffffffff;
		__this_00 = SStack_28.ToString();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.StartsWith("Alpha");
		if (bVar1) {
			__this_00 = __this_00.Substring(5);
		}
		if (this._isModifier != false) {
			SStack_28.klass = (Enum)typeof(KeyCode);
			SStack_28.monitor = (IntPtr)0xffffffffffffffff;
			str0 = SStack_28.ToString();
			__this_00 = String.Concat(str0, "+", __this_00);
		}
		return __this_00;
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x5A56EB0", Offset = "0x5A55EB0", VA = "0x5A56EB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		// Lifted from source/cpp/Settings/InputKey.c (Settings.InputKey$$Equals): 1 lines keep C-only constructs
		bool bVar1;
		String a;
		String b;

		a = this.ToString();
		if (obj == null) {
			throw new NullReferenceException();
		}
		b = (String)(*obj.klass.vtable[3].methodPtr)(obj,obj.klass.vtable[3].method);
		bVar1 = (a == b);
		return bVar1;
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x5A55F70", Offset = "0x5A54F70", VA = "0x5A55F70")]
	public void LoadFromString(string serializedKey)
	{
		// Lifted from source/cpp/Settings/InputKey.c (Settings.InputKey$$LoadFromString): 1 lines keep C-only constructs
		int iVar1;
		HashSet<object> __this_00;
		bool bVar2;
		int iVar3;
		String[] pSVar4;
		String value;

		if (Il2CppMethodInitialized_075472e5 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_075472e5 = true;
		}
		this._isModifier = false;
		if (serializedKey != null) {
			pSVar4 = serializedKey.Split(0x2b, 0);
			if (pSVar4 != null) {
				iVar1 = (int)pSVar4.Length;
				if (iVar1 == 0) {
	label_05b5611c: ;
					throw new IndexOutOfRangeException();
				}
				value = pSVar4[0];
				if (1 < iVar1) {
					iVar3 = MiscExtensions.ToEnum<KeyCode>(value, true);
					this._modifier = iVar3;
					this._isModifier = true;
					if ((pSVar4.Length & 0xfffffffe) == 0) goto label_05b5611c;
					value = pSVar4[1];
				}
				if (value != null) {
					if (value._stringLength == 1) {
						__this_00 = (HashSet<object>)this.AlphaDigits;
						if (__this_00 == null) goto label_05b56117;
						bVar2 = __this_00.Contains((object)value);
						if (bVar2) {
							value = String.Concat("Alpha", value);
						}
					}
					iVar3 = MiscExtensions.ToEnum<KeyCode>(value, true);
					if ((iVar3 - 0x141U < 2) || (iVar3 == 0)) {
						iVar3 = MiscExtensions.ToEnum<SpecialKey>(value, true);
						this._special = iVar3;
						bVar2 = true;
					}
					else {
						this._key = iVar3;
						bVar2 = false;
					}
					this._isSpecial = bVar2;
					return;
				}
			}
		}
	label_05b56117: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x5A56BA0", Offset = "0x5A55BA0", VA = "0x5A56BA0")]
	protected bool GetModifier()
	{
		// Lifted from source/cpp/Settings/InputKey.c (Settings.InputKey$$GetModifier): clean
		bool bVar1;

		if (this._isModifier == false) {
			return true;
		}
		return bVar1;
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x5A56A70", Offset = "0x5A55A70", VA = "0x5A56A70")]
	protected bool GetSpecial(SpecialKey specialKey)
	{
		// Lifted from source/cpp/Settings/InputKey.c (Settings.InputKey$$GetSpecial): clean
		float fVar1;

		if (specialKey == 2) {
			fVar1 = Input.GetAxis("Mouse ScrollWheel");
			return fVar1 < 0.0;
		}
		if (specialKey == 1) {
			fVar1 = Input.GetAxis("Mouse ScrollWheel");
			return 0.0 < fVar1;
		}
		return false;
	}
}
