// ==================== AoTTG2 cross-reference ====================
// Type: Effects.ThunderspearExplodeEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Effects/ThunderspearExplodeEffect.c
// Prior real C# source (older reference): Assets/Scripts/Effects/ThunderspearExplodeEffect.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;
using Projectiles;

namespace Effects;

[Token(Token = "0x20003B4")]
internal class ThunderspearExplodeEffect : BaseEffect
{
	[Token(Token = "0x4001314")]
	[FieldOffset(Offset = "0x0")]
	public static float SizeMultiplier;

	[Token(Token = "0x4001315")]
	[FieldOffset(Offset = "0x2C")]
	private TSKillType _killType;

	[Token(Token = "0x60017B2")]
	[Address(RVA = "0x585E350", Offset = "0x585D350", VA = "0x585E350", Slot = "4")]
	public override void Setup(Player owner, float liveTime, object[] settings)
	{
		// Lifted from source/cpp/Effects/ThunderspearExplodeEffect.c (Effects.ThunderspearExplodeEffect$$Setup): 8 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		ulong uVar3;
		uint uVar4;
		uint uVar5;
		AbilitySettings pSVar6;
		BoolSetting pSVar7;
		object pIVar8;
		ParticleSystem.MinMaxGradient value;
		ParticleSystem __this_00;
		Transform pUVar10;
		GameObject __this_01;
		ParticleSystem.MainModule main;
		ulong puVar11;
		int piVar12;
		float fVar13;
		float fVar14;
		float fVar15;
		Color color;
		ParticleSystem.MainModule UStack_90;
		float fStack_88;
		ulong uStack_78;
		ParticleSystem.MinMaxGradient UStack_68;

		UStack_90.m_ParticleSystem =(ParticleSystem.MainModule)null;
		this._owner = owner;
		this._timeLeft = liveTime;
		__this_00 = this.GetComponent<ParticleSystem>();
		pSVar6 = SettingsManager.AbilitySettings;
		if ((pSVar6 == null) ||(pSVar7 = pSVar6.UseOldEffect, pSVar7 == null)) goto label_0595e719;
		if (pSVar7._value == false) {
			if (__this_00 == null) goto label_0595e719;
			main = __this_00.main;
			fVar13 = ThunderspearExplodeEffect.SizeMultiplier;
			Util.ScaleParticleStartSize(main, fVar13);
		}
		else {
			if (__this_00 == null) goto label_0595e719;
			__this_00.Stop();
			__this_00.Clear();
			pUVar10 = this.transform;
			if ((((pUVar10 == null) ||(pUVar10 = pUVar10.Find("OldExplodeEffect"), pUVar10 == null)) ||(__this_00 = pUVar10.GetComponent<ParticleSystem>(), __this_00 == null)) ||(__this_01 = __this_00.gameObject, __this_01 == null)) goto label_0595e719;
			__this_01.SetActive(true);
		}
		if (settings == null) goto label_0595e719;
		if ((int)settings.Length == 0) goto label_0595e71e;
		pIVar8 = settings[0];
		if (pIVar8 == null) goto label_0595e719;
		if ((pIVar8.klass._1).element_class != (typeof(Color)._1).element_class) goto label_0595e723;
		puVar11 = il2cpp_vm_Object_Unbox(pIVar8);
		pSVar6 = SettingsManager.AbilitySettings;
		if ((pSVar6 == null) ||(pSVar7 = pSVar6.ShowBombColors, pSVar7 == null)) goto label_0595e719;
		uVar3 = *puVar11;
		uStack_78 = puVar11[1];
		fVar13 = (float)((ulong)uStack_78 >> 0x20);
		if (pSVar7._value == false) {
			if ((typeof(ThunderspearProjectile)._2).cctor_finished_or_no_cctor == 0) {
				fVar13 = uStack_78._4_4_;
			}
			uVar1 = (ThunderspearProjectile.CritColor).r;
			uVar4 = (ThunderspearProjectile.CritColor).g;
			uVar2 = (ThunderspearProjectile.CritColor).b;
			uVar5 = (ThunderspearProjectile.CritColor).a;
			fVar14 = (float)uVar3 - (float)uVar1;
			fVar15 = (float)((ulong)uVar3 >> 0x20) - (float)uVar4;
			if ((fVar13 - (float)uVar5) * (fVar13 - (float)uVar5) + fVar15 * fVar15 + fVar14 * fVar14 +((float)uStack_78 - (float)uVar2) * ((float)uStack_78 - (float)uVar2) < 9.9999994e-11) goto label_0595e64b;
		}
		else {
	label_0595e64b: ;
			fStack_88 = fVar13;
			UStack_90 = __this_00.main;
			fVar13 = fStack_88;
			if (fStack_88 <= 0.5) {
				fVar13 = 0.5;
			}
			color.a = fVar13;
			color.b = (float)uStack_78;
			color.r = (float)(int)uVar3;
			color.g = (float)(int)((ulong)uVar3 >> 0x20);
			UStack_68 = ((ParticleSystem.MinMaxGradient)color);
			value.m_GradientMin = UStack_68.m_GradientMin;
			value.m_Mode = UStack_68.m_Mode;
			value._4_4_ = UStack_68._4_4_;
			value.m_GradientMax = UStack_68.m_GradientMax;
			value.m_ColorMin.r = UStack_68.m_ColorMin.r;
			value.m_ColorMin.g = UStack_68.m_ColorMin.g;
			value.m_ColorMin.b = UStack_68.m_ColorMin.b;
			value.m_ColorMin.a = UStack_68.m_ColorMin.a;
			value.m_ColorMax.r = UStack_68.m_ColorMax.r;
			value.m_ColorMax.g = UStack_68.m_ColorMax.g;
			value.m_ColorMax.b = UStack_68.m_ColorMax.b;
			value.m_ColorMax.a = UStack_68.m_ColorMax.a;
			UStack_90.startColor = value;
		}
		if ((settings.Length & 0xfffffffe) == 0) {
	label_0595e71e: ;
			throw new IndexOutOfRangeException();
		}
		pIVar8 = settings[1];
		if (pIVar8 != null) {
			if ((pIVar8.klass._1).element_class == (typeof(TSKillType)._1).element_class) {
				piVar12 = il2cpp_vm_Object_Unbox(pIVar8);
				this._killType = *piVar12;
				return;
			}
	label_0595e723: ;
			throw new InvalidCastException();
		}
	label_0595e719: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60017B3")]
	[Address(RVA = "0x585E730", Offset = "0x585D730", VA = "0x585E730", Slot = "5")]
	public override void PlayAudio()
	{
		// Lifted from source/cpp/Effects/ThunderspearExplodeEffect.c (Effects.ThunderspearExplodeEffect$$PlayAudio): 2 lines keep C-only constructs
		Transform pUVar1;
		object arg0;
		String n;
		AudioSource __this_00;
		String* ppSVar2;
		int local_c;

		switch(this._killType) {
		default: ;
			pUVar1 = this.transform;
			local_c = Random.Range(1, 3);
			arg0 = (object)local_c;
			ppSVar2 = &"TSAir{0}";
			break;
		case 1:
			pUVar1 = this.transform;
			local_c = Random.Range(1, 3);
			arg0 = (object)local_c;
			ppSVar2 = &"TSHitTitan{0}";
			break;
		case 2:
		case 4:
			pUVar1 = this.transform;
			local_c = Random.Range(1, 3);
			arg0 = (object)local_c;
			ppSVar2 = &"TSKill{0}";
			break;
		case 3:
		case 5:
			pUVar1 = this.transform;
			local_c = Random.Range(1, 3);
			arg0 = (object)local_c;
			ppSVar2 = &"TSArmor{0}";
		}
		n = String.Format(*ppSVar2, arg0);
		if (((pUVar1 == null) ||(pUVar1 = pUVar1.Find(n), pUVar1 == null)) ||(__this_00 = pUVar1.GetComponent<AudioSource>(), __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Play();
		return;
	}

	[Token(Token = "0x60017B4")]
	[Address(RVA = "0x585E8F0", Offset = "0x585D8F0", VA = "0x585E8F0")]
	public ThunderspearExplodeEffect()
	{
		// Lifted from source/cpp/Effects/ThunderspearExplodeEffect.c (Effects.ThunderspearExplodeEffect$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Effects/ThunderspearExplodeEffect.c.

	// Effects.ThunderspearExplodeEffect$$.cctor: clean
	static ThunderspearExplodeEffect()
	{
		ThunderspearExplodeEffect.SizeMultiplier = 1.1;
		return;
	}
}
