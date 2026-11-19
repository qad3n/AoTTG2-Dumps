// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCreditsScreenState
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsScreenState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using ApplicationManagers.Credits;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000205")]
internal static class AottgCreditsScreenState
{
	[Token(Token = "0x1700015C")]
	public static AottgCreditsResponse Credits
	{
		[Token(Token = "0x6000C08")]
		[Address(RVA = "0x5D83C90", Offset = "0x5D82C90", VA = "0x5D83C90")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsScreenState.c (Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$get_Credits): clean
			return AottgCreditsScreenState._Credits_k__BackingField;
		}
		[Token(Token = "0x6000C09")]
		[Address(RVA = "0x5D83CD0", Offset = "0x5D82CD0", VA = "0x5D83CD0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsScreenState.c (Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$set_Credits): clean
			AottgCreditsScreenState._Credits_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x1700015D")]
	public static bool HasCategories
	{
		[Token(Token = "0x6000C0A")]
		[Address(RVA = "0x5D82550", Offset = "0x5D81550", VA = "0x5D82550")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsScreenState.c (Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$get_HasCategories): 4 lines keep C-only constructs
			AottgCreditsResponse pAVar1;
			object obj;
			Il2CppClass pIVar2;
			Il2CppRuntimeInterfaceOffsetPair pIVar3;
			int iVar4;
			VirtualInvokeData pVVar5;
			ulong uVar6;
			long lVar7;

			pAVar1 = AottgCreditsScreenState._Credits_k__BackingField;
			if (pAVar1 == null) {
				return false;
			}
			obj = (object)pAVar1._Categories_k__BackingField;
			if (obj == null) {
				throw new NullReferenceException();
			}
			pIVar2 = obj.klass;
			uVar6 = (ulong)(pIVar2._2).interface_offsets_count;
			if (uVar6 != 0) {
				pIVar3 = (pIVar2._1).interfaceOffsets;
				lVar7 = 0;
				do {
					if (*(IReadOnlyCollection<AottgCreditCategory>*)((long)&pIVar3.interfaceType + lVar7) == typeof(IReadOnlyCollection<AottgCreditCategory>)) {
						pVVar5 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar7);
						goto label_05e82615;
					}
					lVar7 = lVar7 + 0x10;
				} while (uVar6 * 0x10 != lVar7);
			}
			pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IReadOnlyCollection<AottgCreditCategory>), 0);
		label_05e82615: ;
			iVar4 = (*pVVar5.methodPtr)(obj,pVVar5.method);
			return 0 < iVar4;
		}
	}

	[Token(Token = "0x6000C0B")]
	[Address(RVA = "0x5D83D20", Offset = "0x5D82D20", VA = "0x5D83D20")]
	public static void Set(AottgCreditsResponse credits)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsScreenState.c (Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$Set): clean
		AottgCreditsScreenState._Credits_k__BackingField = credits;
		return;
	}

	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x5D83D70", Offset = "0x5D82D70", VA = "0x5D83D70")]
	public static void Clear()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsScreenState.c (Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$Clear): clean
		AottgCreditsScreenState._Credits_k__BackingField =null;
		return;
	}
}
