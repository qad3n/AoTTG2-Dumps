// ==================== AoTTG2 cross-reference ====================
// Type: Effects.BaseEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Effects/BaseEffect.c
// Prior real C# source (older reference): Assets/Scripts/Effects/BaseEffect.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Effects;

[Token(Token = "0x20003AD")]
internal class BaseEffect : MonoBehaviour
{
	[Token(Token = "0x40012CE")]
	[FieldOffset(Offset = "0x20")]
	protected Player _owner;

	[Token(Token = "0x40012CF")]
	[FieldOffset(Offset = "0x28")]
	protected float _timeLeft;

	[Token(Token = "0x6001792")]
	[Address(RVA = "0x585AFD0", Offset = "0x5859FD0", VA = "0x585AFD0", Slot = "4")]
	public virtual void Setup(Player owner, float liveTime, object[] settings)
	{
		// Lifted from source/cpp/Effects/BaseEffect.c (Effects.BaseEffect$$Setup): clean
		this._owner = owner;
		this._timeLeft = liveTime;
		return;
	}

	[Token(Token = "0x6001793")]
	[Address(RVA = "0x585B000", Offset = "0x585A000", VA = "0x585B000", Slot = "5")]
	public virtual void PlayAudio()
	{
		// Lifted from source/cpp/Effects/BaseEffect.c (Effects.BaseEffect$$PlayAudio): clean
		uint uVar1;
		Object[] pSVar2;
		uint uVar3;

		pSVar2 = this.GetComponentsInChildren<AudioSource>(true);
		if (pSVar2 == null) {
	label_0595b07f: ;
			throw new NullReferenceException();
		}
		uVar1 = (uint)pSVar2.Length;
		if (0 < (int)uVar1) {
			uVar3 = 0;
			do {
				if (uVar1 <= uVar3) {
					throw new IndexOutOfRangeException();
				}
				if ((AudioSource)pSVar2[(int)uVar3] == null) goto label_0595b07f;
				(pSVar2[(int)uVar3]).Play();
				uVar3 = uVar3 + 1;
				uVar1 = (uint)pSVar2.Length;
			} while ((int)uVar3 < (int)uVar1);
		}
		return;
	}

	[Token(Token = "0x6001794")]
	[Address(RVA = "0x585B090", Offset = "0x585A090", VA = "0x585B090", Slot = "6")]
	protected virtual void Update()
	{
		// Lifted from source/cpp/Effects/BaseEffect.c (Effects.BaseEffect$$Update): clean
		Object obj;
		float fVar1;
		float fVar2;

		fVar2 = this._timeLeft;
		fVar1 = Time.deltaTime;
		fVar2 = fVar2 - fVar1;
		this._timeLeft = fVar2;
		if (0.0 < fVar2) {
			return;
		}
		obj = (Object)this.gameObject;
		Object.Destroy(obj);
		return;
	}

	[Token(Token = "0x6001795")]
	[Address(RVA = "0x585B120", Offset = "0x585A120", VA = "0x585B120")]
	public BaseEffect()
	{
		// Lifted from source/cpp/Effects/BaseEffect.c (Effects.BaseEffect$$.ctor): clean
		base();
		return;
	}
}
