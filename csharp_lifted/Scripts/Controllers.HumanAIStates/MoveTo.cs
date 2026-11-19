// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.HumanAIStates.MoveTo
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/HumanAIStates/MoveTo.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Controllers.HumanAIStates;

[Token(Token = "0x2000686")]
internal class MoveTo : HumanAIState
{
	[Token(Token = "0x4001D45")]
	[FieldOffset(Offset = "0x20")]
	public float MoveToRange;

	[Token(Token = "0x17000AF7")]
	public override string Name
	{
		[Token(Token = "0x6003F18")]
		[Address(RVA = "0x5AB0090", Offset = "0x5AAF090", VA = "0x5AB0090", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Controllers/HumanAIStates/MoveTo.c (Controllers.HumanAIStates.MoveTo$$get_Name): clean
			return "MoveTo";
		}
	}

	[Token(Token = "0x6003F19")]
	[Address(RVA = "0x5AB00C0", Offset = "0x5AAF0C0", VA = "0x5AB00C0", Slot = "7")]
	public override void Action()
	{
		// Lifted from source/cpp/Controllers/HumanAIStates/MoveTo.c (Controllers.HumanAIStates.MoveTo$$Action): clean
		uint uVar1;
		uint uVar2;
		uint uVar3;
		Human pCVar4;
		BaseComponentCache pUVar5;
		Transform __this_00;
		HumanAICallback pCVar6;
		Action pSVar7;
		HumanAIController pCVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		Vector3 UVar12;

		pCVar4 = this.Human;
		if (((pCVar4 == null) ||(pUVar5 = pCVar4.Cache, pUVar5 == null)) ||(__this_00 = pUVar5.Transform, __this_00 == null)) goto label_05bb0254;
		UVar12 = __this_00.position;
		pCVar8 = this.Controller;
		if (pCVar8 == null) goto label_05bb0254;
		uVar1 = pCVar8._targetPosition.x;
		uVar2 = pCVar8._targetPosition.y;
		fVar10 = pCVar8._targetPosition.z;
		if (Il2CppMethodInitialized_0753e7b7 == false) {
			Il2CppMethodInitialized_0753e7b7 = true;
			uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		fVar9 = UVar12.y - (float)uVar2;
		fVar10 = UVar12.z - fVar10;
		fVar11 = UVar12.x - (float)uVar1;
		fVar10 = fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10;
		if (fVar10 < 0.0) {
			fVar10 = sqrtf(fVar10);
			pCVar8 = this.Controller;
			if (this.MoveToRange < fVar10) goto label_05bb01be;
		}
		else {
			pCVar8 = this.Controller;
			if (this.MoveToRange < SQRT(fVar10)) {
	label_05bb01be: ;
				if (pCVar8 != null) {
					pCVar8.MoveToPosition();
					return;
				}
				goto label_05bb0254;
			}
		}
		if ((pCVar8 != null) &&(pCVar6 = pCVar8.Callbacks, pCVar6 != null)) {
			pSVar7 = pCVar6.MoveToCallback;
			if (pSVar7 != null) {
				(*(code)pSVar7.invoke_impl)(pSVar7.method_code);
			}
			pCVar8.Idle();
			return;
		}
	label_05bb0254: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F1A")]
	[Address(RVA = "0x5AB0260", Offset = "0x5AAF260", VA = "0x5AB0260", Slot = "8")]
	public override void OnStateExit()
	{
		// Lifted from source/cpp/Controllers/HumanAIStates/MoveTo.c (Controllers.HumanAIStates.MoveTo$$OnStateExit): clean
		HumanAIController pCVar1;
		HumanAICallback pCVar2;

		pCVar1 = this.Controller;
		if ((pCVar1 == null) ||(pCVar2 = pCVar1.Callbacks, pCVar2 == null)) {
			throw new NullReferenceException();
		}
		pCVar2.MoveToCallback = null;
		return;
	}

	[Token(Token = "0x6003F1B")]
	[Address(RVA = "0x5AA7720", Offset = "0x5AA6720", VA = "0x5AA7720")]
	public MoveTo()
	{
		// Lifted from source/cpp/Controllers/HumanAIStates/MoveTo.c (Controllers.HumanAIStates.MoveTo$$.ctor): clean
		base();
		return;
	}
}
