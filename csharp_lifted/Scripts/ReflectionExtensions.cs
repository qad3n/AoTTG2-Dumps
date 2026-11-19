// ==================== AoTTG2 cross-reference ====================
// Type: ReflectionExtensions
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ReflectionExtensions.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;

[Token(Token = "0x2000028")]
public static class ReflectionExtensions
{
	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x0")]
	public static readonly Type IntType;

	[Token(Token = "0x40000E5")]
	[FieldOffset(Offset = "0x8")]
	public static readonly Type FloatType;

	[Token(Token = "0x600011F")]
	public static bool HasAttribute<T>(this Type member) where T : Attribute
	{
		return default(bool);
	}

	[Token(Token = "0x6000120")]
	public static bool HasAttribute<T>(this MemberInfo member) where T : Attribute
	{
		return default(bool);
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ReflectionExtensions.c.

	// ReflectionExtensions$$HasAttribute<object>: 2 lines keep C-only constructs
	private static bool HasAttribute_object(MemberInfo member)
	{
		MethodInfo_36619B0_RGCTXs pMVar1;
		object pIVar2;

		pMVar1 = method.rgctx_data;
		if (pMVar1 == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			pMVar1 = method.rgctx_data;
		}
		pIVar2 = CustomAttributeExtensions.GetCustomAttribute<object>(member);
		return pIVar2 != null;
	}

	// ReflectionExtensions$$HasAttribute<object>: 2 lines keep C-only constructs
	private static bool HasAttribute_object(Type member)
	{
		MethodInfo_36619F0_RGCTXs pMVar1;
		object pIVar2;

		pMVar1 = method.rgctx_data;
		if (pMVar1 == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			pMVar1 = method.rgctx_data;
		}
		pIVar2 = CustomAttributeExtensions.GetCustomAttribute<object>((MemberInfo)member);
		return pIVar2 != null;
	}

	// ReflectionExtensions$$.cctor: clean
	static ReflectionExtensions()
	{
		long lVar2;
		Type pSVar3;

		lVar2 = g_data_07556710;
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)(lVar2 + 0x20));
		ReflectionExtensions.IntType = pSVar3;
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)(g_data_07556740 + 0x20)) ;
		ReflectionExtensions.FloatType = pSVar3;
		return;
	}
}
