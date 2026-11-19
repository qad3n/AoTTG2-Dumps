// ==================== AoTTG2 cross-reference ====================
// Type: ParallaxEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ParallaxEffect.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/ParallaxEffect.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000023")]
public class ParallaxEffect : MonoBehaviour
{
	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x20")]
	public float parallaxIntensity;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x24")]
	public float smoothTime;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x28")]
	public float scale;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x2C")]
	private Vector2 currentVelocity;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform rectTransform;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x40")]
	private Vector2 lastValidMousePosition;

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x574DD80", Offset = "0x574CD80", VA = "0x574DD80")]
	private void Awake()
	{
		// Lifted from source/cpp/ParallaxEffect.c (ParallaxEffect$$Awake): clean
		float fVar1;
		uint uVar2;
		uint uVar3;
		int iVar5;
		int iVar6;
		RectTransform pUVar7;
		Vector2 UVar8;
		Vector3 value;

		pUVar7 = this.GetComponent<RectTransform>();
		this.rectTransform = pUVar7;
		pUVar7 = this.rectTransform;
		if (pUVar7 == null) {
			throw new NullReferenceException();
		}
		fVar1 = this.scale;
		value.z = (Vector3.oneVector).z * fVar1;
		uVar2 = (Vector3.oneVector).x;
		uVar3 = (Vector3.oneVector).y;
		value.x = fVar1 * (float)uVar2;
		value.y = fVar1 * (float)uVar3;
		pUVar7.localScale = value;
		iVar5 = Screen.width;
		iVar6 = Screen.height;
		UVar8.x = (float)iVar5 * 0.5;
		UVar8.y = (float)iVar6 * 0.5;
		this.lastValidMousePosition = UVar8;
		return;
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x574DE60", Offset = "0x574CE60", VA = "0x574DE60")]
	private void Update()
	{
		// Lifted from source/cpp/ParallaxEffect.c (ParallaxEffect$$Update): 29 lines keep C-only constructs
		float fVar1;
		RectTransform pUVar2;
		int iVar3;
		int iVar4;
		int iVar5;
		int iVar6;
		uint uVar7;
		uint uVar8;
		Vector2 UVar9;
		ulong extraout_XMM0_Qb_00;
		byte[] auVar10 = new byte[16];
		float fVar11;
		float fVar13;
		byte[] auVar12 = new byte[16];
		Vector3 UVar14;
		byte[] auStack_68 = new byte[8];
		byte[] auStack_58 = new byte[16];
		Vector2 UStack_38;
		Vector2 UStack_30;

		UVar14 = Input.mousePosition;
		if (0.0 <= UVar14.x) {
			auStack_68._0_4_ = UVar14.x;
			auStack_68._4_4_ = UVar14.y;
			auVar12 = _auStack_68;
			iVar3 = Screen.width;
			auStack_68._4_4_ = UVar14.y;
			if ((UVar14.x <= (float)iVar3) && (0.0 <= (float)auStack_68._4_4_)) {
				iVar3 = Screen.height;
				if ((float)auStack_68._4_4_ <= (float)iVar3) {
					this.lastValidMousePosition = UVar14._0_8_;
					_auStack_68 = auVar12;
					goto label_0584ded0;
				}
			}
		}
		auStack_68 = (byte[])this.lastValidMousePosition;
	label_0584ded0: ;
		fVar1 = this.scale;
		iVar3 = Screen.width;
		fVar13 = this.scale;
		iVar4 = Screen.height;
		iVar5 = Screen.width;
		iVar6 = Screen.height;
		pUVar2 = this.rectTransform;
		if (pUVar2 != null) {
			auVar12._0_4_ = (float)iVar5;
			auVar12._4_4_ = (float)iVar6;
			auVar12._8_8_ = 0;
			auVar12 = divps(_auStack_68, auVar12);
			UStack_30 = pUVar2.anchoredPosition;
			fVar11 = (float)(iVar3 / 2) * (fVar1 + -1.0);
			fVar13 = (float)(iVar4 / 2) * (fVar13 + -1.0);
			auStack_68._0_4_ = auVar12._0_4_;
			auStack_68._4_4_ = auVar12._4_4_;
			fVar1 = this.parallaxIntensity;
			UStack_38.x = fVar1 * ((fVar11 + fVar11) * (float)auStack_68._0_4_ - fVar11);
			UStack_38.y = fVar1 * ((fVar13 + fVar13) * (float)auStack_68._4_4_ - fVar13);
			fVar1 = this.smoothTime;
			fVar13 = Time.deltaTime;
			UVar9 = Vector2.SmoothDamp(ref UStack_30, ref UStack_38, ref this.currentVelocity, fVar1, INFINITY, fVar13);
			pUVar2.anchoredPosition = UVar9;
			pUVar2 = this.rectTransform;
			if (pUVar2 != null) {
				UVar9 = pUVar2.anchoredPosition;
				auStack_58._8_8_ = extraout_XMM0_Qb_00;
				auStack_58._0_4_ = UVar9.x;
				auStack_58._4_4_ = UVar9.y;
				fVar1 = this.scale;
				iVar3 = Screen.width;
				fVar13 = this.scale;
				iVar4 = Screen.height;
				auVar10._0_4_ = (float)(iVar3 / 2) * (fVar1 + -1.0);
				auVar10._4_4_ = (float)(iVar4 / 2) * (fVar13 + -1.0);
				auVar10._8_8_ = 0;
				auVar12 = minps(auVar10, auStack_58);
				uVar7 = -(uint)(-auVar10._0_4_ <= UVar9.x);
				uVar8 = -(uint)(-auVar10._4_4_ <= UVar9.y);
				pUVar2.anchoredPosition = (Vector2)(CONCAT44(~uVar8 & (uint)-auVar10._4_4_, ~uVar7 & (uint)-auVar10._0_4_) | CONCAT44(auVar12._4_4_ & uVar8, auVar12._0_4_ & uVar7));
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x574E0B0", Offset = "0x574D0B0", VA = "0x574E0B0")]
	private Vector2 GetConstrainedTargetPosition(Vector2 mousePosition)
	{
		// Lifted from source/cpp/ParallaxEffect.c (ParallaxEffect$$GetConstrainedTargetPosition): 11 lines keep C-only constructs
		int iVar1;
		int iVar2;
		float fVar3;
		Vector2 UVar4;
		float fVar6;
		ulong in_XMM0_Qb;
		byte[] auVar5 = new byte[16];
		byte[] auVar7 = new byte[16];

		fVar3 = this.scale;
		iVar1 = Screen.width;
		fVar6 = this.scale;
		iVar2 = Screen.height;
		fVar3 = (float)(iVar1 / 2) * (fVar3 + -1.0);
		fVar6 = (float)(iVar2 / 2) * (fVar6 + -1.0);
		iVar1 = Screen.width;
		iVar2 = Screen.height;
		auVar5._0_4_ = (float)iVar1;
		auVar5._4_4_ = (float)iVar2;
		auVar5._8_8_ = 0;
		auVar7._8_8_ = in_XMM0_Qb;
		auVar7._0_8_ = mousePosition;
		auVar7 = divps(auVar7, auVar5);
		UVar4.x = (fVar3 + fVar3) * auVar7._0_4_ - fVar3;
		UVar4.y = (fVar6 + fVar6) * auVar7._4_4_ - fVar6;
		return (Vector2)UVar4;
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x574E160", Offset = "0x574D160", VA = "0x574E160")]
	private Vector2 ClampPosition(Vector2 position)
	{
		// Lifted from source/cpp/ParallaxEffect.c (ParallaxEffect$$ClampPosition): 12 lines keep C-only constructs
		float fVar1;
		float fVar2;
		int iVar3;
		int iVar4;
		uint uVar5;
		uint uVar6;
		ulong in_XMM0_Qb;
		byte[] auVar7 = new byte[16];
		byte[] auVar8 = new byte[16];

		fVar1 = this.scale;
		iVar3 = Screen.width;
		fVar2 = this.scale;
		iVar4 = Screen.height;
		auVar7._0_4_ = (float)(iVar3 / 2) * (fVar1 + -1.0);
		auVar7._4_4_ = (float)(iVar4 / 2) * (fVar2 + -1.0);
		auVar7._8_8_ = 0;
		auVar8._8_8_ = in_XMM0_Qb;
		auVar8._0_8_ = position;
		auVar8 = minps(auVar7, auVar8);
		uVar5 = -(uint)(-auVar7._0_4_ <= position.x);
		uVar6 = -(uint)(-auVar7._4_4_ <= position.y);
		return (Vector2)(CONCAT44(~uVar6 & (uint)-auVar7._4_4_, ~uVar5 & (uint)-auVar7._0_4_) | CONCAT44(auVar8._4_4_ & uVar6, auVar8._0_4_ & uVar5));
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x574E1F0", Offset = "0x574D1F0", VA = "0x574E1F0")]
	private float MapRange(float value, float fromSource, float toSource, float fromTarget, float toTarget)
	{
		// Lifted from source/cpp/ParallaxEffect.c (ParallaxEffect$$MapRange): clean
		return ((value - fromSource) / (toSource - fromSource)) * (toTarget - fromTarget) + fromTarget;
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x574E210", Offset = "0x574D210", VA = "0x574E210")]
	public ParallaxEffect()
	{
		// Lifted from source/cpp/ParallaxEffect.c (ParallaxEffect$$.ctor): clean
		this.parallaxIntensity = 1.0;
		this.smoothTime = 0.3;
		this.scale = 1.1;
		base();
		return;
	}
}
