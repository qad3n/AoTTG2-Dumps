// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.TitanCustomSkinPart
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/CustomSkins/TitanCustomSkinPart.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x2000374")]
internal class TitanCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x60015C9")]
	[Address(RVA = "0x1E96200", Offset = "0x1E94800", VA = "0x181E96200")]
	public TitanCustomSkinPart(BaseCustomSkinLoader loader, List<Renderer> renderers, string rendererId, int maxSize)
	{
	}

	[Token(Token = "0x60015CA")]
	[Address(RVA = "0x1E96160", Offset = "0x1E94760", VA = "0x181E96160", Slot = "8")]
	protected override Material SetNewTexture(Texture2D texture)
	{
		return null;
	}
}
