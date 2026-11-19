// ==================== AoTTG2 cross-reference ====================
// Type: Effects.LineRendererEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Effects/LineRendererEffect.c
// Prior real C# source (older reference): Assets/Scripts/Effects/LineRendererEffect.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Effects;

[Token(Token = "0x20003B1")]
internal class LineRendererEffect : BaseEffect
{
	[Token(Token = "0x40012F7")]
	[FieldOffset(Offset = "0x2C")]
	protected float _totalTime;

	[Token(Token = "0x40012F8")]
	[FieldOffset(Offset = "0x30")]
	protected LineRenderer _renderer;

	[Token(Token = "0x60017A3")]
	[Address(RVA = "0x585C4D0", Offset = "0x585B4D0", VA = "0x585C4D0", Slot = "4")]
	public override void Setup(Player owner, float liveTime, object[] settings)
	{
		// Lifted from source/cpp/Effects/LineRendererEffect.c (Effects.LineRendererEffect$$Setup): 21 lines keep C-only constructs
		LineRenderer* targetAddress;
		float fVar1;
		object pIVar2;
		LineRenderer pUVar3;
		Vector3 pUVar4;
		float pfVar5;

		this._owner = owner;
		this._timeLeft = liveTime;
		pUVar3 = this.GetComponent<LineRenderer>();
		targetAddress = &this._renderer;
		this._renderer = pUVar3;
		pUVar3 = this._renderer;
		if (pUVar3 != null) {
			pUVar3.positionCount = 2;
			if (settings != null) {
				if ((int)settings.Length == 0) {
	label_0595c713: ;
					throw new IndexOutOfRangeException();
				}
				pUVar3 = *targetAddress;
				if ((pUVar3 != null) &&(pIVar2 = settings[0], pIVar2 != null)) {
					if ((pIVar2.klass._1).element_class == (typeof(Vector3)._1).element_class) {
						pUVar4 = il2cpp_vm_Object_Unbox(pIVar2);
						pUVar3.SetPosition(0, (UnityEngine_Vector3_o)*pUVar4);
						if ((settings.Length & 0xfffffffe) == 0) goto label_0595c713;
						pUVar3 = *targetAddress;
						if ((pUVar3 == null) ||(pIVar2 = settings[1], pIVar2 == null)) goto label_0595c70e;
						if ((pIVar2.klass._1).element_class == (typeof(Vector3)._1).element_class) {
							pUVar4 = il2cpp_vm_Object_Unbox(pIVar2);
							pUVar3.SetPosition(1, (UnityEngine_Vector3_o)*pUVar4);
							if ((uint)settings.Length < 3) goto label_0595c713;
							pUVar3 = *targetAddress;
							if ((pUVar3 == null) ||(pIVar2 = settings[2], pIVar2 == null)) goto label_0595c70e;
							if ((pIVar2.klass._1).element_class == *(Il2CppClass*)(g_data_07556740 + 0x40)) {
								pfVar5 = il2cpp_vm_Object_Unbox(pIVar2);
								pUVar3.startWidth = *pfVar5;
								if ((settings.Length & 0xfffffffc) == 0) goto label_0595c713;
								pUVar3 = *targetAddress;
								if ((pUVar3 == null) ||(pIVar2 = settings[3], pIVar2 == null)) goto label_0595c70e;
								if ((pIVar2.klass._1).element_class == *(Il2CppClass*)(g_data_07556740 + 0x40)) {
									pfVar5 = il2cpp_vm_Object_Unbox(pIVar2);
									pUVar3.endWidth = *pfVar5;
									if ((uint)settings.Length < 5) goto label_0595c713;
									pIVar2 = settings[4];
									if (pIVar2 == null) goto label_0595c70e;
									if ((pIVar2.klass._1).element_class == *(Il2CppClass*)(g_data_07556740 + 0x40)) {
										pfVar5 = il2cpp_vm_Object_Unbox(pIVar2);
										fVar1 = *pfVar5;
										this._totalTime = fVar1;
										this._timeLeft = fVar1;
										return;
									}
								}
							}
						}
					}
					throw new InvalidCastException();
				}
			}
		}
	label_0595c70e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60017A4")]
	[Address(RVA = "0x585C720", Offset = "0x585B720", VA = "0x585C720", Slot = "6")]
	protected override void Update()
	{
		// Lifted from source/cpp/Effects/LineRendererEffect.c (Effects.LineRendererEffect$$Update): clean
		LineRenderer pUVar1;
		Object obj;
		float fVar2;
		float fVar3;
		Color value;
		Color value_00;

		fVar3 = this._timeLeft;
		fVar2 = Time.deltaTime;
		fVar3 = fVar3 - fVar2;
		this._timeLeft = fVar3;
		if (fVar3 <= 0.0) {
			obj = (Object)this.gameObject;
			Object.Destroy(obj);
			fVar3 = this._timeLeft;
		}
		pUVar1 = this._renderer;
		if (pUVar1 != null) {
			fVar3 = fVar3 / this._totalTime;
			value.a = fVar3;
			value.b = 1.0;
			value.r = 1.0;
			value.g = 1.0;
			pUVar1.startColor = value;
			pUVar1 = this._renderer;
			if (pUVar1 != null) {
				value_00.b = 1.0;
				value_00.a = fVar3;
				value_00.r = 1.0;
				value_00.g = 1.0;
				pUVar1.endColor = value_00;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60017A5")]
	[Address(RVA = "0x585C800", Offset = "0x585B800", VA = "0x585C800")]
	public LineRendererEffect()
	{
		// Lifted from source/cpp/Effects/LineRendererEffect.c (Effects.LineRendererEffect$$.ctor): clean
		base();
		return;
	}
}
