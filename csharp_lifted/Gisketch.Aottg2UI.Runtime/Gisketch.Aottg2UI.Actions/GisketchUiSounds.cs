// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchUiSounds
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchUiSounds.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000FE")]
public static class GisketchUiSounds
{
	[Token(Token = "0x400050C")]
	private const string Path = "GisketchUI/Sounds/";

	[Token(Token = "0x400050D")]
	[FieldOffset(Offset = "0x0")]
	private static AudioSource _source;

	[Token(Token = "0x400050E")]
	[FieldOffset(Offset = "0x8")]
	private static AudioClip _forward;

	[Token(Token = "0x400050F")]
	[FieldOffset(Offset = "0x10")]
	private static AudioClip _back;

	[Token(Token = "0x4000510")]
	[FieldOffset(Offset = "0x18")]
	private static AudioClip _hover;

	[Token(Token = "0x4000511")]
	[FieldOffset(Offset = "0x20")]
	private static int _lastFrame;

	[Token(Token = "0x4000512")]
	[FieldOffset(Offset = "0x24")]
	private static GisketchUiSoundKind _lastKind;

	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x52AA530", Offset = "0x52A9530", VA = "0x52AA530")]
	public static void Play(GisketchUiSoundKind kind)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchUiSounds.c (Gisketch.Aottg2UI.Actions.GisketchUiSounds$$Play): 1 lines keep C-only constructs
		uint uVar1;
		int iVar2;
		bool bVar4;
		int iVar5;
		AudioClip clip;
		AudioSource __this;

		if (Il2CppMethodInitialized_07542c08 == false) {
			Il2CppMethodInitialized_07542c08 = true;
			uVar1 = (typeof(Application)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Application)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar4 = Application.isPlaying;
		}
		else {
			bVar4 = Application.isPlaying;
		}
		if (bVar4) {
			if (((typeof(GisketchUiSounds))._2).cctor_finished_or_no_cctor == 0) {
			}
			iVar2 = GisketchUiSounds._lastFrame;
			iVar5 = Time.frameCount;
			if (iVar2 == iVar5) {
				if ((typeof(GisketchUiSounds)._2).cctor_finished_or_no_cctor == 0) {
					iVar2 = GisketchUiSounds._lastKind;
				}
				else {
					iVar2 = GisketchUiSounds._lastKind;
				}
				if (iVar2 == kind) {
					return;
				}
			}
		}
		iVar5 = Time.frameCount;
		GisketchUiSounds._lastFrame = iVar5;
		GisketchUiSounds._lastKind = kind;
		clip = GisketchUiSounds.Clip(kind);
		bVar4 = ((Object)clip != null);
		if (!bVar4) {
			return;
		}
		__this = GisketchUiSounds.Source();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.PlayOneShot(clip, *(float)(&g_data_0100aae8 + (ulong)(kind == 2) * 4));
		return;
	}

	[Token(Token = "0x60007BC")]
	[Address(RVA = "0x52AAE30", Offset = "0x52A9E30", VA = "0x52AAE30")]
	private static AudioClip Clip(GisketchUiSoundKind kind)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchUiSounds.c (Gisketch.Aottg2UI.Actions.GisketchUiSounds$$Clip): 4 lines keep C-only constructs
		Gisketch_Aottg2UI_Actions_GisketchUiSounds_StaticFields pGVar1;
		bool bVar2;
		AudioClip pUVar3;
		AudioClip* ppUVar4;

		pUVar3 = GisketchUiSounds._forward;
		bVar2 = ((Object)pUVar3 == null);
		if (bVar2) {
			pUVar3 = Resources.Load<AudioClip>("GisketchUI/Sounds/ButtonForwardSound");
			pGVar1 = typeof(GisketchUiSounds).static_fields;
			pGVar1._forward = pUVar3;
		}
		pUVar3 = GisketchUiSounds._back;
		bVar2 = ((Object)pUVar3 == null);
		if (bVar2) {
			pUVar3 = Resources.Load<AudioClip>("GisketchUI/Sounds/ButtonBackSound");
			pGVar1 = typeof(GisketchUiSounds).static_fields;
			pGVar1._back = pUVar3;
		}
		pUVar3 = GisketchUiSounds._hover;
		bVar2 = ((Object)pUVar3 == null);
		if (bVar2) {
			pUVar3 = Resources.Load<AudioClip>("GisketchUI/Sounds/ButtonHoverSound");
			pGVar1 = typeof(GisketchUiSounds).static_fields;
			pGVar1._hover = pUVar3;
		}
		if (kind == 2) {
			ppUVar4 = &GisketchUiSounds._hover;
		}
		else if (kind == 1) {
			ppUVar4 = &GisketchUiSounds._back;
		}
		else {
			ppUVar4 = &GisketchUiSounds._forward;
		}
		return *ppUVar4;
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x52AB0D0", Offset = "0x52AA0D0", VA = "0x52AB0D0")]
	private static AudioSource Source()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchUiSounds.c (Gisketch.Aottg2UI.Actions.GisketchUiSounds$$Source): clean
		bool bVar1;
		Object pUVar2;
		AudioSource pUVar3;

		pUVar2 = (Object)GisketchUiSounds._source ;
		bVar1 = (pUVar2 != null);
		if (bVar1) {
			goto label_053ab2b4;
		}
		pUVar2 = new GameObject("AoTTG UI Sounds");
		if (pUVar2 == null) goto label_053ab2c7;
		pUVar2.hideFlags = 0x3d;
		if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) {
			bVar1 = Application.isPlaying;
			if (bVar1) goto label_053ab202;
		}
		else {
			bVar1 = Application.isPlaying;
			if (bVar1) {
	label_053ab202: ;
				Object.DontDestroyOnLoad(pUVar2);
			}
		}
		pUVar3 = pUVar2.AddComponent<AudioSource>();
		GisketchUiSounds._source = pUVar3;
		pUVar3 = GisketchUiSounds._source;
		if (pUVar3 != null) {
			pUVar3.playOnAwake = false;
			pUVar3 = GisketchUiSounds._source;
			if (pUVar3 != null) {
				pUVar3.spatialBlend = 0.0;
				pUVar3 = GisketchUiSounds._source;
				if (pUVar3 != null) {
					pUVar3.ignoreListenerVolume = false;
	label_053ab2b4: ;
					return GisketchUiSounds._source;
				}
			}
		}
	label_053ab2c7: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60007BE")]
	[Address(RVA = "0x52AB2D0", Offset = "0x52AA2D0", VA = "0x52AB2D0")]
	private static float Volume(GisketchUiSoundKind kind)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchUiSounds.c (Gisketch.Aottg2UI.Actions.GisketchUiSounds$$Volume): 1 lines keep C-only constructs
		return *(float)(&g_data_0100aae8 + (ulong)(kind == 2) * 4);
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchUiSounds.c.

	// Gisketch.Aottg2UI.Actions.GisketchUiSounds$$.cctor: clean
	static GisketchUiSounds()
	{
		GisketchUiSounds._lastFrame = -1;
		return;
	}
}
