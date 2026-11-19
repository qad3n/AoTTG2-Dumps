// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.BuiltinComponentInstance
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/BuiltinComponentInstance.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x2000630")]
internal abstract class BuiltinComponentInstance : BuiltinClassInstance
{
	[Token(Token = "0x4001A9D")]
	[FieldOffset(Offset = "0x30")]
	public Component Component;

	[Token(Token = "0x17000A5D")]
	public new bool Enabled
	{
		[Token(Token = "0x6003B0A")]
		[Address(RVA = "0x5A6A6C0", Offset = "0x5A696C0", VA = "0x5A6A6C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/BuiltinComponentInstance.c (CustomLogic.BuiltinComponentInstance$$get_Enabled): 1 lines keep C-only constructs
			byte bVar1;
			Behaviour __this_00;
			bool bVar2;

			__this_00 = (Behaviour)this.Component;
			if (__this_00 != null) {
				bVar1 = (typeof(Behaviour)._2).typeHierarchyDepth;
				if ((bVar1 <= (__this_00.klass._2).typeHierarchyDepth) &&((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(Behaviour))) {
					return bVar2;
				}
			}
			return false;
		}
		[Token(Token = "0x6003B0B")]
		[Address(RVA = "0x5A6A720", Offset = "0x5A69720", VA = "0x5A6A720")]
		set
		{
			// Lifted from source/cpp/CustomLogic/BuiltinComponentInstance.c (CustomLogic.BuiltinComponentInstance$$set_Enabled): 1 lines keep C-only constructs
			byte bVar1;
			Behaviour __this_00;

			__this_00 = (Behaviour)this.Component;
			if (__this_00 != null) {
				bVar1 = (typeof(Behaviour)._2).typeHierarchyDepth;
				if ((bVar1 <= (__this_00.klass._2).typeHierarchyDepth) &&((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(Behaviour))) {
					__this_00.enabled = value;
					return;
				}
			}
			return;
		}
	}

	[Token(Token = "0x6003B08")]
	[Address(RVA = "0x5A6A660", Offset = "0x5A69660", VA = "0x5A6A660")]
	protected BuiltinComponentInstance(Component component)
	{
		// Lifted from source/cpp/CustomLogic/BuiltinComponentInstance.c (CustomLogic.BuiltinComponentInstance$$.ctor): clean


		base();
		this.Component = component;
		return;
	}

	[Token(Token = "0x6003B09")]
	protected static T GetOrAddComponent<T>(GameObject gameObject) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6003B0C")]
	[Address(RVA = "0x5A6A790", Offset = "0x5A69790", VA = "0x5A6A790")]
	public void Unload()
	{
		// Lifted from source/cpp/CustomLogic/BuiltinComponentInstance.c (CustomLogic.BuiltinComponentInstance$$Unload): 2 lines keep C-only constructs
		Object pUVar1;
		bool bVar2;
		Component* targetAddress;

		pUVar1 = (Object)this.Component;
		bVar2 = (pUVar1 != null);
		if (bVar2) {
			targetAddress = &this.Component;
			pUVar1 = (Object)*targetAddress;
			Object.Destroy(pUVar1);
			*targetAddress = null;
			return;
		}
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/BuiltinComponentInstance.c.

	// CustomLogic.BuiltinComponentInstance$$GetOrAddComponent<object>: 1 lines keep C-only constructs
	private static object GetOrAddComponent_object(GameObject gameObject)
	{
		bool bVar1;
		Object x;
		object pIVar2;

		if (method.rgctx_data == null) {
			if (method.rgctx_data == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			}
		}
		if (gameObject == null) {
			throw new NullReferenceException();
		}
		x = (Object)gameObject.GetComponent<object>();
		bVar1 = (x != null);
		if (bVar1) {
			return (object)x;
		}
		pIVar2 = gameObject.AddComponent<object>();
		return pIVar2;
	}
}
