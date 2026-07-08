using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x2000221")]
internal class HumanHairCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x4000BE3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string _hairTexture;

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x41446A0", Offset = "0x41446A0", VA = "0x41446A0")]
	public HumanHairCustomSkinPart(BaseCustomSkinLoader loader, List<Renderer> renderers, string rendererId, int maxSize, string hairTexture, [Optional] Vector2? textureScale)
	{
	}

	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x4147D00", Offset = "0x4147D00", VA = "0x4147D00", Slot = "7")]
	protected override Material SetNewTexture(Texture2D texture)
	{
		return null;
	}
}
