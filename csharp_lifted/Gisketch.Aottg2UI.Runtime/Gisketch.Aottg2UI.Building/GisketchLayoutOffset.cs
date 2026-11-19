// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchLayoutOffset
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchLayoutOffset.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000AB")]
[ExecuteAlways]
internal sealed class GisketchLayoutOffset : MonoBehaviour
{
	[Token(Token = "0x4000397")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _rect;

	[Token(Token = "0x4000398")]
	[FieldOffset(Offset = "0x28")]
	private Vector2 _layoutOffset;

	[Token(Token = "0x4000399")]
	[FieldOffset(Offset = "0x30")]
	private Vector2 _motionOffset;

	[Token(Token = "0x400039A")]
	[FieldOffset(Offset = "0x38")]
	private Vector2 _basePosition;

	[Token(Token = "0x400039B")]
	[FieldOffset(Offset = "0x40")]
	private Vector2 _lastOffset;

	[Token(Token = "0x400039C")]
	[FieldOffset(Offset = "0x48")]
	private bool _hasBase;

	[Token(Token = "0x17000099")]
	public Vector2 MotionOffset
	{
		[Token(Token = "0x600053B")]
		[Address(RVA = "0x527B970", Offset = "0x527A970", VA = "0x527B970")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchLayoutOffset.c (Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$get_MotionOffset): clean
			return (Vector2)this._motionOffset;
		}
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x527B980", Offset = "0x527A980", VA = "0x527B980")]
	public static GisketchLayoutOffset For(RectTransform rect)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchLayoutOffset.c (Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$For): clean
		Vector2 UVar1;
		bool bVar2;
		GisketchLayoutOffset pGVar3;
		GameObject __this;
		MethodInfo method_00;

		bVar2 = ((Object)rect == null);
		if (bVar2) {
			return null;
		}
		if (rect != null) {
			pGVar3 = rect.GetComponent<GisketchLayoutOffset>();
			bVar2 = ((Object)pGVar3 != null);
			if (bVar2) {
				return pGVar3;
			}
			__this = rect.gameObject;
			if (__this != null) {
				pGVar3 = __this.AddComponent<GisketchLayoutOffset>();
				if (pGVar3 != null) {
					UVar1 = (Vector2.zeroVector);
					pGVar3._layoutOffset = UVar1;
					method_00 = (MethodInfo)pGVar3.GetComponent<RectTransform>();
					pGVar3._rect = (RectTransform)method_00;
					pGVar3.Apply();
					return pGVar3;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x527BB00", Offset = "0x527AB00", VA = "0x527BB00")]
	public void Setup(Vector2 offset)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchLayoutOffset.c (Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$Setup): clean
		MethodInfo method_00;

		this._layoutOffset = offset;
		method_00 = (MethodInfo)this.GetComponent<RectTransform>();
		this._rect = (RectTransform)method_00;
		this.Apply();
		return;
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x527BCD0", Offset = "0x527ACD0", VA = "0x527BCD0")]
	public void SetMotionOffset(Vector2 offset)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchLayoutOffset.c (Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$SetMotionOffset): clean
		this._motionOffset = offset;
		this.Apply();
		return;
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x527BCE0", Offset = "0x527ACE0", VA = "0x527BCE0")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchLayoutOffset.c (Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$LateUpdate): clean
		this.Apply();
		return;
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x527BB60", Offset = "0x527AB60", VA = "0x527BB60")]
	private void Apply()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchLayoutOffset.c (Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$Apply): 5 lines keep C-only constructs
		RectTransform* targetAddress;
		Vector2 UVar1;
		Vector2 UVar2;
		bool bVar3;
		RectTransform pUVar4;
		Vector2 UVar5;
		Vector2 value;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;

		pUVar4 = this._rect;
		targetAddress = &this._rect;
		bVar3 = ((Object)pUVar4 == null);
		if (bVar3) {
			pUVar4 = this.GetComponent<RectTransform>();
			this._rect = pUVar4;
		}
		pUVar4 = *targetAddress;
		bVar3 = ((Object)pUVar4 == null);
		if (bVar3) {
			return;
		}
		if (*targetAddress != null) {
			UVar5 = (Vector2)(*targetAddress).anchoredPosition;
			if (this._hasBase != false) {
				UVar1 = this._basePosition;
				UVar2 = this._lastOffset;
				fVar6 = UVar2.x;
				fVar8 = UVar2.y;
				fVar7 = UVar5.y;
				fVar9 = UVar5.x - (UVar1.x + fVar6);
				fVar10 = fVar7 - (UVar1.y + fVar8);
				if (0.01 <= fVar10 * fVar10 + fVar9 * fVar9) {
					fVar6 = 0.0;
					fVar8 = 0.0;
				}
				UVar5.x = UVar5.x - fVar6;
				UVar5.y = fVar7 - fVar8;
			}
			this._basePosition = UVar5;
			pUVar4 = this._rect;
			if (pUVar4 != null) {
				UVar5 = this._layoutOffset;
				UVar1 = this._motionOffset;
				fVar7 = UVar1.x + UVar5.x;
				fVar6 = UVar1.y + UVar5.y;
				UVar1.y = fVar6;
				UVar1.x = fVar7;
				UVar5 = this._basePosition;
				value.x = UVar5.x + fVar7;
				value.y = UVar5.y + fVar6;
				pUVar4.anchoredPosition = value;
				this._lastOffset = UVar1;
				this._hasBase = true;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x527BCF0", Offset = "0x527ACF0", VA = "0x527BCF0")]
	public GisketchLayoutOffset()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchLayoutOffset.c (Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$.ctor): clean
		base();
		return;
	}
}
