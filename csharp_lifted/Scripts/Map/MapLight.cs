// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapLight
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapLight.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapLight.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x20003FF")]
internal class MapLight
{
	[Token(Token = "0x400148A")]
	[FieldOffset(Offset = "0x10")]
	public Light Light;

	[Token(Token = "0x400148B")]
	[FieldOffset(Offset = "0x18")]
	public float MaxIntensity;

	[Token(Token = "0x400148C")]
	[FieldOffset(Offset = "0x20")]
	private Transform _transform;

	[Token(Token = "0x400148D")]
	[FieldOffset(Offset = "0x28")]
	private bool _isDaylight;

	[Token(Token = "0x6001975")]
	[Address(RVA = "0x588F550", Offset = "0x588E550", VA = "0x588F550")]
	public MapLight(Light light, bool isDaylight)
	{
		// Lifted from source/cpp/Map/MapLight.c (Map.MapLight$$.ctor): clean
		Transform pUVar1;
		float fVar2;

		base();
		this.Light = light;
		if (light == null) {
			throw new NullReferenceException();
		}
		fVar2 = light.intensity;
		this.MaxIntensity = fVar2;
		pUVar1 = light.transform;
		this._transform = pUVar1;
		this._isDaylight = isDaylight;
		return;
	}

	[Token(Token = "0x6001976")]
	[Address(RVA = "0x588F5B0", Offset = "0x588E5B0", VA = "0x588F5B0")]
	public void UpdateCull(Vector3 cameraPosition, float lightDistance)
	{
		// Lifted from source/cpp/Map/MapLight.c (Map.MapLight$$UpdateCull): clean
		Transform pUVar1;
		Light pUVar2;
		bool bVar3;
		float fVar4;
		float fVar5;
		Vector3 UVar6;
		float local_28;
		float fStack_24;

		pUVar1 = this._transform;
		bVar3 = ((Object)pUVar1 == null);
		if (!bVar3) {
			pUVar2 = this.Light;
			bVar3 = ((Object)pUVar2 == null);
			if ((!bVar3) && (this._isDaylight == false)) {
				if (lightDistance <= 0.0) {
					pUVar2 = this.Light;
					if (pUVar2 != null) {
						bVar3 = pUVar2.enabled;
						if (!bVar3) {
							return;
						}
						pUVar2 = this.Light;
						if (pUVar2 != null) {
							pUVar2.enabled = false;
							return;
						}
					}
				}
				else {
					pUVar1 = this._transform;
					if (pUVar1 != null) {
						UVar6 = pUVar1.position;
						local_28 = cameraPosition.x;
						fStack_24 = cameraPosition.y;
						fStack_24 = fStack_24 - UVar6.y;
						fVar5 = cameraPosition.z - UVar6.z;
						local_28 = local_28 - UVar6.x;
						fVar5 = fStack_24 * fStack_24 + local_28 * local_28 + fVar5 * fVar5;
						if (lightDistance * lightDistance <= fVar5) {
							fVar5 = 0.0;
						}
						else {
							if (fVar5 < 0.0) {
								fVar5 = sqrtf(fVar5);
							}
							else {
								fVar5 = SQRT(fVar5);
							}
							fVar4 = 4.0 - (fVar5 * 4.0) / lightDistance;
							fVar5 = 1.0;
							if (fVar4 <= 1.0) {
								fVar5 = fVar4;
							}
							fVar5 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5) * this.MaxIntensity;
						}
						this.UpdateIntensity(fVar5);
						return;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6001977")]
	[Address(RVA = "0x588F800", Offset = "0x588E800", VA = "0x588F800")]
	public bool MinimapDisableLight()
	{
		// Lifted from source/cpp/Map/MapLight.c (Map.MapLight$$MinimapDisableLight): clean
		Transform x;
		Light pUVar1;
		bool bVar2;
		bool bVar3;

		x = this._transform;
		bVar2 = ((Object)x == null);
		if (!bVar2) {
			pUVar1 = this.Light;
			bVar2 = ((Object)pUVar1 == null);
			if (!bVar2) {
				pUVar1 = this.Light;
				if (pUVar1 == null) {
	label_0598f8bb: ;
					throw new NullReferenceException();
				}
				bVar2 = pUVar1.enabled;
				if (bVar2) {
					pUVar1 = this.Light;
					if (pUVar1 == null) goto label_0598f8bb;
					pUVar1.enabled = false;
				}
			}
		}
		return bVar3;
	}

	[Token(Token = "0x6001978")]
	[Address(RVA = "0x588F8C0", Offset = "0x588E8C0", VA = "0x588F8C0")]
	public void MinimapEnableLight()
	{
		// Lifted from source/cpp/Map/MapLight.c (Map.MapLight$$MinimapEnableLight): clean
		Transform x;
		Light pUVar1;
		bool bVar2;

		x = this._transform;
		bVar2 = ((Object)x == null);
		if (!bVar2) {
			pUVar1 = this.Light;
			bVar2 = ((Object)pUVar1 == null);
			if (!bVar2) {
				pUVar1 = this.Light;
				if (pUVar1 == null) {
					throw new NullReferenceException();
				}
				pUVar1.enabled = true;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6001979")]
	[Address(RVA = "0x588F750", Offset = "0x588E750", VA = "0x588F750")]
	private void UpdateIntensity(float intensity)
	{
		// Lifted from source/cpp/Map/MapLight.c (Map.MapLight$$UpdateIntensity): clean
		Light pUVar1;
		bool bVar2;
		float fVar3;

		pUVar1 = this.Light;
		if ((intensity != 0.0) || (NAN(intensity))) {
			if (pUVar1 != null) {
				bVar2 = pUVar1.enabled;
				if (!bVar2) {
					pUVar1 = this.Light;
					if (pUVar1 == null) goto label_0598f7f7;
					pUVar1.enabled = true;
				}
				pUVar1 = this.Light;
				if (pUVar1 != null) {
					fVar3 = pUVar1.intensity;
					if ((fVar3 == intensity) && (!NAN(fVar3) && !NAN(intensity))) {
						return;
					}
					pUVar1 = this.Light;
					if (pUVar1 != null) {
						pUVar1.intensity = intensity;
						return;
					}
				}
			}
		}
		else if (pUVar1 != null) {
			bVar2 = pUVar1.enabled;
			if (!bVar2) {
				return;
			}
			pUVar1 = this.Light;
			if (pUVar1 != null) {
				pUVar1.enabled = false;
				return;
			}
		}
	label_0598f7f7: ;
		throw new NullReferenceException();
	}
}
