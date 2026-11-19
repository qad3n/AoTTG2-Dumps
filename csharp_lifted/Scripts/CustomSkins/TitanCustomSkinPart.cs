// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.TitanCustomSkinPart
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomSkins/TitanCustomSkinPart.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x20003CF")]
internal class TitanCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x4001380")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly Transform _rendererRoot;

	[Token(Token = "0x600182B")]
	[Address(RVA = "0x5862E50", Offset = "0x5861E50", VA = "0x5862E50")]
	public TitanCustomSkinPart(BaseCustomSkinLoader loader, List<Renderer> renderers, string rendererId, int maxSize, [Optional] Transform rendererRoot)
	{
		// Lifted from source/cpp/CustomSkins/TitanCustomSkinPart.c (CustomSkins.TitanCustomSkinPart$$.ctor): 1 lines keep C-only constructs


		base(loader, renderers, rendererId, maxSize, (System_Nullable_Vector2__o)ZEXT812(0), false);
		this._rendererRoot = rendererRoot;
		return;
	}

	[Token(Token = "0x600182C")]
	[Address(RVA = "0x5865220", Offset = "0x5864220", VA = "0x5865220", Slot = "4")]
	protected override bool IsValidPart()
	{
		// Lifted from source/cpp/CustomSkins/TitanCustomSkinPart.c (CustomSkins.TitanCustomSkinPart$$IsValidPart): clean
		Transform pUVar1;
		bool bVar2;

		pUVar1 = this._rendererRoot;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._rendererRoot;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.GetComponentsInChildren<Renderer>(true, (List<T>)this._renderers);
		}
		bVar2 = this.IsValidPart();
		return bVar2;
	}

	[Token(Token = "0x600182D")]
	[Address(RVA = "0x58652B0", Offset = "0x58642B0", VA = "0x58652B0", Slot = "8")]
	protected override Material SetNewTexture(Texture2D texture)
	{
		// Lifted from source/cpp/CustomSkins/TitanCustomSkinPart.c (CustomSkins.TitanCustomSkinPart$$SetNewTexture): clean
		bool bVar1;
		Material __this_00;
		Color value;

		__this_00 = this.SetNewTexture(texture);
		bVar1 = ((Object)__this_00 != null);
		if (bVar1) {
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			value.b = 1.0;
			value.a = 1.0;
			value.r = 1.0;
			value.g = 1.0;
			__this_00.color = value;
		}
		return __this_00;
	}
}
