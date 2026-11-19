// ==================== AoTTG2 cross-reference ====================
// Type: Utility.SingletonFactory
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/SingletonFactory.c
// Prior real C# source (older reference): Assets/Scripts/Utility/SingletonFactory.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x2000937")]
internal class SingletonFactory : MonoBehaviour
{
	[Token(Token = "0x60056C1")]
	public static T CreateSingleton<T>(T instance) where T : Component
	{
		return null;
	}

	[Token(Token = "0x60056C2")]
	[Address(RVA = "0x5CF10A0", Offset = "0x5CF00A0", VA = "0x5CF10A0")]
	public SingletonFactory()
	{
		// Lifted from source/cpp/Utility/SingletonFactory.c (Utility.SingletonFactory$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Utility/SingletonFactory.c.

	// Utility.SingletonFactory$$CreateSingleton<object>: 5 lines keep C-only constructs
	private static object CreateSingleton_object(object instance)
	{
		uint uVar1;
		RuntimeTypeHandle handle;
		bool bVar2;
		object pIVar3;
		Type p;
		String pSVar4;
		Il2CppClass klass;
		Exception __this;

		if (method.rgctx_data == null) {
			if (method.rgctx_data == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
				uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				goto joined_r0x03780692;
			}
		}
		uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
	joined_r0x03780692: ;
		if (uVar1 == 0) {
		}
		bVar2 = ((Object)instance != null);
		if (bVar2) {
			handle.value = (RuntimeTypeHandle)method.rgctx_data._1_T;
			p = Type.GetTypeFromHandle(handle);
			pIVar3 = (object)p.unknown();
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Attempting to create duplicate singleton of {0}");
			pSVar4 = String.Format(pSVar4, pIVar3);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			throw (object)__this;
		}
		pIVar3 = Util.CreateDontDestroyObj<object>();
		return pIVar3;
	}
}
