// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchLogoMotionBlur.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x200002A")]
public sealed class GisketchLogoMotionBlur : MonoBehaviour
{
	[Token(Token = "0x40000B8")]
	public const string ShaderName = "Gisketch/AoTTG2 UI Sprite Blur";

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int BlurId;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x20")]
	private Material _material;

	[Token(Token = "0x1700001D")]
	public float Blur
	{
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x5227E90", Offset = "0x5226E90", VA = "0x5227E90")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchLogoMotionBlur.c (Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur$$get_Blur): clean
			Material pUVar1;
			bool bVar2;
			float fVar3;

			pUVar1 = this._material;
			bVar2 = ((Object)pUVar1 != null);
			if (bVar2) {
				pUVar1 = this._material;
				if (pUVar1 == null) {
					throw new NullReferenceException();
				}
				return fVar3;
			}
			return 0.0;
		}
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x5230D50", Offset = "0x522FD50", VA = "0x5230D50")]
	public void Setup(Image image)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchLogoMotionBlur.c (Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur$$Setup): 3 lines keep C-only constructs
		Material* targetAddress;
		bool bVar1;
		Object x;
		Material pUVar2;

		x = (Object)Shader.Find("Gisketch/AoTTG2 UI Sprite Blur");
		bVar1 = ((Object)image == null);
		if (!bVar1) {
			bVar1 = (x == null);
			if (!bVar1) {
				pUVar2 = new Material((Shader)x);
				if (pUVar2 != null) {
					pUVar2.name = "AoTTG UI Logo Blur Instance";
					pUVar2.hideFlags = 0x34;
					targetAddress = &this._material;
					this._material = pUVar2;
					pUVar2 = this._material;
					if (pUVar2 != null) {
						pUVar2.SetFloat(GisketchLogoMotionBlur.BlurId, 0.0);
						if (image != null) {
							image.set_material(*targetAddress);
							return;
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x5227DD0", Offset = "0x5226DD0", VA = "0x5227DD0")]
	public void SetBlur(float value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchLogoMotionBlur.c (Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur$$SetBlur): clean
		Material pUVar1;
		bool bVar2;
		float value_00;

		pUVar1 = this._material;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._material;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			value_00 = 0.0;
			if (0.0 <= value) {
				value_00 = value;
			}
			pUVar1.SetFloat(GisketchLogoMotionBlur.BlurId, value_00);
			return;
		}
		return;
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x5230EE0", Offset = "0x522FEE0", VA = "0x5230EE0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchLogoMotionBlur.c (Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur$$OnDestroy): clean
		uint uVar1;
		Material pUVar2;
		bool bVar3;

		pUVar2 = this._material;
		bVar3 = ((Object)pUVar2 != null);
		if (bVar3) {
			bVar3 = Application.isPlaying;
			pUVar2 = this._material;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
			if (bVar3) {
				if (uVar1 == 0) {
				}
				Object.Destroy((Object)pUVar2);
				return;
			}
			if (uVar1 == 0) {
			}
			Object.DestroyImmediate((Object)pUVar2);
			return;
		}
		return;
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x5230FB0", Offset = "0x522FFB0", VA = "0x5230FB0")]
	public GisketchLogoMotionBlur()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchLogoMotionBlur.c (Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchLogoMotionBlur.c.

	// Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur$$.cctor: clean
	static GisketchLogoMotionBlur()
	{
		int iVar1;

		iVar1 = Shader.PropertyToID("_VerticalBlur");
		GisketchLogoMotionBlur.BlurId = iVar1;
		return;
	}
}
