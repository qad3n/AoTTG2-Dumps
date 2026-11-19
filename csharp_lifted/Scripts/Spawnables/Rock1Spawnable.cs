// ==================== AoTTG2 cross-reference ====================
// Type: Spawnables.Rock1Spawnable
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Spawnables/Rock1Spawnable.c
// Prior real C# source (older reference): Assets/Scripts/Spawnables/Rock1Spawnable.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Spawnables;

[Token(Token = "0x200005F")]
internal class Rock1Spawnable : BaseSpawnable
{
	[Token(Token = "0x600030D")]
	[Address(RVA = "0x576DBA0", Offset = "0x576CBA0", VA = "0x576DBA0", Slot = "5")]
	protected override void SetupSettings(object[] settings)
	{
		// Lifted from source/cpp/Spawnables/Rock1Spawnable.c (Spawnables.Rock1Spawnable$$SetupSettings): 5 lines keep C-only constructs
		byte bVar1;
		object obj;
		List<BaseUseable> pSVar2;
		Component __this_00;
		bool bVar3;
		int piVar4;
		BaseCharacter x;
		Transform pUVar5;
		Transform p;
		Vector3 value;

		if (settings != null) {
			if ((int)settings.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = settings[0];
			if (obj != null) {
				if ((obj.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
					throw new InvalidCastException();
				}
				piVar4 = il2cpp_vm_Object_Unbox(obj);
				x = Util.FindCharacterByViewId(*piVar4);
				bVar3 = ((Object)x != null);
				if ((bVar3) && (x != null)) {
					bVar1 = (typeof(BasicTitan)._2).typeHierarchyDepth;
					if ((bVar1 <= (x.klass._2).typeHierarchyDepth) &&((x.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BasicTitan))) {
						pUVar5 = this.transform;
						pSVar2 = (*(ulong)((sbyte)x + 0x2a0));
						if ((pSVar2 != null) &&(__this_00 = *(Component*)&(*(uint)((sbyte)pSVar2 + 0x90)), __this_00 != null)) {
							p = __this_00.transform;
							if (pUVar5 != null) {
								pUVar5.SetParent(p);
								pUVar5 = this.transform;
								if (pUVar5 != null) {
									value.z = -0.07;
									value.x = 0.0;
									value.y = 0.07;
									pUVar5.localPosition = value;
									pUVar5 = this.transform;
									if (pUVar5 != null) {
										pUVar5.localRotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
										return;
									}
								}
							}
						}
						goto label_0586dd6d;
					}
				}
				return;
			}
		}
	label_0586dd6d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x576DD80", Offset = "0x576CD80", VA = "0x576DD80")]
	public Rock1Spawnable()
	{
		// Lifted from source/cpp/Spawnables/Rock1Spawnable.c (Spawnables.Rock1Spawnable$$.ctor): clean
		base();
		return;
	}
}
