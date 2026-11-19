// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchFormField
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormField.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000E7")]
public sealed class GisketchFormField : MonoBehaviour
{
	[Token(Token = "0x40004B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Func<string> _read;

	[Token(Token = "0x40004BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string _value;

	[Token(Token = "0x170000B0")]
	public string Key
	{
		[Token(Token = "0x600072A")]
		[Address(RVA = "0x52A32F0", Offset = "0x52A22F0", VA = "0x52A32F0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormField.c (Gisketch.Aottg2UI.Actions.GisketchFormField$$get_Key): clean
			return this._Key_k__BackingField;
		}
		[Token(Token = "0x600072B")]
		[Address(RVA = "0x52A3300", Offset = "0x52A2300", VA = "0x52A3300")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormField.c (Gisketch.Aottg2UI.Actions.GisketchFormField$$set_Key): clean
			this._Key_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170000B1")]
	public string Label
	{
		[Token(Token = "0x600072C")]
		[Address(RVA = "0x52A3310", Offset = "0x52A2310", VA = "0x52A3310")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormField.c (Gisketch.Aottg2UI.Actions.GisketchFormField$$get_Label): clean
			return this._Label_k__BackingField;
		}
		[Token(Token = "0x600072D")]
		[Address(RVA = "0x52A3320", Offset = "0x52A2320", VA = "0x52A3320")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormField.c (Gisketch.Aottg2UI.Actions.GisketchFormField$$set_Label): clean
			this._Label_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x600072E")]
	[Address(RVA = "0x52A3330", Offset = "0x52A2330", VA = "0x52A3330")]
	public static void Attach(GameObject go, GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormField.c (Gisketch.Aottg2UI.Actions.GisketchFormField$$Attach): 2 lines keep C-only constructs
		String pSVar1;
		bool bVar2;
		GisketchFormField pGVar3;
		Func<string> pSVar4;
		GisketchNodeDefinition node_00;
		String value;
		String pSVar5;

		bVar2 = ((Object)go == null);
		if ((node != null) && (!bVar2)) {
			bVar2 = String.IsNullOrEmpty(node.formKey);
			if (!bVar2) {
				if (go != null) {
					node_00 = (GisketchNodeDefinition)MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFormField;
					pGVar3 = go.GetComponent<GisketchFormField>();
					if (pGVar3 == null) {
						node_00 = (GisketchNodeDefinition)MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFormField;
						pGVar3 = go.AddComponent<GisketchFormField>();
					}
					pSVar1 = node.formKey;
					value = node.formLabel;
					pSVar4 = GisketchFormField.Reader(go, node_00);
					if (pGVar3 != null) {
						pSVar5 = node.value;
						pGVar3._Key_k__BackingField = pSVar1;
						bVar2 = String.IsNullOrEmpty(value);
						if (bVar2) {
							value = pSVar1;
						}
						pGVar3._Label_k__BackingField = value;
						pGVar3._read = pSVar4;
						if (pSVar5 == null) {
							pSVar5 = (String)**(long*)(g_data_07556758 + 0xb8);
						}
						pGVar3._value = pSVar5;
						return;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x600072F")]
	[Address(RVA = "0x52A3630", Offset = "0x52A2630", VA = "0x52A3630")]
	public void Setup(string key, string label, Func<string> read, [Optional] string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormField.c (Gisketch.Aottg2UI.Actions.GisketchFormField$$Setup): clean
		bool bVar1;

		this._Key_k__BackingField = key;
		bVar1 = String.IsNullOrEmpty(label);
		if (bVar1) {
			label = key;
		}
		this._Label_k__BackingField = label;
		this._read = read;
		if (value == null) {
			value = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this._value = value;
		return;
	}

	[Token(Token = "0x6000730")]
	[Address(RVA = "0x52A36C0", Offset = "0x52A26C0", VA = "0x52A36C0")]
	public string CurrentValue()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormField.c (Gisketch.Aottg2UI.Actions.GisketchFormField$$CurrentValue): clean
		Func<string> pSVar1;
		String pSVar2;

		pSVar1 = this._read;
		if (pSVar1 == null) {
			pSVar2 = this._value;
		}
		else {
			pSVar2 = (String)(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar1.method);
		}
		if (pSVar2 == null) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		return pSVar2;
	}

	[Token(Token = "0x6000731")]
	[Address(RVA = "0x52A3770", Offset = "0x52A2770", VA = "0x52A3770")]
	public void SetValue(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormField.c (Gisketch.Aottg2UI.Actions.GisketchFormField$$SetValue): clean
		if (value == null) {
			value = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this._value = value;
		return;
	}

	[Token(Token = "0x6000732")]
	[Address(RVA = "0x52A34B0", Offset = "0x52A24B0", VA = "0x52A34B0")]
	private static Func<string> Reader(GameObject go, GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormField.c (Gisketch.Aottg2UI.Actions.GisketchFormField$$Reader): 5 lines keep C-only constructs
		bool bVar1;
		GisketchFormField.c__DisplayClass14_0 __this;
		TMP_InputField pTVar2;
		AottgChoiceControl pGVar3;
		Func<string> __this_00;
		MethodInfo* ppMVar4;

		if (Il2CppMethodInitialized_07542bbe == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField) ;
			Il2CppMethodInitialized_07542bbe = true;
		}
		__this = il2cpp_codegen_object_new(typeof(GisketchFormField.c__DisplayClass14_0)) ;
		__this = new Object();
		if ((go == null) ||(pTVar2 = go.GetComponent<TMP_InputField>(), __this == null)) {
			throw new NullReferenceException();
		}
		__this.input = pTVar2;
		pTVar2 = __this.input;
		bVar1 = ((Object)pTVar2 != null);
		if (bVar1) {
			ppMVar4 = &MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFormField_c__DisplayClass14_0_Reader_b__0;
		}
		else {
			pGVar3 = go.GetComponent<AottgChoiceControl>();
			__this.choice = pGVar3;
			pGVar3 = __this.choice;
			bVar1 = ((Object)pGVar3 != null);
			if (!bVar1) {
				return null;
			}
			ppMVar4 = &MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFormField_c__DisplayClass14_0_Reader_b__1;
		}
		__this_00 = new Func<string>((object)__this, (intptr_t)*ppMVar4);
		return __this_00;
	}

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x52A37C0", Offset = "0x52A27C0", VA = "0x52A37C0")]
	public GisketchFormField()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormField.c (Gisketch.Aottg2UI.Actions.GisketchFormField$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormField.c.

	// Gisketch.Aottg2UI.Actions.GisketchFormField.<>c__DisplayClass14_0$$.ctor: clean
	private void c__DisplayClass14_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Actions.GisketchFormField.<>c__DisplayClass14_0$$<Reader>b__0: clean
	private String c__DisplayClass14_0__Reader_b__0()
	{
		TMP_InputField pTVar1;

		pTVar1 = this.input;
		if (pTVar1 == null) {
			throw new NullReferenceException();
		}
		return pTVar1.m_Text;
	}

	// Gisketch.Aottg2UI.Actions.GisketchFormField.<>c__DisplayClass14_0$$<Reader>b__1: clean
	private String c__DisplayClass14_0__Reader_b__1()
	{
		uint uVar1;
		uint uVar2;
		uint uVar3;
		AottgChoiceControl pGVar4;
		AottgChoiceOptions pGVar5;
		GisketchChoiceOptionDefinition[] pGVar6;
		GisketchChoiceOptionDefinition pGVar7;
		String pSVar8;
		bool bVar9;
		uint uVar10;

		pGVar4 = this.choice;
		if (pGVar4 != null) {
			pGVar5 = pGVar4._options;
			if (pGVar5 == null) {
	label_053a384c: ;
				return (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			pGVar6 = pGVar5._items;
			if (pGVar6 != null) {
				uVar2 = pGVar4._index;
				uVar3 = (uint)pGVar6.Length;
				uVar1 = uVar3 - 1;
				if ((int)uVar2 < (int)uVar1) {
					uVar1 = uVar2;
				}
				uVar10 = 0;
				if (-1 < (int)uVar2) {
					uVar10 = uVar1;
				}
				if (uVar3 <= uVar10) {
					throw new IndexOutOfRangeException();
				}
				pGVar7 = pGVar6[(int)uVar10];
				if (pGVar7 != null) {
					bVar9 = String.IsNullOrEmpty(pGVar7.value);
					if (!bVar9) {
						return pGVar7.value;
					}
					pSVar8 = pGVar7.text;
					if (pSVar8 != null) {
						return pSVar8;
					}
					goto label_053a384c;
				}
			}
		}
		throw new NullReferenceException();
	}
}
