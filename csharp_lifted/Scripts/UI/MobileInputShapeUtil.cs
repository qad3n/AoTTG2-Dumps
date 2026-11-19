// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputShapeUtil
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputShapeUtil.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000750")]
internal static class MobileInputShapeUtil
{
	[Token(Token = "0x40024F0")]
	[FieldOffset(Offset = "0x0")]
	private static Sprite _circleSprite;

	[Token(Token = "0x40024F1")]
	[FieldOffset(Offset = "0x8")]
	private static Sprite _diamondSprite;

	[Token(Token = "0x60046D8")]
	[Address(RVA = "0x5B73890", Offset = "0x5B72890", VA = "0x5B73890")]
	public static void ApplyShape(Image image, MobileInputControlShape shape)
	{
		// Lifted from source/cpp/UI/MobileInputShapeUtil.c (UI.MobileInputShapeUtil$$ApplyShape): clean
		bool bVar1;
		Sprite value;

		bVar1 = ((Object)image == null);
		if (bVar1) {
			return;
		}
		if (shape == 2) {
			value = MobileInputShapeUtil.GetDiamondSprite();
		}
		else {
			if (shape != 1) {
				if (image == null) goto label_05c73937;
				value = null;
				goto label_05c7390f;
			}
			value = MobileInputShapeUtil.GetCircleSprite();
		}
		if (image == null) {
	label_05c73937: ;
			throw new NullReferenceException();
		}
	label_05c7390f: ;
		image.sprite = value;
		image.type = 0;
		image.preserveAspect = false;
		return;
	}

	[Token(Token = "0x60046D9")]
	[Address(RVA = "0x5B73940", Offset = "0x5B72940", VA = "0x5B73940")]
	private static Sprite GetCircleSprite()
	{
		// Lifted from source/cpp/UI/MobileInputShapeUtil.c (UI.MobileInputShapeUtil$$GetCircleSprite): 2 lines keep C-only constructs
		uint uVar1;
		Object x;
		bool bVar2;
		Texture __this;
		Sprite pUVar3;
		int y;
		int x_00;
		float fVar4;
		float fVar5;
		Color color;

		x = (Object)MobileInputShapeUtil._circleSprite;
		bVar2 = (x != null);
		if (!bVar2) {
			__this = (Texture)il2cpp_codegen_object_new(typeof(Texture2D)) ;
			y = 0;
			__this = new Texture2D(0x40, 0x40, 5, false);
			if (__this == null) {
				throw new NullReferenceException();
			}
			__this.name = "MobileInputCircleSprite";
			__this.wrapMode = 1;
			__this.filterMode = 1;
			do {
				x_00 = 0;
				do {
					if (Il2CppMethodInitialized_0753e72f == false) {
						Il2CppMethodInitialized_0753e72f = true;
						uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					fVar5 = ((float)x_00 + -31.5) * ((float)x_00 + -31.5) + ((float)y + -31.5) * ((float)y + -31.5);
					if (fVar5 < 0.0) {
						fVar5 = sqrtf(fVar5);
					}
					else {
						fVar5 = SQRT(fVar5);
					}
					fVar5 = 32.0 - fVar5;
					fVar4 = 1.0;
					if (fVar5 <= 1.0) {
						fVar4 = fVar5;
					}
					color.a = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar4);
					color.b = 1.0;
					color.r = 1.0;
					color.g = 1.0;
					__this.SetPixel(x_00, y, color);
					x_00 = x_00 + 1;
				} while (x_00 != 0x40);
				y = y + 1;
			} while (y != 0x40);
			__this.Apply();
			pUVar3 = Sprite.Create((Texture2D)__this, (Rect)(ZEXT816(0x4280000042800000) << 0x40), (Vector2)0x3f0000003f000000);
			MobileInputShapeUtil._circleSprite = pUVar3;
		}
		return MobileInputShapeUtil._circleSprite;
	}

	[Token(Token = "0x60046DA")]
	[Address(RVA = "0x5B73BB0", Offset = "0x5B72BB0", VA = "0x5B73BB0")]
	private static Sprite GetDiamondSprite()
	{
		// Lifted from source/cpp/UI/MobileInputShapeUtil.c (UI.MobileInputShapeUtil$$GetDiamondSprite): 2 lines keep C-only constructs
		Object x;
		bool bVar2;
		Texture __this;
		Sprite pUVar3;
		int y;
		int x_00;
		float fVar4;
		float fVar5;
		Color color;

		x = (Object)MobileInputShapeUtil._diamondSprite;
		bVar2 = (x != null);
		if (!bVar2) {
			__this = (Texture)il2cpp_codegen_object_new(typeof(Texture2D)) ;
			y = 0;
			__this = new Texture2D(0x40, 0x40, 5, false);
			if (__this == null) {
				throw new NullReferenceException();
			}
			__this.name = "MobileInputDiamondSprite";
			__this.wrapMode = 1;
			__this.filterMode = 1;
			do {
				x_00 = 0;
				do {
					fVar5 = 32.0 - (ABS((float)x_00 + -31.5) + ABS((float)y + -31.5));
					fVar4 = 1.0;
					if (fVar5 <= 1.0) {
						fVar4 = fVar5;
					}
					color.a = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar4);
					color.b = 1.0;
					color.r = 1.0;
					color.g = 1.0;
					__this.SetPixel(x_00, y, color);
					x_00 = x_00 + 1;
				} while (x_00 != 0x40);
				y = y + 1;
			} while (y != 0x40);
			__this.Apply();
			pUVar3 = Sprite.Create((Texture2D)__this, (Rect)(ZEXT816(0x4280000042800000) << 0x40), (Vector2)0x3f0000003f000000);
			MobileInputShapeUtil._diamondSprite = pUVar3;
		}
		return MobileInputShapeUtil._diamondSprite;
	}
}
