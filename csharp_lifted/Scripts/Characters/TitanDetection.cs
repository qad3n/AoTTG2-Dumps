// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanDetection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/TitanDetection.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Detection/TitanDetection.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006A3")]
internal class TitanDetection : BaseDetection
{
	[Token(Token = "0x6004062")]
	[Address(RVA = "0x5AE6520", Offset = "0x5AE5520", VA = "0x5AE6520")]
	public TitanDetection(BaseCharacter owner)
	{
		// Lifted from source/cpp/Characters/TitanDetection.c (Characters.TitanDetection$$.ctor): clean


		base(owner, true, false);
		return;
	}

	[Token(Token = "0x6004063")]
	[Address(RVA = "0x5AE6530", Offset = "0x5AE5530", VA = "0x5AE6530", Slot = "9")]
	protected override void OnRecalculate(BaseCharacter character, float distance)
	{
		// Lifted from source/cpp/Characters/TitanDetection.c (Characters.TitanDetection$$OnRecalculate): 2 lines keep C-only constructs
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
