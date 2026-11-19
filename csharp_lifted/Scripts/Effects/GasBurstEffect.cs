// ==================== AoTTG2 cross-reference ====================
// Type: Effects.GasBurstEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Effects/GasBurstEffect.c
// Prior real C# source (older reference): Assets/Scripts/Effects/GasBurstEffect.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;

namespace Effects;

[Token(Token = "0x20003B0")]
internal class GasBurstEffect : BaseEffect
{
	[Token(Token = "0x60017A1")]
	[Address(RVA = "0x585C300", Offset = "0x585B300", VA = "0x585C300", Slot = "4")]
	public override void Setup(Player owner, float liveTime, object[] settings)
	{
		// Lifted from source/cpp/Effects/GasBurstEffect.c (Effects.GasBurstEffect$$Setup): clean
		HumanComponentCache pCVar1;
		bool bVar2;
		int viewID;
		ParticleSystem pUVar3;
		PhotonView x;
		Human x_00;
		Renderer __this_00;
		Renderer __this_01;
		Material value;

		this._owner = owner;
		this._timeLeft = liveTime;
		pUVar3 = this.GetComponentInChildren<ParticleSystem>();
		viewID = PhotonExtensions.GetIntProperty(owner, PlayerProperty.CharacterViewId, 0);
		if (0 < viewID) {
			x = PhotonView.Find(viewID);
			bVar2 = ((Object)x != null);
			if (bVar2) {
				if (x != null) {
					x_00 = x.GetComponent<Human>();
					bVar2 = ((Object)x_00 != null);
					if (!bVar2) {
						return;
					}
					if (x_00 != null) {
						if (x_00.Dead != false) {
							return;
						}
						if (pUVar3 != null) {
							__this_00 = pUVar3.GetComponent<Renderer>();
							pCVar1 = x_00.HumanCache;
							if ((((pCVar1 != null) &&(pUVar3 = pCVar1.Smoke, pUVar3 != null)) &&(__this_01 = pUVar3.GetComponent<Renderer>(), __this_01 != null)) &&(value = __this_01.material, __this_00 != null)) {
								__this_00.material = value;
								return;
							}
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x60017A2")]
	[Address(RVA = "0x585C4C0", Offset = "0x585B4C0", VA = "0x585C4C0")]
	public GasBurstEffect()
	{
		// Lifted from source/cpp/Effects/GasBurstEffect.c (Effects.GasBurstEffect$$.ctor): clean
		base();
		return;
	}
}
