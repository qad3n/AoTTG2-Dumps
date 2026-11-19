// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicStartAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicStartAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicStartAst.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000441")]
internal class CustomLogicStartAst : CustomLogicBaseAst
{
	[Token(Token = "0x400159D")]
	[FieldOffset(Offset = "0x18")]
	public Dictionary<string, CustomLogicClassDefinitionAst> Classes;

	[Token(Token = "0x400159E")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, CustomLogicSourceType> ClassNamespaces;

	[Token(Token = "0x6001A7A")]
	[Address(RVA = "0x58A92F0", Offset = "0x58A82F0", VA = "0x58A92F0")]
	public CustomLogicStartAst()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicStartAst.c (CustomLogic.CustomLogicStartAst$$.ctor): 2 lines keep C-only constructs
		Dictionary<string, CustomLogicClassDefinitionAst> __this_00;
		Dictionary<string, CustomLogicSourceType> __this_01;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, CustomLogicClassDefinitionAst>));
		__this_00 = new Dictionary<object, object>();
		this.Classes = __this_00;
		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, CustomLogicSourceType>));
		__this_01 = new Dictionary<object, Int32Enum>();
		this.ClassNamespaces = __this_01;
		base();
		this.Type = 0;
		this.Line = 0;
		return;
	}

	[Token(Token = "0x6001A7B")]
	[Address(RVA = "0x58A93C0", Offset = "0x58A83C0", VA = "0x58A93C0")]
	public void AddEmptyMain()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicStartAst.c (CustomLogic.CustomLogicStartAst$$AddEmptyMain): clean
		object value;
		CustomLogicToken __this_00;
		CustomLogicClassDefinitionAst __this_01;
		byte[] local_24 = new byte[4];

		value = (object)local_24;
		__this_00 = new CustomLogicToken(0, value, 0);
		__this_01 = new CustomLogicClassDefinitionAst(__this_00, 0);
		this.AddClass("Main", __this_01);
		return;
	}

	[Token(Token = "0x6001A7C")]
	[Address(RVA = "0x58A9490", Offset = "0x58A8490", VA = "0x58A9490")]
	public void AddClass(string className, CustomLogicClassDefinitionAst classAst)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicStartAst.c (CustomLogic.CustomLogicStartAst$$AddClass): 1 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		Dictionary<string, CustomLogicSourceType> __this_00;
		bool bVar2;
		int value;
		Nullable<CustomLogicSourceType> local_20;

		if (Il2CppMethodInitialized_07545ad7 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_get_HasValue) ;
			Il2CppMethodInitialized_07545ad7 = true;
		}
		pSVar1 = (Dictionary<object, object>)this.Classes;
		if (pSVar1 != null) {
			bVar2 = pSVar1.ContainsKey((object)className);
			if (bVar2) {
				bVar2 = (className != "Main");
				if (bVar2) {
					pSVar1 = (Dictionary<object, object>)this.Classes;
					if (pSVar1 == null) goto label_059a95d3;
					pSVar1.set_Item((object)className, (object)classAst);
				}
			}
			else {
				pSVar1 = (Dictionary<object, object>)this.Classes;
				if (pSVar1 == null) goto label_059a95d3;
				pSVar1.Add((object)className, (object)classAst);
			}
			if (classAst != null) {
				local_20 = classAst._Namespace_k__BackingField;
				if (local_20.hasValue != false) {
					__this_00 = this.ClassNamespaces;
					value = local_20.Value;
					if (__this_00 == null) goto label_059a95d3;
					__this_00.set_Item((object)className, value);
				}
				return;
			}
		}
	label_059a95d3: ;
		throw new NullReferenceException();
	}
}
