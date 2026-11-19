// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateChoiceFrame
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceFrame.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000222")]
internal static class AottgGameCreateChoiceFrame
{
	[Token(Token = "0x4000B62")]
	private const float RingThickness = 2f;

	[Token(Token = "0x4000B63")]
	[FieldOffset(Offset = "0x0")]
	private static Sprite _sprite;

	[Token(Token = "0x4000B64")]
	[FieldOffset(Offset = "0x8")]
	private static Sprite _ringSprite;

	[Token(Token = "0x17000169")]
	public static Sprite Sprite
	{
		[Token(Token = "0x6000CC1")]
		[Address(RVA = "0x5D90050", Offset = "0x5D8F050", VA = "0x5D90050")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceFrame.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceFrame$$get_Sprite): 2 lines keep C-only constructs
			Sprite pUVar1;
			AottgGameCreateChoiceFrame* ppGVar2;

			if (g_data_075488b5 == false) {
				ppGVar2 = &typeof(AottgGameCreateChoiceFrame);
				g_data_075488b5 = true;
			}
			pUVar1 = AottgGameCreateChoiceFrame._sprite;
			if (pUVar1 == null) {
				pUVar1 = AottgGameCreateChoiceFrame.CreateSprite(0.0);
				AottgGameCreateChoiceFrame._sprite = pUVar1;
			}
			return pUVar1;
		}
	}

	[Token(Token = "0x1700016A")]
	public static Sprite RingSprite
	{
		[Token(Token = "0x6000CC2")]
		[Address(RVA = "0x5D930C0", Offset = "0x5D920C0", VA = "0x5D930C0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceFrame.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceFrame$$get_RingSprite): 2 lines keep C-only constructs
			Sprite pUVar2;
			AottgGameCreateChoiceFrame* ppGVar3;

			if (g_data_075488b6 == false) {
				ppGVar3 = &typeof(AottgGameCreateChoiceFrame);
				g_data_075488b6 = true;
			}
			pUVar2 = AottgGameCreateChoiceFrame._ringSprite;
			if (pUVar2 == null) {
				pUVar2 = AottgGameCreateChoiceFrame.CreateSprite(2.0);
				AottgGameCreateChoiceFrame._ringSprite = pUVar2;
			}
			return pUVar2;
		}
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x5D93200", Offset = "0x5D92200", VA = "0x5D93200")]
	private static Sprite CreateSprite(float thickness)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceFrame.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceFrame$$CreateSprite): 15 lines keep C-only constructs
		IntPtr pvVar1;
		Texture __this;
		object pIVar2;
		Sprite pUVar3;
		uint uVar4;
		ulong uVar5;
		long lVar6;
		ulong uVar7;
		ulong uVar8;
		int y;
		int x;
		ulong uVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		Color color;
		Vector4 border;

		y = 0;
		__this = new Texture2D(0x40, 0x40, 4, false);
		if (__this == null) {
	label_05e935be: ;
			throw new NullReferenceException();
		}
		__this.hideFlags = 0x34;
		__this.wrapMode = 1;
		do {
			fVar10 = 11.0 - (float)y;
			x = 0;
			do {
				pIVar2 = new float[3];
				if (pIVar2 == null) goto label_05e935be;
				pvVar1 = pIVar2[1].monitor;
				uVar4 = (uint)pvVar1;
				if (uVar4 == 0) {
	label_05e935b9: ;
					throw new IndexOutOfRangeException();
				}
				fVar11 = 11.0 - (float)x;
				*(float)&pIVar2[2].klass = fVar11;
				if (uVar4 < 3) goto label_05e935b9;
				*(float)&pIVar2[2].monitor = (float)x + -52.0;
				if (1 < (int)uVar4) {
					uVar9 = (ulong)pvVar1 & 0xffffffff;
					uVar7 = uVar9 - 1;
					uVar5 = (ulong)((uint)uVar7 & 3);
					lVar6 = 1;
					if (2 < uVar9 - 2) {
						uVar9 = 0;
						do {
							uVar8 = uVar9;
							fVar13 = *(float)((long)&pIVar2[2].klass + uVar8 * 4 + 4);
							if (fVar13 <= fVar11) {
								fVar13 = fVar11;
							}
							fVar11 = *(float)((long)&pIVar2[2].monitor + uVar8 * 4);
							if (fVar11 <= fVar13) {
								fVar11 = fVar13;
							}
							fVar13 = *(float)((long)&pIVar2[2].monitor + uVar8 * 4 + 4);
							if (fVar13 <= fVar11) {
								fVar13 = fVar11;
							}
							fVar11 = *(float)((long)&pIVar2[3].klass + uVar8 * 4);
							if (fVar11 <= fVar13) {
								fVar11 = fVar13;
							}
							uVar9 = uVar8 + 4;
						} while ((uVar7 & 0xfffffffffffffffc) != uVar8 + 4);
						lVar6 = uVar8 + 5;
					}
					if (uVar5 != 0) {
						uVar7 = 0;
						do {
							fVar13 = *(float)((long)&pIVar2[2].klass + uVar7 * 4 + lVar6 * 4);
							if (fVar13 <= fVar11) {
								fVar13 = fVar11;
							}
							fVar11 = fVar13;
							uVar7 = uVar7 + 1;
						} while (uVar5 != uVar7);
					}
				}
				pIVar2 = new float[3];
				if (pIVar2 == null) goto label_05e935be;
				pvVar1 = pIVar2[1].monitor;
				uVar4 = (uint)pvVar1;
				if ((uVar4 == 0) || (*(float)&pIVar2[2].klass = fVar10, uVar4 < 3)) goto label_05e935b9;
				*(float)&pIVar2[2].monitor = (float)y + -52.0;
				fVar13 = fVar10;
				if (1 < (int)uVar4) {
					uVar9 = (ulong)pvVar1 & 0xffffffff;
					uVar7 = uVar9 - 1;
					uVar5 = (ulong)((uint)uVar7 & 3);
					lVar6 = 1;
					if (2 < uVar9 - 2) {
						uVar9 = 0;
						do {
							uVar8 = uVar9;
							fVar12 = *(float)((long)&pIVar2[2].klass + uVar8 * 4 + 4);
							if (fVar12 <= fVar13) {
								fVar12 = fVar13;
							}
							fVar13 = *(float)((long)&pIVar2[2].monitor + uVar8 * 4);
							if (fVar13 <= fVar12) {
								fVar13 = fVar12;
							}
							fVar12 = *(float)((long)&pIVar2[2].monitor + uVar8 * 4 + 4);
							if (fVar12 <= fVar13) {
								fVar12 = fVar13;
							}
							fVar13 = *(float)((long)&pIVar2[3].klass + uVar8 * 4);
							if (fVar13 <= fVar12) {
								fVar13 = fVar12;
							}
							uVar9 = uVar8 + 4;
						} while ((uVar7 & 0xfffffffffffffffc) != uVar8 + 4);
						lVar6 = uVar8 + 5;
					}
					if (uVar5 != 0) {
						uVar7 = 0;
						do {
							fVar12 = *(float)((long)&pIVar2[2].klass + uVar7 * 4 + lVar6 * 4);
							if (fVar12 <= fVar13) {
								fVar12 = fVar13;
							}
							fVar13 = fVar12;
							uVar7 = uVar7 + 1;
						} while (uVar5 != uVar7);
					}
				}
				fVar11 = fVar13 * fVar13 + fVar11 * fVar11;
				if (fVar11 < 0.0) {
					fVar11 = sqrtf(fVar11);
				}
				else {
					fVar11 = SQRT(fVar11);
				}
				fVar12 = 12.0 - fVar11;
				fVar13 = 1.0;
				if (fVar12 <= 1.0) {
					fVar13 = fVar12;
				}
				fVar13 = (float)(-(uint)(0.0 <= fVar12) & (uint)fVar13);
				if (0.0 < thickness) {
					fVar11 = (12.0 - thickness) - fVar11;
					fVar12 = 1.0;
					if (fVar11 <= 1.0) {
						fVar12 = fVar11;
					}
					fVar13 = fVar13 - (float)(-(uint)(0.0 <= fVar11) & (uint)fVar12);
				}
				color.a = fVar13;
				color.b = 1.0;
				color.r = 1.0;
				color.g = 1.0;
				__this.SetPixel(x, y, color);
				x = x + 1;
			} while (x != 0x40);
			y = y + 1;
			if (y == 0x40) {
				__this.Apply(false);
				border.z = 12.0;
				border.w = 12.0;
				border.x = 12.0;
				border.y = 12.0;
				pUVar3 = Sprite.Create((Texture2D)__this, (Rect)(ZEXT816(0x4280000042800000) << 0x40), (Vector2)0x3f0000003f000000, 64.0, 0, 0, border);
				return pUVar3;
			}
		} while(true);
	}
}
