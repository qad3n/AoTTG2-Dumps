// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.HookCustomSkinPart
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/HookCustomSkinPart.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/HookCustomSkinPart.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x20003CB")]
internal class HookCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x400137B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private float _tiling;

	[Token(Token = "0x600181E")]
	[Address(RVA = "0x5861580", Offset = "0x5860580", VA = "0x5861580")]
	public HookCustomSkinPart(BaseCustomSkinLoader loader, List<Renderer> renderers, string rendererId, int maxSize, float tiling, [Optional] Vector2? textureScale)
	{
		// Lifted from source/cpp/CustomSkins/HookCustomSkinPart.c (CustomSkins.HookCustomSkinPart$$.ctor): clean


		base(loader, renderers, rendererId, maxSize, textureScale, true);
		this._tiling = tiling;
		return;
	}

	[Token(Token = "0x600181F")]
	[Address(RVA = "0x5864CE0", Offset = "0x5863CE0", VA = "0x5864CE0", Slot = "6")]
	protected override void SetMaterial(Material material)
	{
		// Lifted from source/cpp/CustomSkins/HookCustomSkinPart.c (CustomSkins.HookCustomSkinPart$$SetMaterial): 2 lines keep C-only constructs
		List<Renderer> __this_00;
		object __this_01;
		bool bVar1;
		Hook pCVar2;
		System_Collections_Generic_List_Enumerator_T__o SStack_58;
		byte puStack_38;

		SStack_58._list = null;
		SStack_58._index = 0;
		SStack_58._version = 0;
		SStack_58._current = null;
		__this_00 = this._renderers;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		SStack_58 = __this_00.GetEnumerator();
		puStack_38 = (byte)&SStack_58;
		while(true) {
			bVar1 = SStack_58.MoveNext();
			__this_01 = SStack_58._current;
			if (!bVar1) {
				SStack_58.Dispose() ;
				return;
			}
			if ((Renderer)SStack_58._current == null) break;
			SStack_58._current.material = material;
			pCVar2 = __this_01.GetComponent<Hook>();
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar2._tiling = this._tiling;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001820")]
	[Address(RVA = "0x5864E70", Offset = "0x5863E70", VA = "0x5864E70", Slot = "8")]
	protected override Material SetNewTexture(Texture2D texture)
	{
		// Lifted from source/cpp/CustomSkins/HookCustomSkinPart.c (CustomSkins.HookCustomSkinPart$$SetNewTexture): clean
		String path;
		Material __this_00;

		path = ResourcePaths.Map;
		__this_00 = ResourceManager.InstantiateAsset<Material>(path, "Materials/TransparentMaterial", true, false);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.mainTexture = (Texture)texture;
		this.SetMaterial(__this_00);
		return __this_00;
	}
}
