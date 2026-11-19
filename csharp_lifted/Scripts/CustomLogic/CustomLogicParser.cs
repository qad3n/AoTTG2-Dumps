// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicParser
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicParser.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicParser.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000644")]
internal class CustomLogicParser
{
	[Token(Token = "0x4001B8F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected List<CustomLogicToken> _tokens;

	[Token(Token = "0x4001B90")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public string Error;

	[Token(Token = "0x17000A83")]
	public CustomLogicCompiler Compiler
	{
		[Token(Token = "0x6003C65")]
		[Address(RVA = "0x5A7BEC0", Offset = "0x5A7AEC0", VA = "0x5A7BEC0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicParser.c (CustomLogic.CustomLogicParser$$get_Compiler): clean
			return this._Compiler_k__BackingField;
		}
		[Token(Token = "0x6003C66")]
		[Address(RVA = "0x5A7BED0", Offset = "0x5A7AED0", VA = "0x5A7BED0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicParser.c (CustomLogic.CustomLogicParser$$set_Compiler): clean
			this._Compiler_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6003C67")]
	[Address(RVA = "0x5A77F20", Offset = "0x5A76F20", VA = "0x5A77F20")]
	public CustomLogicParser(List<CustomLogicToken> tokens, [Optional] CustomLogicCompiler compiler)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicParser.c (CustomLogic.CustomLogicParser$$.ctor): clean
		List<CustomLogicToken> __this_00;

		__this_00 = new List<CustomLogicToken>();
		this._tokens = __this_00;
		this.Error = "";
		base();
		this._tokens = tokens;
		this._Compiler_k__BackingField = compiler;
		return;
	}

	[Token(Token = "0x6003C68")]
	[Address(RVA = "0x5A7BEE0", Offset = "0x5A7AEE0", VA = "0x5A7BEE0")]
	public string GetLineNumberString(int line)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicParser.c (CustomLogic.CustomLogicParser$$GetLineNumberString): clean
		CustomLogicCompiler __this_00;
		String pSVar1;

		__this_00 = this._Compiler_k__BackingField;
		if (__this_00 == null) {
			return pSVar1;
		}
		return pSVar1;
	}

	[Token(Token = "0x6003C69")]
	[Address(RVA = "0x5A77FF0", Offset = "0x5A76FF0", VA = "0x5A77FF0")]
	public CustomLogicStartAst GetStartAst()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicParser.c (CustomLogic.CustomLogicParser$$GetStartAst): clean
		CustomLogicStartAst __this_00;

		__this_00 = new CustomLogicStartAst();
		this.ParseAst(0, (CustomLogicBaseAst)__this_00);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.AddEmptyMain();
		return __this_00;
	}

	[Token(Token = "0x6003C6A")]
	[Address(RVA = "0x5A7D3E0", Offset = "0x5A7C3E0", VA = "0x5A7D3E0")]
	public CustomLogicBaseExpressionAst ParseExpression(CustomLogicBaseExpressionAst prev, int startIndex, int endIndex)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicParser.c (CustomLogic.CustomLogicParser$$ParseExpression): 30 lines keep C-only constructs
		int piVar1;
		int iVar2;
		uint uVar3;
		object value;
		List<CustomLogicBaseAst> pSVar4;
		CustomLogicBaseAst[] pCVar5;
		bool bVar6;
		int iVar7;
		int iVar8;
		CustomLogicToken token;
		CustomLogicToken pCVar9;
		int piVar10;
		CustomLogicToken pCVar11;
		CustomLogicMethodCallExpressionAst pCVar12;
		Int32[] pSVar13;
		il2cpp_array_size_t iVar14;
		CustomLogicBaseExpressionAst pCVar15;
		CustomLogicAssignmentExpressionAst __this_00;
		uint in_register_0000000c;
		MethodInfo* method_00;
		String pSVar17;
		CustomLogicAssignmentExpressionAst prev_00;
		CustomLogicParser __this_01;
		List<CustomLogicToken> pSVar18;
		CustomLogicToken* targetAddress;
		ulong uVar19;

		method_00 = (MethodInfo*)CONCAT44(in_register_0000000c, endIndex);
	label_05b7d43d: ;
		if (Il2CppMethodInitialized_07547391 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicClassInstantiateExpressionAst)) ;
			Il2CppMethodInitialized_07547391 = true;
		}
		pSVar18 = this._tokens;
		if (pSVar18 == null) goto label_05b7dc79;
		token = pSVar18.get_Item(startIndex);
		if (endIndex < startIndex) {
			return (CustomLogicBaseExpressionAst)(CustomLogicMethodCallExpressionAst)prev;
		}
		pSVar18 = this._tokens;
		if (pSVar18 == null) goto label_05b7dc79;
		if (startIndex < pSVar18._size + -1) {
			pCVar9 = pSVar18.get_Item(startIndex + 1);
		}
		else {
			pCVar9 = null;
		}
		__this_01 = this;
		iVar7 = this.FindLowestBinop(startIndex, endIndex);
		if (0 < iVar7) {
			pSVar18 = this._tokens;
			if (pSVar18 == null) goto label_05b7dc79;
			pCVar9 = pSVar18.get_Item(iVar7);
			pCVar15 = this.ParseExpression(null, startIndex, iVar7 + -1);
			pCVar11 = (CustomLogicToken)this.ParseExpression(null, iVar7 + 1, endIndex);
			pSVar13 = (Int32[])new int[5];
			RuntimeHelpers.InitializeArray((Array)pSVar13, FieldRva_PrivateImplementationDetails_A96D128D7C4FCB36E9F24CD74A9A916557FDB0792B43C708719409C6DE503E81);
			bVar6 = this.IsAnySymbolValue(pCVar9, pSVar13);
			if (!bVar6) {
				if (pCVar9 != null) {
					iVar7 = pCVar9.Line;
					__this_00 = new CustomLogicUnaryExpressionAst(pCVar9, iVar7);
					if (__this_00 != null) {
						__this_00.Left = pCVar15;
						targetAddress = &__this_00.Operator;
						__this_00.Operator = pCVar11;
						goto label_05b7dc5e;
					}
				}
				goto label_05b7dc79;
			}
			if (token == null) goto label_05b7dc79;
			iVar7 = token.Line;
			__this_00 = new CustomLogicUnaryExpressionAst(pCVar15, pCVar9, iVar7);
			if (__this_00 == null) goto label_05b7dc79;
			targetAddress = (CustomLogicToken*)&__this_00.Right;
			__this_00.Right = (CustomLogicBaseExpressionAst)pCVar11;
			goto label_05b7dc5e;
		}
		if (token == null) goto label_05b7dc79;
		iVar8 = token.Type;
		if (iVar8 == 0) {
			__this_01 = (CustomLogicParser)token.Value;
			if (__this_01 == null) goto label_05b7dc79;
			if ((((Il2CppClass)__this_01.klass)._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05b7dc83;
			piVar10 = il2cpp_vm_Object_Unbox((object)__this_01);
			if (*piVar10 == 0xb) {
				iVar7 = this.FindClosingParen(startIndex);
				method_00 = (MethodInfo*)(ulong)(iVar7 - 1U);
				prev = this.ParseExpression(null, startIndex + 1, iVar7 - 1U);
				startIndex = iVar7 + 1;
				goto label_05b7d43d;
			}
			iVar8 = token.Type;
		}
		if (iVar8 != 0) {
			if (iVar8 != 1) goto label_05b7d690;
			value = token.Value;
			iVar7 = token.Line;
			prev = new CustomLogicVariableExpressionAst(value, iVar7);
			startIndex = startIndex + 1;
			goto label_05b7d43d;
		}
		__this_01 = (CustomLogicParser)token.Value;
		if (__this_01 == null) goto label_05b7dc79;
		if ((((Il2CppClass)__this_01.klass)._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
	label_05b7dc83: ;
			throw new InvalidCastException();
		}
		piVar10 = il2cpp_vm_Object_Unbox((object)__this_01);
		if (*piVar10 == 0x13) {
			if (pCVar9 == null) goto label_05b7dc79;
			iVar7 = pCVar9.Line;
			__this_00 = new CustomLogicUnaryExpressionAst(iVar7);
			prev_00 = __this_00;
		}
		else {
			if (token.Type == 0) {
				__this_01 = (CustomLogicParser)token.Value;
				if (__this_01 == null) goto label_05b7dc79;
				if ((((Il2CppClass)__this_01.klass)._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05b7dc83;
				piVar10 = il2cpp_vm_Object_Unbox((object)__this_01);
				if (*piVar10 != 0x22) goto label_05b7d690;
			}
			else {
	label_05b7d690: ;
				bVar6 = __this_01.IsSymbolValue(token, 0x21);
				if (!bVar6) {
					bVar6 = __this_01.IsSymbolValue(token, 0x29);
					if (!bVar6) {
						if (token.Type != 2) {
							return null;
						}
						bVar6 = __this_01.IsSymbolValue(pCVar9, 0xb);
						pSVar17 = (String)token.Value;
						iVar7 = token.Line;
						if (!bVar6) {
							if ((pSVar17 != null) && (pSVar17.klass != g_data_07556758)) goto label_05b7dc88;
							prev = new CustomLogicVariableExpressionAst(pSVar17, iVar7) ;
							startIndex = startIndex + 1;
							goto label_05b7d43d;
						}
						if ((pSVar17 != null) && (pSVar17.klass != g_data_07556758)) {
	label_05b7dc88: ;
							throw new InvalidCastException();
						}
						pCVar12 = new CustomLogicMethodCallExpressionAst(pSVar17, iVar7);
						if (pCVar12 == null) goto label_05b7dc79;
						(((CustomLogicClassInstantiateExpressionAst)pCVar12).fields).Left = prev;
						iVar8 = this.FindClosingParen(startIndex + 1);
						iVar7 = startIndex + 2;
						pSVar13 = this.FindCommas(iVar7, iVar8);
						if (pSVar13 == null) goto label_05b7dc79;
						iVar14 = pSVar13.Length;
						if ((iVar14 != 0) && (0 < (int)iVar14)) {
							uVar19 = 0;
							do {
								if ((iVar14 & 0xffffffff) <= uVar19) goto label_05b7dc7e;
								iVar2 = pSVar13[uVar19];
								pCVar15 = this.ParseExpression(null, iVar7, iVar2 + -1);
								pSVar4 = (((CustomLogicClassInstantiateExpressionAst)pCVar12).fields). Parameters;
								if (pSVar4 == null) goto label_05b7dc79;
								il2cpp_runtime_helper_02fd7670(pSVar4, pCVar15, MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_Add);
								iVar7 = iVar2 + 1;
								uVar19 = uVar19 + 1;
								uVar3 = (uint)pSVar13.Length;
								iVar14 = (il2cpp_array_size_t)uVar3;
							} while ((long)uVar19 < (long)(int)uVar3);
						}
	label_05b7da0f: ;
						method_00 = (MethodInfo*)(ulong)(iVar8 - 1U);
						pCVar15 = this.ParseExpression(null, iVar7, iVar8 - 1U);
						if (pCVar15 != null) {
							pSVar4 = pCVar12.Parameters;
							if (pSVar4 == null) goto label_05b7dc79;
							method_00 = &MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_Add;
							il2cpp_runtime_helper_02fd7670(pSVar4, pCVar15, MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_Add);
						}
						prev = (CustomLogicBaseExpressionAst)pCVar12;
						startIndex = iVar8 + 1;
						goto label_05b7d43d;
					}
					this.AssertTokenType(pCVar9, 2);
					pSVar18 = this._tokens;
					if (pSVar18 == null) goto label_05b7dc79;
					iVar8 = startIndex + 2;
					pCVar11 = pSVar18.get_Item(iVar8);
					bVar6 = pSVar18.IsSymbolValue(pCVar11, 0xb);
					if (bVar6) {
						if (pCVar9 == null) goto label_05b7dc79;
						pSVar17 = (String)pCVar9.Value;
						iVar7 = token.Line;
						if ((pSVar17 != null) && (pSVar17.klass != g_data_07556758)) {
							throw new InvalidCastException();
						}
						pCVar12 = new CustomLogicMethodCallExpressionAst(pSVar17, iVar7);
						if (pCVar12 == null) goto label_05b7dc79;
						pCVar12.Left = prev;
						iVar8 = this.FindClosingParen(iVar8);
						iVar7 = startIndex + 3;
						pSVar13 = this.FindCommas(iVar7, iVar8);
						if (pSVar13 == null) goto label_05b7dc79;
						iVar14 = pSVar13.Length;
						if ((iVar14 != 0) && (0 < (int)iVar14)) {
							uVar19 = 0;
							do {
								if ((iVar14 & 0xffffffff) <= uVar19) {
	label_05b7dc7e: ;
									throw new IndexOutOfRangeException();
								}
								iVar2 = pSVar13[uVar19];
								pCVar15 = this.ParseExpression(null, iVar7, iVar2 + -1);
								pSVar4 = pCVar12.Parameters;
								if (pSVar4 == null) goto label_05b7dc79;
								piVar1 = &pSVar4._version;
								*piVar1 = *piVar1 + 1;
								pCVar5 = pSVar4._items;
								if (pCVar5 == null) goto label_05b7dc79;
								uVar3 = pSVar4._size;
								if (uVar3 < (uint)pCVar5.Length) {
									pSVar4._size = uVar3 + 1;
									pCVar5[(int)uVar3] = (CustomLogicBaseAst)pCVar15;
								}
								else {
									pSVar4.AddWithResize((object)pCVar15);
								}
								iVar7 = iVar2 + 1;
								uVar19 = uVar19 + 1;
								uVar3 = (uint)pSVar13.Length;
								iVar14 = (il2cpp_array_size_t)uVar3;
							} while ((long)uVar19 < (long)(int)uVar3);
						}
						goto label_05b7da0f;
					}
					if (pCVar9 == null) goto label_05b7dc79;
					pSVar17 = (String)pCVar9.Value;
					iVar7 = token.Line;
					pCVar12 = (CustomLogicMethodCallExpressionAst)il2cpp_codegen_object_new(typeof(CustomLogicFieldExpressionAst)) ;
					if ((pSVar17 != null) && (pSVar17.klass != g_data_07556758)) goto label_05b7dc88;
					pCVar12 = new CustomLogicMethodCallExpressionAst(pSVar17, iVar7);
					if (pCVar12 != null) {
						pCVar12.Parameters = (List<CustomLogicBaseAst>)prev;
						prev = (CustomLogicBaseExpressionAst)pCVar12;
						startIndex = iVar8;
						goto label_05b7d43d;
					}
					goto label_05b7dc79;
				}
			}
			iVar7 = token.Line;
			__this_00 = new CustomLogicUnaryExpressionAst(token, iVar7);
			prev_00 = null;
		}
		pCVar15 = this.ParseExpression((CustomLogicBaseExpressionAst)prev_00, startIndex + 1, endIndex);
		if (__this_00 != null) {
			targetAddress = (CustomLogicToken*)&__this_00.Left;
			__this_00.Left = pCVar15;
	label_05b7dc5e: ;
			return (CustomLogicBaseExpressionAst)__this_00;
		}
	label_05b7dc79: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C6B")]
	[Address(RVA = "0x5A7E540", Offset = "0x5A7D540", VA = "0x5A7E540")]
	public object[] ParseExpressionAst(int startIndex)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicParser.c (CustomLogic.CustomLogicParser$$ParseExpressionAst): 2 lines keep C-only constructs
		int iVar1;
		Object[] pSVar2;
		object pIVar3;
		object pIVar4;
		CustomLogicBaseExpressionAst obj;
		int local_2c;

		iVar1 = this.FindSemicolon(startIndex);
		pSVar2 = (Object[])new object[2];
		local_2c = iVar1 + 1;
		pIVar3 = (object)local_2c;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		if (pIVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05b7e64c;
		}
		if ((int)pSVar2.Length != 0) {
			pSVar2[0] = pIVar3;
			obj = this.ParseExpression(null, startIndex, iVar1 + -1);
			if (obj != null) {
				pIVar3 = il2cpp_vm_Object_IsInst((object)obj, (((pSVar2.obj).klass)._1).element_class);
				if (pIVar3 == null) {
	label_05b7e64c: ;
					pIVar3 = new ArrayTypeMismatchException();
					throw pIVar3;
				}
			}
			if ((pSVar2.Length & 0xfffffffe) != 0) {
				pSVar2[1] = (object)obj;
				return pSVar2;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6003C6C")]
	[Address(RVA = "0x5A7BF10", Offset = "0x5A7AF10", VA = "0x5A7BF10")]
	public int ParseAst(int startIndex, CustomLogicBaseAst prev)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicParser.c (CustomLogic.CustomLogicParser$$ParseAst): 83 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		CustomLogicCompiler __this_00;
		CustomLogicToken[] pCVar3;
		List<CustomLogicDecorator> __this_01;
		CustomLogicBaseAst __this_02;
		List<string> __this_03;
		String[] pSVar4;
		bool bVar5;
		uint uVar6;
		int iVar7;
		int iVar8;
		CustomLogicToken token;
		Object[] pSVar9;
		int piVar10;
		object pIVar11;
		CustomLogicConditionalBlockAst __this_04;
		CustomLogicToken pCVar12;
		CustomLogicPrimitiveExpressionAst pCVar13;
		CustomLogicClassDefinitionAst __this_05;
		CustomLogicCompiler.FileRange pCVar14;
		List<CustomLogicToken> __this_06;
		uint puVar15;
		CustomLogicVariableExpressionAst pCVar16;
		CustomLogicAssignmentExpressionAst __this_07;
		CustomLogicBaseExpressionAst pCVar17;
		CustomLogicContinueExpressionAst __this_08;
		CustomLogicReturnExpressionAst __this_09;
		CustomLogicMethodDefinitionAst __this_10;
		Il2CppClass pIVar18;
		uint method_00;
		MethodInfo* ppMVar19;
		MethodInfo pMVar20;
		String name;
		int iVar21;
		CustomLogicPrimitiveExpressionAst pCVar22;
		CustomLogicSymbols __this_11;
		CustomLogicConditionalBlockAst __this_12;
		List<CustomLogicToken> pSVar23;
		IntPtr pvVar24;
		CustomLogicToken local_58;
		Nullable<CustomLogicSourceType> local_48;
		Nullable<CustomLogicSourceType> local_40;
		ulong local_38;

		pCVar22 = (CustomLogicPrimitiveExpressionAst)(ulong)(uint)startIndex;
		if (Il2CppMethodInitialized_07547393 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(List<CustomLogicDecorator>)) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_get_HasValue) ;
			Il2CppMethodInitialized_07547393 = true;
		}
		local_40.hasValue = false;
		local_40._1_3_ = 0;
		local_40.value = 0;
		pSVar23 = this._tokens;
		if (pSVar23 == null) goto label_05b7d2c1;
		if (pSVar23._size <= startIndex) {
			return startIndex;
		}
		token = pSVar23.get_Item(startIndex);
		pSVar23 = this._tokens;
		if (pSVar23 == null) goto label_05b7d2c1;
		if (startIndex < pSVar23._size + -1) {
			local_58 = pSVar23.get_Item(startIndex + 1);
		}
		else {
			local_58 = null;
		}
		if (prev == null) goto label_05b7d2c1;
		method_00 = &switchD_05b7c115::switchdataD_010a5954;
		pCVar13 = (CustomLogicPrimitiveExpressionAst)prev;
		switch(prev.Type) {
		case 0:
			bVar5 = typeof(CustomLogicSymbols).IsSymbolIn(token, CustomLogicSymbols.ClassSymbols);
			if (bVar5) {
				if (token == null) goto label_05b7d2c1;
				iVar8 = token.Line;
				__this_05 = il2cpp_codegen_object_new(typeof(CustomLogicClassDefinitionAst)) ;
				__this_05 = new CustomLogicClassDefinitionAst(token, iVar8);
				__this_00 = this._Compiler_k__BackingField;
				if (__this_00 != null) {
					iVar8 = token.Line;
					pCVar14 = __this_00.FindFileRange(iVar8);
					if (pCVar14 == null) {
						local_40.hasValue = false;
						local_40._1_3_ = 0;
						local_40.value = 0;
					}
					else {
						local_48.hasValue = false;
						local_48._1_3_ = 0;
						local_48.value = 0;
						local_48 = new Nullable<Int32Enum>(pCVar14._Type_k__BackingField);
						local_40 = local_48;
						if (local_48.hasValue != false) {
							iVar8 = local_40.Value;
							local_48.hasValue = false;
							local_48._1_3_ = 0;
							local_48.value = 0;
							local_48 = new Nullable<Int32Enum>(iVar8);
							if (__this_05 == null) goto label_05b7d2c1;
							__this_05._Namespace_k__BackingField = local_48;
						}
					}
				}
				pSVar23 = this._tokens;
				if (pSVar23 == null) goto label_05b7d2c1;
				pCVar12 = pSVar23.get_Item(startIndex + 2);
				this.AssertSymbolValue(pCVar12, 9);
				iVar7 = this.ParseAst(startIndex + 3, (CustomLogicBaseAst)__this_05);
				if (local_58 == null) goto label_05b7d2c1;
				bVar2 = (typeof(CustomLogicStartAst)._2).typeHierarchyDepth;
				if (((prev.klass._2).typeHierarchyDepth < bVar2) ||((prev.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicStartAst))) goto label_05b7d3c3;
				pCVar12 = (CustomLogicToken)local_58.Value;
				if ((pCVar12 != null) &&(pIVar18 = g_data_07556758, (Il2CppClass)pCVar12.klass != g_data_07556758)) goto label_05b7d3ad;
				prev.AddClass((String)pCVar12, __this_05);
				goto joined_r0x05b7cd49;
			}
			break;
		case 1:
			pSVar23 = __this_06;
			__this_06 = new List<CustomLogicDecorator>();
			if (token == null) goto label_05b7d2c1;
			iVar7 = token.Type;
			if (__this_06 == null) {
				if (iVar7 == 0) {
					pSVar23 = (List<CustomLogicToken>)token.Value;
					if (pSVar23 == null) goto label_05b7d2c1;
					if ((pSVar23.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05b7d3a8;
					piVar10 = il2cpp_vm_Object_Unbox((object)pSVar23);
					if (*piVar10 == 0xf) {
						pSVar9 = this.ParseDecorator(startIndex);
						if ((pSVar9 != null) && ((pSVar9.Length & 0xfffffffe) == 0)) goto label_05b7d07a;
						goto label_05b7d2c1;
					}
				}
			}
			else if (iVar7 == 0) {
				do {
					pSVar23 = (List<CustomLogicToken>)token.Value;
					if (pSVar23 == null) goto label_05b7d2c1;
					if ((((Il2CppClass)pSVar23.klass)._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05b7d3a8;
					piVar10 = il2cpp_vm_Object_Unbox((object)pSVar23);
					if (*piVar10 != 0xf) break;
					pSVar9 = this.ParseDecorator((int32_t)pCVar22);
					if (pSVar9 == null) goto label_05b7d2c1;
					if ((pSVar9.Length & 0xfffffffe) == 0) goto label_05b7d07a;
					pCVar12 = (CustomLogicToken)pSVar9[1];
					if (pCVar12 != null) {
						bVar2 = (typeof(CustomLogicDecorator)._2).typeHierarchyDepth;
						pIVar18 = typeof(CustomLogicDecorator);
						if (((((Il2CppClass)pCVar12.klass)._2).typeHierarchyDepth < bVar2) ||((((Il2CppClass)pCVar12.klass)._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicDecorator))) goto label_05b7d3ad;
					}
					piVar1 = &__this_06._version;
					*piVar1 = *piVar1 + 1;
					pCVar3 = __this_06._items;
					if (pCVar3 == null) goto label_05b7d2c1;
					uVar6 = __this_06._size;
					if (uVar6 < (uint)pCVar3.Length) {
						method_00 = (uint)(ulong)(uVar6 + 1);
						__this_06._size = uVar6 + 1;
						pCVar3[(int)uVar6] = pCVar12;
					}
					else {
						__this_06.AddWithResize((object)pCVar12);
					}
					if ((int)pSVar9.Length == 0) goto label_05b7d07a;
					pIVar11 = pSVar9[0];
					if (pIVar11 == null) goto label_05b7d2c1;
					if ((pIVar11.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05b7d3a8;
					puVar15 = il2cpp_vm_Object_Unbox(pIVar11);
					pSVar23 = this._tokens;
					if (pSVar23 == null) goto label_05b7d2c1;
					uVar6 = *puVar15;
					pCVar22 = (CustomLogicPrimitiveExpressionAst)(ulong)uVar6;
					token = pSVar23.get_Item(uVar6);
					pSVar23 = this._tokens;
					if (pSVar23 == null) goto label_05b7d2c1;
					if ((int)uVar6 < pSVar23._size + -1) {
						local_58 = pSVar23.get_Item(uVar6 + 1);
					}
					else {
						local_58 = null;
					}
					if (token == null) goto label_05b7d2c1;
				} while (token.Type == 0);
			}
			iVar7 = token.Type;
			iVar21 = (int)pCVar22;
			if (iVar7 == 0) {
				pSVar23 = (List<CustomLogicToken>)token.Value;
				if (pSVar23 == null) goto label_05b7d2c1;
				if ((pSVar23.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05b7d3a8;
				piVar10 = il2cpp_vm_Object_Unbox((object)pSVar23);
				if (*piVar10 == 5) {
	label_05b7cc48: ;
					this.AssertTokenType(local_58, 2);
					if (token.Type == 0) {
						pIVar11 = token.Value;
						if (pIVar11 == null) goto label_05b7d2c1;
						if ((pIVar11.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05b7d3a8;
						piVar10 = il2cpp_vm_Object_Unbox(pIVar11);
						bVar5 = *piVar10 == 6;
					}
					else {
						bVar5 = false;
					}
					iVar8 = token.Line;
					__this_10 = new CustomLogicMethodDefinitionAst(iVar8, bVar5);
					pIVar18 = g_data_07556758;
					if ((local_58 != null) &&(__this_10 != null)) {
						pCVar12 = (CustomLogicToken)local_58.Value;
						if (pCVar12 == null) {
							__this_10.Name = null;
						}
						else if (((Il2CppClass)pCVar12.klass != g_data_07556758) ||(__this_10.Name = (String)pCVar12,(Il2CppClass)pCVar12.klass != pIVar18)) {
	label_05b7d3ad: ;
							throw new InvalidCastException();
						}
						pSVar23 = this._tokens;
						if (pSVar23 != null) {
							pCVar12 = pSVar23.get_Item(iVar21 + 2);
							this.AssertSymbolValue(pCVar12, 0xb);
							pSVar23 = this._tokens;
							if ((pSVar23 != null) &&(pCVar12 = pSVar23.get_Item(iVar21 + 3), pCVar12 != null)) {
								iVar21 = iVar21 + 5;
								do {
									iVar7 = pCVar12.Type;
									if (iVar7 == 0) {
										pIVar11 = pCVar12.Value;
										if (pIVar11 == null) break;
										if ((pIVar11.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05b7d3a8;
										piVar10 = il2cpp_vm_Object_Unbox(pIVar11);
										if (*piVar10 == 0xc) {
											pSVar23 = this._tokens;
											if (pSVar23 != null) {
												pCVar12 = pSVar23.get_Item(iVar21 + -1);
												this.AssertSymbolValue(pCVar12, 9);
												iVar7 = this.ParseAst(iVar21, (CustomLogicBaseAst)__this_10);
												bVar2 = (typeof(CustomLogicClassDefinitionAst)._2).typeHierarchyDepth;
												if (((prev.klass._2).typeHierarchyDepth < bVar2) ||((prev.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicClassDefinitionAst))) goto label_05b7d3c3;
												pCVar12 = (CustomLogicToken)local_58.Value;
												if ((pCVar12 != null) &&(pIVar18 = g_data_07556758, (Il2CppClass)pCVar12.klass != g_data_07556758)) goto label_05b7d3ad;
												prev.AddMethod((String)pCVar12, __this_10);
												goto joined_r0x05b7cd49;
											}
											break;
										}
										if (pCVar12.Type == 2) goto label_05b7d233;
	label_05b7d1a0: ;
										this.AssertSymbolValue(pCVar12, 0x28);
										pSVar23 = this._tokens;
									}
									else {
										if (iVar7 != 2) goto label_05b7d1a0;
	label_05b7d233: ;
										__this_03 = __this_10.ParameterNames;
										if (__this_03 == null) break;
										pCVar12 = (CustomLogicToken)pCVar12.Value;
										if ((pCVar12 != null) &&(pIVar18 = g_data_07556758, (Il2CppClass)pCVar12.klass != g_data_07556758)) goto label_05b7d3ad;
										piVar1 = &__this_03._version;
										*piVar1 = *piVar1 + 1;
										pSVar4 = __this_03._items;
										if (pSVar4 == null) break;
										uVar6 = __this_03._size;
										if (uVar6 < (uint)pSVar4.Length) {
											pMVar20 = (MethodInfo)(ulong)(uVar6 + 1);
											__this_03._size = uVar6 + 1;
											pSVar4[(int)uVar6] = (String)pCVar12;
											pSVar23 = this._tokens;
										}
										else {
											__this_03.AddWithResize((object)pCVar12);
											pSVar23 = this._tokens;
										}
									}
									if (pSVar23 == null) break;
									pCVar12 = pSVar23.get_Item(iVar21 + -1);
									iVar21 = iVar21 + 1;
								} while (pCVar12 != null);
							}
						}
					}
					goto label_05b7d2c1;
				}
				iVar7 = token.Type;
				if (iVar7 == 0) {
					pSVar23 = (List<CustomLogicToken>)token.Value;
					if (pSVar23 == null) goto label_05b7d2c1;
					if ((pSVar23.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05b7d3a8;
					piVar10 = il2cpp_vm_Object_Unbox((object)pSVar23);
					if (*piVar10 == 6) goto label_05b7cc48;
					iVar7 = token.Type;
				}
			}
			if (iVar7 == 2) {
				this.AssertSymbolValue(local_58, 0x14);
				name = (String)token.Value;
				iVar8 = token.Line;
				if ((name != null) && ((Il2CppClass)name.klass != g_data_07556758)) goto label_05b7d3cb;
				pCVar16 = new CustomLogicVariableExpressionAst(name, iVar8);
				iVar8 = token.Line;
				__this_07 = new CustomLogicAssignmentExpressionAst((CustomLogicBaseExpressionAst)pCVar16, local_58, iVar8);
				iVar8 = this.FindSemicolon(iVar21);
				method_00 = (uint)(ulong)(iVar8 - 1U);
				pCVar17 = this.ParseExpression(null, iVar21 + 2, iVar8 - 1U);
				if (__this_07 == null) goto label_05b7d2c1;
				__this_07.Right = pCVar17;
				__this_01 = __this_07.Decorators;
				if (__this_01 == null) goto label_05b7d2c1;
				__this_01.AddRange((IEnumerable<T>)__this_06);
				pIVar11 = il2cpp_codegen_is_inst_class((object)prev, typeof(CustomLogicClassDefinitionAst));
				if (pIVar11 == null) goto label_05b7d2c1;
				pIVar11 = il2cpp_codegen_is_inst_class((object)prev, typeof(CustomLogicClassDefinitionAst));
				if (pIVar11[1].monitor == null) goto label_05b7d2c1;
				iVar7 = iVar8 + 1;
				il2cpp_runtime_helper_02fd76c0(pIVar11[1].monitor, __this_07, MethodInfo_System_Collections_Generic_List_CustomLogicAssignmentExpressionAst_Add);
				goto joined_r0x05b7cd49;
			}
			bVar5 = pSVar23.IsSymbolValue(token, 10);
			prev = (CustomLogicBaseAst)pCVar22;
			if (bVar5) {
				return iVar21 + 1;
			}
			break;
		case 2:
		case 0x10:
		case 0x11:
			if (token == null) goto label_05b7d2c1;
			iVar7 = token.Type;
			pCVar22 = (CustomLogicPrimitiveExpressionAst)prev;
			if (iVar7 != 0) goto label_05b7c130;
			pIVar11 = token.Value;
			if (pIVar11 == null) goto label_05b7d2c1;
			pCVar22 = (CustomLogicPrimitiveExpressionAst)&g_data_075566c8;
			if ((pIVar11.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05b7d3a8;
			piVar10 = il2cpp_vm_Object_Unbox(pIVar11);
			if (*piVar10 == 0x10) {
				if ((local_58 == null) || (local_58.Type != 0)) {
	label_05b7c9dc: ;
					pSVar9 = this.ParseExpressionAst(startIndex + 1);
					if (pSVar9 == null) goto label_05b7d2c1;
					if ((int)pSVar9.Length == 0) goto label_05b7d07a;
					pIVar11 = pSVar9[0];
					if (pIVar11 == null) goto label_05b7d2c1;
					if ((pIVar11.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
	label_05b7d3a8: ;
						throw new InvalidCastException();
					}
					piVar10 = il2cpp_vm_Object_Unbox(pIVar11);
					if ((pSVar9.Length & 0xfffffffe) == 0) goto label_05b7d07a;
					iVar7 = *piVar10;
					pCVar13 = (CustomLogicPrimitiveExpressionAst)pSVar9[1];
					if (pCVar13 == null) {
						pCVar13 = null;
					}
					else {
						bVar2 = (typeof(CustomLogicBaseExpressionAst)._2).typeHierarchyDepth;
						if (((((CustomLogicBaseExpressionAst)pCVar13.klass)._2).typeHierarchyDepth < bVar2 ) || ((((CustomLogicBaseExpressionAst)pCVar13.klass)._2).typeHierarchy [(ulong)bVar2 - 1] != typeof(CustomLogicBaseExpressionAst))) goto label_05b7d3c3;
					}
				}
				else {
					pIVar11 = local_58.Value;
					if (pIVar11 == null) goto label_05b7d2c1;
					if ((pIVar11.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05b7d3a8;
					piVar10 = il2cpp_vm_Object_Unbox(pIVar11);
					if (*piVar10 != 0x26) goto label_05b7c9dc;
					iVar8 = token.Line;
					pCVar13 = new CustomLogicPrimitiveExpressionAst(null, iVar8);
					iVar7 = startIndex + 2;
				}
				iVar8 = token.Line;
				__this_09 = new CustomLogicWaitExpressionAst((CustomLogicBaseExpressionAst)pCVar13, iVar8);
				bVar2 = (typeof(CustomLogicBlockAst)._2).typeHierarchyDepth;
				pCVar13 = (CustomLogicPrimitiveExpressionAst)prev;
				if (((prev.klass._2).typeHierarchyDepth < bVar2) ||((prev.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicBlockAst))) goto label_05b7d3c3;
				__this_02 = (*(ulong)((sbyte)prev + 0x18));
				if (__this_02 == null) goto label_05b7d2c1;
				piVar1 = (int)((long)&(__this_02._1).namespaze + 4);
				*piVar1 = *piVar1 + 1;
				pSVar9 = ((List<object>)&(__this_02._1).name)._items;
	joined_r0x05b7cf34: ;
				if (pSVar9 == null) goto label_05b7d2c1;
				uVar6 = *(uint)&(__this_02._1).namespaze;
				if (uVar6 < (uint)pSVar9.Length) {
					method_00 = (uint)(ulong)(uVar6 + 1);
					*(uint)&(__this_02._1).namespaze = uVar6 + 1;
					pSVar9[(int)uVar6] = (object)__this_09;
				}
				else {
					__this_02.AddWithResize((object)__this_09);
				}
			}
			else {
				iVar7 = token.Type;
				if (iVar7 == 0) {
					pIVar11 = token.Value;
					if (pIVar11 == null) goto label_05b7d2c1;
					if ((pIVar11.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05b7d3a8;
					piVar10 = il2cpp_vm_Object_Unbox(pIVar11);
					if (*piVar10 == 7) {
						pSVar9 = this.ParseExpressionAst(startIndex + 1);
						if (pSVar9 == null) goto label_05b7d2c1;
						if ((int)pSVar9.Length == 0) goto label_05b7d07a;
						pIVar11 = pSVar9[0];
						if (pIVar11 == null) goto label_05b7d2c1;
						if ((pIVar11.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05b7d3a8;
						piVar10 = il2cpp_vm_Object_Unbox(pIVar11);
						if ((pSVar9.Length & 0xfffffffe) == 0) goto label_05b7d07a;
						iVar7 = *piVar10;
						pCVar13 = (CustomLogicPrimitiveExpressionAst)pSVar9[1];
						iVar8 = token.Line;
						if (pCVar13 != null) {
							bVar2 = (typeof(CustomLogicBaseExpressionAst)._2).typeHierarchyDepth;
							if (((((CustomLogicBaseExpressionAst)pCVar13.klass)._2).typeHierarchyDepth < bVar2) ||((((CustomLogicBaseExpressionAst)pCVar13.klass)._2).typeHierarchy [(ulong)bVar2 - 1] != typeof(CustomLogicBaseExpressionAst))) goto label_05b7d3c3;
						}
						__this_09 = new CustomLogicWaitExpressionAst((CustomLogicBaseExpressionAst)pCVar13, iVar8);
						bVar2 = (typeof(CustomLogicBlockAst)._2).typeHierarchyDepth;
						pCVar13 = (CustomLogicPrimitiveExpressionAst)prev;
						if (((prev.klass._2).typeHierarchyDepth < bVar2) ||((prev.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicBlockAst))) goto label_05b7d3c3;
						__this_02 = (*(ulong)((sbyte)prev + 0x18));
						if (__this_02 == null) goto label_05b7d2c1;
						piVar1 = (int)((long)&(__this_02._1).namespaze + 4);
						*piVar1 = *piVar1 + 1;
						pSVar9 = ((List<object>)&(__this_02._1).name)._items;
						goto joined_r0x05b7cf34;
					}
					iVar7 = token.Type;
				}
	label_05b7c130: ;
				if (iVar7 == 2) {
					pSVar9 = this.ParseExpressionAst(startIndex);
					if (pSVar9 == null) goto label_05b7d2c1;
					if ((int)pSVar9.Length == 0) {
	label_05b7d07a: ;
						throw new IndexOutOfRangeException();
					}
					piVar10 = (int)il2cpp_runtime_helper_02abd3a0(pSVar9[0], g_data_07556710);
					iVar7 = *piVar10;
					pIVar11 = il2cpp_codegen_is_inst_class((object)prev, typeof(CustomLogicBlockAst));
					if (pIVar11 == null) goto label_05b7d2c1;
					pIVar11 = il2cpp_codegen_is_inst_class((object)prev, typeof(CustomLogicBlockAst));
					if ((pSVar9.Length & 0xfffffffe) == 0) goto label_05b7d07a;
					pvVar24 = pIVar11[1].monitor;
					if (pvVar24 == null) goto label_05b7d2c1;
					pIVar11 = il2cpp_codegen_is_inst_class(pSVar9[1], typeof(CustomLogicBaseExpressionAst));
					ppMVar19 = &MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_Add;
					il2cpp_runtime_helper_02fd7670(pvVar24, pIVar11, MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_Add);
				}
				else {
					__this_11 = typeof(CustomLogicSymbols);
					bVar5 = typeof(CustomLogicSymbols).IsSymbolIn(token, CustomLogicSymbols.ConditionalSymbols);
					if (bVar5) {
						iVar8 = token.Line;
						__this_12 = __this_04;
						__this_04 = new CustomLogicForBlockAst(token, iVar8);
						bVar5 = __this_12.IsSymbolValue(token, 0x2b);
						if (bVar5) {
							pSVar23 = this._tokens;
							if (pSVar23 == null) goto label_05b7d2c1;
							pCVar12 = pSVar23.get_Item(startIndex + 1);
							this.AssertSymbolValue(pCVar12, 9);
							iVar7 = startIndex;
						}
						else {
							this.AssertSymbolValue(local_58, 0xb);
							iVar7 = this.FindClosingParen(startIndex + 1);
							method_00 = (uint)(ulong)(iVar7 - 1U);
							pCVar17 = this.ParseExpression(null, startIndex + 2, iVar7 - 1U);
							if (__this_04 == null) goto label_05b7d2c1;
							__this_04.Condition = pCVar17;
							pSVar23 = this._tokens;
							if (pSVar23 == null) goto label_05b7d2c1;
							pCVar12 = pSVar23.get_Item(iVar7 + 1);
							this.AssertSymbolValue(pCVar12, 9);
						}
						iVar7 = this.ParseAst(iVar7 + 2, (CustomLogicBaseAst)__this_04);
						pIVar11 = il2cpp_codegen_is_inst_class((object)prev, typeof(CustomLogicBlockAst));
						if (pIVar11 == null) goto label_05b7d2c1;
						pIVar11 = il2cpp_codegen_is_inst_class((object)prev, typeof(CustomLogicBlockAst));
						pvVar24 = pIVar11[1].monitor;
						if (pvVar24 == null) goto label_05b7d2c1;
					}
					else {
						bVar5 = __this_11.IsSymbolValue(token, 0x2e);
						if (!bVar5) {
							bVar5 = __this_11.IsSymbolValue(token, 0x11);
							if (bVar5) {
								this.AssertSymbolValue(local_58, 0x26);
								iVar8 = token.Line;
								__this_08 = new CustomLogicBreakExpressionAst(iVar8);
							}
							else {
								bVar5 = __this_11.IsSymbolValue(token, 0x12);
								if (!bVar5) {
									bVar5 = __this_11.IsSymbolValue(token, 10);
									prev = (CustomLogicBaseAst)pCVar22;
									if (bVar5) {
										return startIndex + 1;
									}
									break;
								}
								this.AssertSymbolValue(local_58, 0x26);
								iVar8 = token.Line;
								__this_08 = new CustomLogicBreakExpressionAst(iVar8);
							}
							pIVar11 = il2cpp_codegen_is_inst_class((object)prev, typeof(CustomLogicBlockAst)) ;
							if (pIVar11 == null) {
	label_05b7d2c1: ;
								throw new NullReferenceException();
							}
							pIVar11 = il2cpp_codegen_is_inst_class((object)prev, typeof(CustomLogicBlockAst)) ;
							if (pIVar11[1].monitor == null) goto label_05b7d2c1;
							iVar7 = startIndex + 2;
							il2cpp_runtime_helper_02fd7670(pIVar11[1].monitor, __this_08, MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_Add);
							goto label_05b7d36f;
						}
						this.AssertSymbolValue(local_58, 0xb);
						uVar6 = this.FindClosingParen(startIndex);
						iVar8 = token.Line;
						__this_04 = new CustomLogicForBlockAst(iVar8);
						pSVar23 = this._tokens;
						if (pSVar23 == null) goto label_05b7d2c1;
						iVar7 = startIndex + 2;
						pCVar12 = pSVar23.get_Item(iVar7);
						this.AssertTokenType(pCVar12, 2);
						pSVar23 = this._tokens;
						if (pSVar23 == null) goto label_05b7d2c1;
						pCVar12 = pSVar23.get_Item(iVar7);
						if (pCVar12 == null) goto label_05b7d2c1;
						pSVar23 = this._tokens;
						local_38 = (ulong)uVar6;
						if (pSVar23 == null) goto label_05b7d2c1;
						name = (String)pCVar12.Value;
						pCVar12 = pSVar23.get_Item(iVar7);
						if (pCVar12 == null) goto label_05b7d2c1;
						iVar8 = pCVar12.Line;
						if ((name != null) && ((Il2CppClass)name.klass != g_data_07556758)) {
	label_05b7d3cb: ;
							throw new InvalidCastException();
						}
						pCVar16 = new CustomLogicVariableExpressionAst(name, iVar8);
						if (__this_04 == null) goto label_05b7d2c1;
						__this_04.Condition = (CustomLogicBaseExpressionAst)pCVar16;
						pSVar23 = this._tokens;
						if (pSVar23 == null) goto label_05b7d2c1;
						pCVar12 = pSVar23.get_Item(startIndex + 3);
						this.AssertSymbolValue(pCVar12, 0x2f);
						iVar7 = (int)local_38;
						method_00 = (uint)(ulong)(iVar7 - 1U);
						pCVar12 = (CustomLogicToken)this.ParseExpression(null, startIndex + 4, iVar7 - 1U);
						__this_04.Token = pCVar12;
						pSVar23 = this._tokens;
						if (pSVar23 == null) goto label_05b7d2c1;
						pCVar12 = pSVar23.get_Item(iVar7 + 1);
						this.AssertSymbolValue(pCVar12, 9);
						iVar7 = this.ParseAst(iVar7 + 2, (CustomLogicBaseAst)__this_04);
						pIVar11 = il2cpp_codegen_is_inst_class((object)prev, typeof(CustomLogicBlockAst));
						if (pIVar11 == null) goto label_05b7d2c1;
						pIVar11 = il2cpp_codegen_is_inst_class((object)prev, typeof(CustomLogicBlockAst));
						pvVar24 = pIVar11[1].monitor;
						if (pvVar24 == null) goto label_05b7d2c1;
					}
					il2cpp_runtime_helper_02fd7670(pvVar24, __this_04, MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_Add);
				}
			}
	joined_r0x05b7cd49: ;
			if (iVar7 != startIndex) {
	label_05b7d36f: ;
				iVar8 = this.ParseAst(iVar7, prev);
				return iVar8;
			}
		}
		this.AssertFalse(token);
		pCVar13 = (CustomLogicPrimitiveExpressionAst)prev;
	label_05b7d3c3: ;
		throw new InvalidCastException();
	}

	[Token(Token = "0x6003C6D")]
	[Address(RVA = "0x5A7E9F0", Offset = "0x5A7D9F0", VA = "0x5A7E9F0")]
	private object[] ParseDecorator(int startIndex)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicParser.c (CustomLogic.CustomLogicParser$$ParseDecorator): 21 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<CustomLogicToken> pSVar3;
		List<object> pSVar4;
		int endIndex;
		CustomLogicToken pCVar5;
		CustomLogicDecorator __this_00;
		CustomLogicToken pCVar6;
		int piVar7;
		Int32[] pSVar8;
		object pIVar9;
		Object[] pSVar10;
		object pIVar11;
		String pSVar12;
		String str0;
		Il2CppClass pIVar13;
		Exception pSVar14;
		MethodInfo pMVar15;
		MethodInfo method_01;
		MethodInfo pMVar16;
		int iVar17;
		int startIndex_00;
		int local_3c;
		CustomLogicDecorator local_38;

		pSVar3 = this._tokens;
		if (pSVar3 == null) goto label_05b7edcb;
		pCVar5 = pSVar3.get_Item(startIndex);
		this.AssertSymbolValue(pCVar5, 0xf);
		pSVar3 = this._tokens;
		if (pSVar3 == null) goto label_05b7edcb;
		if (pSVar3._size <= startIndex + 1) {
			pIVar13 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			pSVar14 = (Exception)il2cpp_codegen_object_new(pIVar13);
			pSVar12 = il2cpp_codegen_get_runtime_metadata(&"Expected decorator name after @");
			pSVar14 = new Exception(pSVar12);
			pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicParser_ParseDecorator);
			throw (object)pSVar14;
		}
		pCVar5 = pSVar3.get_Item(startIndex + 1);
		this.AssertTokenType(pCVar5, 2);
		if (pCVar5 == null) goto label_05b7edcb;
		pSVar12 = (String)pCVar5.Value;
		if ((pSVar12 != null) && (pSVar12.klass != g_data_07556758)) {
	label_05b7ee2e: ;
			throw new InvalidCastException();
		}
		__this_00 = new CustomLogicDecorator(pSVar12);
		pSVar3 = this._tokens;
		if (pSVar3 == null) goto label_05b7edcb;
		iVar17 = startIndex + 2;
		if (((iVar17 < pSVar3._size) &&(pCVar6 = pSVar3.get_Item(iVar17), pCVar6 != null)) && (pCVar6.Type == 0)) {
			pSVar12 = (String)pCVar6.Value;
			if (pSVar12 == null) goto label_05b7edcb;
			if ((pSVar12.klass._1).element_class != (g_data_07556710._1).element_class) goto label_05b7ee2e;
			piVar7 = il2cpp_vm_Object_Unbox((object)pSVar12);
			if (*piVar7 != 0xb) goto label_05b7ed1d;
			endIndex = this.FindClosingParen(iVar17);
			if (endIndex < 0) {
				pSVar12 = this.GetLineNumberString(pCVar5.Line + 1) ;
				str0 = il2cpp_codegen_get_runtime_metadata(&"Unclosed decorator parameters at line ");
				pSVar12 = String.Concat(str0, pSVar12);
				pIVar13 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				pSVar14 = (Exception)il2cpp_codegen_object_new(pIVar13);
				pSVar14 = new Exception(pSVar12);
				pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicParser_ParseDecorator);
				throw (object)pSVar14;
			}
			startIndex_00 = startIndex + 3;
			pSVar8 = this.FindCommas(startIndex_00, endIndex);
			if (pSVar8 == null) goto label_05b7edcb;
			pMVar15 = (MethodInfo)pSVar8.Length;
			if (__this_00 == null) {
				if ((0 < (int)pMVar15) || (startIndex_00 < endIndex)) goto label_05b7edcb;
			}
			else if ((int)pMVar15 < 1) {
				if (startIndex_00 < endIndex) goto label_05b7eca4;
			}
			else {
				method_01 = (MethodInfo)((ulong)pMVar15 & 0xffffffff);
				pMVar16 = null;
				local_38 = __this_00;
				do {
					if (method_01 <= pMVar16) goto label_05b7edd0;
					iVar17 = pSVar8[(long)pMVar16];
					pSVar4 = local_38.Parameters;
					pIVar9 = this.ParseDecoratorParameter(startIndex_00, iVar17 + -1);
					pMVar15 = MethodInfo_System_Collections_Generic_List_object_Add;
					if (pSVar4 == null) goto label_05b7edcb;
					piVar1 = &pSVar4._version;
					*piVar1 = *piVar1 + 1;
					pSVar10 = pSVar4._items;
					if (pSVar10 == null) goto label_05b7edcb;
					uVar2 = pSVar4._size;
					if (uVar2 < (uint)pSVar10.Length) {
						pSVar4._size = uVar2 + 1;
						pSVar10[(int)uVar2] = pIVar9;
					}
					else {
						pSVar4.AddWithResize(pIVar9);
					}
					startIndex_00 = iVar17 + 1;
					pMVar16 = (MethodInfo)((long)&pMVar16.methodPointer + 1);
					uVar2 = (uint)pSVar8.Length;
					method_01 = (MethodInfo)(ulong)uVar2;
					pMVar15 = (MethodInfo)(long)(int)uVar2;
				} while ((long)pMVar16 < (long)pMVar15);
				__this_00 = local_38;
				if (startIndex_00 < endIndex) {
					if (local_38 == null) goto label_05b7edcb;
	label_05b7eca4: ;
					pSVar4 = __this_00.Parameters;
					pIVar9 = this.ParseDecoratorParameter(startIndex_00, endIndex + -1);
					pMVar15 = MethodInfo_System_Collections_Generic_List_object_Add;
					if (pSVar4 == null) goto label_05b7edcb;
					piVar1 = &pSVar4._version;
					*piVar1 = *piVar1 + 1;
					pSVar10 = pSVar4._items;
					if (pSVar10 == null) goto label_05b7edcb;
					uVar2 = pSVar4._size;
					if (uVar2 < (uint)pSVar10.Length) {
						pSVar4._size = uVar2 + 1;
						pSVar10[(int)uVar2] = pIVar9;
					}
					else {
						pSVar4.AddWithResize(pIVar9);
					}
				}
			}
			iVar17 = endIndex + 1;
		}
	label_05b7ed1d: ;
		pSVar10 = (Object[])new object[2];
		local_3c = iVar17;
		pIVar9 = (object)local_3c;
		if (pSVar10 == null) {
	label_05b7edcb: ;
			throw new NullReferenceException();
		}
		if ((pIVar9 != null) &&(pIVar11 = il2cpp_vm_Object_IsInst(pIVar9, (((pSVar10.obj).klass)._1).element_class), pIVar11 == null)) {
	label_05b7edd5: ;
			pIVar9 = new ArrayTypeMismatchException();
			throw pIVar9;
		}
		if ((int)pSVar10.Length != 0) {
			pSVar10[0] = pIVar9;
			if ((__this_00 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst((object)__this_00, (((pSVar10.obj).klass)._1).element_class) , pIVar9 == null)) goto label_05b7edd5;
			if ((pSVar10.Length & 0xfffffffe) != 0) {
				pSVar10[1] = (object)__this_00;
				return pSVar10;
			}
		}
	label_05b7edd0: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6003C6E")]
	[Address(RVA = "0x5A7EEB0", Offset = "0x5A7DEB0", VA = "0x5A7EEB0")]
	private object ParseDecoratorParameter(int startIndex, int endIndex)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicParser.c (CustomLogic.CustomLogicParser$$ParseDecoratorParameter): 30 lines keep C-only constructs
		uint uVar1;
		List<CustomLogicToken> pSVar2;
		CustomLogicToken pCVar3;
		int piVar4;
		uint puVar5;
		MethodInfo_395CF20 method_00;
		object pIVar6;
		String pSVar7;
		String str0;
		Il2CppClass pIVar8;
		Exception __this_00;
		MethodInfo lastManagedFrame;
		String* metadataPointer;
		uint local_40;
		uint local_3c;
		byte[] local_38 = new byte[16];

		if (startIndex + 1 == endIndex) {
			pSVar2 = this._tokens;
			if (pSVar2 == null) goto label_05b7f15e;
			pCVar3 = pSVar2.get_Item(startIndex);
			if ((pCVar3 == null) || (pCVar3.Type != 0)) {
	label_05b7ef49: ;
				pSVar2 = this._tokens;
				if (pSVar2 == null) goto label_05b7f15e;
				pCVar3 = pSVar2.get_Item(startIndex);
				if ((pCVar3 != null) && (pCVar3.Type == 0)) {
					pIVar6 = pCVar3.Value;
					if (pIVar6 == null) goto label_05b7f15e;
					if ((pIVar6.klass._1).element_class != (g_data_07556710._1).element_class) goto label_05b7f217;
					piVar4 = il2cpp_vm_Object_Unbox(pIVar6);
					if (*piVar4 == 0x21) goto label_05b7efa7;
				}
			}
			else {
				pIVar6 = pCVar3.Value;
				if (pIVar6 == null) goto label_05b7f15e;
				if ((pIVar6.klass._1).element_class != (g_data_07556710._1).element_class) goto label_05b7f217;
				piVar4 = il2cpp_vm_Object_Unbox(pIVar6);
				if (*piVar4 != 0x22) goto label_05b7ef49;
	label_05b7efa7: ;
				pSVar2 = this._tokens;
				if ((pSVar2 == null) ||(pCVar3 = pSVar2.get_Item(endIndex), pCVar3 == null)) goto label_05b7f15e;
				if (pCVar3.Type == 1) {
					pSVar2 = this._tokens;
					if ((pSVar2 == null) ||(pCVar3 = pSVar2.get_Item(endIndex), pCVar3 == null)) goto label_05b7f15e;
					pIVar6 = pCVar3.Value;
					if (pIVar6 != null) {
						if (pIVar6.klass == g_data_07556710) {
							puVar5 = il2cpp_vm_Object_Unbox(pIVar6);
							pSVar2 = this._tokens;
							if (pSVar2 == null) goto label_05b7f15e;
							uVar1 = *puVar5;
							pCVar3 = pSVar2.get_Item(startIndex);
							local_3c = uVar1;
							if ((pCVar3 != null) && (pCVar3.Type == 0)) {
								pIVar6 = pCVar3.Value;
								if (pIVar6 == null) goto label_05b7f15e;
								if ((pIVar6.klass._1).element_class != (g_data_07556710._1).element_class) {
	label_05b7f217: ;
									throw new InvalidCastException();
								}
								piVar4 = il2cpp_vm_Object_Unbox(pIVar6);
								if (*piVar4 == 0x22) {
									local_3c = -uVar1;
								}
							}
							puVar5 = &local_3c;
							pIVar8 = g_data_07556710;
							goto label_05b7f146;
						}
						if (pIVar6.klass == g_data_07556740) {
							puVar5 = il2cpp_vm_Object_Unbox(pIVar6);
							pSVar2 = this._tokens;
							if (pSVar2 == null) goto label_05b7f15e;
							local_38 = ZEXT416(*puVar5);
							pCVar3 = pSVar2.get_Item(startIndex);
							if ((pCVar3 == null) || (pCVar3.Type != 0)) {
	label_05b7f131: ;
								local_40 = local_38._0_4_;
							}
							else {
								pIVar6 = pCVar3.Value;
								if (pIVar6 == null) goto label_05b7f15e;
								if ((pIVar6.klass._1).element_class != (g_data_07556710._1).element_class) goto label_05b7f217;
								piVar4 = il2cpp_vm_Object_Unbox(pIVar6);
								if (*piVar4 != 0x22) goto label_05b7f131;
								local_40 = local_38._0_4_ ^ 0x80000000;
							}
							puVar5 = &local_40;
							pIVar8 = g_data_07556740;
	label_05b7f146: ;
							pIVar6 = (object)puVar5;
							return pIVar6;
						}
					}
				}
			}
		}
		pSVar2 = this._tokens;
		if (startIndex == endIndex) {
			if ((pSVar2 == null) ||(pCVar3 = pSVar2.get_Item(startIndex), pCVar3 == null)) {
	label_05b7f15e: ;
				throw new NullReferenceException();
			}
			if (pCVar3.Type - 1U < 2) {
				return pCVar3.Value;
			}
			pSVar7 = this.GetLineNumberString(pCVar3.Line + 1);
			metadataPointer = &"Invalid decorator parameter at line ";
		}
		else {
			method_00 = (MethodInfo_395CF20)il2cpp_codegen_get_runtime_metadata(&MethodInfo_System_Collections_Generic_List_CustomLogicToken_get_Item);
			pIVar6 = pSVar2.get_Item(startIndex);
			pSVar7 = this.GetLineNumberString(*(int)&pIVar6[2].klass + 1) ;
			metadataPointer = &"Decorator parameters must be literal values at line ";
		}
		str0 = il2cpp_codegen_get_runtime_metadata(metadataPointer);
		pSVar7 = String.Concat(str0, pSVar7);
		pIVar8 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
		__this_00 = (Exception)il2cpp_codegen_object_new(pIVar8);
		__this_00 = new Exception(pSVar7);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicParser_ParseDecoratorParameter);
		throw (object)__this_00;
	}

	[Token(Token = "0x6003C6F")]
	[Address(RVA = "0x5A7DCA0", Offset = "0x5A7CCA0", VA = "0x5A7DCA0")]
	private int FindLowestBinop(int startIndex, int endIndex)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicParser.c (CustomLogic.CustomLogicParser$$FindLowestBinop): 18 lines keep C-only constructs
		Dictionary<int, int> __this_00;
		object obj;
		int iVar1;
		bool bVar2;
		int iVar3;
		CustomLogicToken token;
		int piVar4;
		int piVar5;
		CustomLogicToken pCVar6;
		List<CustomLogicToken> __this_01;
		int iVar8;
		int iVar9;
		int local_3c;
		int local_38;

		if (startIndex < endIndex) {
			local_38 = 0x7fffffff;
			iVar9 = 0;
			iVar8 = 0;
			do {
				__this_01 = this._tokens;
				if (__this_01 == null) goto label_05b7dfb5;
				token = __this_01.get_Item(startIndex);
				if (token == null) {
					if (iVar8 < 1) goto label_05b7ddc4;
				}
				else {
					if (token.Type == 0) {
						__this_01 = (List<CustomLogicToken>)token.Value;
						if (__this_01 == null) goto label_05b7dfb5;
						if ((__this_01.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05b7dfba;
						piVar4 = il2cpp_vm_Object_Unbox((object)__this_01);
						if (*piVar4 == 0xb) {
							iVar8 = iVar8 + 1;
						}
						else if (token.Type == 0) {
							__this_01 = (List<CustomLogicToken>)token.Value;
							if (__this_01 == null) goto label_05b7dfb5;
							if ((__this_01.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05b7dfba;
							piVar4 = il2cpp_vm_Object_Unbox((object)__this_01);
							iVar8 = iVar8 - (uint)(*piVar4 == 0xc);
						}
					}
					if (iVar8 < 1) {
						if (token.Type == 0) {
							__this_01 = (List<CustomLogicToken>)token.Value;
							if (__this_01 == null) goto label_05b7dfb5;
							if ((__this_01.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05b7dfba;
							piVar4 = il2cpp_vm_Object_Unbox((object)__this_01);
							if (*piVar4 == 0x22) {
	label_05b7dea8: ;
								if (iVar9 == 0) goto label_05b7dd29;
								__this_01 = this._tokens;
								if ((__this_01 == null) ||(pCVar6 = __this_01.get_Item(startIndex + -1), pCVar6 == null)) goto label_05b7dfb5;
								if (pCVar6.Type == 0) {
									__this_01 = (List<CustomLogicToken>)pCVar6.Value;
									if (__this_01 == null) goto label_05b7dfb5;
									if ((__this_01.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05b7dfba;
									piVar4 = il2cpp_vm_Object_Unbox((object)__this_01);
									if (*piVar4 != 0xc) goto label_05b7dd29;
								}
							}
							else {
								if (token.Type == 0) {
									__this_01 = (List<CustomLogicToken>)token.Value;
									if (__this_01 == null) goto label_05b7dfb5;
									if ((__this_01.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05b7dfba;
									piVar4 = il2cpp_vm_Object_Unbox((object)__this_01);
									if (*piVar4 == 0x21) goto label_05b7dea8;
								}
							}
						}
	label_05b7ddc4: ;
						bVar2 = __this_01.IsSymbolBinop(token);
						if (bVar2) {
							if (((token == null) ||(__this_00 = CustomLogicSymbols.BinopSymbolPriorities, __this_00 == null)) ||(obj = token.Value, obj == null)) {
	label_05b7dfb5: ;
								throw new NullReferenceException();
							}
							if ((obj.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
	label_05b7dfba: ;
								throw new InvalidCastException();
							}
							piVar5 = il2cpp_vm_Object_Unbox(obj);
							iVar3 = __this_00.get_Item(*piVar5);
							iVar1 = local_38;
							if (iVar3 < local_38) {
								iVar1 = iVar3;
							}
							if (iVar3 <= local_38) {
							}
							local_38 = iVar1;
						}
					}
				}
	label_05b7dd29: ;
				startIndex = startIndex + 1;
				iVar9 = iVar9 + -1;
			} while (endIndex != startIndex);
		}
		return local_3c;
	}

	[Token(Token = "0x6003C70")]
	[Address(RVA = "0x5A7E320", Offset = "0x5A7D320", VA = "0x5A7E320")]
	private int[] FindCommas(int startIndex, int endIndex)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicParser.c (CustomLogic.CustomLogicParser$$FindCommas): 11 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<CustomLogicToken> __this_00;
		object pIVar3;
		List<int> __this_01;
		CustomLogicToken pCVar5;
		int piVar6;
		Int32[] pSVar7;
		int iVar8;

		__this_01 = new List<int>();
		if (startIndex < endIndex) {
			iVar8 = 0;
			do {
				__this_00 = this._tokens;
				if (__this_00 == null) goto label_05b7e530;
				pCVar5 = __this_00.get_Item(startIndex);
				if ((pCVar5 != null) && (pCVar5.Type == 0)) {
					pIVar3 = pCVar5.Value;
					if (pIVar3 == null) goto label_05b7e530;
					if ((pIVar3.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
	label_05b7e535: ;
						throw new InvalidCastException();
					}
					piVar6 = il2cpp_vm_Object_Unbox(pIVar3);
					iVar8 = iVar8 + (uint)(*piVar6 == 0xb);
					if (pCVar5.Type == 0) {
						pIVar3 = pCVar5.Value;
						if (pIVar3 == null) goto label_05b7e530;
						if ((pIVar3.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05b7e535;
						piVar6 = il2cpp_vm_Object_Unbox(pIVar3);
						iVar8 = iVar8 - (uint)(*piVar6 == 0xc);
						if (pCVar5.Type == 0) {
							pIVar3 = pCVar5.Value;
							if (pIVar3 == null) goto label_05b7e530;
							if ((pIVar3.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05b7e535;
							piVar6 = il2cpp_vm_Object_Unbox(pIVar3);
							if ((*piVar6 == 0x28) && (iVar8 == 0)) {
								if (__this_01 == null) goto label_05b7e530;
								piVar1 = &__this_01._version;
								*piVar1 = *piVar1 + 1;
								pSVar7 = __this_01._items;
								if (pSVar7 == null) goto label_05b7e530;
								uVar2 = __this_01._size;
								if (uVar2 < (uint)pSVar7.Length) {
									__this_01._size = uVar2 + 1;
									pSVar7[(int)uVar2] = startIndex;
								}
								else {
									__this_01.AddWithResize(startIndex);
								}
								iVar8 = 0;
							}
						}
					}
				}
				startIndex = startIndex + 1;
			} while (endIndex != startIndex);
		}
		if (__this_01 != null) {
			pSVar7 = __this_01.ToArray();
			return pSVar7;
		}
	label_05b7e530: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C71")]
	[Address(RVA = "0x5A7E0B0", Offset = "0x5A7D0B0", VA = "0x5A7E0B0")]
	private int FindClosingParen(int startIndex)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicParser.c (CustomLogic.CustomLogicParser$$FindClosingParen): 6 lines keep C-only constructs
		object pIVar1;
		CustomLogicToken pCVar2;
		int piVar3;
		List<CustomLogicToken> __this_00;
		int iVar4;

		__this_00 = this._tokens;
		if (__this_00 != null) {
			iVar4 = 0;
			do {
				if (__this_00._size <= startIndex) {
					return -1;
				}
				pCVar2 = __this_00.get_Item(startIndex);
				if ((pCVar2 != null) && (pCVar2.Type == 0)) {
					pIVar1 = pCVar2.Value;
					if (pIVar1 == null) break;
					if ((pIVar1.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
	label_05b7e1ad: ;
						throw new InvalidCastException();
					}
					piVar3 = il2cpp_vm_Object_Unbox(pIVar1);
					if (*piVar3 == 0xb) {
						iVar4 = iVar4 + 1;
					}
					else if (pCVar2.Type == 0) {
						pIVar1 = pCVar2.Value;
						if (pIVar1 == null) break;
						if ((pIVar1.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05b7e1ad;
						piVar3 = il2cpp_vm_Object_Unbox(pIVar1);
						if ((*piVar3 == 0xc) && (iVar4 = iVar4 + -1, iVar4 == 0)) {
							return startIndex;
						}
					}
				}
				startIndex = startIndex + 1;
				__this_00 = this._tokens;
			} while (__this_00 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C72")]
	[Address(RVA = "0x5A7E660", Offset = "0x5A7D660", VA = "0x5A7E660")]
	private int FindSemicolon(int startIndex)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicParser.c (CustomLogic.CustomLogicParser$$FindSemicolon): 3 lines keep C-only constructs
		List<CustomLogicToken> __this_00;
		object obj;
		CustomLogicToken pCVar1;
		int piVar2;

		__this_00 = this._tokens;
		while (__this_00 != null) {
			if (__this_00._size <= startIndex) {
				return -1;
			}
			pCVar1 = __this_00.get_Item(startIndex);
			if ((pCVar1 != null) && (pCVar1.Type == 0)) {
				obj = pCVar1.Value;
				if (obj == null) break;
				if ((obj.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
					throw new InvalidCastException();
				}
				piVar2 = il2cpp_vm_Object_Unbox(obj);
				if (*piVar2 == 0x26) {
					return startIndex;
				}
			}
			startIndex = startIndex + 1;
			__this_00 = this._tokens;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C73")]
	[Address(RVA = "0x5A7E720", Offset = "0x5A7D720", VA = "0x5A7E720")]
	private bool IsSymbolIn(CustomLogicToken token, HashSet<int> symbols)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicParser.c (CustomLogic.CustomLogicParser$$IsSymbolIn): 3 lines keep C-only constructs
		object obj;
		bool bVar1;
		int piVar2;

		if ((token == null) || (token.Type != 0)) {
			return false;
		}
		if ((symbols == null) ||(obj = token.Value, obj == null)) {
			throw new NullReferenceException();
		}
		if ((obj.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
			throw new InvalidCastException();
		}
		piVar2 = il2cpp_vm_Object_Unbox(obj);
		bVar1 = symbols.Contains(*piVar2);
		return bVar1;
	}

	[Token(Token = "0x6003C74")]
	[Address(RVA = "0x5A7F220", Offset = "0x5A7E220", VA = "0x5A7F220")]
	private bool IsSymbolBinop(CustomLogicToken token)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicParser.c (CustomLogic.CustomLogicParser$$IsSymbolBinop): 3 lines keep C-only constructs
		Dictionary<int, int> __this_00;
		object obj;
		bool bVar1;
		int piVar2;

		if ((token == null) || (token.Type != 0)) {
			return false;
		}
		__this_00 = CustomLogicSymbols.BinopSymbolPriorities;
		if ((__this_00 == null) ||(obj = token.Value, obj == null)) {
			throw new NullReferenceException();
		}
		if ((obj.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
			throw new InvalidCastException();
		}
		piVar2 = il2cpp_vm_Object_Unbox(obj);
		bVar1 = __this_00.ContainsKey(*piVar2);
		return bVar1;
	}

	[Token(Token = "0x6003C75")]
	[Address(RVA = "0x5A7E060", Offset = "0x5A7D060", VA = "0x5A7E060")]
	private bool IsSymbolValue(CustomLogicToken token, int symbolValue)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicParser.c (CustomLogic.CustomLogicParser$$IsSymbolValue): 2 lines keep C-only constructs
		object obj;
		int piVar1;

		if ((token == null) || (token.Type != 0)) {
			return false;
		}
		obj = token.Value;
		if (obj == null) {
			throw new NullReferenceException();
		}
		if ((obj.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
			throw new InvalidCastException();
		}
		piVar1 = il2cpp_vm_Object_Unbox(obj);
		return *piVar1 == symbolValue;
	}

	[Token(Token = "0x6003C76")]
	[Address(RVA = "0x5A7DFC0", Offset = "0x5A7CFC0", VA = "0x5A7DFC0")]
	private bool IsAnySymbolValue(CustomLogicToken token, params int[] symbolValues)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicParser.c (CustomLogic.CustomLogicParser$$IsAnySymbolValue): 3 lines keep C-only constructs
		int iVar1;
		object obj;
		ulong uVar2;
		int piVar3;
		ulong uVar4;

		if (symbolValues == null) {
	label_05b7e04a: ;
			throw new NullReferenceException();
		}
		if ((token != null) && (0 < (int)symbolValues.Length)) {
			uVar2 = symbolValues.Length & 0xffffffff;
			uVar4 = 0;
			do {
				if (uVar2 <= uVar4) {
					throw new IndexOutOfRangeException();
				}
				if (token.Type == 0) {
					obj = token.Value;
					if (obj == null) goto label_05b7e04a;
					if ((obj.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
						throw new InvalidCastException();
					}
					iVar1 = symbolValues[uVar4];
					piVar3 = il2cpp_vm_Object_Unbox(obj);
					if (*piVar3 == iVar1) {
						return true;
					}
					uVar2 = (ulong)(uint)symbolValues.Length;
				}
				uVar4 = uVar4 + 1;
			} while ((long)uVar4 < (long)(int)uVar2);
		}
		return false;
	}

	[Token(Token = "0x6003C77")]
	[Address(RVA = "0x5A7E7B0", Offset = "0x5A7D7B0", VA = "0x5A7E7B0")]
	private void AssertSymbolValue(CustomLogicToken token, int symbolValue)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicParser.c (CustomLogic.CustomLogicParser$$AssertSymbolValue): 17 lines keep C-only constructs
		int piVar1;
		Il2CppClass pIVar2;
		String[] values;
		object pIVar3;
		String pSVar4;
		Exception __this_00;
		MethodInfo lastManagedFrame;
		String[] __this_01;
		Enum local_38;

		if ((token != null) && (token.Type == 0)) {
			pIVar3 = token.Value;
			if (pIVar3 == null) {
				throw new NullReferenceException();
			}
			if ((pIVar3.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
				throw new InvalidCastException();
			}
			piVar1 = il2cpp_vm_Object_Unbox(pIVar3);
			if (*piVar1 == symbolValue) {
				return;
			}
		}
		pIVar2 = il2cpp_codegen_get_runtime_metadata(&typeof(string[]));
		values = (String[])new pIVar2[6];
		pIVar3 = il2cpp_codegen_get_runtime_metadata(&"Parsing error at line ");
		il2cpp_codegen_array_set_ref((Array)values, 0, pIVar3);
		pSVar4 = this.GetLineNumberString(token.Line);
		il2cpp_codegen_array_set_ref((Array)values, 1, (object)pSVar4);
		pIVar3 = il2cpp_codegen_get_runtime_metadata(&", got ");
		__this_01 = values;
		il2cpp_codegen_array_set_ref((Array)values, 2, pIVar3);
		pSVar4 = __this_01.GetTokenString(token);
		il2cpp_codegen_array_set_ref((Array)values, 3, (object)pSVar4);
		pIVar3 = il2cpp_codegen_get_runtime_metadata(&", expected ");
		il2cpp_codegen_array_set_ref((Array)values, 4, pIVar3);
		local_38.klass = il2cpp_codegen_get_runtime_metadata(&typeof(CustomLogicSymbol));
		local_38.monitor = (IntPtr)0xffffffffffffffff;
		pSVar4 = local_38.ToString();
		il2cpp_codegen_array_set_ref((Array)values, 5, (object)pSVar4);
		pSVar4 = String.Concat(values);
		pIVar2 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
		__this_00 = (Exception)il2cpp_codegen_object_new(pIVar2);
		__this_00 = new Exception(pSVar4);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicParser_AssertSymbolValue);
		throw (object)__this_00;
	}

	[Token(Token = "0x6003C78")]
	[Address(RVA = "0x5A7E1C0", Offset = "0x5A7D1C0", VA = "0x5A7E1C0")]
	private void AssertTokenType(CustomLogicToken token, CustomLogicTokenType type)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicParser.c (CustomLogic.CustomLogicParser$$AssertTokenType): 14 lines keep C-only constructs
		Il2CppClass pIVar1;
		String[] values;
		object pIVar2;
		String pSVar3;
		Exception __this_00;
		MethodInfo lastManagedFrame;
		String[] __this_01;
		Enum local_38;

		if ((token == null) || (token.Type != type)) {
			pIVar1 = il2cpp_codegen_get_runtime_metadata(&typeof(string[]));
			values = (String[])new pIVar1[6];
			pIVar2 = il2cpp_codegen_get_runtime_metadata(&"Parsing error at line ");
			il2cpp_codegen_array_set_ref((Array)values, 0, pIVar2);
			pSVar3 = this.GetLineNumberString(token.Line);
			il2cpp_codegen_array_set_ref((Array)values, 1, (object)pSVar3);
			pIVar2 = il2cpp_codegen_get_runtime_metadata(&", got ");
			__this_01 = values;
			il2cpp_codegen_array_set_ref((Array)values, 2, pIVar2);
			pSVar3 = __this_01.GetTokenString(token);
			il2cpp_codegen_array_set_ref((Array)values, 3, (object)pSVar3);
			pIVar2 = il2cpp_codegen_get_runtime_metadata(&", expected ");
			il2cpp_codegen_array_set_ref((Array)values, 4, pIVar2);
			local_38.klass = il2cpp_codegen_get_runtime_metadata(&typeof(CustomLogicTokenType));
			local_38.monitor = (IntPtr)0xffffffffffffffff;
			pSVar3 = local_38.ToString();
			il2cpp_codegen_array_set_ref((Array)values, 5, (object)pSVar3);
			pSVar3 = String.Concat(values);
			pIVar1 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_00 = (Exception)il2cpp_codegen_object_new(pIVar1);
			__this_00 = new Exception(pSVar3);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicParser_AssertTokenType);
			throw (object)__this_00;
		}
		return;
	}

	[Token(Token = "0x6003C79")]
	[Address(RVA = "0x5A7E950", Offset = "0x5A7D950", VA = "0x5A7E950")]
	private void AssertFalse(CustomLogicToken token)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicParser.c (CustomLogic.CustomLogicParser$$AssertFalse): 6 lines keep C-only constructs
		String pSVar1;
		String str3;
		String str0;
		String str2;
		Il2CppClass klass;
		Exception __this_00;
		MethodInfo lastManagedFrame;

		pSVar1 = this.GetLineNumberString(token.Line);
		str3 = this.GetTokenString(token);
		str0 = il2cpp_codegen_get_runtime_metadata(&"Parsing error at line ");
		str2 = il2cpp_codegen_get_runtime_metadata(&", got ");
		pSVar1 = String.Concat(str0, pSVar1, str2, str3);
		klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
		__this_00 = (Exception)il2cpp_codegen_object_new(klass);
		__this_00 = new Exception(pSVar1);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicParser_AssertFalse);
		throw (object)__this_00;
	}

	[Token(Token = "0x6003C7A")]
	[Address(RVA = "0x5A7F2E0", Offset = "0x5A7E2E0", VA = "0x5A7F2E0")]
	private string GetTokenString(CustomLogicToken token)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicParser.c (CustomLogic.CustomLogicParser$$GetTokenString): 5 lines keep C-only constructs
		object obj;
		String pSVar1;
		uint puVar2;
		Enum local_20;
		uint local_10;

		if (token == null) {
			return "null";
		}
		obj = token.Value;
		if (token.Type == 0) {
			if (obj != null) {
				if ((obj.klass._1).element_class != (typeof(CustomLogicSymbol)._1).element_class) {
					throw new InvalidCastException();
				}
				puVar2 = il2cpp_vm_Object_Unbox(obj);
				local_10 = *puVar2;
				local_20.klass = (Enum)typeof(CustomLogicSymbol);
				local_20.monitor = (IntPtr)0xffffffffffffffff;
				return pSVar1;
			}
		}
		else if (obj != null) {
			pSVar1 = (String)(*obj.klass.vtable[3].methodPtr)(obj,obj.klass.vtable[3].method);
			return pSVar1;
		}
		throw new NullReferenceException();
	}
}
