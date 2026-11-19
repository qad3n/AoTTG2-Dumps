// ==================== AoTTG2 cross-reference ====================
// Type: Weather.FlashlightWeatherEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Weather/FlashlightWeatherEffect.c
// Prior real C# source (older reference): Assets/Scripts/Weather/FlashlightWeatherEffect.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Weather;

[Token(Token = "0x200002E")]
internal class FlashlightWeatherEffect : BaseWeatherEffect
{
	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x70")]
	private Light _light;

	[Token(Token = "0x17000018")]
	protected override Vector3 _positionOffset
	{
		[Token(Token = "0x6000149")]
		[Address(RVA = "0x5753E60", Offset = "0x5752E60", VA = "0x5753E60", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Weather/FlashlightWeatherEffect.c (Weather.FlashlightWeatherEffect$$get__positionOffset): clean
			uint uVar1;
			uint uVar2;
			Vector3 UVar4;

			uVar1 = (Vector3.upVector).x;
			uVar2 = (Vector3.upVector).y;
			UVar4.x = (float)uVar1 * 0.0;
			UVar4.y = (float)uVar2 * 0.0;
			UVar4.z = (Vector3.upVector).z * 0.0;
			return (Vector3)UVar4;
		}
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x5753EB0", Offset = "0x5752EB0", VA = "0x5753EB0", Slot = "8")]
	public override void Randomize()
	{
		// Lifted from source/cpp/Weather/FlashlightWeatherEffect.c (Weather.FlashlightWeatherEffect$$Randomize): clean
		return;
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x5753EC0", Offset = "0x5752EC0", VA = "0x5753EC0", Slot = "11")]
	public override void Setup(Transform parent)
	{
		// Lifted from source/cpp/Weather/FlashlightWeatherEffect.c (Weather.FlashlightWeatherEffect$$Setup): 8 lines keep C-only constructs
		Light* targetAddress;
		Light pUVar1;

		if (Il2CppMethodInitialized_0754506a == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInChildren_Light) ;
			Il2CppMethodInitialized_0754506a = true;
		}
		this.Setup(parent);
		pUVar1 = this.GetComponentInChildren<Light>();
		targetAddress = &this._light;
		this._light = pUVar1;
		pUVar1 = this._light;
		if (pUVar1 != null) {
			pUVar1.range = 120.0;
			if (*targetAddress != null) {
				(*targetAddress).intensity = 1.0;
				if (*targetAddress != null) {
					(*targetAddress).spotAngle = 60.0;
					this.SetColor((Color)(ZEXT816(0x3f80000000000000) << 0x40));
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x5753F90", Offset = "0x5752F90", VA = "0x5753F90", Slot = "22")]
	public virtual void SetColor(Color color)
	{
		// Lifted from source/cpp/Weather/FlashlightWeatherEffect.c (Weather.FlashlightWeatherEffect$$SetColor): clean
		Light __this_00;

		__this_00 = this._light;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.color = color;
		return;
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x5753FB0", Offset = "0x5752FB0", VA = "0x5753FB0", Slot = "19")]
	protected override void LateUpdate()
	{
		// Lifted from source/cpp/Weather/FlashlightWeatherEffect.c (Weather.FlashlightWeatherEffect$$LateUpdate): clean
		Transform pUVar1;
		Light pUVar2;
		Transform pUVar3;
		bool bVar4;
		GameObject pUVar5;
		Quaternion value;
		Vector3 UVar6;
		Vector3 UVar7;
		Vector3 value_00;
		float fStack_28;
		float fStack_24;

		pUVar1 = this._parent;
		bVar4 = ((Object)pUVar1 != null);
		pUVar2 = this._light;
		if (bVar4) {
			if (pUVar2 != null) {
				pUVar5 = pUVar2.gameObject;
				if (pUVar5 != null) {
					bVar4 = pUVar5.activeSelf;
					if (!bVar4) {
						pUVar2 = this._light;
						if (pUVar2 == null) goto label_05854157;
						pUVar5 = pUVar2.gameObject;
						if (pUVar5 == null) goto label_05854157;
						pUVar5.SetActive(true);
					}
					pUVar1 = this._parent;
					if (pUVar1 != null) {
						pUVar3 = this._transform;
						value = pUVar1.rotation;
						if (pUVar3 != null) {
							pUVar3.rotation = value;
							pUVar1 = this._parent;
							if (pUVar1 != null) {
								pUVar3 = this._transform;
								UVar6 = pUVar1.position;
								pUVar1 = this._parent;
								if (pUVar1 != null) {
									UVar7 = pUVar1.forward;
									if (pUVar3 != null) {
										fStack_28 = UVar6.x;
										fStack_24 = UVar6.y;
										value_00.y = fStack_24 + UVar7.y * -0.1;
										value_00.x = fStack_28 + UVar7.x * -0.1;
										value_00.z = UVar6.z + UVar7.z * -0.1;
										pUVar3.position = value_00;
										return;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (pUVar2 != null) {
			pUVar5 = pUVar2.gameObject;
			if (pUVar5 != null) {
				bVar4 = pUVar5.activeSelf;
				if (!bVar4) {
					return;
				}
				pUVar2 = this._light;
				if (pUVar2 != null) {
					pUVar5 = pUVar2.gameObject;
					if (pUVar5 != null) {
						pUVar5.SetActive(false);
						return;
					}
				}
			}
		}
	label_05854157: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x5754160", Offset = "0x5753160", VA = "0x5754160")]
	public FlashlightWeatherEffect()
	{
		// Lifted from source/cpp/Weather/FlashlightWeatherEffect.c (Weather.FlashlightWeatherEffect$$.ctor): clean
		base();
		return;
	}
}
