// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.BuiltinClassInstance
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/BuiltinClassInstance.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200062E")]
internal abstract class BuiltinClassInstance : CustomLogicClassInstance
{
	[Token(Token = "0x4001A9B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly CLMethodBinding<BuiltinClassInstance> Init;

	[Token(Token = "0x17000A58")]
	public override bool LookupBaseClassForVariables
	{
		[Token(Token = "0x6003AFF")]
		[Address(RVA = "0x5A6A3B0", Offset = "0x5A693B0", VA = "0x5A6A3B0", Slot = "7")]
		get
		{
			// Lifted from source/cpp/CustomLogic/BuiltinClassInstance.c (CustomLogic.BuiltinClassInstance$$get_LookupBaseClassForVariables): clean
			bool bVar1;

			return bVar1;
		}
	}

	[Token(Token = "0x17000A59")]
	public override string ClassName
	{
		[Token(Token = "0x6003B00")]
		[Address(RVA = "0x5A6A3D0", Offset = "0x5A693D0", VA = "0x5A6A3D0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/BuiltinClassInstance.c (CustomLogic.BuiltinClassInstance$$get_ClassName): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotImplementedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotImplementedException));
			__this_00 = (NotImplementedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotImplementedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_BuiltinClassInstance_get_ClassName);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x17000A5A")]
	public virtual bool IsAbstract
	{
		[Token(Token = "0x6003B01")]
		[Address(RVA = "0x5A6A410", Offset = "0x5A69410", VA = "0x5A6A410", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/BuiltinClassInstance.c (CustomLogic.BuiltinClassInstance$$get_IsAbstract): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotImplementedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotImplementedException));
			__this_00 = (NotImplementedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotImplementedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_BuiltinClassInstance_get_IsAbstract);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x17000A5B")]
	public virtual bool IsStatic
	{
		[Token(Token = "0x6003B02")]
		[Address(RVA = "0x5A6A450", Offset = "0x5A69450", VA = "0x5A6A450", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/BuiltinClassInstance.c (CustomLogic.BuiltinClassInstance$$get_IsStatic): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotImplementedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotImplementedException));
			__this_00 = (NotImplementedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotImplementedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_BuiltinClassInstance_get_IsStatic);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x17000A5C")]
	public virtual bool InheritBaseMembers
	{
		[Token(Token = "0x6003B03")]
		[Address(RVA = "0x5A6A490", Offset = "0x5A69490", VA = "0x5A6A490", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/BuiltinClassInstance.c (CustomLogic.BuiltinClassInstance$$get_InheritBaseMembers): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotImplementedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotImplementedException));
			__this_00 = (NotImplementedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotImplementedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_BuiltinClassInstance_get_InheritBaseMembers);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x6003AFE")]
	[Address(RVA = "0x5A6A190", Offset = "0x5A69190", VA = "0x5A6A190")]
	protected BuiltinClassInstance()
	{
		// Lifted from source/cpp/CustomLogic/BuiltinClassInstance.c (CustomLogic.BuiltinClassInstance$$.ctor): 4 lines keep C-only constructs
		Dictionary<string, object>* targetAddress;
		Dictionary<object, object> pSVar1;
		ulong in_RAX;
		Dictionary<string, object> __this_00;
		String value;
		object value_00;
		ulong uStack_28;

		uStack_28 = in_RAX;
		this._Enabled_k__BackingField = true;
		this._LookupBaseClassForVariables_k__BackingField = true;
		base();
		__this_00 = new Dictionary<string, object>();
		targetAddress = &this.Variables;
		this.Variables = __this_00;
		pSVar1 = (Dictionary<object, object>)this.Variables;
		value = this.get_ClassName();
		if (pSVar1 != null) {
			pSVar1.set_Item((Il2CppObject *)"Type", (object)value);
			pSVar1 = (Dictionary<object, object>)*targetAddress;
			if (pSVar1 != null) {
				pSVar1.set_Item((Il2CppObject *)"Init", (object)BuiltinClassInstance.Init);
				pSVar1 = (Dictionary<object, object>)*targetAddress;
				uStack_28 = uStack_28 & 0xffffffffffffff;
				value_00 = (object)(((long)&uStack_28 + 7));
				if (pSVar1 != null) {
					pSVar1.set_Item((Il2CppObject *)"IsCharacter", value_00);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/BuiltinClassInstance.c.

	// CustomLogic.BuiltinClassInstance$$.cctor: 3 lines keep C-only constructs
	static BuiltinClassInstance()
	{
		object @object;
		Func<BuiltinClassInstance, @object[], @object> __this;
		CLMethodBinding<BuiltinClassInstance> __this_00;

		if (Il2CppMethodInitialized_07547311 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<BuiltinClassInstance, @object[], @object>)) ;
			Il2CppMethodInitialized_07547311 = true;
		}
		@object = (object)BuiltinClassInstance.c.__9;
		__this = new Func<BuiltinClassInstance, @object[], @object>(@object, (intptr_t)MethodInfo_CustomLogic_BuiltinClassInstance_c_cctor_b__12_0);
		__this_00 = new CLMethodBinding<BuiltinClassInstance>((System_Func_T__object____object__o)__this);
		BuiltinClassInstance.Init = __this_00;
		return;
	}

	// CustomLogic.BuiltinClassInstance.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new BuiltinClassInstance.c();
		BuiltinClassInstance.c.__9 =(BuiltinClassInstance.c)__this;
		return;
	}

	// CustomLogic.BuiltinClassInstance.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.BuiltinClassInstance.<>c$$<.cctor>b__12_0: clean
	private object c__cctor_b__12_0(BuiltinClassInstance __, Object[] __)
	{
		return null;
	}
}
