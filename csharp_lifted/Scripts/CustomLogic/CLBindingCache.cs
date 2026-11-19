// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CLBindingCache
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CLBindingCache.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200044E")]
internal class CLBindingCache
{
	[Token(Token = "0x40015B2")]
	[FieldOffset(Offset = "0x0")]
	private static CLBindingCache instance;

	[Token(Token = "0x40015B3")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, Dictionary<string, ICLMemberBinding>> _bindings;

	[Token(Token = "0x170002DB")]
	private static CLBindingCache Instance
	{
		[Token(Token = "0x6001AA5")]
		[Address(RVA = "0x58A9A60", Offset = "0x58A8A60", VA = "0x58A9A60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CLBindingCache.c (CustomLogic.CLBindingCache$$get_Instance): 1 lines keep C-only constructs
			CLBindingCache __this;
			Dictionary<string, Dictionary<string, ICLMemberBinding>> __this_00;

			__this = CLBindingCache.instance;
			if (__this == null) {
				__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, Dictionary<string, ICLMemberBinding>>));
				__this_00 = new Dictionary<object, object>();
				__this._bindings = __this_00;
				__this = new CLBindingCache();
				CLBindingCache.instance = __this;
			}
			return __this;
		}
	}

	[Token(Token = "0x6001AA6")]
	[Address(RVA = "0x58A9BC0", Offset = "0x58A8BC0", VA = "0x58A9BC0")]
	public static bool GetOrCreateBinding(string typeName, string varName, out ICLMemberBinding binding)
	{
		// Lifted from source/cpp/CustomLogic/CLBindingCache.c (CustomLogic.CLBindingCache$$GetOrCreateBinding): 2 lines keep C-only constructs
		Dictionary<string, Dictionary<string, ICLMemberBinding>> dictionary;
		bool bVar1;
		CLBindingCache pCVar2;
		MethodInfo pMVar3;
		Dictionary<object, object> pSVar4;
		ICLMemberBinding pCVar5;
		Dictionary<string, ICLMemberBinding> __this;
		object value;
		Dictionary<string, ICLMemberBinding>* method_00;
		MethodInfo method_01;

		if (Il2CppMethodInitialized_07545ada == false) {
			method_00 = &typeof(Dictionary<string, ICLMemberBinding>);
			Il2CppMethodInitialized_07545ada = true;
		}
		pCVar2 = CLBindingCache.Instance;
		if ((pCVar2 == null) ||(pMVar3 = (MethodInfo)pCVar2._bindings, pMVar3 == null)) goto label_059a9e3a;
		bVar1 = pMVar3.ContainsKey((object)typeName);
		if (bVar1) {
			pCVar2 = CLBindingCache.Instance;
			if (((pCVar2 == null) ||(pSVar4 = (Dictionary<object, object>)pCVar2._bindings, pSVar4 == null)) ||(pMVar3 = (MethodInfo)pSVar4.get_Item((object)typeName), pMVar3 == null)) goto label_059a9e3a;
			bVar1 = pMVar3.ContainsKey((object)varName);
			if (bVar1) {
				pCVar2 = CLBindingCache.Instance;
				if (((pCVar2 != null) &&(pSVar4 = (Dictionary<object, object>)pCVar2._bindings, pSVar4 != null)) &&(pSVar4 = (Dictionary<object, object>)pSVar4.get_Item((object)typeName), pSVar4 != null)) {
					pCVar5 = pSVar4.get_Item((object)varName) ;
					*binding = pCVar5;
					return true;
				}
				goto label_059a9e3a;
			}
		}
		pCVar5 = CustomLogicBuiltinTypes.CreateBinding(typeName, varName);
		*binding = pCVar5;
		pMVar3 = (MethodInfo)binding;
		pCVar2 = CLBindingCache.Instance;
		if (pCVar2 != null) {
			method_01 = (MethodInfo)pCVar2._bindings;
			pCVar2 = CLBindingCache.Instance;
			if (pCVar2 != null) {
				dictionary = pCVar2._bindings;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, ICLMemberBinding>));
				__this = new Dictionary<object, object>();
				value = CollectionExtensions.GetValueOrDefault<string, Dictionary<string, ICLMemberBinding>>((IReadOnlyDictionary<TKey, TValue>)dictionary, (object)typeName, (object)__this);
				if (method_01 != null) {
					method_01.set_Item((object)typeName, value);
					pCVar2 = CLBindingCache.Instance;
					if (((pCVar2 != null) &&(pSVar4 = (Dictionary<object, object>)pCVar2._bindings, pSVar4 != null)) &&(pSVar4 = (Dictionary<object, object>)pSVar4.get_Item((object)typeName), pSVar4 != null)) {
						pSVar4.set_Item((object)varName, (object)*binding);
						return true;
					}
				}
			}
		}
	label_059a9e3a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001AA7")]
	[Address(RVA = "0x58A9B40", Offset = "0x58A8B40", VA = "0x58A9B40")]
	public CLBindingCache()
	{
		// Lifted from source/cpp/CustomLogic/CLBindingCache.c (CustomLogic.CLBindingCache$$.ctor): 1 lines keep C-only constructs
		Dictionary<string, Dictionary<string, ICLMemberBinding>> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, Dictionary<string, ICLMemberBinding>>));
		__this_00 = new Dictionary<object, object>();
		this._bindings = __this_00;
		base();
		return;
	}
}
