using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x2000220")]
internal class HumanCostumeCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x41446E0", Offset = "0x41446E0", VA = "0x41446E0")]
	public HumanCostumeCustomSkinPart(BaseCustomSkinLoader loader, List<Renderer> renderers, string rendererId, int maxSize, [Optional] Vector2? textureScale)
	{
	}

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x4147B40", Offset = "0x4147B40", VA = "0x4147B40", Slot = "7")]
	protected override Material SetNewTexture(Texture2D texture)
	{
		return null;
	}
}
