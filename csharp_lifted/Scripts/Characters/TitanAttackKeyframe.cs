// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanAttackKeyframe
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/TitanAttackKeyframe.c
// Prior real C# source (older reference): Assets/Scripts/Controllers/TitanAttackKeyframe.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000734")]
internal class TitanAttackKeyframe
{
	[Token(Token = "0x4002436")]
	[FieldOffset(Offset = "0x10")]
	public int Frame;

	[Token(Token = "0x4002437")]
	[FieldOffset(Offset = "0x14")]
	private Vector3 _localPosition;

	[Token(Token = "0x4002438")]
	[FieldOffset(Offset = "0x20")]
	private float _radius;

	[Token(Token = "0x60045DF")]
	[Address(RVA = "0x5B62410", Offset = "0x5B61410", VA = "0x5B62410")]
	public TitanAttackKeyframe(JSONNode data)
	{
		// Lifted from source/cpp/Characters/TitanAttackKeyframe.c (Characters.TitanAttackKeyframe$$.ctor): clean
		int iVar1;
		JSONNode pSVar2;
		float fVar3;
		float fVar4;
		float fVar5;

		base();
		if (data != null) {
			pSVar2 = data.get_Item("f");
			if (pSVar2 != null) {
				iVar1 = pSVar2.get_AsInt();
				this.Frame = iVar1;
				pSVar2 = data.get_Item("x");
				if (pSVar2 != null) {
					fVar3 = pSVar2.get_AsFloat();
					pSVar2 = data.get_Item("y");
					if (pSVar2 != null) {
						fVar4 = pSVar2.get_AsFloat();
						pSVar2 = data.get_Item("z");
						if (pSVar2 != null) {
							fVar5 = pSVar2.get_AsFloat();
							this._localPosition.x = fVar3;
							this._localPosition.y = fVar4;
							this._localPosition.z = fVar5;
							pSVar2 = data.get_Item("r");
							if (pSVar2 != null) {
								fVar3 = pSVar2.get_AsFloat();
								this._radius = fVar3;
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60045E0")]
	[Address(RVA = "0x5B62840", Offset = "0x5B61840", VA = "0x5B62840")]
	public bool CheckCollision(Transform titan, Vector3 position, Vector3 velocity, float attackSpeed, float size)
	{
		// Lifted from source/cpp/Characters/TitanAttackKeyframe.c (Characters.TitanAttackKeyframe$$CheckCollision): clean
		float fVar1;
		float fVar2;
		Vector3 UVar3;
		float local_18;
		float fStack_14;

		if (titan == null) {
			throw new NullReferenceException();
		}
		UVar3 = titan.TransformPoint((Vector3)this._localPosition);
		fVar1 = size * this._radius;
		local_18 = position.x;
		fStack_14 = position.y;
		fStack_14 = fStack_14 - UVar3.y;
		fVar2 = position.z - UVar3.z;
		local_18 = local_18 - UVar3.x;
		return fStack_14 * fStack_14 + local_18 * local_18 + fVar2 * fVar2 <= fVar1 * fVar1;
	}
}
