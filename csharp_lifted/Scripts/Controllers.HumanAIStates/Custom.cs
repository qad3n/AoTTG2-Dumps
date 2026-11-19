// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.HumanAIStates.Custom
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/HumanAIStates/Custom.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using CustomLogic;
using Il2CppDummyDll;

namespace Controllers.HumanAIStates;

[Token(Token = "0x2000687")]
internal class Custom : HumanAIState
{
	[Token(Token = "0x4001D46")]
	[FieldOffset(Offset = "0x20")]
	protected UserClassInstance _instance;

	[Token(Token = "0x4001D47")]
	[FieldOffset(Offset = "0x28")]
	protected UserMethod _onStateEntry;

	[Token(Token = "0x4001D48")]
	[FieldOffset(Offset = "0x30")]
	protected UserMethod _onStateExit;

	[Token(Token = "0x4001D49")]
	[FieldOffset(Offset = "0x38")]
	protected UserMethod _action;

	[Token(Token = "0x4001D4A")]
	[FieldOffset(Offset = "0x40")]
	private string _name;

	[Token(Token = "0x17000AF8")]
	public override string Name
	{
		[Token(Token = "0x6003F1C")]
		[Address(RVA = "0x5AB0290", Offset = "0x5AAF290", VA = "0x5AB0290", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Controllers/HumanAIStates/Custom.c (Controllers.HumanAIStates.Custom$$get_Name): clean
			return this._name;
		}
	}

	[Token(Token = "0x6003F1D")]
	[Address(RVA = "0x5AB02A0", Offset = "0x5AAF2A0", VA = "0x5AB02A0")]
	public void Init(string name, UserClassInstance instance)
	{
		// Lifted from source/cpp/Controllers/HumanAIStates/Custom.c (Controllers.HumanAIStates.Custom$$Init): 22 lines keep C-only constructs
		UserClassInstance* targetAddress;
		UserMethod* targetAddress_00;
		UserMethod* targetAddress_01;
		UserMethod* targetAddress_02;
		byte bVar1;
		UserClassInstance pCVar2;
		Dictionary<object, object> pSVar3;
		UserMethod pCVar4;
		bool bVar5;
		UserMethod pCVar6;

		this._name = name;
		targetAddress = &this._instance;
		this._instance = instance;
		targetAddress_00 = &this._onStateEntry;
		this._onStateEntry = null;
		targetAddress_01 = &this._action;
		this._action = null;
		targetAddress_02 = &this._onStateExit;
		this._onStateExit = null;
		pCVar2 = this._instance;
		if ((pCVar2 != null) &&(pSVar3 = (Dictionary<object, object>)pCVar2.Variables, pSVar3 != null)) {
			bVar5 = pSVar3.ContainsKey((Il2CppObject *)"OnStateEntry");
			if (bVar5) {
				if (*targetAddress == null) goto label_05bb05af;
				pCVar6 = (UserMethod)(*targetAddress).GetVariable("OnStateEntry");
				pCVar4 = typeof(UserMethod);
				if (pCVar6 == null) {
					*targetAddress_00 = null;
				}
				else {
					bVar1 = (typeof(UserMethod)._2).typeHierarchyDepth;
					if (((((Il2CppClass)pCVar6.klass)._2).typeHierarchyDepth < bVar1) ||((((Il2CppClass)pCVar6.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(UserMethod))) goto label_05bb0578;
					*targetAddress_00 = pCVar6;
					if (((((Il2CppClass)pCVar6.klass)._2).typeHierarchyDepth < bVar1) ||((((Il2CppClass)pCVar6.klass)._2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass)pCVar4)) goto label_05bb0578;
				}
			}
			if ((*targetAddress == null) ||(pSVar3 = (Dictionary<object, object>)((*targetAddress).fields).Variables, pSVar3 == null)) goto label_05bb05af;
			bVar5 = pSVar3.ContainsKey((Il2CppObject *)"Action");
			if (bVar5) {
				if (*targetAddress == null) goto label_05bb05af;
				pCVar6 = (UserMethod)(*targetAddress).GetVariable("Action");
				pCVar4 = typeof(UserMethod);
				if (pCVar6 == null) {
					*targetAddress_01 = null;
				}
				else {
					bVar1 = (typeof(UserMethod)._2).typeHierarchyDepth;
					if (((((Il2CppClass)pCVar6.klass)._2).typeHierarchyDepth < bVar1) ||((((Il2CppClass)pCVar6.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(UserMethod))) goto label_05bb0578;
					*targetAddress_01 = pCVar6;
					if (((((Il2CppClass)pCVar6.klass)._2).typeHierarchyDepth < bVar1) ||((((Il2CppClass)pCVar6.klass)._2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass)pCVar4)) goto label_05bb0578;
				}
			}
			if ((*targetAddress != null) &&(pSVar3 = (Dictionary<object, object>)((*targetAddress).fields).Variables, pSVar3 != null)) {
				bVar5 = pSVar3.ContainsKey((Il2CppObject *)"OnStateExit");
				if (!bVar5) {
					return;
				}
				if (*targetAddress != null) {
					pCVar6 = (UserMethod)(*targetAddress).GetVariable("OnStateExit");
					pCVar4 = typeof(UserMethod);
					if (pCVar6 == null) {
						*targetAddress_02 = null;
	label_05bb0596: ;
						return;
					}
					bVar1 = (typeof(UserMethod)._2).typeHierarchyDepth;
					if ((bVar1 <= (((Il2CppClass)pCVar6.klass)._2).typeHierarchyDepth) &&((((Il2CppClass)pCVar6.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(UserMethod))) {
						*targetAddress_02 = pCVar6;
						if ((bVar1 <= (((Il2CppClass)pCVar6.klass)._2).typeHierarchyDepth) &&((((Il2CppClass)pCVar6.klass)._2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass)pCVar4)) goto label_05bb0596;
					}
	label_05bb0578: ;
					throw new InvalidCastException();
				}
			}
		}
	label_05bb05af: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F1E")]
	[Address(RVA = "0x5AB05C0", Offset = "0x5AAF5C0", VA = "0x5AB05C0", Slot = "6")]
	public override void OnStateEntry()
	{
		// Lifted from source/cpp/Controllers/HumanAIStates/Custom.c (Controllers.HumanAIStates.Custom$$OnStateEntry): clean
		CustomLogicEvaluator __this_00;

		if (this._onStateEntry == null) {
			return;
		}
		__this_00 = CustomLogicManager.Evaluator;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.EvaluateMethod(this._onStateEntry, null);
		return;
	}

	[Token(Token = "0x6003F1F")]
	[Address(RVA = "0x5AB0640", Offset = "0x5AAF640", VA = "0x5AB0640", Slot = "7")]
	public override void Action()
	{
		// Lifted from source/cpp/Controllers/HumanAIStates/Custom.c (Controllers.HumanAIStates.Custom$$Action): clean
		CustomLogicEvaluator __this_00;

		if (this._action == null) {
			return;
		}
		__this_00 = CustomLogicManager.Evaluator;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.EvaluateMethod(this._action, null);
		return;
	}

	[Token(Token = "0x6003F20")]
	[Address(RVA = "0x5AB06C0", Offset = "0x5AAF6C0", VA = "0x5AB06C0", Slot = "8")]
	public override void OnStateExit()
	{
		// Lifted from source/cpp/Controllers/HumanAIStates/Custom.c (Controllers.HumanAIStates.Custom$$OnStateExit): clean
		CustomLogicEvaluator __this_00;

		if (this._onStateExit == null) {
			return;
		}
		__this_00 = CustomLogicManager.Evaluator;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.EvaluateMethod(this._onStateExit, null);
		return;
	}

	[Token(Token = "0x6003F21")]
	[Address(RVA = "0x5AB0740", Offset = "0x5AAF740", VA = "0x5AB0740")]
	public Custom()
	{
		// Lifted from source/cpp/Controllers/HumanAIStates/Custom.c (Controllers.HumanAIStates.Custom$$.ctor): clean
		base();
		return;
	}
}
