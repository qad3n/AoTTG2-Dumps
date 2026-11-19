// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicUtils
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicUtils.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicUtils.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200064B")]
internal static class CustomLogicUtils
{
	[Token(Token = "0x6003C8E")]
	[Address(RVA = "0x5A80E10", Offset = "0x5A7FE10", VA = "0x5A80E10")]
	public static Exception OperatorException(string operatorName, object lhs, object rhs)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUtils.c (CustomLogic.CustomLogicUtils$$OperatorException): clean
		Type arg1;
		Type arg2;
		String message;
		Exception __this;

		if (lhs != null) {
			arg1 = lhs.GetType();
			if (rhs != null) {
				arg2 = rhs.GetType();
				message = String.Format("Operator {0} not defined for types {1} and {2}", (object)operatorName, (object)arg1, (object)arg2);
				__this = new Exception(message);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C8F")]
	[Address(RVA = "0x5A80EC0", Offset = "0x5A7FEC0", VA = "0x5A80EC0")]
	public static string SerializeAst(CustomLogicBaseAst ast)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUtils.c (CustomLogic.CustomLogicUtils$$SerializeAst): 43 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		int iVar3;
		CustomLogicBaseAst pCVar4;
		IntPtr pvVar5;
		String pSVar6;
		bool bVar7;
		int a;
		int r;
		int g;
		int b;
		CustomLogicBaseAst pCVar8;
		String pSVar9;
		Color255 __this;
		sbyte pcVar10;
		String* ppSVar11;
		String[] value;
		MethodInfo pMVar12;
		List<object> __this_00;
		float fVar13;
		float extraout_XMM0_Db;
		float extraout_XMM0_Db_00;
		float extraout_XMM0_Db_01;
		float extraout_XMM0_Db_02;
		float extraout_XMM0_Db_03;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dc_03;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint extraout_XMM0_Dd_02;
		uint extraout_XMM0_Dd_03;
		float in_XMM1_Da;
		Color color;
		ulong local_68;
		float[] local_60 = new float[2];
		Color local_58;
		float local_48;
		float fStack_44;
		ulong uStack_40;
		Color local_38;

		if (Il2CppMethodInitialized_075473a3 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicClassInstantiateExpressionAst)) ;
			Il2CppMethodInitialized_075473a3 = true;
		}
		local_60[0] = 0.0;
		local_68 = 0;
		if (ast != null) {
			pCVar4 = ast.klass;
			bVar1 = (pCVar4._2).typeHierarchyDepth;
			bVar2 = (typeof(CustomLogicPrimitiveExpressionAst)._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) ||((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicPrimitiveExpressionAst))) {
				bVar2 = (typeof(CustomLogicClassInstantiateExpressionAst)._2).typeHierarchyDepth;
				if ((bVar2 <= bVar1) &&((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicClassInstantiateExpressionAst))) {
					if ((*(ulong)((sbyte)ast + 0x20)) == null) goto label_05b8165b;
					iVar3 = *(int)((long)(*(ulong)((sbyte)ast + 0x20)) + 0x18);
					bVar7 = ((String)(*(ulong)((sbyte)ast + 0x18)) == "Color");
					if (!bVar7) {
						bVar7 = ((String)(*(ulong)((sbyte)ast + 0x18)) == "Vector3");
						if (!bVar7) goto label_05b81217;
						if (iVar3 == 3) {
							if ((*(ulong)((sbyte)ast + 0x20)) == null) goto label_05b8165b;
							pMVar12 = null;
							pCVar8 = ((*(ulong)((sbyte)ast + 0x20))).get_Item(0);
							local_58.r = CustomLogicUtils.BaseAstToFloat(pCVar8);
							local_58.g = extraout_XMM0_Db_01;
							local_58.a = (float)extraout_XMM0_Dd_01;
							local_58.b = (float)extraout_XMM0_Dc_01;
							if ((*(ulong)((sbyte)ast + 0x20)) == null) goto label_05b8165b;
							pMVar12 = (MethodInfo)0x1;
							pCVar8 = ((*(ulong)((sbyte)ast + 0x20))).get_Item(1);
							local_48 = CustomLogicUtils.BaseAstToFloat(pCVar8);
							fStack_44 = extraout_XMM0_Db_02;
							uStack_40 = CONCAT44(extraout_XMM0_Dd_02, extraout_XMM0_Dc_02);
							__this_00 = (*(ulong)((sbyte)ast + 0x20));
							if (__this_00 == null) goto label_05b8165b;
							pMVar12 = (MethodInfo)0x2;
	override_prt_5b81519_6c978d7a: ;
							pCVar8 = __this_00.get_Item((int32_t)pMVar12);
							in_XMM1_Da = CustomLogicUtils.BaseAstToFloat(pCVar8);
							local_68 = CONCAT44(local_48, local_58.r);
						}
						else if (iVar3 == 2) {
							if ((*(ulong)((sbyte)ast + 0x20)) == null) goto label_05b8165b;
							pMVar12 = null;
							pCVar8 = ((*(ulong)((sbyte)ast + 0x20))).get_Item(0);
							local_58.r = CustomLogicUtils.BaseAstToFloat(pCVar8);
							local_58.g = extraout_XMM0_Db_03;
							local_58.a = (float)extraout_XMM0_Dd_03;
							local_58.b = (float)extraout_XMM0_Dc_03;
							if ((*(ulong)((sbyte)ast + 0x20)) == null) goto label_05b8165b;
							pMVar12 = (MethodInfo)0x1;
							pCVar8 = ((*(ulong)((sbyte)ast + 0x20))).get_Item(1);
							fVar13 = CustomLogicUtils.BaseAstToFloat(pCVar8);
							local_68 = CONCAT44(fVar13, local_58.r);
							in_XMM1_Da = 0.0;
						}
						else {
							if (iVar3 == 1) {
								if ((*(ulong)((sbyte)ast + 0x20)) == null) goto label_05b8165b;
								pMVar12 = null;
								pCVar8 = ((*(ulong)((sbyte)ast + 0x20))).get_Item(0);
								local_58.r = CustomLogicUtils.BaseAstToFloat(pCVar8);
								local_58.g = extraout_XMM0_Db;
								local_58.a = (float)extraout_XMM0_Dd;
								local_58.b = (float)extraout_XMM0_Dc;
								if ((*(ulong)((sbyte)ast + 0x20)) == null) goto label_05b8165b;
								pMVar12 = null;
								pCVar8 = ((*(ulong)((sbyte)ast + 0x20))).get_Item(0);
								local_48 = CustomLogicUtils.BaseAstToFloat(pCVar8);
								fStack_44 = extraout_XMM0_Db_00;
								uStack_40 = CONCAT44(extraout_XMM0_Dd_00, extraout_XMM0_Dc_00);
								__this_00 = (*(ulong)((sbyte)ast + 0x20));
								if (__this_00 == null) goto label_05b8165b;
								pMVar12 = null;
								goto override_prt_5b81519_6c978d7a;
							}
							local_68 = il2cpp_runtime_helper_05b8d690(0);
						}
						local_60[0] = in_XMM1_Da;
						value = (String[])new string[3];
						pSVar9 = local_68.ToString();
						if (value == null) goto label_05b8165b;
						if ((int)value.Length == 0) goto label_05b81660;
						value[0] = pSVar9;
						pSVar9 = (((long)&local_68 + 4)).ToString();
						if ((value.Length & 0xfffffffe) == 0) goto label_05b81660;
						value[1] = pSVar9;
						pSVar9 = local_60.ToString();
						if ((uint)value.Length < 3) goto label_05b81660;
						ppSVar11 = value.m_Items + 2;
						value[2] = pSVar9;
						goto label_05b8162e;
					}
					local_38.r = 1.0;
					local_38.g = 1.0;
					local_38.b = 1.0;
					local_38.a = 1.0;
					if (iVar3 == 4) {
						if ((*(ulong)((sbyte)ast + 0x20)) == null) goto label_05b8165b;
						pMVar12 = null;
						pCVar8 = ((*(ulong)((sbyte)ast + 0x20))).get_Item(0);
						r = CustomLogicUtils.BaseAstToInt(pCVar8);
						if ((*(ulong)((sbyte)ast + 0x20)) == null) goto label_05b8165b;
						pMVar12 = (MethodInfo)0x1;
						pCVar8 = ((*(ulong)((sbyte)ast + 0x20))).get_Item(1);
						g = CustomLogicUtils.BaseAstToInt(pCVar8);
						if ((*(ulong)((sbyte)ast + 0x20)) == null) goto label_05b8165b;
						pMVar12 = (MethodInfo)0x2;
						pCVar8 = ((*(ulong)((sbyte)ast + 0x20))).get_Item(2);
						b = CustomLogicUtils.BaseAstToInt(pCVar8);
						if ((*(ulong)((sbyte)ast + 0x20)) == null) goto label_05b8165b;
						pMVar12 = (MethodInfo)0x3;
						pCVar8 = ((*(ulong)((sbyte)ast + 0x20))).get_Item(3);
						a = CustomLogicUtils.BaseAstToInt(pCVar8);
	label_05b813c3: ;
						__this = new Color255(r, g, b, a);
					}
					else {
						if (iVar3 == 3) {
							if ((*(ulong)((sbyte)ast + 0x20)) == null) goto label_05b8165b;
							pMVar12 = null;
							pCVar8 = ((*(ulong)((sbyte)ast + 0x20))).get_Item(0);
							r = CustomLogicUtils.BaseAstToInt(pCVar8);
							if ((*(ulong)((sbyte)ast + 0x20)) == null) goto label_05b8165b;
							pMVar12 = (MethodInfo)0x1;
							pCVar8 = ((*(ulong)((sbyte)ast + 0x20))).get_Item(1);
							g = CustomLogicUtils.BaseAstToInt(pCVar8);
							if ((*(ulong)((sbyte)ast + 0x20)) == null) goto label_05b8165b;
							pMVar12 = (MethodInfo)0x2;
							pCVar8 = ((*(ulong)((sbyte)ast + 0x20))).get_Item(2);
							b = CustomLogicUtils.BaseAstToInt(pCVar8);
							a = 0xff;
							goto label_05b813c3;
						}
						if (iVar3 == 1) {
							if (((*(ulong)((sbyte)ast + 0x20)) == null) ||(pCVar8 = ((*(ulong)((sbyte)ast + 0x20))).get_Item(0), pCVar8 == null)) goto label_05b8165b;
							bVar1 = (typeof(CustomLogicPrimitiveExpressionAst)._2).typeHierarchyDepth;
							if (((pCVar8.klass._2).typeHierarchyDepth < bVar1) ||((pCVar8.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicPrimitiveExpressionAst))) {
								throw new InvalidCastException();
							}
							pCVar4 = (*(ulong)((sbyte)pCVar8 + 0x18));
							if (pCVar4 == null) goto label_05b8165b;
							pvVar5 = (pCVar4._1).image;
							pSVar9 = (String)(**(code*)((long)pvVar5 + 0x168))(pCVar4,*(ulong)((long)pvVar5 + 0x170));
							ColorUtility.TryParseHtmlString(pSVar9, ref local_38);
							local_58.r = local_38.r;
							local_58.g = local_38.g;
							local_58.b = 0.0;
							local_58.a = 0.0;
							local_48 = local_38.b;
							fStack_44 = local_38.a;
							color.b = local_48;
							color.a = fStack_44;
							color.r = local_58.r;
							color.g = local_58.g;
							__this = new Color255(color);
						}
						else {
							__this = new Color255();
						}
					}
					value = (String[])new string[4];
					if ((__this == null) ||(pSVar9 = (__this.R).ToString(), value == null)) {
	label_05b8165b: ;
						throw new NullReferenceException();
					}
					if ((int)value.Length != 0) {
						value[0] = pSVar9;
						pSVar9 = (__this.G).ToString();
						if ((value.Length & 0xfffffffe) != 0) {
							value[1] = pSVar9;
							pSVar9 = (__this.B).ToString();
							if (2 < (uint)value.Length) {
								value[2] = pSVar9;
								pSVar9 = (__this.A).ToString();
								if ((value.Length & 0xfffffffc) != 0) {
									ppSVar11 = value.m_Items + 3;
									value[3] = pSVar9;
	label_05b8162e: ;
									pSVar9 = String.Join("/", value);
									return pSVar9;
								}
							}
						}
					}
	label_05b81660: ;
					throw new IndexOutOfRangeException();
				}
			}
			else {
				pCVar4 = (*(ulong)((sbyte)ast + 0x18));
				if (pCVar4 != null) {
					pSVar6 = (pCVar4._1).image;
					if ((pSVar6 == g_data_07556740) || (pSVar6 == g_data_07556710)) {
						pSVar9 = pCVar4.ToString();
						return pSVar9;
					}
					if (pSVar6 == g_data_075566f0) {
						pcVar10 = il2cpp_vm_Object_Unbox((object)pCVar4);
						if (*pcVar10 == false) {
							ppSVar11 = &"false";
						}
						else {
							ppSVar11 = &"true";
						}
						goto label_05b8122c;
					}
					if (pSVar6 == g_data_07556758) {
						pSVar9 = MapScriptComponent.SanitizeParameter((String)pCVar4);
						return pSVar9;
					}
				}
			}
		}
	label_05b81217: ;
		ppSVar11 = &g_data_07556758.static_fields.Empty;
	label_05b8122c: ;
		return ((System_String_StaticFields)ppSVar11).Empty;
	}

	[Token(Token = "0x6003C90")]
	[Address(RVA = "0x5A817A0", Offset = "0x5A807A0", VA = "0x5A817A0")]
	public static float BaseAstToFloat(CustomLogicBaseAst ast)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUtils.c (CustomLogic.CustomLogicUtils$$BaseAstToFloat): 4 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		int iVar3;
		CustomLogicBaseAst pCVar4;
		object obj;
		int piVar5;
		float fVar6;

		if (ast != null) {
			pCVar4 = ast.klass;
			bVar1 = (pCVar4._2).typeHierarchyDepth;
			bVar2 = (typeof(CustomLogicPrimitiveExpressionAst)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicPrimitiveExpressionAst))) {
				pCVar4 = (*(ulong)((sbyte)ast + 0x18));
				fVar6 = Convert.ToSingle((object)pCVar4);
				return fVar6;
			}
			bVar2 = (typeof(CustomLogicUnaryExpressionAst)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicUnaryExpressionAst))) {
				if (((*(ulong)((sbyte)ast + 0x20)) == null) ||(obj = *(object*)((long)(*(ulong)((sbyte)ast + 0x20)) + 0x18), obj == null)) {
					throw new NullReferenceException();
				}
				if ((obj.klass._1).element_class != (typeof(CustomLogicSymbol)._1).element_class) {
					throw new InvalidCastException();
				}
				piVar5 = il2cpp_vm_Object_Unbox(obj);
				iVar3 = *piVar5;
				fVar6 = CustomLogicUtils.BaseAstToFloat((CustomLogicBaseAst)(*(ulong)((sbyte)ast + 0x18)));
				if (iVar3 == 0x21) {
					return fVar6;
				}
				if (iVar3 == 0x22) {
					return -fVar6;
				}
			}
		}
		return 0.0;
	}

	[Token(Token = "0x6003C91")]
	[Address(RVA = "0x5A81670", Offset = "0x5A80670", VA = "0x5A81670")]
	public static int BaseAstToInt(CustomLogicBaseAst ast)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUtils.c (CustomLogic.CustomLogicUtils$$BaseAstToInt): 4 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		int iVar3;
		CustomLogicBaseAst pCVar4;
		object obj;
		int iVar5;
		int piVar6;

		if (ast != null) {
			pCVar4 = ast.klass;
			bVar1 = (pCVar4._2).typeHierarchyDepth;
			bVar2 = (typeof(CustomLogicPrimitiveExpressionAst)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicPrimitiveExpressionAst))) {
				pCVar4 = (*(ulong)((sbyte)ast + 0x18));
				iVar5 = Convert.ToInt32((object)pCVar4);
				return iVar5;
			}
			bVar2 = (typeof(CustomLogicUnaryExpressionAst)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicUnaryExpressionAst))) {
				if (((*(ulong)((sbyte)ast + 0x20)) == null) ||(obj = *(object*)((long)(*(ulong)((sbyte)ast + 0x20)) + 0x18), obj == null)) {
					throw new NullReferenceException();
				}
				if ((obj.klass._1).element_class != (typeof(CustomLogicSymbol)._1).element_class) {
					throw new InvalidCastException();
				}
				piVar6 = il2cpp_vm_Object_Unbox(obj);
				iVar3 = *piVar6;
				iVar5 = CustomLogicUtils.BaseAstToInt((CustomLogicBaseAst)(*(ulong)((sbyte)ast + 0x18)));
				if (iVar3 == 0x21) {
					return iVar5;
				}
				if (iVar3 == 0x22) {
					return -iVar5;
				}
			}
		}
		return 0;
	}
}
