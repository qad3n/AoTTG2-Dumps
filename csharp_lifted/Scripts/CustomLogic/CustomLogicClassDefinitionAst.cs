// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicClassDefinitionAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicClassDefinitionAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicClassDefinitionAst.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000436")]
internal class CustomLogicClassDefinitionAst : CustomLogicBaseAst
{
	[Token(Token = "0x4001587")]
	[FieldOffset(Offset = "0x18")]
	public List<CustomLogicAssignmentExpressionAst> Assignments;

	[Token(Token = "0x4001588")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, CustomLogicMethodDefinitionAst> Methods;

	[Token(Token = "0x4001589")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicToken Token;

	[Token(Token = "0x170002CB")]
	public CustomLogicSourceType? Namespace
	{
		[Token(Token = "0x6001A6A")]
		[Address(RVA = "0x58A8A80", Offset = "0x58A7A80", VA = "0x58A8A80")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicClassDefinitionAst.c (CustomLogic.CustomLogicClassDefinitionAst$$get_Namespace): clean
			return (Nullable<CustomLogicSourceType>)this._Namespace_k__BackingField;
		}
		[Token(Token = "0x6001A6B")]
		[Address(RVA = "0x58A8A90", Offset = "0x58A7A90", VA = "0x58A8A90")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicClassDefinitionAst.c (CustomLogic.CustomLogicClassDefinitionAst$$set_Namespace): clean
			this._Namespace_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6001A6C")]
	[Address(RVA = "0x58A8AA0", Offset = "0x58A7AA0", VA = "0x58A8AA0")]
	public CustomLogicClassDefinitionAst(CustomLogicToken token, int line)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicClassDefinitionAst.c (CustomLogic.CustomLogicClassDefinitionAst$$.ctor): 2 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		List<CustomLogicAssignmentExpressionAst> __this_01;
		Dictionary<string, CustomLogicMethodDefinitionAst> __this_02;
		CustomLogicMethodDefinitionAst __this_03;

		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<CustomLogicAssignmentExpressionAst>));
		__this_01 = new List<object>();
		this.Assignments = __this_01;
		__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, CustomLogicMethodDefinitionAst>)) ;
		__this_02 = new Dictionary<object, object>();
		this.Methods = __this_02;
		base();
		this.Type = 1;
		this.Line = line;
		this.Token = token;
		__this_00 = (Dictionary<object, object>)this.Methods;
		__this_03 = new CustomLogicMethodDefinitionAst(0, false);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Add((Il2CppObject *)"Init", (object)__this_03);
		return;
	}

	[Token(Token = "0x6001A6D")]
	[Address(RVA = "0x58A8CF0", Offset = "0x58A7CF0", VA = "0x58A8CF0")]
	public CustomLogicMethodDefinitionAst GetInit()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicClassDefinitionAst.c (CustomLogic.CustomLogicClassDefinitionAst$$GetInit): clean
		Dictionary<object, object> __this_00;
		CustomLogicMethodDefinitionAst pCVar1;

		__this_00 = (Dictionary<object, object>)this.Methods;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __this_00.get_Item((Il2CppObject *)"Init");
		return pCVar1;
	}

	[Token(Token = "0x6001A6E")]
	[Address(RVA = "0x58A8D50", Offset = "0x58A7D50", VA = "0x58A8D50")]
	public void AddMethod(string methodName, CustomLogicMethodDefinitionAst methodAst)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicClassDefinitionAst.c (CustomLogic.CustomLogicClassDefinitionAst$$AddMethod): clean
		Dictionary<object, object> pSVar1;
		bool bVar2;

		pSVar1 = (Dictionary<object, object>)this.Methods;
		if (pSVar1 != null) {
			bVar2 = pSVar1.ContainsKey((object)methodName);
			pSVar1 = (Dictionary<object, object>)this.Methods;
			if (bVar2) {
				if (pSVar1 != null) {
					pSVar1.set_Item((object)methodName, (object)methodAst);
					return;
				}
			}
			else if (pSVar1 != null) {
				pSVar1.Add((object)methodName, (object)methodAst);
				return;
			}
		}
		throw new NullReferenceException();
	}
}
