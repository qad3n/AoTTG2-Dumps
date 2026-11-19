// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.HumanCostumeCustomSkinPart
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/HumanCostumeCustomSkinPart.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/HumanCostumeCustomSkinPart.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x20003CC")]
internal class HumanCostumeCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x6001821")]
	[Address(RVA = "0x5861520", Offset = "0x5860520", VA = "0x5861520")]
	public HumanCostumeCustomSkinPart(BaseCustomSkinLoader loader, List<Renderer> renderers, string rendererId, int maxSize, [Optional] Vector2? textureScale)
	{
		// Lifted from source/cpp/CustomSkins/HumanCostumeCustomSkinPart.c (CustomSkins.HumanCostumeCustomSkinPart$$.ctor): clean


		base(loader, renderers, rendererId, maxSize, textureScale, true);
		return;
	}

	[Token(Token = "0x6001822")]
	[Address(RVA = "0x5864F60", Offset = "0x5863F60", VA = "0x5864F60", Slot = "7")]
	protected override Material CreateMaterial()
	{
		// Lifted from source/cpp/CustomSkins/HumanCostumeCustomSkinPart.c (CustomSkins.HumanCostumeCustomSkinPart$$CreateMaterial): clean
		uint uVar1;
		Material pUVar2;

		if (Il2CppMethodInitialized_0754593f == false) {
			Il2CppMethodInitialized_0754593f = true;
			uVar1 = (typeof(HumanSetupMaterials)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSetupMaterials)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return pUVar2;
		}
		return pUVar2;
	}
}
