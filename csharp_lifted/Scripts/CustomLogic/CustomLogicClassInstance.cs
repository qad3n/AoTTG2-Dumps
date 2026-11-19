// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicClassInstance
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicClassInstance.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicClassInstance.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200063B")]
public abstract class CustomLogicClassInstance
{
	[Token(Token = "0x4001B50")]
	[FieldOffset(Offset = "0x11")]
	public bool Inited;

	[Token(Token = "0x4001B51")]
	[FieldOffset(Offset = "0x18")]
	public readonly Dictionary<string, object> Variables;

	[Token(Token = "0x4001B52")]
	[FieldOffset(Offset = "0x20")]
	protected bool _containsTypeOverride;

	[Token(Token = "0x17000A6C")]
	public virtual bool Enabled
	{
		[Token(Token = "0x6003BF3")]
		[Address(RVA = "0x5A725C0", Offset = "0x5A715C0", VA = "0x5A725C0", Slot = "4")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicClassInstance.c (CustomLogic.CustomLogicClassInstance$$get_Enabled): clean
			return this._Enabled_k__BackingField;
		}
		[Token(Token = "0x6003BF4")]
		[Address(RVA = "0x5A725D0", Offset = "0x5A715D0", VA = "0x5A725D0", Slot = "5")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicClassInstance.c (CustomLogic.CustomLogicClassInstance$$set_Enabled): clean
			this._Enabled_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000A6D")]
	public CustomLogicSourceType? Namespace
	{
		[Token(Token = "0x6003BF6")]
		[Address(RVA = "0x5A725F0", Offset = "0x5A715F0", VA = "0x5A725F0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicClassInstance.c (CustomLogic.CustomLogicClassInstance$$get_Namespace): clean
			return (Nullable<CustomLogicSourceType>)this._Namespace_k__BackingField;
		}
		[Token(Token = "0x6003BF7")]
		[Address(RVA = "0x5A72600", Offset = "0x5A71600", VA = "0x5A72600")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicClassInstance.c (CustomLogic.CustomLogicClassInstance$$set_Namespace): clean
			this._Namespace_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000A6E")]
	public abstract string ClassName
	{
		[Token(Token = "0x6003BF9")]
		get;
	}

	[Token(Token = "0x17000A6F")]
	public virtual bool LookupBaseClassForVariables
	{
		[Token(Token = "0x6003BFA")]
		[Address(RVA = "0x5A72610", Offset = "0x5A71610", VA = "0x5A72610", Slot = "7")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicClassInstance.c (CustomLogic.CustomLogicClassInstance$$get_LookupBaseClassForVariables): clean
			return this._LookupBaseClassForVariables_k__BackingField;
		}
	}

	[Token(Token = "0x6003BF5")]
	[Address(RVA = "0x5A725E0", Offset = "0x5A715E0", VA = "0x5A725E0")]
	public void SetContainsTypeOverride(bool contains)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicClassInstance.c (CustomLogic.CustomLogicClassInstance$$SetContainsTypeOverride): clean
		this._containsTypeOverride = contains;
		return;
	}

	[Token(Token = "0x6003BF8")]
	[Address(RVA = "0x5A6A330", Offset = "0x5A69330", VA = "0x5A6A330")]
	protected CustomLogicClassInstance()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicClassInstance.c (CustomLogic.CustomLogicClassInstance$$.ctor): clean
		Dictionary<string, object> __this_00;

		this._Enabled_k__BackingField = true;
		this._LookupBaseClassForVariables_k__BackingField = true;
		base();
		__this_00 = new Dictionary<string, object>();
		this.Variables = __this_00;
		return;
	}

	[Token(Token = "0x6003BFB")]
	[Address(RVA = "0x5A72620", Offset = "0x5A71620", VA = "0x5A72620", Slot = "3")]
	public override string ToString()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicClassInstance.c (CustomLogic.CustomLogicClassInstance$$ToString): 1 lines keep C-only constructs
		uint uVar1;
		CustomLogicEvaluator __this_00;
		bool bVar2;
		String pSVar3;
		String pSVar4;

		if (Il2CppMethodInitialized_07547351 == false) {
			Il2CppMethodInitialized_07547351 = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = CustomLogicManager.Evaluator;
		}
		else {
			__this_00 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
		}
		if ((__this_00 != null) &&(bVar2 = this.HasVariable("__Str__"))) {
			pSVar3 = (String)__this_00.EvaluateMethod(this, "__Str__", null, 0);
			pSVar4 = null;
			if (pSVar3 != null) {
				if ((Il2CppClass)pSVar3.klass != g_data_07556758) {
					throw new InvalidCastException();
				}
				pSVar4 = pSVar3;
			}
			return pSVar4;
		}
		pSVar4 = (String)this.unknown();
		pSVar4 = String.Concat("(CustomLogicClassInstance)", pSVar4);
		return pSVar4;
	}

	[Token(Token = "0x6003BFC")]
	[Address(RVA = "0x5A72940", Offset = "0x5A71940", VA = "0x5A72940", Slot = "2")]
	public override int GetHashCode()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicClassInstance.c (CustomLogic.CustomLogicClassInstance$$GetHashCode): 1 lines keep C-only constructs
		uint uVar1;
		CustomLogicEvaluator __this_00;
		bool bVar2;
		int iVar3;
		object obj;
		int piVar4;

		if (Il2CppMethodInitialized_07547352 == false) {
			Il2CppMethodInitialized_07547352 = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = CustomLogicManager.Evaluator;
		}
		else {
			__this_00 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
		}
		if ((__this_00 == null) ||(bVar2 = this.HasVariable("__Hash__"), !bVar2)) {
			return iVar3;
		}
		obj = __this_00.EvaluateMethod(this, "__Hash__", null, 0);
		if (obj == null) {
			throw new NullReferenceException();
		}
		if ((obj.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
			throw new InvalidCastException();
		}
		return *piVar4;
	}

	[Token(Token = "0x6003BFD")]
	[Address(RVA = "0x5A72A40", Offset = "0x5A71A40", VA = "0x5A72A40", Slot = "0")]
	public override bool Equals(object obj)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicClassInstance.c (CustomLogic.CustomLogicClassInstance$$Equals): 3 lines keep C-only constructs
		uint uVar1;
		CustomLogicEvaluator __this_00;
		bool bVar2;
		Object[] parameterValues;
		object pIVar3;
		byte puVar4;

		if (Il2CppMethodInitialized_07547353 == false) {
			Il2CppMethodInitialized_07547353 = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = CustomLogicManager.Evaluator;
		}
		else {
			__this_00 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
		}
		if ((__this_00 == null) ||(bVar2 = this.HasVariable("__Eq__"), !bVar2)) {
			bVar2 = Object.Equals((object)this, obj);
			return bVar2;
		}
		parameterValues = (Object[])new object[1];
		if (parameterValues != null) {
			if ((obj != null) &&(pIVar3 = il2cpp_vm_Object_IsInst(obj, (((parameterValues.obj).klass)._1).element_class), pIVar3 == null)) {
				pIVar3 = new ArrayTypeMismatchException();
				throw pIVar3;
			}
			if ((int)parameterValues.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			parameterValues[0] = obj;
			pIVar3 = __this_00.EvaluateMethod(this, "__Eq__", parameterValues, 0);
			if (pIVar3 != null) {
				if ((pIVar3.klass._1).element_class != *(Il2CppClass*)(g_data_075566f0 + 0x40)) {
					throw new InvalidCastException();
				}
				puVar4 = il2cpp_vm_Object_Unbox(pIVar3);
				return (bool)*puVar4;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003BFE")]
	[Address(RVA = "0x5A72BD0", Offset = "0x5A71BD0", VA = "0x5A72BD0")]
	public object GetVariable(string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicClassInstance.c (CustomLogic.CustomLogicClassInstance$$GetVariable): 6 lines keep C-only constructs
		bool bVar1;
		String pSVar2;
		String str0;
		String str2;
		Il2CppClass klass;
		Exception __this_00;
		MethodInfo lastManagedFrame;
		object local_20;

		local_20 = null;
		bVar1 = this.TryGetVariable(name, ref local_20);
		if (bVar1) {
			return local_20;
		}
		pSVar2 = (String)this.unknown();
		str0 = il2cpp_codegen_get_runtime_metadata(&"Variable ");
		str2 = il2cpp_codegen_get_runtime_metadata(&" not found in class ");
		pSVar2 = String.Concat(str0, name, str2, pSVar2);
		klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
		__this_00 = (Exception)il2cpp_codegen_object_new(klass);
		__this_00 = new Exception(pSVar2);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicClassInstance_GetVariable);
		throw (object)__this_00;
	}

	[Token(Token = "0x6003BFF")]
	[Address(RVA = "0x5A72C90", Offset = "0x5A71C90", VA = "0x5A72C90")]
	public bool TryGetVariable(string name, out object variable)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicClassInstance.c (CustomLogic.CustomLogicClassInstance$$TryGetVariable): 3 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		String typeName;
		HashSet<object> __this_00;
		object local_50;
		CustomLogicClassInstance local_48;
		object* local_40;
		object local_38;

		if (Il2CppMethodInitialized_07547354 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_07547354 = true;
		}
		local_38 = null;
		local_50 = null;
		pSVar1 = (Dictionary<object, object>)this.Variables;
		if (pSVar1 != null) {
			bVar2 = pSVar1.TryGetValue((object)name, ref local_38);
			if (bVar2) {
				*variable = local_38;
				return true;
			}
			local_48 = this;
			local_40 = variable;
			typeName = (String)this.unknown();
	label_05b72da0: ;
			bVar2 = CustomLogicBuiltinTypes.IsBuiltinType(typeName);
			if (bVar2) {
				pSVar1 = (Dictionary<object, object>)CustomLogicBuiltinTypes.MemberNames;
				if ((pSVar1 == null) ||(__this_00 = (HashSet<object>)pSVar1.get_Item((object)typeName), __this_00 == null)) goto label_05b72f2f;
				bVar2 = __this_00.Contains((object)name);
				if (bVar2) {
					bVar2 = CLBindingCache.GetOrCreateBinding(typeName, name, (ICLMemberBinding*)&local_50);
					if (bVar2) goto label_05b72ee5;
					goto label_05b72da0;
				}
				bVar2 = local_48.get_LookupBaseClassForVariables();
				if (bVar2) {
					pSVar1 = (Dictionary<object, object>)CustomLogicBuiltinTypes.BaseTypeNames;
					if (pSVar1 == null) goto label_05b72f2f;
					bVar2 = pSVar1.ContainsKey((object)typeName);
					if (!bVar2) goto label_05b72ece;
					pSVar1 = (Dictionary<object, object>)CustomLogicBuiltinTypes.BaseTypeNames;
					if (pSVar1 == null) goto label_05b72f2f;
					typeName = pSVar1.get_Item((object)typeName);
					goto label_05b72da0;
				}
			}
	label_05b72ece: ;
			*local_40 = null;
			return false;
		}
	label_05b72f2f: ;
		throw new NullReferenceException();
	label_05b72ee5: ;
		*local_40 = local_50;
		pSVar1 = (Dictionary<object, object>)local_48.Variables;
		if (pSVar1 != null) {
			pSVar1.set_Item((object)name, local_50);
			return true;
		}
		goto label_05b72f2f;
	}

	[Token(Token = "0x6003C00")]
	[Address(RVA = "0x5A72740", Offset = "0x5A71740", VA = "0x5A72740")]
	public bool HasVariable(string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicClassInstance.c (CustomLogic.CustomLogicClassInstance$$HasVariable): 1 lines keep C-only constructs
		uint uVar1;
		Dictionary<object, object> pSVar2;
		bool bVar3;
		String typeName;
		HashSet<object> __this_00;

		if (Il2CppMethodInitialized_07547355 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_07547355 = true;
		}
		pSVar2 = (Dictionary<object, object>)this.Variables;
		if (pSVar2 != null) {
			bVar3 = pSVar2.ContainsKey((object)name);
			if (bVar3) {
				return true;
			}
			typeName = (String)this.unknown();
			uVar1 = (typeof(CustomLogicBuiltinTypes)._2).cctor_finished_or_no_cctor;
			while(true) {
				if (uVar1 == 0) {
				}
				bVar3 = CustomLogicBuiltinTypes.IsBuiltinType(typeName);
				if (!bVar3) {
					return false;
				}
				pSVar2 = (Dictionary<object, object>)CustomLogicBuiltinTypes.MemberNames;
				if ((pSVar2 == null) ||(__this_00 = (HashSet<object>)pSVar2.get_Item((object)typeName), __this_00 == null)) break;
				bVar3 = __this_00.Contains((object)name);
				if (bVar3) {
					return true;
				}
				bVar3 = this.get_LookupBaseClassForVariables();
				if (!bVar3) {
					return false;
				}
				pSVar2 = (Dictionary<object, object>)CustomLogicBuiltinTypes.BaseTypeNames;
				if (pSVar2 == null) break;
				bVar3 = pSVar2.ContainsKey((object)typeName);
				if (!bVar3) {
					return false;
				}
				pSVar2 = (Dictionary<object, object>)CustomLogicBuiltinTypes.BaseTypeNames;
				if (pSVar2 == null) break;
				typeName = pSVar2.get_Item((object)typeName);
				uVar1 = (typeof(CustomLogicBuiltinTypes)._2).cctor_finished_or_no_cctor;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C01")]
	[Address(RVA = "0x5A6CDF0", Offset = "0x5A6BDF0", VA = "0x5A6CDF0")]
	public bool ShowVariableInInspector(string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicClassInstance.c (CustomLogic.CustomLogicClassInstance$$ShowVariableInInspector): clean
		bool bVar1;

		bVar1 = (name == "Type");
		if ((bVar1) && (this._containsTypeOverride == false)) {
			return false;
		}
		return true;
	}
}
