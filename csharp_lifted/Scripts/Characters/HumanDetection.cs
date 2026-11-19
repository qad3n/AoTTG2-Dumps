// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HumanDetection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/HumanDetection.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Detection/HumanDetection.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006A1")]
internal class HumanDetection : BaseDetection
{
	[Token(Token = "0x600405E")]
	[Address(RVA = "0x5AE63C0", Offset = "0x5AE53C0", VA = "0x5AE63C0")]
	public HumanDetection(BaseCharacter owner)
	{
		// Lifted from source/cpp/Characters/HumanDetection.c (Characters.HumanDetection$$.ctor): clean


		base(owner, false, true);
		return;
	}

	[Token(Token = "0x600405F")]
	[Address(RVA = "0x5AE63D0", Offset = "0x5AE53D0", VA = "0x5AE63D0", Slot = "9")]
	protected override void OnRecalculate(BaseCharacter character, float distance)
	{
		// Lifted from source/cpp/Characters/HumanDetection.c (Characters.HumanDetection$$OnRecalculate): 2 lines keep C-only constructs
		byte bVar1;
		BaseCharacter pCVar2;
		TitanColliderToggler __this_00;
		float fVar3;

		if (character != null) {
			pCVar2 = character.klass;
			bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
			if (((pCVar2._2).typeHierarchyDepth < bVar1) ||((pCVar2._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(BaseTitan))) {
				throw new InvalidCastException();
			}
			fVar3 = (float)(*(code)((Il2CppClass)pCVar2).vtable[203].methodPtr)(character,((Il2CppClass)pCVar2).vtable[203].method);
			__this_00 = (TitanColliderToggler)(*(ulong)((sbyte)character + 0x110));
			if (__this_00 != null) {
				__this_00.SetNearby(this.Owner, distance < fVar3);
				return;
			}
		}
		throw new NullReferenceException();
	}
}
