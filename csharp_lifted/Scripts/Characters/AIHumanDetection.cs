// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AIHumanDetection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/AIHumanDetection.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006A2")]
internal class AIHumanDetection : BaseDetection
{
	[Token(Token = "0x6004060")]
	[Address(RVA = "0x5AE6470", Offset = "0x5AE5470", VA = "0x5AE6470")]
	public AIHumanDetection(BaseCharacter owner, bool enemiesOnly = false, bool titansOnly = true)
	{
		// Lifted from source/cpp/Characters/AIHumanDetection.c (Characters.AIHumanDetection$$.ctor): clean
		base(owner, enemiesOnly, titansOnly);
		return;
	}

	[Token(Token = "0x6004061")]
	[Address(RVA = "0x5AE6480", Offset = "0x5AE5480", VA = "0x5AE6480", Slot = "9")]
	protected override void OnRecalculate(BaseCharacter character, float distance)
	{
		// Lifted from source/cpp/Characters/AIHumanDetection.c (Characters.AIHumanDetection$$OnRecalculate): 2 lines keep C-only constructs
		byte bVar1;
		BaseCharacter pCVar2;
		TitanColliderToggler __this_00;
		float fVar3;

		if (character != null) {
			pCVar2 = character.klass;
			bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
			if ((bVar1 <= (pCVar2._2).typeHierarchyDepth) &&((pCVar2._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BaseTitan))) {
				fVar3 = (float)(*(code)((Il2CppClass)pCVar2).vtable[203].methodPtr)(character,((Il2CppClass)pCVar2).vtable[203].method);
				__this_00 = (TitanColliderToggler)(*(ulong)((sbyte)character + 0x110));
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.SetNearby(this.Owner, distance < fVar3);
				return;
			}
		}
		return;
	}
}
