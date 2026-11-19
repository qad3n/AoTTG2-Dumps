// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.Editor.CustomLogicReflectionUtils
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/Editor/CustomLogicReflectionUtils.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;

namespace CustomLogic.Editor;

[Token(Token = "0x200065D")]
public static class CustomLogicReflectionUtils
{
	[Token(Token = "0x6003D1F")]
	[Address(RVA = "0x5A91D30", Offset = "0x5A90D30", VA = "0x5A91D30")]
	public static bool IsCustomLogicType(Type type)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicReflectionUtils.c (CustomLogic.Editor.CustomLogicReflectionUtils$$IsCustomLogicType): clean
		bool bVar1;
		String a;

		if (type == null) {
			throw new NullReferenceException();
		}
		a = (String)type.unknown();
		bVar1 = (a == "CustomLogic");
		if (bVar1) {
			bVar1 = CustomLogicReflectionUtils.HasAttribute<CLTypeAttribute>(type, false);
			return bVar1;
		}
		return false;
	}

	[Token(Token = "0x6003D20")]
	[Address(RVA = "0x5A91DB0", Offset = "0x5A90DB0", VA = "0x5A91DB0")]
	public static bool IsCustomLogicProperty(MemberInfo member)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicReflectionUtils.c (CustomLogic.Editor.CustomLogicReflectionUtils$$IsCustomLogicProperty): clean
		bool bVar1;

		bVar1 = CustomLogicReflectionUtils.HasAttribute<CLPropertyAttribute>(member, false);
		return bVar1;
	}

	[Token(Token = "0x6003D21")]
	[Address(RVA = "0x5A91DF0", Offset = "0x5A90DF0", VA = "0x5A91DF0")]
	public static bool IsCustomLogicMethod(MethodInfo methodInfo)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicReflectionUtils.c (CustomLogic.Editor.CustomLogicReflectionUtils$$IsCustomLogicMethod): clean
		bool bVar1;

		bVar1 = CustomLogicReflectionUtils.HasAttribute<CLMethodAttribute>((MemberInfo)methodInfo, false);
		return bVar1;
	}

	[Token(Token = "0x6003D22")]
	[Address(RVA = "0x5A91E30", Offset = "0x5A90E30", VA = "0x5A91E30")]
	public static bool IsObsolete(Type type)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicReflectionUtils.c (CustomLogic.Editor.CustomLogicReflectionUtils$$IsObsolete): clean
		bool bVar1;

		bVar1 = CustomLogicReflectionUtils.HasAttribute<ObsoleteAttribute>(type, false);
		return bVar1;
	}

	[Token(Token = "0x6003D23")]
	[Address(RVA = "0x5A91E70", Offset = "0x5A90E70", VA = "0x5A91E70")]
	public static bool IsObsolete(MemberInfo member)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicReflectionUtils.c (CustomLogic.Editor.CustomLogicReflectionUtils$$IsObsolete): clean
		bool bVar1;

		bVar1 = CustomLogicReflectionUtils.HasAttribute<ObsoleteAttribute>(member, false);
		return bVar1;
	}

	[Token(Token = "0x6003D24")]
	[Address(RVA = "0x5A91EB0", Offset = "0x5A90EB0", VA = "0x5A91EB0")]
	public static string GetObsoleteMessage(Type type)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicReflectionUtils.c (CustomLogic.Editor.CustomLogicReflectionUtils$$GetObsoleteMessage): 1 lines keep C-only constructs
		String value;
		bool bVar1;
		ObsoleteAttribute pSVar2;
		String* ppSVar3;

		bVar1 = CustomLogicReflectionUtils.HasAttribute<ObsoleteAttribute>(type, false);
		if (bVar1) {
			pSVar2 = CustomLogicReflectionUtils.GetAttribute<ObsoleteAttribute>(type, false);
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			value = pSVar2._message;
			bVar1 = String.IsNullOrEmpty(value);
			if (!bVar1) {
				return value;
			}
			ppSVar3 = &"Obsolete";
		}
		else {
			ppSVar3 = *(String**)(g_data_07556758 + 0xb8);
		}
		return *ppSVar3;
	}

	[Token(Token = "0x6003D25")]
	[Address(RVA = "0x5A91F70", Offset = "0x5A90F70", VA = "0x5A91F70")]
	public static string GetObsoleteMessage(MemberInfo member)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicReflectionUtils.c (CustomLogic.Editor.CustomLogicReflectionUtils$$GetObsoleteMessage): 1 lines keep C-only constructs
		String value;
		bool bVar1;
		ObsoleteAttribute pSVar2;
		String* ppSVar3;

		bVar1 = CustomLogicReflectionUtils.HasAttribute<ObsoleteAttribute>(member, false);
		if (bVar1) {
			pSVar2 = CustomLogicReflectionUtils.GetAttribute<ObsoleteAttribute>(member, false);
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			value = pSVar2._message;
			bVar1 = String.IsNullOrEmpty(value);
			if (!bVar1) {
				return value;
			}
			ppSVar3 = &"Obsolete";
		}
		else {
			ppSVar3 = *(String**)(g_data_07556758 + 0xb8);
		}
		return *ppSVar3;
	}

	[Token(Token = "0x6003D26")]
	public static bool HasAttribute<T>(Type type, bool inherit = false) where T : Attribute
	{
		return default(bool);
	}

	[Token(Token = "0x6003D27")]
	public static T GetAttribute<T>(Type type, bool inherit = false) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x6003D28")]
	public static bool HasAttribute<T>(MemberInfo member, bool inherit = false) where T : Attribute
	{
		return default(bool);
	}

	[Token(Token = "0x6003D29")]
	public static T GetAttribute<T>(MemberInfo member, bool inherit = false) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x6003D2A")]
	[Address(RVA = "0x5A92030", Offset = "0x5A91030", VA = "0x5A92030")]
	public static bool IsPropertyStatic(PropertyInfo propertyInfo)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicReflectionUtils.c (CustomLogic.Editor.CustomLogicReflectionUtils$$IsPropertyStatic): clean
		bool bVar1;
		MethodBase pSVar2;

		if (propertyInfo == null) {
			throw new NullReferenceException();
		}
		pSVar2 = (MethodBase)propertyInfo.unknown(1);
		if ((pSVar2 != null) &&(bVar1 = pSVar2.IsStatic)) {
			return true;
		}
		pSVar2 = (MethodBase)propertyInfo.unknown(1);
		if (pSVar2 == null) {
			return false;
		}
		bVar1 = pSVar2.IsStatic;
		return bVar1;
	}

	[Token(Token = "0x6003D2B")]
	[Address(RVA = "0x5A920A0", Offset = "0x5A910A0", VA = "0x5A920A0")]
	public static string GetDefaultValueAsString(ParameterInfo parameterInfo)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicReflectionUtils.c (CustomLogic.Editor.CustomLogicReflectionUtils$$GetDefaultValueAsString): 3 lines keep C-only constructs
		Il2CppMethodPointer vtableDispatch;
		bool bVar1;
		object pIVar2;
		String pSVar3;

		if (parameterInfo != null) {
			bVar1 = parameterInfo.get_HasDefaultValue();
			if (!bVar1) {
				return g_data_07556758.static_fields.Empty;
			}
			pIVar2 = parameterInfo.get_DefaultValue();
			if (pIVar2 == null) {
				return "null";
			}
			pSVar3 = (String)parameterInfo.get_DefaultValue();
			if ((pSVar3 != null) && (pSVar3.klass == g_data_07556758)) {
				pSVar3 = String.Concat("\"", pSVar3, "\"");
				return pSVar3;
			}
			pIVar2 = parameterInfo.get_DefaultValue();
			if (pIVar2 != null) {
				vtableDispatch = pIVar2.klass.vtable[3].methodPtr;
				pSVar3 = (String)(*vtableDispatch)(pIVar2,pIVar2.klass.vtable[3].method,vtableDispatch);
				return pSVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003D2C")]
	[Address(RVA = "0x5A921B0", Offset = "0x5A911B0", VA = "0x5A921B0")]
	public static bool IsVariadicParameter(ParameterInfo parameterInfo)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicReflectionUtils.c (CustomLogic.Editor.CustomLogicReflectionUtils$$IsVariadicParameter): clean
		Il2CppType handle;
		bool bVar1;
		Type pSVar2;

		handle = TypeRef_System_ParamArrayAttribute;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (parameterInfo == null) {
			throw new NullReferenceException();
		}
		bVar1 = parameterInfo.IsDefined(pSVar2, false);
		return bVar1;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/Editor/CustomLogicReflectionUtils.c.

	// CustomLogic.Editor.CustomLogicReflectionUtils$$GetAttribute<object>: 7 lines keep C-only constructs
	private static object GetAttribute_object(MemberInfo member, bool inherit)
	{
		RuntimeTypeHandle handle;
		object obj;
		MethodInfo_34BEC00_RGCTXs pMVar1;
		Type pSVar2;
		Object[] pSVar3;
		Il2CppClass klass;
		object pIVar4;

		pMVar1 = method.rgctx_data;
		if (pMVar1 == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			pMVar1 = method.rgctx_data;
		}
		handle.value = (RuntimeTypeHandle)pMVar1._0_T;
		pSVar2 = Type.GetTypeFromHandle(handle);
		if (member != null) {
			pSVar3 = member.GetCustomAttributes(pSVar2, inherit);
			if (pSVar3 != null) {
				if ((int)pSVar3.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				obj = pSVar3[0];
				klass = method.rgctx_data._1_T;
				if (((klass._2).bitflags1 & 1) == 0) {
					klass = il2cpp_codegen_class_init_checked(klass);
				}
				if (obj == null) {
					pIVar4 = null;
				}
				else {
					pIVar4 = il2cpp_vm_Object_IsInst(obj, klass);
					if (pIVar4 == null) {
						throw new InvalidCastException();
					}
				}
				return pIVar4;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.Editor.CustomLogicReflectionUtils$$GetAttribute<object>: 7 lines keep C-only constructs
	private static object GetAttribute_object(Type type, bool inherit)
	{
		RuntimeTypeHandle handle;
		object obj;
		MethodInfo_34BECD0_RGCTXs pMVar1;
		Type pSVar2;
		Object[] pSVar3;
		Il2CppClass klass;
		object pIVar4;

		pMVar1 = method.rgctx_data;
		if (pMVar1 == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			pMVar1 = method.rgctx_data;
		}
		handle.value = (RuntimeTypeHandle)pMVar1._0_T;
		pSVar2 = Type.GetTypeFromHandle(handle);
		if (type != null) {
			pSVar3 = type.GetCustomAttributes(pSVar2, inherit);
			if (pSVar3 != null) {
				if ((int)pSVar3.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				obj = pSVar3[0];
				klass = method.rgctx_data._1_T;
				if (((klass._2).bitflags1 & 1) == 0) {
					klass = il2cpp_codegen_class_init_checked(klass);
				}
				if (obj == null) {
					pIVar4 = null;
				}
				else {
					pIVar4 = il2cpp_vm_Object_IsInst(obj, klass);
					if (pIVar4 == null) {
						throw new InvalidCastException();
					}
				}
				return pIVar4;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.Editor.CustomLogicReflectionUtils$$HasAttribute<object>: 2 lines keep C-only constructs
	private static bool HasAttribute_object(MemberInfo member, bool inherit)
	{
		RuntimeTypeHandle handle;
		MethodInfo_34BEDA0_RGCTXs pMVar1;
		Type pSVar2;
		Object[] pSVar3;

		pMVar1 = method.rgctx_data;
		if (pMVar1 == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			pMVar1 = method.rgctx_data;
		}
		handle.value = (RuntimeTypeHandle)pMVar1._0_T;
		pSVar2 = Type.GetTypeFromHandle(handle);
		if (member != null) {
			pSVar3 = member.GetCustomAttributes(pSVar2, inherit);
			if (pSVar3 != null) {
				return (int)pSVar3.Length != 0;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.Editor.CustomLogicReflectionUtils$$HasAttribute<object>: 2 lines keep C-only constructs
	private static bool HasAttribute_object(Type type, bool inherit)
	{
		RuntimeTypeHandle handle;
		MethodInfo_34BEE20_RGCTXs pMVar1;
		Type pSVar2;
		Object[] pSVar3;

		pMVar1 = method.rgctx_data;
		if (pMVar1 == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			pMVar1 = method.rgctx_data;
		}
		handle.value = (RuntimeTypeHandle)pMVar1._0_T;
		pSVar2 = Type.GetTypeFromHandle(handle);
		if (type != null) {
			pSVar3 = type.GetCustomAttributes(pSVar2, inherit);
			if (pSVar3 != null) {
				return (int)pSVar3.Length != 0;
			}
		}
		throw new NullReferenceException();
	}
}
