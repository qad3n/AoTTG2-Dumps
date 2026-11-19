// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetImageShimmer.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200030B")]
internal sealed class AottgGuildPresetImageShimmer : MonoBehaviour
{
	[Token(Token = "0x4000F72")]
	private const string ShaderName = "UI/AoTTG Guild Image Shimmer";

	[Token(Token = "0x4000F73")]
	[FieldOffset(Offset = "0x20")]
	private Image _source;

	[Token(Token = "0x4000F74")]
	[FieldOffset(Offset = "0x28")]
	private Material _material;

	[Token(Token = "0x4000F75")]
	[FieldOffset(Offset = "0x30")]
	private Material _originalMaterial;

	[Token(Token = "0x4000F76")]
	[FieldOffset(Offset = "0x38")]
	private bool _enabled;

	[Token(Token = "0x6001309")]
	[Address(RVA = "0x57F7930", Offset = "0x57F6930", VA = "0x57F7930")]
	public static void SetEnabled(Image image, bool enabled)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetImageShimmer.c (Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$SetEnabled): 2 lines keep C-only constructs
		bool bVar1;
		AottgGuildPresetImageShimmer __this;
		GameObject __this_00;
		MethodInfo* in_RCX;

		bVar1 = ((Object)image == null);
		if (bVar1) {
			return;
		}
		if (image != null) {
			__this = image.GetComponent<AottgGuildPresetImageShimmer>();
			bVar1 = ((Object)__this == null);
			if (bVar1) {
				__this_00 = image.gameObject;
				if (__this_00 == null) goto label_058f7a21;
				in_RCX = &MethodInfo_UnityEngine_GameObject_AddComponent_AottgGuildPresetImageShimmer;
				__this = __this_00.AddComponent<AottgGuildPresetImageShimmer>();
			}
			if (__this != null) {
				__this.Configure(image, enabled);
				return;
			}
		}
	label_058f7a21: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600130A")]
	[Address(RVA = "0x57F7A60", Offset = "0x57F6A60", VA = "0x57F7A60")]
	private void Configure(Image source, bool enabled)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetImageShimmer.c (Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$Configure): clean
		bool bVar1;
		Material pUVar2;

		this._source = source;
		if (!enabled) {
			this.RestoreMaterial();
			return;
		}
		this.EnsureMaterial();
		pUVar2 = this._material;
		bVar1 = ((Object)pUVar2 == null);
		if (!bVar1) {
			if (this._enabled == false) {
				if (source == null) goto label_058f7b32;
				pUVar2 = source.get_material();
				this._originalMaterial = pUVar2;
			}
			else if (source == null) {
	label_058f7b32: ;
				throw new NullReferenceException();
			}
			source.set_material(this._material);
			this._enabled = true;
		}
		return;
	}

	[Token(Token = "0x600130B")]
	[Address(RVA = "0x57F7BE0", Offset = "0x57F6BE0", VA = "0x57F7BE0")]
	private void EnsureMaterial()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetImageShimmer.c (Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$EnsureMaterial): 2 lines keep C-only constructs
		bool bVar1;
		Object x;
		Material pUVar2;
		Material* targetAddress;

		pUVar2 = this._material;
		bVar1 = ((Object)pUVar2 != null);
		if (!bVar1) {
			x = (Object)Shader.Find("UI/AoTTG Guild Image Shimmer");
			bVar1 = (x != null);
			if (bVar1) {
				targetAddress = &this._material;
				pUVar2 = new Material((Shader)x);
				*targetAddress = pUVar2;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600130C")]
	[Address(RVA = "0x57F7B40", Offset = "0x57F6B40", VA = "0x57F7B40")]
	private void RestoreMaterial()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetImageShimmer.c (Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$RestoreMaterial): clean
		Image pUVar1;
		bool bVar2;

		pUVar1 = this._source;
		bVar2 = ((Object)pUVar1 != null);
		if ((bVar2) && (this._enabled != false)) {
			pUVar1 = this._source;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.set_material(this._originalMaterial);
		}
		this._originalMaterial = null;
		this._enabled = false;
		return;
	}

	[Token(Token = "0x600130D")]
	[Address(RVA = "0x57F7CD0", Offset = "0x57F6CD0", VA = "0x57F7CD0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetImageShimmer.c (Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$OnDestroy): clean
		Material pUVar1;
		bool bVar2;

		this.RestoreMaterial();
		pUVar1 = this._material;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._material;
			Object.Destroy((Object)pUVar1);
			return;
		}
		return;
	}

	[Token(Token = "0x600130E")]
	[Address(RVA = "0x57F7D60", Offset = "0x57F6D60", VA = "0x57F7D60")]
	public AottgGuildPresetImageShimmer()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetImageShimmer.c (Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$.ctor): clean
		base();
		return;
	}
}
