// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Localization.Aottg2GisketchLocalizer
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Localization/Aottg2GisketchLocalizer.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Localization;

[Token(Token = "0x200005B")]
public sealed class Aottg2GisketchLocalizer : IGisketchLocalizer
{
	[Token(Token = "0x40001C9")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type UIManagerType;

	[Token(Token = "0x40001CA")]
	[FieldOffset(Offset = "0x8")]
	private static readonly MethodInfo GetLocaleMethod;

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x52600E0", Offset = "0x525F0E0", VA = "0x52600E0", Slot = "4")]
	public string GetText(string key, string fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Localization/Aottg2GisketchLocalizer.c (Gisketch.Aottg2UI.Localization.Aottg2GisketchLocalizer$$GetText): 6 lines keep C-only constructs
		int iVar1;
		uint uVar2;
		String obj;
		MethodInfo __this_00;
		bool bVar3;
		String[] value;
		String obj_00;
		Object[] parameters;
		object pIVar4;
		object pIVar5;
		String pSVar6;

		bVar3 = String.IsNullOrEmpty(key);
		if (bVar3) {
			if (fallback == null) {
				fallback = *(String*)g_data_07556758.static_fields;
			}
		}
		else {
			bVar3 = (Aottg2GisketchLocalizer. GetLocaleMethod == null);
			if (!bVar3) {
				if ((key == null) ||(value = key.Split(0x2e, 0), value == null)) {
					throw new NullReferenceException();
				}
				iVar1 = (int)value.Length;
				if (1 < iVar1) {
					pSVar6 = value[0];
					obj = value[1];
					if (iVar1 == 2) {
						obj_00 = *(String*)g_data_07556758.static_fields;
						uVar2 = (typeof(Aottg2GisketchLocalizer)._2). cctor_finished_or_no_cctor;
					}
					else {
						obj_00 = String.Join(".", value, 2, iVar1 + -2);
						uVar2 = (typeof(Aottg2GisketchLocalizer)._2). cctor_finished_or_no_cctor;
					}
					if (uVar2 == 0) {
					}
					__this_00 = Aottg2GisketchLocalizer. GetLocaleMethod;
					parameters = (Object[])new object[5];
					if (parameters == null) {
						throw new NullReferenceException();
					}
					if ((pSVar6 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar6, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) {
						pIVar4 = new ArrayTypeMismatchException();
						throw pIVar4;
					}
					if ((int)parameters.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					parameters[0] = (object)pSVar6;
					if ((obj != null) &&(pIVar4 = il2cpp_vm_Object_IsInst((object)obj, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) {
						pIVar4 = new ArrayTypeMismatchException();
						throw pIVar4;
					}
					if ((parameters.Length & 0xfffffffe) == 0) {
						throw new IndexOutOfRangeException();
					}
					parameters[1] = (object)obj;
					if ((obj_00 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst((object)obj_00, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) {
						pIVar4 = new ArrayTypeMismatchException();
						throw pIVar4;
					}
					if ((uint)parameters.Length < 3) {
						throw new IndexOutOfRangeException();
					}
					parameters[2] = (object)obj_00;
					pIVar4 = *(object*)g_data_07556758.static_fields;
					if ((pIVar4 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((parameters.obj).klass)._1).element_class), pIVar5 == null)) {
						pIVar4 = new ArrayTypeMismatchException();
						throw pIVar4;
					}
					if ((parameters.Length & 0xfffffffc) == 0) {
						throw new IndexOutOfRangeException();
					}
					parameters[3] = pIVar4;
					if (fallback == null) {
						fallback = key;
					}
					pIVar4 = il2cpp_vm_Object_IsInst((object)fallback, (((parameters.obj).klass)._1).element_class);
					if (pIVar4 == null) {
						pIVar4 = new ArrayTypeMismatchException();
						throw pIVar4;
					}
					if ((uint)parameters.Length < 5) {
						throw new IndexOutOfRangeException();
					}
					parameters[4] = (object)fallback;
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					pSVar6 = (String)__this_00.Invoke(null, parameters);
					if ((pSVar6 == null) || ((Il2CppClass)pSVar6.klass != g_data_07556758)) {
						return fallback;
					}
					return pSVar6;
				}
			}
			if (fallback == null) {
				fallback = key;
			}
		}
		return fallback;
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x52600D0", Offset = "0x525F0D0", VA = "0x52600D0")]
	public Aottg2GisketchLocalizer()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Localization/Aottg2GisketchLocalizer.c (Gisketch.Aottg2UI.Localization.Aottg2GisketchLocalizer$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Localization/Aottg2GisketchLocalizer.c.

	// Gisketch.Aottg2UI.Localization.Aottg2GisketchLocalizer$$.cctor: 1 lines keep C-only constructs
	static Aottg2GisketchLocalizer()
	{
		bool bVar2;
		Type pSVar3;
		MethodInfo pSVar4;

		pSVar3 = (Type)il2cpp_runtime_helper_030d66e0("UI.UIManager, Scripts", MethodInfo_System_Type_GetType, MethodInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_cctor);
		Aottg2GisketchLocalizer.UIManagerType = pSVar3;
		pSVar4 = null;
		bVar2 = (Aottg2GisketchLocalizer. UIManagerType != null);
		if (bVar2) {
			pSVar3 = Aottg2GisketchLocalizer.UIManagerType;
			if (pSVar3 == null) {
				throw new NullReferenceException();
			}
			pSVar4 = pSVar3.GetMethod("GetLocale", 0x38);
		}
		Aottg2GisketchLocalizer.GetLocaleMethod = pSVar4;
		return;
	}
}
