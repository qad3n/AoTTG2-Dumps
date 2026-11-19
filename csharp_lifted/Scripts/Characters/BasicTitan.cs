// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BasicTitan
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/BasicTitan.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BasicTitan.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CustomSkins;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using Settings;
using SimpleJSONFixed;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x2000711")]
internal class BasicTitan : BaseTitan
{
	[Token(Token = "0x2000713")]
	[CompilerGenerated]
	private sealed class _003CPlayDecapitationBlood_003Ed__167 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002243")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002244")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002245")]
		[FieldOffset(Offset = "0x20")]
		public BasicTitan _003C_003E4__this;

		[Token(Token = "0x17000BF0")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004516")]
			[Address(RVA = "0x5B3E6B0", Offset = "0x5B3D6B0", VA = "0x5B3E6B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan.<PlayDecapitationBlood>d__167$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000BF1")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004518")]
			[Address(RVA = "0x5B3E700", Offset = "0x5B3D700", VA = "0x5B3E700", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan.<PlayDecapitationBlood>d__167$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004513")]
		[Address(RVA = "0x5B3E590", Offset = "0x5B3D590", VA = "0x5B3E590")]
		[DebuggerHidden]
		public _003CPlayDecapitationBlood_003Ed__167(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan.<PlayDecapitationBlood>d__167$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004514")]
		[Address(RVA = "0x5B3E5B0", Offset = "0x5B3D5B0", VA = "0x5B3E5B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan.<PlayDecapitationBlood>d__167$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004515")]
		[Address(RVA = "0x5B3E5C0", Offset = "0x5B3D5C0", VA = "0x5B3E5C0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan.<PlayDecapitationBlood>d__167$$MoveNext): clean
			int iVar1;
			BasicTitan pCVar2;
			BasicTitanComponentCache pCVar3;
			ParticleSystem pUVar4;
			WaitForSeconds __this_00;

			iVar1 = this.__1__state;
			pCVar2 = this.__4__this;
			if (iVar1 == 0) {
				this.__1__state = -1;
				if (((pCVar2 == null) ||(pCVar3 = pCVar2.BasicCache, pCVar3 == null)) ||(pUVar4 = pCVar3.DecapitationBlood, pUVar4 == null)) {
		label_05c3e6aa: ;
					throw new NullReferenceException();
				}
				pUVar4.Play();
				__this_00 = new WaitForSeconds(3.0);
				this.__2__current = (object)__this_00;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				this.__1__state = -1;
				if (((pCVar2 == null) ||(pCVar3 = pCVar2.BasicCache, pCVar3 == null)) ||(pUVar4 = pCVar3.DecapitationBlood, pUVar4 == null)) goto label_05c3e6aa;
				pUVar4.Stop(true, 1);
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x6004517")]
		[Address(RVA = "0x5B3E6C0", Offset = "0x5B3D6C0", VA = "0x5B3E6C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan.<PlayDecapitationBlood>d__167$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Characters_BasicTitan_PlayDecapitationBlood_d__167_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000714")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__141 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002246")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002247")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002248")]
		[FieldOffset(Offset = "0x20")]
		public BasicTitan _003C_003E4__this;

		[Token(Token = "0x4002249")]
		[FieldOffset(Offset = "0x28")]
		private string _003CdieAnimation_003E5__2;

		[Token(Token = "0x17000BF2")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600451C")]
			[Address(RVA = "0x5B3EC80", Offset = "0x5B3DC80", VA = "0x5B3EC80", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan.<WaitAndDie>d__141$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000BF3")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600451E")]
			[Address(RVA = "0x5B3ECD0", Offset = "0x5B3DCD0", VA = "0x5B3ECD0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan.<WaitAndDie>d__141$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004519")]
		[Address(RVA = "0x5B3E710", Offset = "0x5B3D710", VA = "0x5B3E710")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__141(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan.<WaitAndDie>d__141$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x600451A")]
		[Address(RVA = "0x5B3E730", Offset = "0x5B3D730", VA = "0x5B3E730", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan.<WaitAndDie>d__141$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x600451B")]
		[Address(RVA = "0x5B3E740", Offset = "0x5B3D740", VA = "0x5B3E740", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan.<WaitAndDie>d__141$$MoveNext): 3 lines keep C-only constructs
			String* targetAddress;
			uint uVar1;
			BasicTitan __this_00;
			BasicTitanAnimations pCVar2;
			TitanDeathDissolve __this_01;
			bool bVar3;
			int iVar4;
			WaitForSeconds pUVar5;
			GameObject targetGo;
			String pSVar6;

			uVar1 = this.__1__state;
			if (4 < uVar1) {
				return false;
			}
			__this_00 = this.__4__this;
			switch(uVar1) {
			case 0:
				this.__1__state = -1;
				if ((__this_00 == null) ||(pCVar2 = __this_00.BasicAnimations, pCVar2 == null)) break;
				targetAddress = &this._dieAnimation_5__2;
				this._dieAnimation_5__2 = pCVar2.DieFront;
				if (__this_00.State == 0xd) {
					pCVar2 = __this_00.BasicAnimations;
					if (pCVar2 == null) break;
					*targetAddress = pCVar2.DieBack;
				}
				if (__this_00.IsCrawler == false) {
					bVar3 = __this_00.IsBellyFlopping;
					if (bVar3) {
						pCVar2 = __this_00.BasicAnimations;
						if (pCVar2 == null) break;
						pSVar6 = pCVar2.DieGround;
					}
					else {
						bVar3 = __this_00.IsSitting;
						if (!bVar3) goto label_05c3ea63;
						pCVar2 = __this_00.BasicAnimations;
						if (pCVar2 == null) break;
						pSVar6 = pCVar2.get_DieSit();
					}
				}
				else {
					pCVar2 = __this_00.BasicAnimations;
					if (pCVar2 == null) break;
					pSVar6 = pCVar2.DieCrawler;
				}
				*targetAddress = pSVar6;
		label_05c3ea63: ;
				__this_00._pendingDeathAnimation = *targetAddress;
				iVar4 = 3;
				if (__this_00._launched == false) {
					iVar4 = 2 - (uint)(__this_00._decapitated == false);
				}
				__this_00._pendingDeathType = iVar4;
				__this_00.State = 0xf;
				__this_00.Ungrab();
				__this_00.DeactivateAllHitboxes();
				this.__2__current = null;
				this.__1__state = 1;
				return true;
			case 1:
				this.__1__state = -1;
				if (__this_00 != null) {
					this._dieAnimation_5__2 = __this_00._currentStateAnimation;
					pUVar5 = new WaitForSeconds(1.4);
					this.__2__current = (object)pUVar5;
					this.__1__state = 2;
					return true;
				}
				break;
			case 2:
				this.__1__state = -1;
				if ((__this_00 != null) &&(pCVar2 = __this_00.BasicAnimations, pCVar2 != null)) {
					bVar3 = (this._dieAnimation_5__2 != pCVar2.DieGround);
					if (bVar3) {
						pCVar2 = __this_00.BasicAnimations;
						if (pCVar2 == null) break;
						bVar3 = (this._dieAnimation_5__2 != pCVar2.DieCrawler);
						if (bVar3) {
							__this_00.PlaySound(TitanSounds.DeathFall);
						}
					}
					pUVar5 = new WaitForSeconds(7.6);
					this.__2__current = (object)pUVar5;
					this.__1__state = 3;
					return true;
				}
				break;
			case 3:
				this.__1__state = -1;
				if (__this_00 != null) {
					__this_01 = __this_00.DeathDissolve;
					if (__this_01 != null) {
						__this_01.Finish();
					}
					pUVar5 = new WaitForSeconds(1.25);
					this.__2__current = (object)pUVar5;
					this.__1__state = 4;
					return true;
				}
				break;
			case 4:
				this.__1__state = -1;
				if (__this_00 != null) {
					targetGo = __this_00.gameObject ;
					PhotonNetwork.Destroy(targetGo);
					return false;
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x600451D")]
		[Address(RVA = "0x5B3EC90", Offset = "0x5B3DC90", VA = "0x5B3EC90", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan.<WaitAndDie>d__141$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Characters_BasicTitan_WaitAndDie_d__141_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x40021FE")]
	[FieldOffset(Offset = "0x2A0")]
	public BasicTitanComponentCache BasicCache;

	[Token(Token = "0x40021FF")]
	[FieldOffset(Offset = "0x2A8")]
	protected BasicTitanAnimations BasicAnimations;

	[Token(Token = "0x4002200")]
	[FieldOffset(Offset = "0x2B0")]
	public bool IsCrawler;

	[Token(Token = "0x4002201")]
	[FieldOffset(Offset = "0x2B1")]
	public bool isWarded;

	[Token(Token = "0x4002202")]
	[FieldOffset(Offset = "0x2B4")]
	public TitanDeathType DeathType;

	[Token(Token = "0x4002203")]
	[FieldOffset(Offset = "0x2B8")]
	public Vector3 DeathVelocity;

	[Token(Token = "0x4002204")]
	[FieldOffset(Offset = "0x2C8")]
	protected string _runAnimation;

	[Token(Token = "0x4002205")]
	[FieldOffset(Offset = "0x2D0")]
	public BasicTitanSetup Setup;

	[Token(Token = "0x4002206")]
	[FieldOffset(Offset = "0x2D8")]
	public Quaternion _oldHeadRotation;

	[Token(Token = "0x4002207")]
	[FieldOffset(Offset = "0x2E8")]
	private Quaternion? _aiHeadRotation;

	[Token(Token = "0x4002208")]
	[FieldOffset(Offset = "0x2FC")]
	private float _turnDegrees;

	[Token(Token = "0x4002209")]
	[FieldOffset(Offset = "0x300")]
	public Quaternion? LateUpdateHeadRotation;

	[Token(Token = "0x400220A")]
	[FieldOffset(Offset = "0x314")]
	public Quaternion? LateUpdateHeadRotationRecv;

	[Token(Token = "0x400220B")]
	[FieldOffset(Offset = "0x328")]
	public Vector2 LastGoodHeadAngle;

	[Token(Token = "0x400220C")]
	[FieldOffset(Offset = "0x330")]
	public float BellyFlopTime;

	[Token(Token = "0x400220D")]
	[FieldOffset(Offset = "0x334")]
	protected float _leftArmDisabledTimeLeft;

	[Token(Token = "0x400220E")]
	[FieldOffset(Offset = "0x338")]
	protected float _rightArmDisabledTimeLeft;

	[Token(Token = "0x400220F")]
	[FieldOffset(Offset = "0x33C")]
	protected float ArmDisableTime;

	[Token(Token = "0x4002210")]
	private const float LimbRegrowthTime = 6.5f;

	[Token(Token = "0x4002211")]
	private const float LimbBloodDuration = 4f;

	[Token(Token = "0x4002212")]
	private const float LimbSteamSoundFadeInDuration = 0.3f;

	[Token(Token = "0x4002213")]
	private const float LimbSteamSoundFadeOutDuration = 0.5f;

	[Token(Token = "0x4002214")]
	private const float HairScaleTolerance = 0.001f;

	[Token(Token = "0x4002215")]
	[FieldOffset(Offset = "0x340")]
	private float _limbSteamSoundFade;

	[Token(Token = "0x4002216")]
	[FieldOffset(Offset = "0x344")]
	public float RockThrow1Speed;

	[Token(Token = "0x4002217")]
	[FieldOffset(Offset = "0x348")]
	public float RockThrowMaxAimAngle;

	[Token(Token = "0x4002218")]
	[FieldOffset(Offset = "0x34C")]
	public float RockThrowCloseAimAngle;

	[Token(Token = "0x4002219")]
	[FieldOffset(Offset = "0x350")]
	public float RockThrowCloseAimDistance;

	[Token(Token = "0x400221A")]
	[FieldOffset(Offset = "0x354")]
	public float RockThrowFullAimDistance;

	[Token(Token = "0x400221B")]
	[FieldOffset(Offset = "0x358")]
	protected Vector3 _rockThrowTarget;

	[Token(Token = "0x400221C")]
	[FieldOffset(Offset = "0x368")]
	protected BaseCharacter _rockThrowTargetCharacter;

	[Token(Token = "0x400221D")]
	[FieldOffset(Offset = "0x370")]
	protected Vector3 _rockThrowForward;

	[Token(Token = "0x400221E")]
	[FieldOffset(Offset = "0x37C")]
	protected bool _rockThrowWillHitSelf;

	[Token(Token = "0x400221F")]
	[FieldOffset(Offset = "0x380")]
	protected float _originalCapsuleValue;

	[Token(Token = "0x4002220")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] SizeScaledAnimations;

	[Token(Token = "0x4002221")]
	[FieldOffset(Offset = "0x384")]
	public int TargetViewId;

	[Token(Token = "0x4002222")]
	[FieldOffset(Offset = "0x388")]
	public bool LookAtTarget;

	[Token(Token = "0x4002223")]
	[FieldOffset(Offset = "0x38C")]
	public float HeadSize;

	[Token(Token = "0x4002224")]
	[FieldOffset(Offset = "0x390")]
	private Vector3 _headScale;

	[Token(Token = "0x4002225")]
	[FieldOffset(Offset = "0x39C")]
	private float _hairScale;

	[Token(Token = "0x4002226")]
	[FieldOffset(Offset = "0x3A0")]
	private bool _headDetached;

	[Token(Token = "0x4002227")]
	[FieldOffset(Offset = "0x3A1")]
	private bool _hairCut;

	[Token(Token = "0x4002228")]
	[FieldOffset(Offset = "0x3A8")]
	private TitanLimbMesh _limbMesh;

	[Token(Token = "0x4002229")]
	[FieldOffset(Offset = "0x3B0")]
	private bool _limbCutsVisible;

	[Token(Token = "0x400222A")]
	[FieldOffset(Offset = "0x3B4")]
	private float _deathVisualStartTime;

	[Token(Token = "0x400222B")]
	[FieldOffset(Offset = "0x3B8")]
	private float _deathFallSoundVolume;

	[Token(Token = "0x400222C")]
	[FieldOffset(Offset = "0x3BC")]
	private float _steamSoundVolume;

	[Token(Token = "0x400222D")]
	private const float DeathFallSoundDuration = 1.2f;

	[Token(Token = "0x400222E")]
	private const float DeathFallSoundFadeDuration = 0.2f;

	[Token(Token = "0x400222F")]
	private const float DeathSteamSoundFadeInDuration = 0.5f;

	[Token(Token = "0x4002230")]
	private const float DeathSteamSoundFadeOutDuration = 1f;

	[Token(Token = "0x4002231")]
	private const float DeathSteamSoundTailDuration = 0.25f;

	[Token(Token = "0x4002232")]
	private const float DeathDissolveDelay = 3f;

	[Token(Token = "0x4002233")]
	private const float DeathDissolveDuration = 6f;

	[Token(Token = "0x4002234")]
	private const float HeadLaunchSpeed = 45f;

	[Token(Token = "0x4002235")]
	[FieldOffset(Offset = "0x3C0")]
	private Vector3 _finisherDeathVelocity;

	[Token(Token = "0x4002236")]
	[FieldOffset(Offset = "0x3CC")]
	private Vector3 _headLaunchVelocity;

	[Token(Token = "0x4002237")]
	[FieldOffset(Offset = "0x3D8")]
	private Vector3? _napeChunkVelocity;

	[Token(Token = "0x4002238")]
	[FieldOffset(Offset = "0x3E8")]
	private bool _napeChunkPlayed;

	[Token(Token = "0x4002239")]
	[FieldOffset(Offset = "0x3F0")]
	private string _pendingDeathAnimation;

	[Token(Token = "0x400223A")]
	[FieldOffset(Offset = "0x3F8")]
	private TitanDeathType _pendingDeathType;

	[Token(Token = "0x400223B")]
	[FieldOffset(Offset = "0x400")]
	[SerializeField]
	private GameObject hardenedNape;

	[Token(Token = "0x400223C")]
	[FieldOffset(Offset = "0x408")]
	public WardedWeakSpot CurrentWardedWeakSpot;

	[Token(Token = "0x400223D")]
	[FieldOffset(Offset = "0x40C")]
	public WardedWeakSpot LastWardedWeakSpot;

	[Token(Token = "0x400223E")]
	[FieldOffset(Offset = "0x410")]
	private TitanCustomSet _customSet;

	[Token(Token = "0x400223F")]
	[FieldOffset(Offset = "0x418")]
	private TitanCustomSkinLoader _customSkinLoader;

	[Token(Token = "0x4002240")]
	[FieldOffset(Offset = "0x420")]
	private int _skinSlot;

	[Token(Token = "0x17000BE9")]
	private Vector3 ArmEffectOffset
	{
		[Token(Token = "0x600449C")]
		[Address(RVA = "0x5B2E170", Offset = "0x5B2D170", VA = "0x5B2E170")]
		get
		{
			// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$get_ArmEffectOffset): clean
			uint uVar1;
			uint uVar2;
			float fVar4;
			Vector3 UVar5;

			fVar4 = this.Size * 0.1;
			uVar1 = (Vector3.downVector).x;
			uVar2 = (Vector3.downVector).y;
			UVar5.x = fVar4 * (float)uVar1;
			UVar5.y = fVar4 * (float)uVar2;
			UVar5.z = fVar4 * (Vector3.downVector).z;
			return (Vector3)UVar5;
		}
	}

	[Token(Token = "0x17000BEA")]
	public override bool CanSprint
	{
		[Token(Token = "0x600449D")]
		[Address(RVA = "0x5B2E1D0", Offset = "0x5B2D1D0", VA = "0x5B2E1D0", Slot = "123")]
		get
		{
			// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$get_CanSprint): clean
			return true;
		}
	}

	[Token(Token = "0x17000BEB")]
	public override bool CanWallClimb
	{
		[Token(Token = "0x600449E")]
		[Address(RVA = "0x5B2E1E0", Offset = "0x5B2D1E0", VA = "0x5B2E1E0", Slot = "122")]
		get
		{
			// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$get_CanWallClimb): clean
			return true;
		}
	}

	[Token(Token = "0x17000BEC")]
	public bool IsBald
	{
		[Token(Token = "0x600449F")]
		[Address(RVA = "0x5B2E1F0", Offset = "0x5B2D1F0", VA = "0x5B2E1F0")]
		get
		{
			// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$get_IsBald): clean
			return this._hairCut;
		}
	}

	[Token(Token = "0x17000BED")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x60044A0")]
		[Address(RVA = "0x5B2E200", Offset = "0x5B2D200", VA = "0x5B2E200", Slot = "59")]
		get
		{
			// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$get_EmoteActions): 10 lines keep C-only constructs
			int piVar1;
			uint uVar2;
			String[] pSVar3;
			String pSVar5;
			List<string> __this_00;

			__this_00 = new List<string>();
			pSVar5 = "Laugh";
			if (__this_00 != null) {
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pSVar3 = __this_00._items;
				if (pSVar3 != null) {
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pSVar3.Length) {
						__this_00._size = uVar2 + 1;
						pSVar3[(int)uVar2] = pSVar5;
					}
					else {
						__this_00.AddWithResize((object)pSVar5);
					}
					pSVar5 = "Nod";
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar3 = __this_00._items;
					if (pSVar3 != null) {
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pSVar3.Length) {
							__this_00._size = uVar2 + 1;
							pSVar3[(int)uVar2] = pSVar5;
						}
						else {
							__this_00.AddWithResize((object)pSVar5);
						}
						pSVar5 = "Shake";
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar3 = __this_00._items;
						if (pSVar3 != null) {
							uVar2 = __this_00._size;
							if (uVar2 < (uint)pSVar3.Length) {
								__this_00._size = uVar2 + 1;
								pSVar3[(int)uVar2] = pSVar5;
							}
							else {
								__this_00.AddWithResize((object)pSVar5);
							}
							pSVar5 = "Roar1";
							piVar1 = &__this_00._version;
							*piVar1 = *piVar1 + 1;
							pSVar3 = __this_00._items;
							if (pSVar3 != null) {
								uVar2 = __this_00._size;
								if (uVar2 < (uint)pSVar3.Length) {
									__this_00._size = uVar2 + 1;
									pSVar3[(int)uVar2] = pSVar5;
								}
								else {
									__this_00.AddWithResize((object)pSVar5);
								}
								pSVar5 = "Roar2";
								piVar1 = &__this_00._version;
								*piVar1 = *piVar1 + 1;
								pSVar3 = __this_00._items;
								if (pSVar3 != null) {
									uVar2 = __this_00._size;
									if (uVar2 < (uint)pSVar3.Length) {
										__this_00._size = uVar2 + 1;
										pSVar3[(int)uVar2] = pSVar5;
									}
									else {
										__this_00.AddWithResize((object)pSVar5);
									}
									return __this_00;
								}
							}
						}
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000BEE")]
	private bool IsBellyFlopping
	{
		[Token(Token = "0x60044C2")]
		[Address(RVA = "0x5B31080", Offset = "0x5B30080", VA = "0x5B31080")]
		get
		{
			// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$get_IsBellyFlopping): clean
			BasicTitanAnimations pCVar1;
			bool bVar2;

			pCVar1 = this.BasicAnimations;
			if (pCVar1 != null) {
				bVar2 = (this._currentStateAnimation == pCVar1.AttackBellyFlop);
				if (bVar2) {
					return true;
				}
				pCVar1 = this.BasicAnimations;
				if (pCVar1 != null) {
					bVar2 = (this._currentStateAnimation == pCVar1.AttackBellyFlopGetup);
					return bVar2;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000BEF")]
	public override bool TreatAsSmall
	{
		[Token(Token = "0x60044F5")]
		[Address(RVA = "0x5B3A180", Offset = "0x5B39180", VA = "0x5B3A180", Slot = "143")]
		get
		{
			// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$get_TreatAsSmall): clean
			return this.IsCrawler;
		}
	}

	[Token(Token = "0x60044A1")]
	[Address(RVA = "0x5B2E470", Offset = "0x5B2D470", VA = "0x5B2E470")]
	public void Init(bool ai, string team, JSONNode data, TitanCustomSet customSet, int skinSlot)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$Init): 1 lines keep C-only constructs
		BasicTitanAnimations pCVar1;
		String[] pSVar2;
		BaseComponentCache pUVar3;
		PhotonView __this_00;
		AnimationHandler __this_01;
		bool bVar4;
		int iVar5;
		uint uVar6;
		GameObject __this_02;
		BaseTitanAIController pCVar7;
		JSONNode pSVar8;
		String pSVar9;
		Object[] parameters;
		object pIVar10;
		object pIVar11;
		byte local_39;
		String local_38;

		local_38 = team;
		this._customSet = customSet;
		this._skinSlot = skinSlot;
		__this_02 = this.gameObject;
		if (ai) {
			if (__this_02 == null) goto label_05c2e85d;
			pCVar7 = __this_02.AddComponent<BaseTitanAIController>();
			if (pCVar7 == null) goto label_05c2e85d;
			pCVar7.Init(data);
			if (data == null) goto label_05c2e85d;
			pSVar8 = data.get_Item("Name");
			if (pSVar8 == null) goto label_05c2e85d;
			pSVar9 = pSVar8.get_Value();
			this.Name = pSVar9;
			pSVar8 = data.get_Item("IsCrawler");
			if (pSVar8 == null) goto label_05c2e85d;
			bVar4 = pSVar8.get_AsBool();
			this.IsCrawler = bVar4;
			if (bVar4) goto label_05c2e6f1;
	label_05c2e602: ;
			bVar4 = (data != null);
			iVar5 = 1;
			if (bVar4) {
				if (data == null) goto label_05c2e85d;
				bVar4 = data.HasKey("RunAnimation");
				if (bVar4) {
					pSVar8 = data.get_Item("RunAnimation");
					if (pSVar8 == null) goto label_05c2e85d;
					iVar5 = pSVar8.get_AsInt();
					if (iVar5 == 0) {
						pCVar1 = this.BasicAnimations;
						if ((pCVar1 == null) ||(pSVar2 = pCVar1.Runs, pSVar2 == null)) goto label_05c2e85d;
						uVar6 = Random.Range(0, (int32_t)pSVar2.Length);
						if ((uint)pSVar2.Length <= uVar6) goto label_05c2e862;
						pSVar9 = pSVar2[(int)uVar6];
						goto label_05c2e705;
					}
				}
			}
			pCVar1 = this.BasicAnimations;
			if ((pCVar1 == null) ||(pSVar2 = pCVar1.Runs, pSVar2 == null)) goto label_05c2e85d;
			if ((uint)pSVar2.Length <= iVar5 - 1U) goto label_05c2e862;
			pSVar9 = pSVar2[(int)(iVar5 - 1U)];
		}
		else {
			if (__this_02 == null) goto label_05c2e85d;
			__this_02.AddComponent<BasicTitanPlayerController>();
			if (this.IsCrawler == false) goto label_05c2e602;
	label_05c2e6f1: ;
			pCVar1 = this.BasicAnimations;
			if (pCVar1 == null) goto label_05c2e85d;
			pSVar9 = pCVar1.RunCrawler;
		}
	label_05c2e705: ;
		this._runAnimation = pSVar9;
		pUVar3 = this.Cache;
		if (pUVar3 != null) {
			__this_00 = pUVar3.PhotonView;
			parameters = (Object[])new object[1];
			local_39 = this.IsCrawler;
			pIVar10 = (object)local_39;
			if (parameters != null) {
				if (pIVar10 != null) {
					pIVar11 = il2cpp_vm_Object_IsInst(pIVar10, (((parameters.obj).klass)._1).element_class);
					if (pIVar11 == null) {
						pIVar10 = new ArrayTypeMismatchException();
						throw pIVar10;
					}
				}
				if ((int)parameters.Length == 0) {
	label_05c2e862: ;
					throw new IndexOutOfRangeException();
				}
				parameters[0] = pIVar10;
				if (__this_00 != null) {
					__this_00.RPC("SetCrawlerRPC", 3, parameters);
					this.CurrentWardedWeakSpot = 0;
					this.Init(ai, local_38, data);
					pCVar1 = this.BasicAnimations;
					if ((pCVar1 != null) &&(__this_01 = this.Animation, __this_01 != null)) {
						__this_01.SetSpeed(pCVar1.CoverNape, 1.2);
						return;
					}
				}
			}
		}
	label_05c2e85d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044A2")]
	[Address(RVA = "0x5B2E880", Offset = "0x5B2D880", VA = "0x5B2E880")]
	public void SetWarded(bool warded)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$SetWarded): 8 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		bool bVar2;
		int iVar3;
		ulong in_RAX;
		Object[] parameters;
		object pIVar4;
		object pIVar5;
		ulong uStack_28;

		uStack_28 = in_RAX;
		bVar2 = this.IsMine();
		if (!bVar2) {
			return;
		}
		iVar3 = 0;
		if (warded) {
			iVar3 = Random.Range(1, 5);
		}
		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			__this_00 = pUVar1.PhotonView;
			parameters = (Object[])new object[2];
			uStack_28._0_4_ = CONCAT13(warded, (undefined3)uStack_28);
			pIVar4 = (object)(((long)&uStack_28 + 3));
			if (parameters != null) {
				if ((pIVar4 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((parameters.obj).klass)._1).element_class), pIVar5 == null)) {
	label_05c2ea04: ;
					pIVar4 = new ArrayTypeMismatchException();
					throw pIVar4;
				}
				if ((int)parameters.Length != 0) {
					parameters[0] = pIVar4;
					uStack_28 = CONCAT44(iVar3, (undefined4)uStack_28);
					pIVar4 = (object)(((long)&uStack_28 + 4));
					if ((pIVar4 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((parameters.obj).klass)._1).element_class), pIVar5 == null)) goto label_05c2ea04;
					if ((parameters.Length & 0xfffffffe) != 0) {
						parameters[1] = pIVar4;
						if (__this_00 != null) {
							__this_00.RPC("SetWardedRPC", 0, parameters);
							return;
						}
						goto label_05c2e9fa;
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_05c2e9fa: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044A3")]
	[Address(RVA = "0x5B2EA20", Offset = "0x5B2DA20", VA = "0x5B2EA20", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$OnPlayerEnteredRoom): 16 lines keep C-only constructs
		byte bVar1;
		BaseComponentCache pUVar2;
		PhotonView pPVar3;
		MethodInfo pMVar4;
		ulong in_RAX;
		Object[] parameters;
		object pIVar5;
		object pIVar6;
		Il2CppClass pIVar7;
		ulong uStack_38;

		uStack_38 = in_RAX;
		this.OnPlayerEnteredRoom(player);
		pUVar2 = this.Cache;
		if ((pUVar2 == null) ||(pPVar3 = pUVar2.PhotonView, pPVar3 == null)) goto label_05c2ec96;
		if (pPVar3._IsMine_k__BackingField == false) {
			return;
		}
		if (this.isWarded == false) {
			return;
		}
		parameters = (Object[])new object[2];
		uStack_38._0_4_ = CONCAT13(this.isWarded, (undefined3)uStack_38);
		pIVar5 = (object)(((long)&uStack_38 + 3));
		if (parameters == null) goto label_05c2ec96;
		if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((parameters.obj).klass)._1).element_class), pIVar6 == null)) {
	label_05c2eca0: ;
			pIVar5 = new ArrayTypeMismatchException();
			throw pIVar5;
		}
		if ((int)parameters.Length == 0) {
	label_05c2ec9b: ;
			throw new IndexOutOfRangeException();
		}
		parameters[0] = pIVar5;
		uStack_38 = CONCAT44(this.LastWardedWeakSpot, (undefined4)uStack_38);
		pIVar5 = (object)(((long)&uStack_38 + 4));
		if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((parameters.obj).klass)._1).element_class), pIVar6 == null)) goto label_05c2eca0;
		if ((parameters.Length & 0xfffffffe) == 0) goto label_05c2ec9b;
		parameters[1] = pIVar5;
		pPVar3.RPC("SetWardedRPC", player, parameters);
		pMVar4 = MethodInfo_System_Array_Empty_object;
		if (this.CurrentWardedWeakSpot != 0) {
			return;
		}
		pUVar2 = this.Cache;
		if (pUVar2 == null) goto label_05c2ec96;
		pPVar3 = pUVar2.PhotonView;
		if ((MethodInfo_System_Array_Empty_object.field7_0x38).methodMetadataHandle == null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_object);
			pIVar7 = *(Il2CppClass*)((long)(pMVar4.field7_0x38).methodMetadataHandle + 0x10);
			if (((pIVar7._2).bitflags1 & 1) == 0) goto label_05c2ec62;
	label_05c2ebf9: ;
			if ((pIVar7._2).cctor_finished_or_no_cctor != 0) goto label_05c2ec02;
	label_05c2ec73: ;
			pIVar7 = (pMVar4.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar7._2).bitflags1;
		}
		else {
			pIVar7 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_object.field7_0x38).methodMetadataHandle + 0x10);
			if (((pIVar7._2).bitflags1 & 1) != 0) goto label_05c2ebf9;
	label_05c2ec62: ;
			pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
			if ((pIVar7._2).cctor_finished_or_no_cctor == 0) goto label_05c2ec73;
	label_05c2ec02: ;
			pIVar7 = (pMVar4.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar7._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
		}
		if (pPVar3 != null) {
			pPVar3.RPC("DisableWardedEffectsRPC", player, *(Object[]*)pIVar7.static_fields);
			return;
		}
	label_05c2ec96: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044A4")]
	[Address(RVA = "0x5B2ECB0", Offset = "0x5B2DCB0", VA = "0x5B2ECB0", Slot = "139")]
	public override bool IsGrabAttack()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$IsGrabAttack): clean
		String __this_00;
		bool bVar1;

		__this_00 = this._currentAttack;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.StartsWith("AttackGrab");
		return bVar1;
	}

	[Token(Token = "0x60044A5")]
	[Address(RVA = "0x5B2ED00", Offset = "0x5B2DD00", VA = "0x5B2ED00", Slot = "138")]
	protected override Dictionary<string, float> GetRootMotionAnimations()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$GetRootMotionAnimations): clean
		BasicTitanAnimations pCVar1;
		Dictionary<string, float> __this_00;

		__this_00 = new Dictionary<string, float>();
		pCVar1 = this.BasicAnimations;
		if ((pCVar1 != null) &&(__this_00 != null)) {
			__this_00.Add((object)pCVar1.AttackBellyFlop, 1.0);
			pCVar1 = this.BasicAnimations;
			if (pCVar1 != null) {
				__this_00.Add((object)pCVar1.AttackBellyFlopGetup, 1.0);
				pCVar1 = this.BasicAnimations;
				if (pCVar1 != null) {
					__this_00.Add((object)pCVar1.AttackPunch, 1.0);
					pCVar1 = this.BasicAnimations;
					if (pCVar1 != null) {
						__this_00.Add((object)pCVar1.AttackPunchCombo, 1.0);
						return __this_00;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044A6")]
	[Address(RVA = "0x5B2EE20", Offset = "0x5B2DE20", VA = "0x5B2EE20", Slot = "191")]
	protected override void SetSizeParticles(float size)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$SetSizeParticles): 5 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		BasicTitanComponentCache pCVar6;
		Il2CppClass particles;
		ParticleSystem pUVar7;
		UnityEngine_Vector3_StaticFields pUVar8;
		object pIVar9;
		ulong uVar10;
		Transform pUVar11;
		ulong uVar12;
		Vector3 value;
		Vector3 value_00;

		this.SetSizeParticles(size);
		pIVar9 = new ParticleSystem[2];
		pCVar6 = this.BasicCache;
		if ((pCVar6 != null) && (pIVar9 != null)) {
			if (*(int)&pIVar9[1].monitor == 0) {
	label_05c2f05d: ;
				throw new IndexOutOfRangeException();
			}
			pIVar9[2].klass = (Il2CppClass)pCVar6.ForearmSmokeL;
			pCVar6 = this.BasicCache;
			if (pCVar6 != null) {
				if (((ulong)pIVar9[1].monitor & 0xfffffffe) == 0) goto label_05c2f05d;
				pIVar9[2].monitor = pCVar6.ForearmSmokeR;
				if (0 < (int)pIVar9[1].monitor) {
					uVar10 = (ulong)pIVar9[1].monitor & 0xffffffff;
					uVar12 = 0;
					do {
						if (uVar10 <= uVar12) goto label_05c2f05d;
						particles = (&pIVar9[2].klass)[uVar12];
						TitanSteamEffect.ConfigureRegrowth((ParticleSystem)particles, size);
						uVar12 = uVar12 + 1;
						uVar10 = (ulong)*(uint)&pIVar9[1].monitor;
					} while ((long)uVar12 < (long)(int)*(uint)&pIVar9[1].monitor);
				}
				pCVar6 = this.BasicCache;
				if ((pCVar6 != null) &&(pUVar7 = pCVar6.ForearmSmokeL, pUVar7 != null)) {
					pUVar11 = pUVar7.transform;
					if (pUVar11 != null) {
						pUVar8 = typeof(Vector3).static_fields;
						fVar1 = this.Size;
						value.z = (pUVar8.oneVector).z * fVar1;
						uVar2 = (pUVar8.oneVector).x;
						uVar4 = (pUVar8.oneVector).y;
						value.x = fVar1 * (float)uVar2;
						value.y = fVar1 * (float)uVar4;
						pUVar11.localScale = value;
						pCVar6 = this.BasicCache;
						if ((pCVar6 != null) &&(pUVar7 = pCVar6.ForearmSmokeR, pUVar7 != null)) {
							pUVar11 = pUVar7.transform;
							if (pUVar11 != null) {
								pUVar8 = typeof(Vector3).static_fields;
								fVar1 = this.Size;
								value_00.z = (pUVar8.oneVector).z * fVar1;
								uVar3 = (pUVar8.oneVector).x;
								uVar5 = (pUVar8.oneVector).y;
								value_00.x = fVar1 * (float)uVar3;
								value_00.y = fVar1 * (float)uVar5;
								pUVar11.localScale = value_00;
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044A7")]
	[Address(RVA = "0x5B2F070", Offset = "0x5B2E070", VA = "0x5B2F070", Slot = "192")]
	protected override void SetSizeAnimations(float size)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$SetSizeAnimations): clean
		uint uVar1;
		uint uVar2;
		String[] pSVar3;
		AnimationHandler __this_00;
		ulong uVar4;
		ulong uVar5;
		float fVar6;
		float fVar7;

		if (Il2CppMethodInitialized_075477b6 == false) {
			Il2CppMethodInitialized_075477b6 = true;
			uVar1 = (typeof(BasicTitan)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(BasicTitan)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = BasicTitan.SizeScaledAnimations;
		}
		else {
			pSVar3 = *(String[]*)(typeof(BasicTitan)).static_fields;
		}
		if (pSVar3 == null) {
	label_05c2f191: ;
			throw new NullReferenceException();
		}
		if (0 < (int)pSVar3.Length) {
			fVar7 = (size + -0.7) * -0.15 + 1.4;
			fVar6 = 1.5;
			if (fVar7 <= 1.5) {
				fVar6 = fVar7;
			}
			uVar4 = pSVar3.Length & 0xffffffff;
			uVar5 = 0;
			do {
				if (uVar4 <= uVar5) {
					throw new IndexOutOfRangeException();
				}
				__this_00 = this.Animation;
				if (__this_00 == null) goto label_05c2f191;
				__this_00.SetSpeedMultiplier(pSVar3[uVar5], (float)(~-(uint)(0.9 <= fVar7) & 0x3f666666 | (uint)fVar6 & -(uint)(0.9 <= fVar7)));
				uVar5 = uVar5 + 1;
				uVar2 = (uint)pSVar3.Length;
				uVar4 = (ulong)uVar2;
			} while ((long)uVar5 < (long)(int)uVar2);
		}
		return;
	}

	[Token(Token = "0x60044A8")]
	[Address(RVA = "0x5B2F1E0", Offset = "0x5B2E1E0", VA = "0x5B2F1E0", Slot = "193")]
	protected override void SetSizeHead(float size)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$SetSizeHead): clean
		float fVar1;

		fVar1 = this.GetHeadSize(size);
		this.HeadSize = fVar1;
		if (this._headDetached == false) {
			this.UpdateHeadScale();
			this.ResetHairCloth();
			return;
		}
		return;
	}

	[Token(Token = "0x60044A9")]
	[Address(RVA = "0x5B2F3C0", Offset = "0x5B2E3C0", VA = "0x5B2F3C0")]
	private void UpdateHeadScale()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$UpdateHeadScale): 1 lines keep C-only constructs
		Vector3 pUVar1;
		float fVar2;
		float fVar3;
		uint uVar4;
		uint uVar5;
		BasicTitanComponentCache pCVar6;
		Transform pUVar7;
		Vector3 UVar8;

		fVar2 = this.HeadSize;
		fVar3 = this._headScale.x;
		if ((fVar3 != fVar2) || (NAN(fVar3) || NAN(fVar2))) {
			this._headScale.x = fVar2;
			this._headScale.y = fVar2;
			this._headScale.z = fVar2;
			pCVar6 = this.BasicCache;
			if ((pCVar6 != null) &&(pUVar7 = pCVar6.Head, pUVar7 != null)) {
				uVar4 = this._headScale.x;
				uVar5 = this._headScale.y;
				UVar8.y = (float)uVar5;
				UVar8.x = (float)uVar4;
				UVar8.z = fVar2;
				pUVar7.localScale = UVar8;
				this.ResetHairCloth();
				return;
			}
		}
		else {
			pCVar6 = this.BasicCache;
			if ((pCVar6 != null) &&(pUVar7 = pCVar6.Head, pUVar7 != null)) {
				UVar8 = pUVar7.localScale;
				pUVar1 = &this._headScale;
				if ((UVar8.x == pUVar1.x) && (!NAN(UVar8.x) && !NAN(pUVar1.x))) {
					return;
				}
				pCVar6 = this.BasicCache;
				if ((pCVar6 != null) &&(pUVar7 = pCVar6.Head, pUVar7 != null)) {
					pUVar7.localScale = (Vector3)this._headScale;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044AA")]
	[Address(RVA = "0x5B2F490", Offset = "0x5B2E490", VA = "0x5B2F490")]
	private void ResetHairCloth()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$ResetHairCloth): 1 lines keep C-only constructs
		BasicTitanComponentCache pCVar1;
		Transform pUVar2;
		AnimationHandler __this_00;
		bool bVar3;
		Object x;
		float fVar4;
		Vector3 UVar5;

		if (Il2CppMethodInitialized_075477b7 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInChildren_Cloth) ;
			Il2CppMethodInitialized_075477b7 = true;
		}
		pCVar1 = this.BasicCache;
		if ((pCVar1 != null) &&(pUVar2 = pCVar1.HairSocket, pUVar2 != null)) {
			UVar5 = pUVar2.lossyScale;
			fVar4 = UVar5.x;
			if (ABS(fVar4 - this._hairScale) <= fVar4 * 0.001) {
				return;
			}
			this._hairScale = fVar4;
			pCVar1 = this.BasicCache;
			if ((pCVar1 != null) &&(pUVar2 = pCVar1.HairSocket, pUVar2 != null)) {
				x = (Object)pUVar2.GetComponentInChildren<Cloth>();
				bVar3 = (x == null);
				if (bVar3) {
					return;
				}
				__this_00 = this.Animation;
				if (__this_00 != null) {
					__this_00.RestoreDefaultShadows(pUVar2);
					BasicTitanSetup.ResetCloth(pUVar2);
					this.RefreshRenderers();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044AB")]
	[Address(RVA = "0x5B2F1A0", Offset = "0x5B2E1A0", VA = "0x5B2F1A0")]
	private static float GetSizeSpeedMultiplier(float size)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$GetSizeSpeedMultiplier): clean
		float fVar1;
		float fVar2;

		fVar1 = (size + -0.7) * -0.15 + 1.4;
		fVar2 = 1.5;
		if (fVar1 <= 1.5) {
			fVar2 = fVar1;
		}
		return (float)(~-(uint)(0.9 <= fVar1) & 0x3f666666 | (uint)fVar2 & -(uint)(0.9 <= fVar1));
	}

	[Token(Token = "0x60044AC")]
	[Address(RVA = "0x5B2F210", Offset = "0x5B2E210", VA = "0x5B2F210")]
	private float GetHeadSize(float size)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$GetHeadSize): 2 lines keep C-only constructs
		float fVar1;
		int Seed;
		InGameSet pSVar2;
		InGameTitanSettings pSVar3;
		IntSetting pSVar4;
		FloatSetting pSVar5;
		FloatSetting pSVar6;
		BaseComponentCache pUVar7;
		PhotonView pPVar8;
		Random __this_00;
		MethodInfo* __this_01;
		float fVar9;
		double dVar10;
		float fVar11;
		float fVar12;

		__this_01 = (MethodInfo*)this;
		if (Il2CppMethodInitialized_075477b8 == false) {
			__this_01 = &MethodInfo_Settings_TypedSetting_int_get_Value;
			Il2CppMethodInitialized_075477b8 = true;
		}
		pSVar2 = SettingsManager.InGameCurrent;
		if (((pSVar2 != null) &&(pSVar3 = pSVar2.Titan, pSVar3 != null)) &&(pSVar4 = pSVar3.TitanHeadMode, pSVar4 != null)) {
			if (pSVar4._value != 1) {
				fVar9 = powf((CustomLogicMathBuiltin)__this_01, 2.0 / size, 0.35, method);
				fVar11 = 1.25;
				if (fVar9 <= 1.25) {
					fVar11 = fVar9;
				}
				return (float)(~-(uint)(0.75 <= fVar9) & 0x3f400000 | (uint)fVar11 & -(uint)(0.75 <= fVar9));
			}
			pSVar5 = pSVar3.TitanHeadRandomMin;
			if (((pSVar5 != null) &&(pSVar6 = pSVar3.TitanHeadRandomMax, pSVar6 != null)) &&((pUVar7 = this.Cache, pUVar7 != null &&(pPVar8 = pUVar7.PhotonView, pPVar8 != null)))) {
				fVar11 = pSVar5._value;
				fVar9 = pSVar6._value;
				fVar1 = fVar11;
				if (fVar11 <= fVar9) {
					fVar1 = fVar9;
				}
				Seed = pPVar8.viewIdField;
				__this_00 = new Random(Seed);
				if (__this_00 != null) {
					dVar10 = __this_00.NextDouble();
					fVar12 = (float)dVar10;
					fVar9 = 1.0;
					if (fVar12 <= 1.0) {
						fVar9 = fVar12;
					}
					return (fVar1 - fVar11) * (float)(-(uint)(0.0 <= fVar12) & (uint)fVar9) + fVar11;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044AD")]
	[Address(RVA = "0x5B2F5D0", Offset = "0x5B2E5D0", VA = "0x5B2F5D0")]
	[PunRPC]
	public void SetCrawlerRPC(bool crawler, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$SetCrawlerRPC): 6 lines keep C-only constructs
		byte bVar1;
		BaseComponentCache pUVar2;
		PhotonView pPVar3;
		AnimationHandler pCVar4;
		BasicTitanComponentCache pCVar5;
		byte[] auVar6 = new byte[12];
		CapsuleCollider __this_00;
		float fVar7;

		pUVar2 = this.Cache;
		if ((pUVar2 != null) &&(pPVar3 = pUVar2.PhotonView, pPVar3 != null)) {
			if (info.Sender != pPVar3._Owner_k__BackingField) {
				return;
			}
			this.IsCrawler = crawler;
			pCVar4 = this.Animation;
			if (pCVar4 != null) {
				pCVar4.LegacyCrossFadeTiming = !crawler;
				pCVar5 = this.BasicCache;
				if ((pCVar5 != null) &&(__this_00 = (CapsuleCollider)pCVar5.Movebox, __this_00 != null)) {
					bVar1 = (typeof(CapsuleCollider)._2).typeHierarchyDepth;
					if ((bVar1 <= (__this_00.klass._2).typeHierarchyDepth) &&((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CapsuleCollider))) {
						if (!crawler) {
							fVar7 = __this_00.radius;
							this._originalCapsuleValue = fVar7;
							return;
						}
						__this_00.direction = 2;
						fVar7 = __this_00.radius;
						__this_00.radius = fVar7 * 0.5;
						fVar7 = __this_00.radius;
						auVar6._4_8_ = 0;
						auVar6._0_4_ = fVar7;
						__this_00.center = (Vector3)(auVar6 << 0x20);
						fVar7 = __this_00.height;
						this._originalCapsuleValue = fVar7;
						pCVar5 = this.BasicCache;
						if ((pCVar5 == null) ||(__this_00 = (CapsuleCollider)pCVar5.NapeHurtbox, __this_00 == null)) goto label_05c2f776;
						bVar1 = (typeof(CapsuleCollider)._2).typeHierarchyDepth;
						if ((bVar1 <= (__this_00.klass._2).typeHierarchyDepth) &&((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CapsuleCollider))) {
							fVar7 = __this_00.radius;
							__this_00.radius = fVar7;
							return;
						}
					}
					throw new InvalidCastException();
				}
			}
		}
	label_05c2f776: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044AE")]
	[Address(RVA = "0x5B2F790", Offset = "0x5B2E790", VA = "0x5B2F790")]
	[PunRPC]
	public void SetWardedRPC(bool warded, WardedWeakSpot wardedWeakSpot, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$SetWardedRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		BasicTitanComponentCache pCVar3;
		GameObject __this_00;
		ParticleSystem pUVar4;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)) {
			if (info.Sender != pPVar2._Owner_k__BackingField) {
	switchD_05c2f8c5_default: ;
				return;
			}
			this.isWarded = warded;
			this.CurrentWardedWeakSpot = wardedWeakSpot;
			this.LastWardedWeakSpot = wardedWeakSpot;
			pCVar3 = this.BasicCache;
			if ((pCVar3 != null) &&(pUVar4 = pCVar3.WardedWeakSpotForearmL, pUVar4 != null)) {
				pUVar4.Stop(true);
				pCVar3 = this.BasicCache;
				if ((pCVar3 != null) &&(pUVar4 = pCVar3.WardedWeakSpotForearmR, pUVar4 != null)) {
					pUVar4.Stop(true);
					pCVar3 = this.BasicCache;
					if ((pCVar3 != null) &&(pUVar4 = pCVar3.WardedWeakSpotLegL, pUVar4 != null)) {
						pUVar4.Stop(true);
						pCVar3 = this.BasicCache;
						if ((pCVar3 != null) &&(pUVar4 = pCVar3.WardedWeakSpotLegR, pUVar4 != null)) {
							pUVar4.Stop(true);
							__this_00 = this.hardenedNape;
							if (__this_00 != null) {
								__this_00.SetActive(warded);
								switch(wardedWeakSpot) {
								case 1:
									pCVar3 = this.BasicCache;
									if (pCVar3 == null) goto label_05c2f92e;
									pUVar4 = pCVar3.WardedWeakSpotForearmL;
									break;
								case 2:
									pCVar3 = this.BasicCache;
									if (pCVar3 == null) goto label_05c2f92e;
									pUVar4 = pCVar3.WardedWeakSpotForearmR;
									break;
								case 3:
									pCVar3 = this.BasicCache;
									if (pCVar3 == null) goto label_05c2f92e;
									pUVar4 = pCVar3.WardedWeakSpotLegL;
									break;
								case 4:
									pCVar3 = this.BasicCache;
									if (pCVar3 == null) goto label_05c2f92e;
									pUVar4 = pCVar3.WardedWeakSpotLegR;
									break;
								default: ;
									goto switchD_05c2f8c5_default;
								}
								if (pUVar4 != null) {
									pUVar4.Play(true);
									return;
								}
							}
						}
					}
				}
			}
		}
	label_05c2f92e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044AF")]
	[Address(RVA = "0x5B2F940", Offset = "0x5B2E940", VA = "0x5B2F940")]
	[PunRPC]
	private void DisableWardedEffectsRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$DisableWardedEffectsRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		BasicTitanComponentCache pCVar3;
		ParticleSystem pUVar4;
		GameObject __this_00;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)) {
			if (info.Sender != pPVar2._Owner_k__BackingField) {
				return;
			}
			this.CurrentWardedWeakSpot = 0;
			pCVar3 = this.BasicCache;
			if ((pCVar3 != null) &&(pUVar4 = pCVar3.WardedWeakSpotForearmL, pUVar4 != null)) {
				pUVar4.Stop(true);
				pCVar3 = this.BasicCache;
				if ((pCVar3 != null) &&(pUVar4 = pCVar3.WardedWeakSpotForearmR, pUVar4 != null)) {
					pUVar4.Stop(true);
					pCVar3 = this.BasicCache;
					if ((pCVar3 != null) &&(pUVar4 = pCVar3.WardedWeakSpotLegL, pUVar4 != null)) {
						pUVar4.Stop(true);
						pCVar3 = this.BasicCache;
						if ((pCVar3 != null) &&(pUVar4 = pCVar3.WardedWeakSpotLegR, pUVar4 != null)) {
							pUVar4.Stop(true);
							__this_00 = this.hardenedNape;
							if (__this_00 != null) {
								__this_00.SetActive(false);
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044B0")]
	[Address(RVA = "0x5B2FA30", Offset = "0x5B2EA30", VA = "0x5B2FA30")]
	[PunRPC]
	public void ClearRockRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$ClearRockRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		BasicTitanComponentCache pCVar3;
		BaseHitbox __this_00;
		uint uVar4;
		Object[] pSVar5;
		Object obj;
		uint uVar6;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)) {
			if (info.Sender != pPVar2._Owner_k__BackingField) {
				return;
			}
			pCVar3 = this.BasicCache;
			if (((pCVar3 != null) &&(__this_00 = pCVar3.HandRHitbox, __this_00 != null)) &&(pSVar5 = __this_00.GetComponentsInChildren<Rock1Spawnable>(), pSVar5 != null)) {
				uVar4 = (uint)pSVar5.Length;
				if ((int)uVar4 < 1) {
					return;
				}
				uVar6 = 0;
				while(true) {
					if (uVar4 <= uVar6) {
						throw new IndexOutOfRangeException();
					}
					if ((Component)pSVar5[(int)uVar6] == null) break;
					obj = (Object)(pSVar5[(int)uVar6]).gameObject;
					Object.Destroy(obj);
					uVar6 = uVar6 + 1;
					uVar4 = (uint)pSVar5.Length;
					if ((int)uVar4 <= (int)uVar6) {
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044B1")]
	[Address(RVA = "0x5B2FB40", Offset = "0x5B2EB40", VA = "0x5B2FB40", Slot = "77")]
	public override Transform GetCameraAnchor()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$GetCameraAnchor): clean
		BaseComponentCache pUVar1;

		pUVar1 = this.Cache;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		return pUVar1.Transform;
	}

	[Token(Token = "0x60044B2")]
	[Address(RVA = "0x5B2FB60", Offset = "0x5B2EB60", VA = "0x5B2FB60", Slot = "104")]
	protected override void Start()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$Start): 22 lines keep C-only constructs
		float fVar1;
		InGameManager __this_00;
		TitanCustomSet pSVar2;
		BaseComponentCache pUVar3;
		PhotonView __this_01;
		Transform __this_02;
		bool bVar4;
		String pSVar5;
		Object[] parameters;
		object pIVar6;
		MethodInfo method_01;
		float fVar7;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Quaternion UVar8;
		Vector3 UVar9;
		Vector3 UStack_68;
		byte[] auStack_58 = new byte[16];
		byte[] auStack_48 = new byte[16];
		byte[] auStack_38 = new byte[16];

		__this_00 = this._inGameManager;
		if (__this_00 != null) {
			__this_00.RegisterCharacter((BaseCharacter)this);
			this.Start();
			bVar4 = this.IsMine();
			if (!bVar4) {
				return;
			}
			pSVar2 = this._customSet;
			if (pSVar2 != null) {
				pSVar5 = pSVar2.SerializeToJsonString();
				pUVar3 = this.Cache;
				if (pUVar3 != null) {
					__this_01 = pUVar3.PhotonView;
					parameters = (Object[])new object[1];
					if (parameters != null) {
						if ((pSVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((parameters.obj).klass)._1).element_class), pIVar6 == null)) {
							pIVar6 = new ArrayTypeMismatchException();
							throw pIVar6;
						}
						if ((int)parameters.Length == 0) {
							throw new IndexOutOfRangeException();
						}
						parameters[0] = (object)pSVar5;
						if (__this_01 != null) {
							method_01 = (MethodInfo *)"SetupRPC";
							__this_01.RPC("SetupRPC", 3, parameters);
							this.LoadSkin();
							pUVar3 = this.Cache;
							if ((pUVar3 != null) &&(__this_02 = pUVar3.Transform, __this_02 != null)) {
								pSVar5 = EffectPrefabs.TitanSpawn;
								UVar9 = __this_02.position;
								auStack_38._8_4_ = extraout_XMM0_Dc;
								auStack_38._0_8_ = UVar9._0_8_;
								auStack_38._12_4_ = extraout_XMM0_Dd;
								UStack_68.x = -1.5707964;
								UStack_68.y = 0.0;
								UStack_68.z = 0.0;
								UVar8 = Quaternion.Internal_FromEulerRad(ref UStack_68);
								auStack_48._8_4_ = extraout_XMM0_Dc_00;
								auStack_48._0_8_ = UVar8._0_8_;
								auStack_48._12_4_ = extraout_XMM0_Dd_00;
								auStack_58._8_4_ = in_XMM1_Dc;
								auStack_58._0_8_ = UVar8._8_8_;
								auStack_58._12_4_ = in_XMM1_Dd;
								fVar1 = this.Size;
								fVar7 = this.get_SizeMultiplier();
								UVar8.z = (float)auStack_58._0_4_;
								UVar8.w = (float)auStack_58._4_4_;
								UVar8.x = (float)auStack_48._0_4_;
								UVar8.y = (float)auStack_48._4_4_;
								UVar9.x = (float)auStack_38._0_4_;
								UVar9.y = (float)auStack_38._4_4_;
								EffectSpawner.Spawn(pSVar5, UVar9, UVar8, fVar7 * fVar1, true, null);
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044B3")]
	[Address(RVA = "0x5B2FFF0", Offset = "0x5B2EFF0", VA = "0x5B2FFF0")]
	[PunRPC]
	public void SetupRPC(string json, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$SetupRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		BasicTitanSetup __this_00;
		BasicTitanComponentCache pCVar3;
		Transform __this_01;
		TitanCustomSet __this_02;
		GameObject __this_03;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)) {
			if (info.Sender != pPVar2._Owner_k__BackingField) {
				return;
			}
			__this_02 = new TitanCustomSet();
			if (__this_02 != null) {
				__this_02.DeserializeFromJsonString(json);
				__this_00 = this.Setup;
				if (__this_00 != null) {
					__this_00.Load(__this_02);
					if (this._hairCut == false) {
						return;
					}
					pCVar3 = this.BasicCache;
					if (((pCVar3 != null) &&(__this_01 = pCVar3.HairSocket, __this_01 != null)) &&(__this_03 = __this_01.gameObject, __this_03 != null)) {
						__this_03.SetActive(false);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044B4")]
	[Address(RVA = "0x5B300E0", Offset = "0x5B2F0E0", VA = "0x5B300E0")]
	public bool IsHaircutHit(Collider collider, Vector3 bladePosition)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$IsHaircutHit): clean
		BasicTitanComponentCache pCVar1;
		Object y;
		Transform __this_00;
		CapsuleCollider __this_01;
		bool bVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		Vector3 UVar7;
		Vector3 UVar8;
		float local_68;
		float fStack_64;
		float local_58;

		if (((this.Dead != false) || (this._headDetached != false)) ||(this._hairCut != false)) {
			return false;
		}
		pCVar1 = this.BasicCache;
		if (pCVar1 != null) {
			y = (Object)pCVar1.HeadCollider;
			bVar2 = ((Object)collider != y);
			if (bVar2) {
				return false;
			}
			pCVar1 = this.BasicCache;
			if ((pCVar1 != null) &&(collider != null)) {
				__this_00 = pCVar1.Head;
				UVar7 = collider.ClosestPoint(bladePosition);
				if (__this_00 != null) {
					UVar7 = __this_00.InverseTransformPoint(UVar7);
					pCVar1 = this.BasicCache;
					if ((pCVar1 != null) &&(__this_01 = pCVar1.HeadCollider, __this_01 != null)) {
						UVar8 = __this_01.center;
						fStack_64 = UVar7.y;
						fStack_64 = fStack_64 - UVar8.y;
						fVar3 = __this_01.height;
						fVar4 = __this_01.radius;
						fVar6 = fVar3 * 0.5;
						if (fVar3 * 0.5 <= fVar4) {
							fVar6 = fVar4;
						}
						if (fStack_64 < fVar6 * 0.5) {
							return false;
						}
						local_68 = UVar7.x;
						local_58 = UVar8.x;
						fVar5 = UVar7.z - UVar8.z;
						fVar3 = __this_01.radius;
						fVar4 = __this_01.radius;
						return fVar5 * fVar5 + (local_68 - local_58) * (local_68 - local_58) + fStack_64 * fStack_64 <= fVar4 * fVar3 + fVar6 * fVar6;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044B5")]
	[Address(RVA = "0x5B302D0", Offset = "0x5B2F2D0", VA = "0x5B302D0")]
	private bool IsTopOfHead(Vector3 localHitPoint)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$IsTopOfHead): clean
		BasicTitanComponentCache pCVar1;
		CapsuleCollider __this_00;
		bool bVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		Vector3 UVar7;
		float fStack_78;
		float fStack_74;
		float fStack_48;

		pCVar1 = this.BasicCache;
		if (pCVar1 != null) {
			__this_00 = pCVar1.HeadCollider;
			if (__this_00 != null) {
				UVar7 = __this_00.center;
				fStack_74 = localHitPoint.y;
				fStack_74 = fStack_74 - UVar7.y;
				fVar3 = __this_00.height;
				fVar4 = __this_00.radius;
				fVar6 = fVar3 * 0.5;
				if (fVar3 * 0.5 <= fVar4) {
					fVar6 = fVar4;
				}
				if (fVar6 * 0.5 <= fStack_74) {
					fStack_78 = localHitPoint.x;
					fStack_48 = UVar7.x;
					fVar5 = localHitPoint.z - UVar7.z;
					fVar3 = __this_00.radius;
					fVar4 = __this_00.radius;
					bVar2 = fVar5 * fVar5 + (fStack_78 - fStack_48) * (fStack_78 - fStack_48) + fStack_74 * fStack_74 <= fVar4 * fVar3 + fVar6 * fVar6;
				}
				return bVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044B6")]
	[Address(RVA = "0x5B303E0", Offset = "0x5B2F3E0", VA = "0x5B303E0")]
	[PunRPC]
	public void ApplyHaircutRPC(int attackerViewId, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$ApplyHaircutRPC): 4 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		BaseComponentCache pUVar3;
		PhotonView pPVar4;
		BasicTitanComponentCache pCVar5;
		Collider __this_00;
		Transform pUVar6;
		bool bVar7;
		BaseCharacter pCVar8;
		GameObject __this_01;
		BaseCharacter x;
		float fVar9;
		ulong uStack_40;
		float fStack_38;
		Bounds UStack_30;

		uStack_40 = 0;
		if (this._hairCut != false) {
			return;
		}
		pCVar8 = Util.FindCharacterByViewId(attackerViewId);
		if (pCVar8 == null) {
	label_05c30496: ;
			x = null;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar1 = (typeof(Human)._2).typeHierarchyDepth;
			if ((pCVar8.klass._2).typeHierarchyDepth < bVar1) goto label_05c30496;
			x = null;
			if ((pCVar8.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Human)) {
				x = pCVar8;
			}
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar7 = ((Object)x == null);
		if (!bVar7) {
			if (((x == null) ||(pUVar3 = x.Cache, pUVar3 == null)) ||(pPVar4 = pUVar3.PhotonView, pPVar4 == null)) {
	label_05c30627: ;
				throw new NullReferenceException();
			}
			if (pPVar4._Owner_k__BackingField == info.Sender) {
				this._hairCut = true;
				if (((this.EffectsEnabled != false) &&(this._GoreEnabled_k__BackingField != false)) &&(this._headDetached == false)) {
					pCVar5 = this.BasicCache;
					if ((pCVar5 == null) ||(__this_00 = (Collider)pCVar5.HeadCollider, __this_00 == null)) goto label_05c30627;
					pUVar6 = pCVar5.HairSocket;
					UStack_30 = __this_00.bounds;
					uStack_40 = CONCAT44(UStack_30.m_Extents.y + UStack_30.m_Extents.y, UStack_30.m_Extents.x + UStack_30.m_Extents.x);
					fStack_38 = UStack_30.m_Extents.z + UStack_30.m_Extents.z;
					fVar9 = (float)il2cpp_runtime_helper_0599adc0(&uStack_40);
					HaircutEffect.Play(pUVar6, fVar9 * 0.25);
				}
				pCVar5 = this.BasicCache;
				if (((pCVar5 == null) ||(pUVar6 = pCVar5.HairSocket, pUVar6 == null)) ||(__this_01 = pUVar6.gameObject, __this_01 == null)) goto label_05c30627;
				__this_01.SetActive(false);
			}
		}
		return;
	}

	[Token(Token = "0x60044B7")]
	[Address(RVA = "0x5B2FDD0", Offset = "0x5B2EDD0", VA = "0x5B2FDD0")]
	protected void LoadSkin()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$LoadSkin): 2 lines keep C-only constructs
		byte bVar1;
		int slotIndex;
		CustomSkinSettings pSVar2;
		BaseCustomSkinSettings<TitanCustomSkinSet> __this_00;
		BoolSetting pSVar3;
		TitanCustomSet pSVar4;
		BaseComponentCache pUVar5;
		PhotonView __this_01;
		bool bVar6;
		int body;
		int head;
		TitanCustomSkinSet skinSet;
		String obj;
		Object[] parameters;
		object pIVar7;

		bVar6 = this.IsMine();
		if (!bVar6) {
			return;
		}
		pSVar2 = SettingsManager.CustomSkinSettings;
		if (((pSVar2 != null) &&(__this_00 = pSVar2.Titan, __this_00 != null)) &&(pSVar3 = __this_00.SkinsEnabled, pSVar3 != null)) {
			if (pSVar3._value == false) {
				return;
			}
			skinSet = (TitanCustomSkinSet)__this_00.GetSelectedSet();
			pSVar4 = this._customSet;
			if (pSVar4 != null) {
				slotIndex = this._skinSlot;
				body = pSVar4.GetBody();
				pSVar4 = this._customSet;
				if (pSVar4 != null) {
					head = pSVar4.GetHead();
					if (skinSet != null) {
						bVar1 = (typeof(TitanCustomSkinSet)._2).typeHierarchyDepth;
						if (((skinSet.klass._2).typeHierarchyDepth < bVar1) ||((skinSet.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(TitanCustomSkinSet))) {
							throw new InvalidCastException();
						}
					}
					obj = TitanSkinPicker.GetSkinUrls(skinSet, slotIndex, body, head, this.AI);
					pUVar5 = this.Cache;
					if (pUVar5 != null) {
						__this_01 = pUVar5.PhotonView;
						parameters = (Object[])new object[1];
						if (parameters != null) {
							if ((obj != null) &&(pIVar7 = il2cpp_vm_Object_IsInst((object)obj, (((parameters.obj).klass)._1).element_class), pIVar7 == null)) {
								pIVar7 = new ArrayTypeMismatchException();
								throw pIVar7;
							}
							if ((int)parameters.Length == 0) {
								throw new IndexOutOfRangeException();
							}
							parameters[0] = (object)obj;
							if (__this_01 != null) {
								__this_01.RPC("LoadSkinRPC", 3, parameters);
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044B8")]
	[Address(RVA = "0x5B30630", Offset = "0x5B2F630", VA = "0x5B30630")]
	[PunRPC]
	public void LoadSkinRPC(string url, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$LoadSkinRPC): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		TitanCustomSkinLoader pCVar3;
		CustomSkinSettings pSVar4;
		BaseCustomSkinSettings<TitanCustomSkinSet> pSVar5;
		BoolSetting pSVar6;
		bool bVar7;
		Object[] pSVar8;
		object pIVar9;
		IEnumerator routine;

		pUVar1 = this.Cache;
		if ((pUVar1 == null) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) goto label_05c30807;
		if (info.Sender == pPVar2._Owner_k__BackingField) {
			pCVar3 = this._customSkinLoader;
			bVar7 = ((Object)pCVar3 == null);
			if ((!bVar7) && (bVar7 = String.IsNullOrEmpty(url), !bVar7)) {
				pSVar4 = SettingsManager.CustomSkinSettings;
				if ((pSVar4 != null) &&((pSVar5 = pSVar4.Titan, pSVar5 != null &&(pSVar6 = pSVar5.SkinsEnabled, pSVar6 != null)))) {
					if (pSVar6._value == false) {
						return;
					}
					pSVar6 = pSVar5.SkinsLocal;
					if (pSVar6 != null) {
						if (pSVar6._value != false) {
							pUVar1 = this.Cache;
							if ((pUVar1 == null) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) goto label_05c30807;
							if (pPVar2._IsMine_k__BackingField == false) {
								return;
							}
						}
						pCVar3 = this._customSkinLoader;
						pSVar8 = (Object[])new object[1];
						if (pSVar8 != null) {
							if ((url != null) &&(pIVar9 = il2cpp_vm_Object_IsInst((object)url, (((pSVar8.obj).klass)._1).element_class), pIVar9 == null)) {
								pIVar9 = new ArrayTypeMismatchException();
								throw pIVar9;
							}
							if ((int)pSVar8.Length == 0) {
								throw new IndexOutOfRangeException();
							}
							pSVar8[0] = (object)url;
							if (pCVar3 != null) {
								routine = pCVar3.LoadSkinsFromRPC(pSVar8);
								this.StartCoroutine(routine);
								return;
							}
						}
					}
				}
	label_05c30807: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x60044B9")]
	[Address(RVA = "0x5B30820", Offset = "0x5B2F820", VA = "0x5B30820", Slot = "78")]
	protected override void CreateCache(BaseComponentCache cache)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$CreateCache): clean
		GameObject owner;
		BasicTitanComponentCache __this_00;

		owner = this.gameObject;
		__this_00 = new BasicTitanComponentCache(owner);
		this.BasicCache = __this_00;
		this.CreateCache((BaseComponentCache)this.BasicCache);
		return;
	}

	[Token(Token = "0x60044BA")]
	[Address(RVA = "0x5B308A0", Offset = "0x5B2F8A0", VA = "0x5B308A0", Slot = "190")]
	protected override void ScaleSounds(float size)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$ScaleSounds): clean
		BaseComponentCache pUVar1;
		Dictionary<object, object> __this_00;
		AudioSource __this_01;
		float fVar2;

		this.ScaleSounds(size);
		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			__this_00 = (Dictionary<object, object>)pUVar1.AudioSources;
			if (__this_00 != null) {
				__this_01 = __this_00.get_Item((object)TitanSounds.Steam);
				if (__this_01 != null) {
					fVar2 = __this_01.volume;
					this._steamSoundVolume = fVar2;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044BB")]
	[Address(RVA = "0x5B30960", Offset = "0x5B2F960", VA = "0x5B30960", Slot = "176")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$CreateAnimations): clean
		BasicTitanAnimations __this_00;

		__this_00 = new BasicTitanAnimations();
		this.BasicAnimations = __this_00;
		this.CreateAnimations((BaseTitanAnimations)this.BasicAnimations);
		return;
	}

	[Token(Token = "0x60044BC")]
	[Address(RVA = "0x5B309D0", Offset = "0x5B2F9D0", VA = "0x5B309D0", Slot = "80")]
	public override void Emote(string emote)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$Emote): clean
		BasicTitanAnimations pCVar1;
		AnimationHandler pCVar2;
		bool bVar3;
		String sound;
		IEnumerator routine;
		String a;
		float fVar4;

		bVar3 = this.CanEmote();
		if (!bVar3) {
			return;
		}
		a = (String)**(ulong*)(g_data_07556758 + 0xb8);
		bVar3 = (emote == "Laugh");
		if (bVar3) {
			pCVar1 = this.BasicAnimations;
			if (pCVar1 == null) goto label_05c30ce5;
			a = pCVar1.EmoteLaugh;
			sound = TitanSounds.GetRandomLaugh();
			fVar4 = 0.5;
	label_05c30ac6: ;
			routine = this.WaitAndPlaySound(sound, fVar4);
			this.StartCoroutine(routine);
		}
		else {
			bVar3 = (emote == "Nod");
			if (bVar3) {
				pCVar1 = this.BasicAnimations;
				if (pCVar1 == null) goto label_05c30ce5;
				a = pCVar1.EmoteNod;
			}
			else {
				bVar3 = (emote == "Shake");
				if (!bVar3) {
					bVar3 = (emote == "Roar1");
					if (bVar3) {
						pCVar1 = this.BasicAnimations;
						if (pCVar1 == null) goto label_05c30ce5;
						a = pCVar1.EmoteRoar;
						sound = TitanSounds.Roar1;
					}
					else {
						bVar3 = (emote == "Roar2");
						if (!bVar3) goto label_05c30c09;
						pCVar1 = this.BasicAnimations;
						if (pCVar1 == null) goto label_05c30ce5;
						a = pCVar1.EmoteRoar;
						sound = TitanSounds.Roar2;
					}
					fVar4 = 1.4;
					goto label_05c30ac6;
				}
				pCVar1 = this.BasicAnimations;
				if (pCVar1 == null) goto label_05c30ce5;
				a = pCVar1.EmoteShake;
			}
		}
	label_05c30c09: ;
		bVar3 = (a != (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (!bVar3) {
			return;
		}
		pCVar2 = this.Animation;
		if (pCVar2 != null) {
			fVar4 = pCVar2.GetLength(a);
			this._needFreshCore = true;
			pCVar2 = this.Animation;
			if (pCVar2 != null) {
				pCVar2.SetCullingType(false);
				this.Ungrab();
				this.DeactivateAllHitboxes();
				this.CrossFade(a, 0.1, 0.0);
				this.State = 8;
				this._currentStateAnimation = a;
				this._stateTimeLeft = fVar4;
				return;
			}
		}
	label_05c30ce5: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044BD")]
	[Address(RVA = "0x5B30CF0", Offset = "0x5B2FCF0", VA = "0x5B30CF0")]
	public void CoverNape()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$CoverNape): clean
		BasicTitanAnimations pCVar1;
		AnimationHandler pCVar2;
		String name;
		bool bVar3;
		float fVar4;

		bVar3 = this.CanAction();
		if (!bVar3) {
			return;
		}
		pCVar1 = this.BasicAnimations;
		if ((pCVar1 != null) &&(pCVar2 = this.Animation, pCVar2 != null)) {
			name = pCVar1.CoverNape;
			fVar4 = pCVar2.GetTotalTime(name);
			this._needFreshCore = true;
			pCVar2 = this.Animation;
			if (pCVar2 != null) {
				pCVar2.SetCullingType(false);
				this.Ungrab();
				this.DeactivateAllHitboxes();
				this.CrossFade(name, 0.1, 0.0) ;
				this.State = 0x1a;
				this._currentStateAnimation = name;
				this._stateTimeLeft = fVar4;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044BE")]
	[Address(RVA = "0x5B30DE0", Offset = "0x5B2FDE0", VA = "0x5B30DE0")]
	public void UncoverNape()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$UncoverNape): clean
		if (this.State == 0x1a) {
			this.Idle(0.3);
			return;
		}
		return;
	}

	[Token(Token = "0x60044BF")]
	[Address(RVA = "0x5B30E10", Offset = "0x5B2FE10", VA = "0x5B30E10", Slot = "178")]
	public override void DisableArm(bool left)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$DisableArm): clean


		this.DisableLimb(left, false);
		return;
	}

	[Token(Token = "0x60044C0")]
	[Address(RVA = "0x5B31070", Offset = "0x5B30070", VA = "0x5B31070")]
	public void DisableHand(bool left)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$DisableHand): clean


		this.DisableLimb(left, true);
		return;
	}

	[Token(Token = "0x60044C1")]
	[Address(RVA = "0x5B30E20", Offset = "0x5B2FE20", VA = "0x5B30E20")]
	private void DisableLimb(bool left, bool hand)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$DisableLimb): 10 lines keep C-only constructs
		uint uVar1;
		BaseComponentCache pUVar2;
		PhotonView __this_00;
		String methodName;
		Human x;
		BasicTitanAnimations pCVar3;
		bool bVar4;
		ulong in_RAX;
		Object[] parameters;
		object pIVar5;
		object pIVar6;
		String* ppSVar7;
		ulong uStack_38;

		uStack_38 = in_RAX;
		if (((this.AI == false) || (*(sbyte)((long)this + (0x1ae - (ulong)left)) != false)) ||((hand && (*(sbyte)((long)this + (0x1b0 - (ulong)left)) != false)))) {
			return;
		}
		pUVar2 = this.Cache;
		if (pUVar2 != null) {
			if (hand) {
				ppSVar7 = &"DisableHandRPC";
			}
			else {
				ppSVar7 = &"DisableArmRPC";
			}
			__this_00 = pUVar2.PhotonView;
			methodName = *ppSVar7;
			parameters = (Object[])new object[1];
			uStack_38 = CONCAT17(left, (undefined7)uStack_38);
			pIVar5 = (object)(((long)&uStack_38 + 7));
			if (parameters != null) {
				if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((parameters.obj).klass)._1).element_class), pIVar6 == null)) {
					pIVar5 = new ArrayTypeMismatchException();
					throw pIVar5;
				}
				if ((int)parameters.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				parameters[0] = pIVar5;
				if (__this_00 != null) {
					__this_00.RPC(methodName, 0, parameters);
					x = this.HoldHuman;
					bVar4 = ((Object)x != null);
					if ((bVar4) && (this.HoldHumanLeft == left)) {
						this.Ungrab();
					}
					uVar1 = this.State;
					if (((0x16 < uVar1) || ((0x7e00f0U >> (uVar1 & 0x1f) & 1) == 0)) &&(bVar4 = this.IsBellyFlopping, !bVar4)) {
						pCVar3 = this.BasicAnimations;
						if (left) {
							if (pCVar3 == null) goto label_05c31048;
							ppSVar7 = &pCVar3.ArmHurtL;
						}
						else {
							if (pCVar3 == null) goto label_05c31048;
							ppSVar7 = &pCVar3.ArmHurtR;
						}
						this.StateAction(0xb, *ppSVar7, 0.1, true);
					}
					this.DamagedGrunt(1.0);
					return;
				}
			}
		}
	label_05c31048: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044C3")]
	[Address(RVA = "0x5B310E0", Offset = "0x5B300E0", VA = "0x5B310E0", Slot = "151")]
	public override bool CanAttack()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$CanAttack): clean
		bool bVar1;

		return bVar1;
	}

	[Token(Token = "0x60044C4")]
	[Address(RVA = "0x5B31100", Offset = "0x5B30100", VA = "0x5B31100", Slot = "204")]
	[PunRPC]
	public virtual void DisableArmRPC(bool left, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$DisableArmRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;

		pUVar1 = this.Cache;
		if ((pUVar1 == null) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) {
			throw new NullReferenceException();
		}
		if (info.Sender == pPVar2._Owner_k__BackingField) {
			this.ApplyDisabledLimb(left, false);
			return;
		}
		return;
	}

	[Token(Token = "0x60044C5")]
	[Address(RVA = "0x5B316C0", Offset = "0x5B306C0", VA = "0x5B316C0")]
	[PunRPC]
	public void DisableHandRPC(bool left, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$DisableHandRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;

		pUVar1 = this.Cache;
		if ((pUVar1 == null) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) {
			throw new NullReferenceException();
		}
		if (info.Sender == pPVar2._Owner_k__BackingField) {
			this.ApplyDisabledLimb(left, true);
			return;
		}
		return;
	}

	[Token(Token = "0x60044C6")]
	[Address(RVA = "0x5B31140", Offset = "0x5B30140", VA = "0x5B31140")]
	private void ApplyDisabledLimb(bool left, bool hand)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$ApplyDisabledLimb): 27 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		bool handDisabled;
		TitanLimbMesh __this_00;
		UnityEngine_Vector3_StaticFields pUVar5;
		ulong uVar6;
		uint uVar7;
		BasicTitanComponentCache pCVar8;
		Object[] pSVar9;
		Transform pUVar10;
		Transform* ppUVar11;
		Transform __this_01;
		uint uVar12;
		undefined7 in_register_00000031;
		MethodInfo method_00;
		ulong unaff_R14;
		ulong uVar13;
		ParticleSystem __this_02;
		float fVar14;
		float fVar15;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float fVar16;
		Quaternion value;
		Vector3 UVar17;
		Vector3 value_00;
		ParticleSystem pUStack_70;
		ParticleSystem.MainModule UStack_60;
		byte[] auStack_58 = new byte[16];
		ulong uStack_48;
		Vector3 UStack_40;

		method_00 = (MethodInfo)CONCAT71(in_register_00000031, left);
		UStack_60.m_ParticleSystem =(ParticleSystem.MainModule)null;
		uVar6 = (ulong)left;
		if (*(sbyte)((long)this + (0x1ae - uVar6)) != false) {
			return;
		}
		if ((hand) && (*(sbyte)((long)this + (0x1b0 - uVar6)) != false)) {
			return;
		}
		uVar13 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
		if ((this.EffectsEnabled == false) || (this._GoreEnabled_k__BackingField == false)) {
	label_05c311d7: ;
			pCVar8 = this.BasicCache;
			uStack_48 = uVar13;
			if (left) goto label_05c311ed;
	label_05c312eb: ;
			if (pCVar8 == null) goto label_05c316ad;
			__this_02 = pCVar8.ForearmBloodR;
			pUStack_70 = pCVar8.ForearmSmokeR;
			if (hand) {
				ppUVar11 = &pCVar8.HandR;
			}
			else {
				ppUVar11 = &pCVar8.ForearmR;
			}
		}
		else {
			if (this.Dead != false) {
				uVar13 = 0;
				goto label_05c311d7;
			}
			this.EnsureLimbMesh();
			fVar14 = (&this._leftArmDisabledTimeLeft)[!left];
			__this_00 = this._limbMesh;
			handDisabled = *(bool)((long)this + (0x1b0 - uVar6));
			UVar17 = this.GetVelocity();
			if (__this_00 == null) goto label_05c316ad;
			fVar14 = 6.5 - fVar14;
			fVar15 = 0.0;
			if (0.0 <= fVar14) {
				fVar15 = 6.5;
				if (fVar14 <= 6.5) {
					fVar15 = fVar14;
				}
				fVar15 = fVar15 / 6.5;
			}
			__this_00.Detach(left, !hand, handDisabled, fVar15, UVar17);
			pCVar8 = this.BasicCache;
			uStack_48 = 0;
			if (!left) goto label_05c312eb;
	label_05c311ed: ;
			if (pCVar8 == null) goto label_05c316ad;
			__this_02 = pCVar8.ForearmBloodL;
			pUStack_70 = pCVar8.ForearmSmokeL;
			if (hand) {
				ppUVar11 = &pCVar8.HandL;
			}
			else {
				ppUVar11 = &pCVar8.ForearmL;
			}
		}
		if (__this_02 != null) {
			auStack_58._0_8_ = *ppUVar11;
			__this_02.Stop(true, 0);
			pSVar9 = __this_02.GetComponentsInChildren<ParticleSystem>(true);
			if (pSVar9 != null) {
				uVar7 = (uint)pSVar9.Length;
				if (0 < (int)uVar7) {
					uVar12 = 0;
					do {
						if (uVar7 <= uVar12) {
							throw new IndexOutOfRangeException();
						}
						if ((ParticleSystem)pSVar9[(int)uVar12] ==null) goto label_05c316ad;
						UStack_60 = (pSVar9[(int)uVar12]).main;
						UStack_60.duration = 4.0;
						uVar12 = uVar12 + 1;
						uVar7 = (uint)pSVar9.Length;
					} while ((int)uVar12 < (int)uVar7);
				}
				if (pUStack_70 != null) {
					pUStack_70.Stop(true, 0);
					pUVar10 = __this_02.transform ;
					if (pUVar10 != null) {
						pUVar10.SetParent((Transform)auStack_58._0_8_, false);
						pUVar10 = __this_02.transform;
						if (pUVar10 != null) {
							pUVar10.localPosition = (Vector3)(Vector3.zeroVector);
							pUVar10 = __this_02.transform;
							UStack_40.x = -1.5707964;
							UStack_40.y = 0.0;
							UStack_40.z = 0.0;
							value = Quaternion.Internal_FromEulerRad(ref UStack_40);
							if (pUVar10 != null) {
								pUVar10.localRotation = value;
								pUVar10 = __this_02.transform;
								if (pUVar10 != null) {
									pUVar5 = typeof(Vector3).static_fields;
									UVar17.z = (pUVar5.oneVector).z * 0.01;
									uVar1 = (pUVar5.oneVector).x;
									uVar3 = (pUVar5.oneVector).y;
									UVar17.x = (float)uVar1 * 0.01;
									UVar17.y = (float)uVar3 * 0.01;
									pUVar10.localScale = UVar17;
									pUVar10 = __this_02.transform;
									pCVar8 = this.BasicCache;
									if (hand) {
										if (left) {
											if (pCVar8 == null) goto label_05c316ad;
											ppUVar11 = &pCVar8.HandL;
										}
										else {
											if (pCVar8 == null) goto label_05c316ad;
											ppUVar11 = &pCVar8.HandR;
										}
										if (*ppUVar11 == null) goto label_05c316ad;
										UVar17 = (*ppUVar11).position;
										fVar16 = UVar17.z;
										fVar14 = UVar17.x;
										fVar15 = UVar17.y;
									}
									else {
										if (left) {
											if (pCVar8 == null) goto label_05c316ad;
											ppUVar11 = &pCVar8.ForearmL;
										}
										else {
											if (pCVar8 == null) goto label_05c316ad;
											ppUVar11 = &pCVar8.ForearmR;
										}
										if (*ppUVar11 == null) goto label_05c316ad;
										UVar17 = (*ppUVar11).position;
										fVar14 = UVar17.x;
										fVar15 = UVar17.y;
										if (Il2CppMethodInitialized_075450a5 == false) {
											auStack_58._8_4_ = extraout_XMM0_Dc;
											auStack_58._0_8_ = UVar17._0_8_;
											auStack_58._12_4_ = extraout_XMM0_Dd;
											Il2CppMethodInitialized_075450a5 = true;
											fVar14 = (float)auStack_58._0_4_;
											fVar15 = (float)auStack_58._4_4_;
										}
										pUVar5 = typeof(Vector3).static_fields;
										uVar2 = (pUVar5.downVector).x;
										uVar4 = (pUVar5.downVector).y;
										fVar16 = this.Size * 0.1;
										fVar14 = fVar14 + fVar16 * (float)uVar2;
										fVar15 = fVar15 + fVar16 * (float)uVar4;
										fVar16 = UVar17.z + (pUVar5.downVector).z * fVar16;
									}
									if (pUVar10 != null) {
										value_00.y = fVar15;
										value_00.x = fVar14;
										value_00.z = fVar16;
										pUVar10.position = value_00;
										pUVar10 = pUStack_70.transform;
										__this_01 = __this_02.transform;
										if ((__this_01 != null) &&(UVar17 = __this_01.position, pUVar10 != null)) {
											pUVar10.position = UVar17;
											if ((char)uStack_48 == false) {
												__this_02.Play(true);
											}
											fVar14 = this.ArmDisableTime;
											if (left) {
												this._leftArmDisabledTimeLeft = fVar14;
											}
											else {
												this._rightArmDisabledTimeLeft = fVar14;
											}
											this.SetLimbDisabled(left, !hand, hand);
											return;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05c316ad: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044C7")]
	[Address(RVA = "0x5B319F0", Offset = "0x5B309F0", VA = "0x5B319F0")]
	private void SetLimbDisabled(bool left, bool arm, bool hand)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$SetLimbDisabled): 2 lines keep C-only constructs
		sbyte cVar1;
		TitanColliderToggler pCVar2;
		BasicTitanComponentCache pCVar3;
		Collider __this_00;
		Collider __this_01;
		bool bVar4;
		undefined7 in_register_00000031;

		if ((int)CONCAT71(in_register_00000031, left) == 0) {
			this.RightArmDisabled = arm;
			this.RightHandDisabled = hand;
			pCVar2 = this.TitanColliderToggler;
			if ((pCVar2 == null) ||(pCVar3 = this.BasicCache, pCVar3 == null)) goto label_05c31af5;
			cVar1 = pCVar2._enabled;
			__this_00 = pCVar3.HandRHurtbox;
			__this_01 = pCVar3.ForearmRHurtbox;
		}
		else {
			this.LeftArmDisabled = arm;
			this.LeftHandDisabled = hand;
			pCVar2 = this.TitanColliderToggler;
			if ((pCVar2 == null) ||(pCVar3 = this.BasicCache, pCVar3 == null)) goto label_05c31af5;
			cVar1 = pCVar2._enabled;
			__this_00 = pCVar3.HandLHurtbox;
			__this_01 = pCVar3.ForearmLHurtbox;
		}
		if (cVar1 == false) {
			if (__this_00 == null) goto label_05c31af5;
			bVar4 = false;
			__this_00.enabled = false;
		}
		else {
			bVar4 = this.IsToggleColliderActive(__this_00);
			if (__this_00 == null) goto label_05c31af5;
			__this_00.enabled = bVar4;
			bVar4 = this.IsToggleColliderActive(__this_01);
		}
		if (__this_01 != null) {
			__this_01.enabled = bVar4;
			return;
		}
	label_05c31af5: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044C8")]
	[Address(RVA = "0x5B31B00", Offset = "0x5B30B00", VA = "0x5B31B00", Slot = "179")]
	public override bool IsToggleColliderActive(Collider collider)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$IsToggleColliderActive): clean
		BasicTitanComponentCache pCVar1;
		Object pUVar2;
		bool bVar3;

		pCVar1 = this.BasicCache;
		if (pCVar1 == null) {
	label_05c31c70: ;
			throw new NullReferenceException();
		}
		pUVar2 = (Object)pCVar1.HandLHurtbox;
		bVar3 = ((Object)collider == pUVar2);
		if (bVar3) {
			if (this.LeftArmDisabled != false) {
				return false;
			}
			bVar3 = this.LeftHandDisabled == false;
		}
		else {
			pCVar1 = this.BasicCache;
			if (pCVar1 == null) goto label_05c31c70;
			pUVar2 = (Object)pCVar1.HandRHurtbox;
			bVar3 = ((Object)collider == pUVar2);
			if (bVar3) {
				if (this.RightArmDisabled != false) {
					return false;
				}
				bVar3 = this.RightHandDisabled == false;
			}
			else {
				pCVar1 = this.BasicCache;
				if (pCVar1 == null) goto label_05c31c70;
				pUVar2 = (Object)pCVar1.ForearmLHurtbox;
				bVar3 = ((Object)collider == pUVar2);
				if (bVar3) {
					bVar3 = this.LeftArmDisabled == false;
				}
				else {
					pCVar1 = this.BasicCache;
					if (pCVar1 == null) goto label_05c31c70;
					pUVar2 = (Object)pCVar1.ForearmRHurtbox;
					bVar3 = ((Object)collider == pUVar2);
					if (!bVar3) {
						return true;
					}
					bVar3 = this.RightArmDisabled == false;
				}
			}
		}
		return bVar3;
	}

	[Token(Token = "0x60044C9")]
	[Address(RVA = "0x5B31C80", Offset = "0x5B30C80", VA = "0x5B31C80")]
	public void Laugh(BaseCharacter character)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$Laugh): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		Player targetPlayer;
		Transform __this_01;
		Object[] parameters;
		object pIVar2;
		object pIVar3;
		Vector3 local_38;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(__this_00 = pUVar1.PhotonView, __this_00 != null)) {
			targetPlayer = __this_00._Owner_k__BackingField;
			parameters = (Object[])new object[1];
			if ((character != null) &&((pUVar1 = character.Cache, pUVar1 != null &&(__this_01 = pUVar1.Transform, __this_01 != null)))) {
				local_38 = __this_01.position;
				pIVar2 = (object)local_38;
				if (parameters != null) {
					if (pIVar2 != null) {
						pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((parameters.obj).klass)._1).element_class);
						if (pIVar3 == null) {
							pIVar2 = new ArrayTypeMismatchException();
							throw pIVar2;
						}
					}
					if ((int)parameters.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					parameters[0] = pIVar2;
					__this_00.RPC("LaughRPC", targetPlayer, parameters);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044CA")]
	[Address(RVA = "0x5B31DD0", Offset = "0x5B30DD0", VA = "0x5B31DD0")]
	public void Distract(BaseCharacter character)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$Distract): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		Player targetPlayer;
		PhotonView pPVar2;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		int local_2c;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(__this_00 = pUVar1.PhotonView, __this_00 != null)) {
			targetPlayer = __this_00._Owner_k__BackingField;
			parameters = (Object[])new object[1];
			if ((character != null) &&((pUVar1 = character.Cache, pUVar1 != null &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)))) {
				local_2c = pPVar2.viewIdField;
				pIVar3 = (object)local_2c;
				if (parameters != null) {
					if (pIVar3 != null) {
						pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class);
						if (pIVar4 == null) {
							pIVar3 = new ArrayTypeMismatchException();
							throw pIVar3;
						}
					}
					if ((int)parameters.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					parameters[0] = pIVar3;
					__this_00.RPC("DistractRPC", targetPlayer, parameters);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044CB")]
	[Address(RVA = "0x5B31F10", Offset = "0x5B30F10", VA = "0x5B31F10", Slot = "205")]
	[PunRPC]
	public virtual void LaughRPC(Vector3 source)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$LaughRPC): 42 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		BaseComponentCache pUVar3;
		PhotonView pPVar4;
		Transform pUVar5;
		double dVar6;
		UnityEngine_Vector3_StaticFields pUVar7;
		Il2CppClass klass;
		float fVar8;
		uint extraout_XMM0_Db;
		float in_XMM0_Dc;
		uint extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float in_XMM0_Dd;
		uint extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float in_XMM1_Db;
		float in_XMM1_Dc;
		float in_XMM1_Dd;
		byte[] auVar9 = new byte[16];
		float fVar10;
		uint uVar11;
		float fVar12;
		Vector3 UVar13;
		byte[] auStack_68 = new byte[8];
		float fStack_60;
		float fStack_5c;
		Vector3 UStack_40;
		float fStack_34;
		float fStack_30;
		float fStack_2c;
		byte[] auStack_28 = new byte[24];

		if (Il2CppMethodInitialized_075477ca == false) {
			in_XMM1_Db = 0.0;
			in_XMM1_Dc = 0.0;
			in_XMM1_Dd = 0.0;
			Il2CppMethodInitialized_075477ca = true;
		}
		if (this.AI == false) {
			return;
		}
		pUVar3 = this.Cache;
		if ((pUVar3 != null) &&(pPVar4 = pUVar3.PhotonView, pPVar4 != null)) {
			if (pPVar4._IsMine_k__BackingField == false) {
				return;
			}
			pUVar5 = pUVar3.Transform;
			if (pUVar5 != null) {
				UVar13 = pUVar5.forward;
				auStack_28._8_4_ = extraout_XMM0_Dc;
				auStack_28._0_8_ = UVar13._0_8_;
				auStack_28._12_4_ = extraout_XMM0_Dd;
				pUVar3 = this.Cache;
				if ((pUVar3 != null) &&(pUVar5 = pUVar3.Transform, UStack_40.z = UVar13.z, fStack_34 = in_XMM1_Db, fStack_30 = in_XMM1_Dc, fStack_2c = in_XMM1_Dd, pUVar5 != null)) {
					UVar13 = pUVar5.position;
					if (Il2CppMethodInitialized_0753e72d == false) {
						Il2CppMethodInitialized_0753e72d = true;
						UStack_40.x = 0.0;
						UStack_40.y = 0.0;
					}
					else {
						UStack_40.x = 0.0;
						UStack_40.y = 0.0;
					}
					UStack_40.x = 0.0;
					UStack_40.y = 0.0;
					if (Il2CppMethodInitialized_0753e729 == false) {
						UStack_40.x = 0.0;
						UStack_40.y = 0.0;
						Il2CppMethodInitialized_0753e729 = true;
					}
					auStack_68._0_4_ = source.x;
					auStack_68._4_4_ = source.y;
					auStack_68._0_4_ = (float)auStack_68._0_4_ - UVar13.x;
					auStack_68._4_4_ = (float)auStack_68._4_4_ - UVar13.y;
					fVar10 = source.z - UVar13.z;
					fStack_60 = in_XMM0_Dc - extraout_XMM0_Dc_00;
					fStack_5c = in_XMM0_Dd - extraout_XMM0_Dd_00;
					uVar11 = 0;
					fVar8 = fVar10 * fVar10 +(float)auStack_68._4_4_ * (float)auStack_68._4_4_ +(float)auStack_68._0_4_ * (float)auStack_68._0_4_;
					if (fVar8 < 0.0) {
						fVar8 = sqrtf(fVar8);
						uVar11 = extraout_XMM0_Db;
					}
					else {
						fVar8 = SQRT(fVar8);
					}
					if (fVar8 <= 1e-05) {
						pUVar7 = *(UnityEngine_Vector3_StaticFields*)((long)typeof(Vector3) + 0xb8);
						fVar10 = (pUVar7.zeroVector).z;
					}
					else {
						fVar10 = fVar10 / fVar8;
						auVar9._4_4_ = fVar8;
						auVar9._0_4_ = fVar8;
						auVar9._8_4_ = uVar11;
						auVar9._12_4_ = uVar11;
						auVar9 = divps(_auStack_68, auVar9);
						UStack_40.x = auVar9._0_4_;
						UStack_40.y = auVar9._4_4_;
						pUVar7 = (UnityEngine_Vector3_StaticFields)&UStack_40;
					}
					uVar1 = (pUVar7.zeroVector).x;
					uVar2 = (pUVar7.zeroVector).y;
					fVar8 = UStack_40.z * UStack_40.z +(float)auStack_28._4_4_ * (float)auStack_28._4_4_ +(float)auStack_28._0_4_ * (float)auStack_28._0_4_;
					fVar12 = fVar10 * fVar10 + (float)uVar2 * (float)uVar2 + (float)uVar1 * (float)uVar1;
					if (fVar8 * fVar12 < 0.0) {
						fVar8 = sqrtf(fVar8 * fVar12);
						klass = typeof(Math);
						fVar12 = UStack_40.z;
					}
					else {
						fVar8 = SQRT(fVar8 * fVar12);
						klass = typeof(Math);
						fVar12 = UStack_40.z;
					}
					typeof(Math) = (Math)klass;
					UStack_40.z = fVar12;
					if (1e-15 <= fVar8) {
						fVar8 = (fVar12 * fVar10 +(float)auStack_28._4_4_ * (float)uVar2 + (float)auStack_28._0_4_ * (float)uVar1) / fVar8;
						fVar10 = 1.0;
						if (fVar8 <= 1.0) {
							fVar10 = fVar8;
						}
						UStack_40.z = (float)(~-(uint)(-1.0 <= fVar8) & 0xbf800000 | (uint)fVar10 & -(uint)(-1.0 <= fVar8));
						fVar10 = UStack_40.z;
						if ((klass._2).cctor_finished_or_no_cctor == 0) {
							fStack_34 = 0.0;
							fStack_30 = 0.0;
							fStack_2c = 0.0;
							fVar10 = UStack_40.z;
							fVar12 = UStack_40.z;
						}
						UStack_40.z = fVar12;
						dVar6 = acos((double)fVar10, (MethodInfo)klass);
						if (80.0 <= (float)dVar6 * 57.29578) {
							return;
						}
					}
					this.Emote("Laugh");
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044CC")]
	[Address(RVA = "0x5B322E0", Offset = "0x5B312E0", VA = "0x5B322E0", Slot = "206")]
	[PunRPC]
	public virtual void DistractRPC(int viewId)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$DistractRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		BaseCharacter enemy;
		BaseTitanAIController __this_00;

		if (this.AI == false) {
			return;
		}
		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)) {
			if (pPVar2._IsMine_k__BackingField == false) {
				return;
			}
			enemy = Util.FindCharacterByViewId(viewId);
			__this_00 = this.GetComponent<BaseTitanAIController>();
			if (__this_00 != null) {
				__this_00.SetEnemy((ITargetable)enemy, 10.0);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044CD")]
	[Address(RVA = "0x5B323A0", Offset = "0x5B313A0", VA = "0x5B323A0", Slot = "177")]
	protected override void UpdateDisableArm()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$UpdateDisableArm): clean
		BasicTitanComponentCache pCVar1;
		ParticleSystem pUVar2;
		bool bVar3;
		uint uVar4;
		uint uVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float local_2c;
		float local_28;

		if (this.Dead != false) {
			return;
		}
		if ((this.LeftArmDisabled != false) || (this.LeftHandDisabled != false)) {
			fVar7 = this._leftArmDisabledTimeLeft;
			fVar6 = Time.deltaTime;
			fVar7 = fVar7 - fVar6;
			this.UpdateDisabledLimb(true, fVar7);
			this._leftArmDisabledTimeLeft = fVar7;
		}
		if ((this.RightArmDisabled != false) || (this.RightHandDisabled != false)) {
			fVar7 = this._rightArmDisabledTimeLeft;
			fVar6 = Time.deltaTime;
			fVar7 = fVar7 - fVar6;
			this.UpdateDisabledLimb(false, fVar7);
			this._rightArmDisabledTimeLeft = fVar7;
		}
		pCVar1 = this.BasicCache;
		if ((pCVar1 == null) ||(pUVar2 = pCVar1.ForearmSmokeL, pUVar2 == null)) {
	label_05c32571: ;
			throw new NullReferenceException();
		}
		bVar3 = pUVar2.isEmitting;
		local_2c = 0.3;
		local_28 = 1.0;
		if (!bVar3) {
			pCVar1 = this.BasicCache;
			if ((pCVar1 == null) ||(pUVar2 = pCVar1.ForearmSmokeR, pUVar2 == null)) goto label_05c32571;
			bVar3 = pUVar2.isEmitting;
			if (!bVar3) {
				if (this._limbSteamSoundFade <= 0.0) {
					return;
				}
				local_28 = 0.0;
				local_2c = 0.5;
			}
		}
		fVar7 = this._limbSteamSoundFade;
		fVar6 = Time.deltaTime;
		fVar6 = fVar6 / local_2c;
		fVar8 = local_28 - fVar7;
		uVar4 = -(uint)(0.0 <= fVar8);
		uVar5 = -(uint)(fVar6 < ABS(fVar8));
		fVar7 = (float)(~uVar5 & (uint)local_28 |(uint)((float)(~uVar4 & (uint)-fVar6 | uVar4 & (uint)fVar6) + fVar7) & uVar5);
		this._limbSteamSoundFade = fVar7;
		this.SetSteamVolume(fVar7);
		return;
	}

	[Token(Token = "0x60044CE")]
	[Address(RVA = "0x5B327C0", Offset = "0x5B317C0", VA = "0x5B327C0")]
	private void SetSteamVolume(float fade)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$SetSteamVolume): clean
		BaseComponentCache pUVar1;
		Dictionary<object, object> __this_00;
		AudioSource __this_01;
		float fVar2;

		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			fVar2 = this._steamSoundVolume;
			__this_00 = (Dictionary<object, object>)pUVar1.AudioSources;
			if (__this_00 != null) {
				__this_01 = __this_00.get_Item((object)TitanSounds.Steam);
				if (__this_01 != null) {
					fVar2 = fVar2 * fade;
					__this_01.volume = fVar2;
					this.ToggleSoundLocal(TitanSounds.Steam, 0.0 < fVar2);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044CF")]
	[Address(RVA = "0x5B32580", Offset = "0x5B31580", VA = "0x5B32580")]
	private float UpdateDisabledLimb(bool left, float timeLeft)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$UpdateDisabledLimb): 7 lines keep C-only constructs
		BasicTitanComponentCache pCVar1;
		BaseComponentCache pUVar2;
		PhotonView __this_00;
		bool bVar3;
		ParticleSystem* ppUVar4;
		Object[] parameters;
		object pIVar5;
		object pIVar6;
		bool bVar7;
		byte local_31;
		float local_30;
		int local_2c;

		local_30 = timeLeft;
		this.UpdateLimbParticles(left, local_30);
		if (0.0 < local_30) {
			return local_30;
		}
		bVar3 = this.IsMine();
		bVar7 = false;
		if ((bVar3) && (*(sbyte)((long)this + (0x1ae - (ulong)left)) != false)) {
			bVar7 = this.LastWardedWeakSpot == 2 - (uint)left;
		}
		this.SetLimbDisabled(left, false, false);
		pCVar1 = this.BasicCache;
		if (left) {
			if (pCVar1 == null) goto label_05c327a0;
			ppUVar4 = &pCVar1.ForearmSmokeL;
		}
		else {
			if (pCVar1 == null) goto label_05c327a0;
			ppUVar4 = &pCVar1.ForearmSmokeR;
		}
		if (*ppUVar4 != null) {
			(*ppUVar4).Stop();
			if (!bVar7) {
				return local_30;
			}
			pUVar2 = this.Cache;
			if (pUVar2 != null) {
				__this_00 = pUVar2.PhotonView;
				parameters = (Object[])new object[2];
				local_31 = this.isWarded;
				pIVar5 = (object)local_31;
				if (parameters != null) {
					if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((parameters.obj).klass)._1).element_class), pIVar6 == null)) {
	label_05c327aa: ;
						pIVar5 = new ArrayTypeMismatchException();
						throw pIVar5;
					}
					if ((int)parameters.Length != 0) {
						parameters[0] = pIVar5;
						local_2c = this.LastWardedWeakSpot;
						pIVar5 = (object)local_2c;
						if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((parameters.obj).klass)._1).element_class), pIVar6 == null)) goto label_05c327aa;
						if ((parameters.Length & 0xfffffffe) != 0) {
							parameters[1] = pIVar5;
							if (__this_00 != null) {
								__this_00.RPC("SetWardedRPC", 0, parameters);
								return local_30;
							}
							goto label_05c327a0;
						}
					}
					throw new IndexOutOfRangeException();
				}
			}
		}
	label_05c327a0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044D0")]
	[Address(RVA = "0x5B328D0", Offset = "0x5B318D0", VA = "0x5B328D0")]
	private void UpdateLimbParticles(bool left, float timeLeft)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$UpdateLimbParticles): 8 lines keep C-only constructs
		BasicTitanComponentCache pCVar1;
		ParticleSystem __this_00;
		ParticleSystem __this_01;
		bool bVar2;
		ParticleSystem* ppUVar3;
		ParticleSystem* ppUVar4;

		if (timeLeft <= this.ArmDisableTime + -4.0) {
			pCVar1 = this.BasicCache;
			if (left) {
				if (pCVar1 == null) goto label_05c3298d;
				ppUVar4 = &pCVar1.ForearmBloodL;
				ppUVar3 = &pCVar1.ForearmSmokeL;
			}
			else {
				if (pCVar1 == null) goto label_05c3298d;
				ppUVar4 = &pCVar1.ForearmBloodR;
				ppUVar3 = &pCVar1.ForearmSmokeR;
			}
			__this_00 = *ppUVar4;
			if (__this_00 == null) {
	label_05c3298d: ;
				throw new NullReferenceException();
			}
			__this_01 = *ppUVar3;
			bVar2 = __this_00.IsAlive(true);
			if (bVar2) {
				__this_00.Stop(true, 1);
				return;
			}
			if (this.EffectsEnabled != false) {
				if (__this_01 == null) goto label_05c3298d;
				bVar2 = __this_01.isPlaying;
				if (!bVar2) {
					__this_01.Play();
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x60044D1")]
	[Address(RVA = "0x5B329A0", Offset = "0x5B319A0", VA = "0x5B329A0", Slot = "157")]
	public override void Run()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$Run): clean
		String animation;
		AnimationHandler __this_00;
		BasicTitanComponentCache pCVar1;
		BaseHitbox pCVar2;
		bool bVar3;

		this._stepPhase = 0;
		animation = this._runAnimation;
		this._needFreshCore = true;
		__this_00 = this.Animation;
		if (__this_00 != null) {
			__this_00.SetCullingType(false);
			this.Ungrab();
			this.DeactivateAllHitboxes();
			this.CrossFade(animation, 0.5, 0.0);
			this.State = 1;
			this._currentStateAnimation = animation;
			this._stateTimeLeft = 0.0;
			if (this.IsCrawler == false) {
				return;
			}
			pCVar1 = this.BasicCache;
			if ((pCVar1 != null) &&(pCVar2 = pCVar1.MouthHitbox, pCVar2 != null)) {
				bVar3 = pCVar2.IsActive();
				if (!bVar3) {
					pCVar1 = this.BasicCache;
					if ((pCVar1 == null) ||(pCVar2 = pCVar1.MouthHitbox, pCVar2 == null)) goto label_05c32b0d;
					pCVar2.Activate(0.0, 0.0);
				}
				pCVar1 = this.BasicCache;
				if ((pCVar1 != null) &&(pCVar2 = pCVar1.CrawlerHitbox, pCVar2 != null)) {
					bVar3 = pCVar2.IsActive();
					if (bVar3) {
						return;
					}
					pCVar1 = this.BasicCache;
					if ((pCVar1 != null) &&(pCVar2 = pCVar1.CrawlerHitbox, pCVar2 != null)) {
						pCVar2.Activate(0.0, 0.0);
						return;
					}
				}
			}
		}
	label_05c32b0d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044D2")]
	[Address(RVA = "0x5B32B20", Offset = "0x5B31B20", VA = "0x5B32B20", Slot = "159")]
	public override void WallClimb()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$WallClimb): clean
		BasicTitanAnimations pCVar1;
		String animation;
		AnimationHandler __this_00;
		bool bVar2;

		bVar2 = this.get_CanWallClimb();
		if ((bVar2) && (this._climbCooldownLeft <= 0.0)) {
			this._climbCooldownLeft = this.ClimbCooldown;
			this._stepPhase = 0;
			pCVar1 = this.BasicAnimations;
			if (pCVar1 != null) {
				animation = pCVar1.RunCrawler;
				this._needFreshCore = true;
				__this_00 = this.Animation;
				if (__this_00 != null) {
					__this_00.SetCullingType(false);
					this.Ungrab();
					this.DeactivateAllHitboxes();
					this.CrossFade(animation, 0.1, 0.0);
					this.State = 0x19;
					this._currentStateAnimation = animation;
					this._stateTimeLeft = 0.0;
					return;
				}
			}
			throw new NullReferenceException();
		}
		return;
	}

	[Token(Token = "0x60044D3")]
	[Address(RVA = "0x5B32C20", Offset = "0x5B31C20", VA = "0x5B32C20", Slot = "148")]
	public override void Jump(Vector3 direction)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$Jump): clean
		BasicTitanAnimations pCVar1;
		AnimationHandler pCVar2;
		BaseTitanAnimations pCVar3;
		String pSVar4;
		float fVar5;

		this._jumpDirection.x = direction.x;
		this._jumpDirection.y = direction.y;
		this._jumpDirection.z = direction.z;
		if (this.IsCrawler == false) {
			pCVar1 = this.BasicAnimations;
			if (pCVar1 != null) {
				pCVar2 = this.Animation;
				pSVar4 = pCVar1.get_Jump();
				if (pCVar2 != null) {
					fVar5 = pCVar2.GetLength(pSVar4);
					pCVar3 = this.BaseTitanAnimations;
					if (pCVar3 != null) {
						pSVar4 = pCVar3.get_Jump();
						this._needFreshCore = true;
						pCVar2 = this.Animation;
						if (pCVar2 != null) {
							pCVar2.SetCullingType(false);
							this.Ungrab();
							this.DeactivateAllHitboxes();
							this.CrossFade(pSVar4, 0.1, 0.0);
							this.State = 4;
							this._currentStateAnimation = pSVar4;
							this._stateTimeLeft = fVar5 * 0.5;
							this.PlaySound(TitanSounds.TitanJump);
							return;
						}
					}
				}
			}
		}
		else {
			pCVar1 = this.BasicAnimations;
			if ((pCVar1 != null) &&(pCVar2 = this.Animation, pCVar2 != null)) {
				pSVar4 = pCVar1.JumpCrawler;
				fVar5 = pCVar2.GetLength(pSVar4);
				this._needFreshCore = true;
				pCVar2 = this.Animation;
				if (pCVar2 != null) {
					pCVar2.SetCullingType(false);
					this.Ungrab();
					this.DeactivateAllHitboxes();
					this.CrossFade(pSVar4, 0.1, 0.0);
					this.State = 4;
					this._currentStateAnimation = pSVar4;
					this._stateTimeLeft = fVar5;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044D4")]
	[Address(RVA = "0x5B32E90", Offset = "0x5B31E90", VA = "0x5B32E90", Slot = "207")]
	public virtual void StunDirectional(bool left, float time, bool refresh)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$StunDirectional): clean
		BasicTitanAnimations pCVar1;
		AnimationHandler __this_00;
		bool bVar2;
		String animation;

		bVar2 = this.CanStun();
		if ((bVar2) ||((((refresh && (this.State == 0xd)) && (this.Dead == false)) &&(this.EnableAI != false)))) {
			pCVar1 = this.BasicAnimations;
			if (left) {
				if (pCVar1 == null) goto label_05c32fa1;
				animation = pCVar1.StunLeft;
			}
			else {
				if (pCVar1 == null) goto label_05c32fa1;
				animation = pCVar1.StunRight;
			}
			this._needFreshCore = true;
			__this_00 = this.Animation;
			if (__this_00 == null) {
	label_05c32fa1: ;
				throw new NullReferenceException();
			}
			__this_00.SetCullingType(false);
			this.Ungrab();
			this.DeactivateAllHitboxes();
			this.CrossFade(animation, 0.1, 0.0);
			this.State = 0xd;
			this._currentStateAnimation = animation;
			this._stateTimeLeft = time;
		}
		return;
	}

	[Token(Token = "0x60044D5")]
	[Address(RVA = "0x5B32FB0", Offset = "0x5B31FB0", VA = "0x5B32FB0", Slot = "149")]
	public override void StartJump()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$StartJump): clean
		BasicTitanComponentCache pCVar1;
		BaseHitbox pCVar2;

		this.StartJump();
		pCVar1 = this.BasicCache;
		if ((pCVar1 == null) ||(pCVar2 = pCVar1.MouthHitbox, pCVar2 == null)) {
			throw new NullReferenceException();
		}
		pCVar2.Activate(0.0, 0.0);
		return;
	}

	[Token(Token = "0x60044D6")]
	[Address(RVA = "0x5B32FF0", Offset = "0x5B31FF0", VA = "0x5B32FF0")]
	public void JumpImmediate()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$JumpImmediate): clean
		BasicTitanAnimations pCVar1;
		String animation;

		this.StartJump();
		pCVar1 = this.BasicAnimations;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		animation = pCVar1.get_Jump();
		this.CrossFade(animation, 0.1, 0.85);
		return;
	}

	[Token(Token = "0x60044D7")]
	[Address(RVA = "0x5B33050", Offset = "0x5B32050", VA = "0x5B33050", Slot = "160")]
	public override void Eat()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$Eat): clean
		Human x;
		BasicTitanAnimations pCVar1;
		bool bVar2;
		AnimationHandler pCVar3;
		String name;
		float fVar4;

		x = this.HoldHuman;
		bVar2 = ((Object)x == null);
		if (bVar2) {
			return;
		}
		pCVar1 = this.BasicAnimations;
		if (this.HoldHumanLeft == false) {
			if ((pCVar1 == null) ||(pCVar3 = this.Animation, pCVar3 == null)) goto label_05c331b7;
			name = pCVar1.AttackEatR;
		}
		else {
			if ((pCVar1 == null) ||(pCVar3 = this.Animation, pCVar3 == null)) goto label_05c331b7;
			name = pCVar1.AttackEatL;
		}
		fVar4 = pCVar3.GetLength(name);
		this._needFreshCore = true;
		pCVar3 = this.Animation;
		if (pCVar3 != null) {
			pCVar3.SetCullingType(false);
			this.DeactivateAllHitboxes();
			this.CrossFade(name, 0.1, 0.0);
			this.State = 0x17;
			this._currentStateAnimation = name;
			this._stateTimeLeft = fVar4;
			this.GrabGrunt(1.0);
			return;
		}
	label_05c331b7: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044D8")]
	[Address(RVA = "0x5B331C0", Offset = "0x5B321C0", VA = "0x5B331C0", Slot = "165")]
	public override void Land()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$Land): 23 lines keep C-only constructs
		float fVar1;
		BasicTitanAnimations pCVar2;
		BaseTitanAnimations pCVar3;
		BaseComponentCache pUVar4;
		Transform __this_00;
		String pSVar6;
		AnimationHandler pCVar7;
		float fVar8;
		float fVar9;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint uVar10;
		uint uVar11;
		Quaternion UVar12;
		Vector3 UVar13;
		Vector3 UStack_78;
		byte[] auStack_68 = new byte[16];
		byte[] auStack_58 = new byte[16];
		byte[] auStack_48 = new byte[16];
		ulong uStack_38;
		byte[] auStack_28 = new byte[24];

		if (this.IsCrawler == false) {
			pCVar3 = this.BaseTitanAnimations;
			if (pCVar3 == null) goto label_05c33460;
			pSVar6 = pCVar3.get_Land();
			pCVar7 = this.Animation;
			if (pCVar7 == null) goto label_05c33460;
		}
		else {
			pCVar2 = this.BasicAnimations;
			if ((pCVar2 == null) ||(pCVar7 = this.Animation, pCVar7 == null)) goto label_05c33460;
			pSVar6 = pCVar2.LandCrawler;
		}
		fVar8 = pCVar7.GetLength(pSVar6);
		this._needFreshCore = true;
		pCVar7 = this.Animation;
		if (pCVar7 != null) {
			pCVar7.SetCullingType(false);
			this.Ungrab();
			this.DeactivateAllHitboxes();
			uVar10 = 0;
			uVar11 = 0;
			this.CrossFade(pSVar6, 0.1, 0.0) ;
			this.State = 9;
			this._currentStateAnimation = pSVar6;
			this._stateTimeLeft = fVar8;
			pUVar4 = this.Cache;
			if ((pUVar4 != null) &&(__this_00 = pUVar4.Transform, __this_00 != null)) {
				pSVar6 = EffectPrefabs.Boom2;
				UVar13 = __this_00.position;
				auStack_28._8_4_ = extraout_XMM0_Dc;
				auStack_28._0_8_ = UVar13._0_8_;
				auStack_28._12_4_ = extraout_XMM0_Dd;
				uStack_38._0_4_ = (Vector3.downVector).x;
				uStack_38._4_4_ = (Vector3.downVector).y;
				fVar8 = (Vector3.downVector).z;
				auStack_68 = ZEXT416((uint)this._currentGroundDistance);
				UStack_78.x = 4.712389;
				UStack_78.y = 0.0;
				UStack_78.z = 0.0;
				UVar12 = Quaternion.Internal_FromEulerRad(ref UStack_78);
				auStack_48._8_4_ = extraout_XMM0_Dc_00;
				auStack_48._0_8_ = UVar12._0_8_;
				auStack_48._12_4_ = extraout_XMM0_Dd_00;
				auStack_58._8_4_ = uVar10;
				auStack_58._0_8_ = UVar12._8_8_;
				auStack_58._12_4_ = uVar11;
				fVar1 = this.Size;
				fVar9 = this.get_SizeMultiplier();
				UVar13.z = UVar13.z + fVar8 * (float)auStack_68._0_4_;
				UVar13.x = (float)auStack_28._0_4_ + (float)uStack_38 * (float)auStack_68._0_4_;
				UVar13.y = (float)auStack_28._4_4_ + uStack_38._4_4_ * (float)auStack_68._0_4_;
				UVar12.z = (float)auStack_58._0_4_;
				UVar12.w = (float)auStack_58._4_4_;
				UVar12.x = (float)auStack_48._0_4_;
				UVar12.y = (float)auStack_48._4_4_;
				EffectSpawner.Spawn(pSVar6, UVar13, UVar12, fVar1 * fVar9, true, null);
				return;
			}
		}
	label_05c33460: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044D9")]
	[Address(RVA = "0x5B33470", Offset = "0x5B32470", VA = "0x5B33470", Slot = "166")]
	public override void Fall()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$Fall): clean
		BasicTitanAnimations pCVar1;
		BaseTitanAnimations pCVar2;
		String animation;
		AnimationHandler __this_00;

		if (this.IsCrawler == false) {
			pCVar2 = this.BaseTitanAnimations;
			if (pCVar2 != null) {
				animation = pCVar2.get_Fall();
				this._needFreshCore = true;
				__this_00 = this.Animation;
				if (__this_00 != null) goto label_05c334e2;
			}
		}
		else {
			pCVar1 = this.BasicAnimations;
			if (pCVar1 != null) {
				animation = pCVar1.FallCrawler;
				this._needFreshCore = true;
				__this_00 = this.Animation;
				if (__this_00 != null) {
	label_05c334e2: ;
					__this_00.SetCullingType(false);
					this.Ungrab();
					this.DeactivateAllHitboxes();
					this.CrossFade(animation, 0.1, 0.0);
					this.State = 7;
					this._currentStateAnimation = animation;
					this._stateTimeLeft = 0.0;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044DA")]
	[Address(RVA = "0x5B33560", Offset = "0x5B32560", VA = "0x5B33560", Slot = "163")]
	public override void Idle(float fadeTime)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$Idle): clean
		BasicTitanAnimations pCVar1;
		String animation;

		pCVar1 = this.BasicAnimations;
		if (this.IsCrawler == false) {
			if (pCVar1 == null) goto label_05c335c4;
			animation = pCVar1.get_Idle();
		}
		else {
			if (pCVar1 == null) {
	label_05c335c4: ;
				throw new NullReferenceException();
			}
			animation = pCVar1.IdleCrawler;
		}
		this.StateActionWithTime(0, animation, 0.0, fadeTime, true, 0.0);
		return;
	}

	[Token(Token = "0x60044DB")]
	[Address(RVA = "0x5B335D0", Offset = "0x5B325D0", VA = "0x5B335D0", Slot = "167")]
	public override void Turn(Vector3 targetDirection)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$Turn): 26 lines keep C-only constructs
		BasicTitanAnimations pCVar1;
		BaseTitanAnimations pCVar2;
		AnimationHandler pCVar3;
		BaseComponentCache pUVar4;
		Transform __this_00;
		VirtualInvokeData_bccba1ebf973 pVVar5;
		bool bVar6;
		String* ppSVar7;
		String pSVar8;
		VirtualInvokeData_bccba1ebf973 pVVar9;
		float fVar10;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		byte[] auVar11 = new byte[12];
		float fVar12;
		Vector3 targetDirection_00;
		Vector3 UVar13;
		Quaternion UVar14;
		Vector3 UStack_48;
		byte[] auStack_38 = new byte[16];
		float fStack_28;

		UVar13.z = targetDirection.z;
		auStack_38._8_4_ = in_XMM0_Dc;
		auStack_38._0_8_ = targetDirection._0_8_;
		auStack_38._12_4_ = in_XMM0_Dd;
		bVar6 = this.CanAction();
		if (!bVar6) {
			return;
		}
		UVar13.x = (float)auStack_38._0_4_;
		UVar13.y = (float)auStack_38._4_4_;
		fVar10 = this.GetAngleToTarget(UVar13);
		if (this.IsCrawler == false) {
			pCVar2 = this.BaseTitanAnimations;
			fStack_28 = fVar10;
			if (fVar10 <= 0.0) {
				if (pCVar2 == null) goto label_05c3387a;
				pVVar9 = &(pCVar2.klass.vtable)._19_get_Turn90L;
				pVVar5 = &(pCVar2.klass.vtable)._19_get_Turn90L;
			}
			else {
				if (pCVar2 == null) goto label_05c3387a;
				pVVar9 = &(pCVar2.klass.vtable)._20_get_Turn90R;
				pVVar5 = &(pCVar2.klass.vtable)._20_get_Turn90R;
			}
			pSVar8 = (*pVVar9.methodPtr)(pCVar2,pVVar5.method);
			fVar10 = 120.0;
			if (fStack_28 <= 120.0) {
				fVar10 = fStack_28;
			}
			this._turnDegrees =(float)(~-(uint)(-120.0 <= fStack_28) & 0xc2f00000 | (uint)fVar10 & -(uint)(-120.0 <= fStack_28));
			pUVar4 = this.Cache;
			if ((pUVar4 != null) &&(__this_00 = pUVar4.Transform, __this_00 != null)) {
				UVar13 = __this_00.eulerAngles;
				UStack_48.x = 0.0;
				UStack_48.y = (UVar13.y + this._turnDegrees) * 0.017453292;
				UStack_48.z = 0.0;
				UVar14 = (Quaternion)Quaternion.Internal_FromEulerRad(ref UStack_48);
				this._turnTargetRotation = UVar14;
				fVar10 = this.TurnSpeed;
				if (this.SizeScaledTurnSpeed != false) {
					fVar12 = this.Size;
					if ((typeof(BasicTitan)._2).cctor_finished_or_no_cctor == 0) {
						auStack_38 = ZEXT416((uint)fVar12);
						fVar12 = auStack_38._0_4_;
					}
					fVar12 = (fVar12 + -0.7) * -0.15 + 1.4;
					auVar11 = ZEXT812(0x3fc00000);
					if (fVar12 <= auVar11._0_4_) {
						auVar11._4_8_ = auVar11._4_8_;
						auVar11._0_4_ = fVar12;
					}
					fVar10 = fVar10 * (float)(~-(uint)(0.9 <= fVar12) & 0x3f666666 | auVar11._0_4_ & -(uint)(0.9 <= fVar12));
				}
				if (fVar10 <= 0.0) {
					pCVar3 = this.Animation;
					if (pCVar3 == null) goto label_05c3387a;
					fVar10 = pCVar3.GetSpeed(pSVar8);
				}
				pCVar3 = this.Animation;
				if (pCVar3 != null) {
					fVar12 = pCVar3.GetLength(pSVar8);
					this.StateActionWithTime(0x18, pSVar8, fVar12 / fVar10, 0.0, true, fVar10);
					return;
				}
			}
		}
		else {
			pCVar1 = this.BasicAnimations;
			if (fVar10 <= 0.0) {
				if (pCVar1 == null) goto label_05c3387a;
				ppSVar7 = &pCVar1.Turn90LCrawler;
			}
			else {
				if (pCVar1 == null) goto label_05c3387a;
				ppSVar7 = &pCVar1.Turn90RCrawler;
			}
			pCVar3 = this.Animation;
			if (pCVar3 != null) {
				pSVar8 = *ppSVar7;
				fVar10 = pCVar3.GetTotalTime(pSVar8);
				targetDirection_00.z = UVar13.z;
				targetDirection_00.x = (float)auStack_38._0_4_;
				targetDirection_00.y = (float)auStack_38._4_4_;
				this.StartTurn(targetDirection_00, pSVar8, fVar10 * 0.71);
				return;
			}
		}
	label_05c3387a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044DC")]
	[Address(RVA = "0x5B33880", Offset = "0x5B32880", VA = "0x5B33880", Slot = "180")]
	protected override void UpdateTurn()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$UpdateTurn): 18 lines keep C-only constructs
		BaseComponentCache pUVar1;
		ulong uVar2;
		ulong uVar3;
		Transform __this_00;
		float fVar4;
		float fVar5;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Quaternion UVar6;
		Quaternion UStack_58;
		Quaternion UStack_48;
		byte[] auStack_38 = new byte[16];
		byte[] auStack_28 = new byte[16];

		if (this.IsCrawler == false) {
			pUVar1 = this.Cache;
			if ((pUVar1 != null) &&(__this_00 = pUVar1.Transform, __this_00 != null)) {
				UVar6 = __this_00.rotation;
				auStack_28._8_4_ = extraout_XMM0_Dc;
				auStack_28._0_8_ = UVar6._0_8_;
				auStack_28._12_4_ = extraout_XMM0_Dd;
				auStack_38._8_4_ = in_XMM1_Dc;
				auStack_38._0_8_ = UVar6._8_8_;
				auStack_38._12_4_ = in_XMM1_Dd;
				uVar2._0_4_ = this._turnTargetRotation.x;
				uVar2._4_4_ = this._turnTargetRotation.y;
				uVar3._0_4_ = this._turnTargetRotation.z;
				uVar3._4_4_ = this._turnTargetRotation.w;
				fVar5 = Time.deltaTime;
				UStack_48._0_8_ = auStack_28._0_8_;
				UStack_48._8_8_ = auStack_38._0_8_;
				UStack_58._0_8_ = uVar2;
				UStack_58._8_8_ = uVar3;
				UVar6 = Quaternion.Internal_Lerp(ref UStack_48, ref UStack_58, fVar5 * ABS(this._turnDegrees) * 0.015);
				UVar6.z = UVar6.z;
				UVar6.w = UVar6.w;
				fVar5 = UVar6.x;
				fVar4 = UVar6.y;
	label_05c339a6: ;
				UVar6.y = fVar4;
				UVar6.x = fVar5;
				UVar6.w = UVar6.w;
				UVar6.z = UVar6.z;
				__this_00.rotation = UVar6;
				return;
			}
		}
		else {
			fVar5 = this._currentTurnTime;
			fVar4 = Time.deltaTime;
			fVar4 = fVar4 + fVar5;
			this._currentTurnTime = fVar4;
			pUVar1 = this.Cache;
			if (pUVar1 != null) {
				__this_00 = pUVar1.Transform;
				UStack_48.x = this._turnStartRotation.x;
				UStack_48.y = this._turnStartRotation.y;
				UStack_48.z = this._turnStartRotation.z;
				UStack_48.w = this._turnStartRotation.w;
				fVar4 = fVar4 / this._maxTurnTime;
				UStack_58.x = this._turnTargetRotation.x;
				UStack_58.y = this._turnTargetRotation.y;
				UStack_58.z = this._turnTargetRotation.z;
				UStack_58.w = this._turnTargetRotation.w;
				fVar5 = 1.0;
				if (fVar4 <= 1.0) {
					fVar5 = fVar4;
				}
				UVar6 = Quaternion.Internal_Slerp(ref UStack_48, ref UStack_58, (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5));
				UVar6.z = UVar6.z;
				UVar6.w = UVar6.w;
				fVar5 = UVar6.x;
				fVar4 = UVar6.y;
				if (__this_00 != null) goto label_05c339a6;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044DD")]
	[Address(RVA = "0x5B339C0", Offset = "0x5B329C0", VA = "0x5B339C0", Slot = "93")]
	[PunRPC]
	public override void MarkDeadRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$MarkDeadRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		Dictionary<object, object> __this_00;
		AnimationHandler __this_01;
		GraphicsSettings pSVar3;
		BoolSetting pSVar4;
		BasicTitanComponentCache pCVar5;
		ParticleSystem __this_02;
		AudioSource __this_03;
		float fVar6;
		double dVar7;
		double dVar8;
		float fVar9;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)) {
			if (info.Sender != pPVar2._Owner_k__BackingField) {
				return;
			}
			if (this.Dead != false) {
				return;
			}
			this.Dead = true;
			fVar6 = Time.time;
			dVar7 = PhotonNetwork.Time;
			dVar8 = info.SentServerTime;
			fVar9 = 0.0;
			if (0.0 <= (float)(dVar7 - dVar8)) {
				fVar9 = (float)(dVar7 - dVar8);
			}
			this._deathVisualStartTime = fVar6 - fVar9;
			pUVar1 = this.Cache;
			if (pUVar1 != null) {
				__this_00 = (Dictionary<object, object>)pUVar1.AudioSources;
				if ((__this_00 != null) &&(__this_03 = __this_00.get_Item((object)TitanSounds.DeathFall) , __this_03 != null)) {
					fVar6 = __this_03.volume;
					this._deathFallSoundVolume = fVar6;
					__this_01 = this.Animation;
					if (__this_01 != null) {
						__this_01.SetCullingType(true);
						if (this.EffectsEnabled != false) {
							pSVar3 = SettingsManager.GraphicsSettings;
							if ((pSVar3 == null) ||(pSVar4 = pSVar3.NapeBloodEnabled, pSVar4 == null)) goto label_05c33bb4;
							if (pSVar4._value != false) {
								pCVar5 = this.BasicCache;
								if ((pCVar5 == null) ||(__this_02 = pCVar5.NapeBlood, __this_02 == null)) goto label_05c33bb4;
								__this_02.Play(true);
							}
						}
						return;
					}
				}
			}
		}
	label_05c33bb4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044DE")]
	[Address(RVA = "0x5B33BC0", Offset = "0x5B32BC0", VA = "0x5B33BC0", Slot = "82")]
	public override void TakeDamage(int damage)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$TakeDamage): clean
		InGameSet pSVar1;
		InGameTitanSettings pSVar2;
		BoolSetting pSVar3;
		IntSetting pSVar4;

		pSVar1 = SettingsManager.InGameCurrent;
		if (pSVar1 == null) {
	label_05c33c72: ;
			throw new NullReferenceException();
		}
		if (((0 < damage) && (this.Dead == false)) && (this.CurrentHealth <= damage)) {
			pSVar2 = pSVar1.Titan;
			if ((pSVar2 == null) ||(pSVar3 = pSVar2.TitanDecapitationEnabled, pSVar3 == null)) goto label_05c33c72;
			if (pSVar3._value != false) {
				pSVar4 = pSVar2.TitanDecapitationMinDamage;
				if (pSVar4 == null) goto label_05c33c72;
				if (pSVar4._value <= damage) {
					this._decapitated = true;
				}
			}
		}
		this.TakeDamage(damage);
		return;
	}

	[Token(Token = "0x60044DF")]
	[Address(RVA = "0x5B33C80", Offset = "0x5B32C80", VA = "0x5B33C80", Slot = "83")]
	public override void Die()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$Die): clean
		if (this.Dead == false) {
			this.Die();
			return;
		}
		return;
	}

	[Token(Token = "0x60044E0")]
	[Address(RVA = "0x5B33C90", Offset = "0x5B32C90", VA = "0x5B33C90", Slot = "84")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__141))]
	protected override IEnumerator WaitAndDie()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$WaitAndDie): clean
		BasicTitan.d__141<WaitAndDie> __this_00;

		__this_00 = new BasicTitan.d__141<WaitAndDie>(0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60044E1")]
	[Address(RVA = "0x5B33D00", Offset = "0x5B32D00", VA = "0x5B33D00")]
	private void StartDeathAnimation()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$StartDeathAnimation): 17 lines keep C-only constructs
		float fVar1;
		BasicTitanAnimations pCVar2;
		AnimationHandler __this_00;
		BaseComponentCache pUVar3;
		PhotonView __this_01;
		Vector3 pUVar4;
		System_Nullable_Vector3__o pSVar5;
		bool bVar6;
		Vector3 pUVar7;
		String* ppSVar8;
		Object[] parameters;
		object pIVar9;
		object pIVar10;
		int iVar11;
		MethodInfo pMVar12;
		float time;
		Vector3 UVar13;
		ulong local_48;
		ulong local_38;

		pMVar12 = (MethodInfo)this._pendingDeathAnimation;
		if (pMVar12 == null) {
			return;
		}
		this._pendingDeathAnimation = null;
		iVar11 = this.DeathType;
		if (iVar11 == 0) {
			iVar11 = this._pendingDeathType;
			pUVar7 = &this._finisherDeathVelocity;
			pUVar4 = &this._finisherDeathVelocity;
		}
		else {
			pUVar7 = &this.DeathVelocity;
			pUVar4 = &this.DeathVelocity;
		}
		fVar1 = pUVar4.z;
		local_38._0_4_ = pUVar7.x;
		local_38._4_4_ = pUVar7.y;
		this._launched = iVar11 == 3;
		this._decapitated = iVar11 == 2;
		pCVar2 = this.BasicAnimations;
		if (pCVar2 == null) goto label_05c34008;
		bVar6 = ((String)pMVar12 == pCVar2.DieFront);
		if (bVar6) {
	label_05c33e1d: ;
			if (this._launched == false) {
				if (this._decapitated == false) goto label_05c33e5c;
				pCVar2 = this.BasicAnimations;
				if (pCVar2 == null) goto label_05c34008;
				ppSVar8 = &pCVar2.DieHeadOff;
			}
			else {
				pCVar2 = this.BasicAnimations;
				if (pCVar2 == null) goto label_05c34008;
				ppSVar8 = &pCVar2.DieBlow;
			}
			pMVar12 = (MethodInfo)*ppSVar8;
		}
		else {
			pCVar2 = this.BasicAnimations;
			if (pCVar2 == null) goto label_05c34008;
			bVar6 = ((String)pMVar12 == pCVar2.DieBack);
			if (bVar6) goto label_05c33e1d;
		}
	label_05c33e5c: ;
		this._needFreshCore = true;
		__this_00 = this.Animation;
		if (__this_00 == null) {
	label_05c34008: ;
			throw new NullReferenceException();
		}
		__this_00.SetCullingType(true);
		this.Ungrab();
		this.DeactivateAllHitboxes();
		this.CrossFade((String)pMVar12, 0.05, 0.0);
		this.State = 0xf;
		this._currentStateAnimation = (String)pMVar12;
		this._stateTimeLeft = 0.0;
		if (iVar11 == 2) {
			this.DetachHead();
		}
		else {
			if (iVar11 == 3) {
				pMVar12 = (this.klass.vtable)._127_get_LaunchTime.method;
				time = this.get_LaunchTime();
				UVar13.z = fVar1;
				UVar13.x = (float)(undefined4)local_38;
				UVar13.y = (float)local_38._4_4_;
				this.SetLaunchVelocity(UVar13, time);
			}
			if (this._napeChunkVelocity.hasValue != false) {
				pUVar3 = this.Cache;
				if (pUVar3 != null) {
					__this_01 = pUVar3.PhotonView;
					parameters = (Object[])new object[1];
					UVar13 = (this._napeChunkVelocity).Value;
					local_48 = UVar13._0_8_;
					pIVar9 = (object)local_48;
					if (parameters != null) {
						if ((pIVar9 != null) &&(pIVar10 = il2cpp_vm_Object_IsInst(pIVar9, (((parameters.obj).klass)._1).element_class), pIVar10 == null)) {
							pIVar9 = new ArrayTypeMismatchException();
							throw pIVar9;
						}
						if ((int)parameters.Length == 0) {
							throw new IndexOutOfRangeException();
						}
						parameters[0] = pIVar9;
						if (__this_01 != null) {
							__this_01.RPC("PlayNapeChunkRPC", 0, parameters);
							goto label_05c33ff1;
						}
					}
				}
				goto label_05c34008;
			}
		}
	label_05c33ff1: ;
		this._napeChunkVelocity.hasValue = false;
		*(undefined3)&this._napeChunkVelocity.field_0x1 = 0;
		this._napeChunkVelocity.value.x = 0.0;
		pSVar5 = &this._napeChunkVelocity;
		pSVar5.value.y = 0.0;
		pSVar5.value.z = 0.0;
		return;
	}

	[Token(Token = "0x60044E2")]
	[Address(RVA = "0x5B34190", Offset = "0x5B33190", VA = "0x5B34190", Slot = "101")]
	protected override void Awake()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$Awake): clean
		BasicTitanAnimations pCVar1;
		AnimationHandler __this_00;
		GameObject pUVar2;
		BasicTitanSetup pCVar3;
		TitanCustomSkinLoader pCVar4;
		String name;

		this.Awake();
		pUVar2 = this.gameObject;
		if (pUVar2 != null) {
			pCVar3 = pUVar2.AddComponent<BasicTitanSetup>();
			this.Setup = pCVar3;
			pUVar2 = this.gameObject;
			if (pUVar2 != null) {
				pCVar4 = pUVar2.AddComponent<TitanCustomSkinLoader>();
				this._customSkinLoader = pCVar4;
				pCVar1 = this.BasicAnimations;
				if (pCVar1 != null) {
					__this_00 = this.Animation;
					name = pCVar1.get_Jump();
					if (__this_00 != null) {
						__this_00.SetSpeed(name, 2.0);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044E3")]
	[Address(RVA = "0x5B34280", Offset = "0x5B33280", VA = "0x5B34280", Slot = "90")]
	[PunRPC]
	public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$GetHitRPC): clean
		bool bVar1;

		this.ApplyHit(viewId, name, damage, type, collider);
		bVar1 = Time.inFixedTimeStep;
		if (bVar1) {
			return;
		}
		this.StartDeathAnimation();
		return;
	}

	[Token(Token = "0x60044E4")]
	[Address(RVA = "0x5B342B0", Offset = "0x5B332B0", VA = "0x5B342B0")]
	private void ApplyHit(int viewId, string name, int damage, string type, string collider)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$ApplyHit): 31 lines keep C-only constructs
		uint uVar1;
		InGameSet pSVar2;
		InGameTitanSettings pSVar3;
		BaseTitanComponentCache pCVar4;
		PhotonView __this_00;
		BoolSetting pSVar5;
		IntSetting pSVar6;
		BasicTitanComponentCache pCVar7;
		BaseComponentCache pUVar8;
		Transform pUVar9;
		BaseComponentCache pUVar10;
		Transform __this_01;
		ulong uVar11;
		System_Nullable_Vector3__o pSVar12;
		bool bVar13;
		bool bVar14;
		String pSVar15;
		Il2CppClass pIVar16;
		BaseCharacter x;
		BasicTitan pCVar17;
		uint in_register_0000000c;
		Object[] parameters;
		uint puVar18;
		_func_24 vtableDispatch;
		MethodInfo pMVar19;
		Object pUVar20;
		float fVar21;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float fVar22;
		Vector3 UVar23;
		int local_7c;
		ulong local_68;
		float local_60;
		float local_5c;
		System_Nullable_Vector3__Fields local_58;
		byte[] local_48 = new byte[16];

		parameters = (Object[])CONCAT44(in_register_0000000c, damage);
		local_68 = 0;
		if (this.Dead != false) {
			return;
		}
		pSVar2 = SettingsManager.InGameCurrent;
		if (pSVar2 == null) goto label_05c34c65;
		pSVar3 = pSVar2.Titan;
		local_7c = damage;
		if ((this.isWarded == false) || (this.CurrentWardedWeakSpot == 0)) goto switchD_05c34430_default;
		pCVar4 = this.BaseTitanCache;
		if (pCVar4 == null) goto label_05c34c65;
		pUVar20 = (Object)pCVar4.NapeHurtbox;
		if (pUVar20 == null) goto label_05c34c65;
		pSVar15 = pUVar20.name;
		bVar13 = (collider == pSVar15);
		if (bVar13) {
			local_7c = 0;
		}
		if (this.isWarded != false) {
			puVar18 = &switchD_05c34430::switchdataD_010a5ccc;
			switch(this.CurrentWardedWeakSpot) {
			case 1:
				pCVar7 = this.BasicCache;
				if (pCVar7 == null) goto label_05c34c65;
				pUVar20 = (Object)pCVar7.ForearmLHurtbox;
				break;
			case 2:
				pCVar7 = this.BasicCache;
				if (pCVar7 == null) goto label_05c34c65;
				pUVar20 = (Object)pCVar7.ForearmRHurtbox;
				break;
			case 3:
				pCVar4 = this.BaseTitanCache;
				if (pCVar4 == null) goto label_05c34c65;
				pUVar20 = (Object)pCVar4.LegLHurtbox;
				break;
			case 4:
				pCVar4 = this.BaseTitanCache;
				if (pCVar4 == null) goto label_05c34c65;
				pUVar20 = (Object)pCVar4.LegRHurtbox;
				break;
			default: ;
				goto switchD_05c34430_default;
			}
			if (pUVar20 == null) goto label_05c34c65;
			pSVar15 = pUVar20.name;
			bVar13 = (collider == pSVar15);
			pMVar19 = MethodInfo_System_Array_Empty_object;
			parameters = (Object[])puVar18;
			if (!bVar13) goto switchD_05c34430_default;
			pUVar8 = this.Cache;
			if ((pUVar8 == null) ||(__this_00 = pUVar8.PhotonView, __this_00 == null)) goto label_05c34c65;
			if (__this_00._IsMine_k__BackingField == false) goto switchD_05c34430_default;
			if ((MethodInfo_System_Array_Empty_object.field7_0x38).methodMetadataHandle == null) {
				il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_object);
				pIVar16 = *(Il2CppClass*)((long)(pMVar19.field7_0x38).methodMetadataHandle + 0x10);
				if (((pIVar16._2).bitflags1 & 1) == 0) goto label_05c348d7;
	label_05c34509: ;
				uVar1 = (pIVar16._2).cctor_finished_or_no_cctor;
			}
			else {
				pIVar16 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_object.field7_0x38).methodMetadataHandle + 0x10);
				if (((pIVar16._2).bitflags1 & 1) != 0) goto label_05c34509;
	label_05c348d7: ;
				pIVar16 = il2cpp_codegen_class_init_checked(pIVar16);
				uVar1 = (pIVar16._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			pIVar16 = (pMVar19.field7_0x38).rgctx_data[2].klass;
			if (((pIVar16._2).bitflags1 & 1) == 0) {
				pIVar16 = il2cpp_codegen_class_init_checked(pIVar16);
			}
			parameters = *(Object[]*)pIVar16.static_fields;
			__this_00.RPC("DisableWardedEffectsRPC", 0, parameters);
		}
	switchD_05c34430_default: ;
		bVar13 = (type == "CannonBall");
		if (bVar13) {
	label_05c34589: ;
			this.GetHitRPC(viewId, name, local_7c, type, collider);
			return;
		}
		pMVar19 = (MethodInfo *)"Rock";
		bVar13 = (type == "Rock");
		if (bVar13) goto label_05c34589;
		if (pSVar3 == null) goto label_05c34c65;
		pSVar5 = pSVar3.TitanArmorEnabled;
		if (pSVar5 == null) goto label_05c34c65;
		if (pSVar5._value != false) {
			if (this.IsCrawler != false) {
				pSVar5 = pSVar3.TitanArmorCrawlerEnabled;
				if (pSVar5 == null) goto label_05c34c65;
				if (pSVar5._value == false) goto label_05c34618;
			}
			pSVar6 = pSVar3.TitanArmor;
			if (pSVar6 == null) goto label_05c34c65;
			parameters = null;
			if (local_7c < pSVar6._value) {
				local_7c = 0;
			}
		}
	label_05c34618: ;
		bVar13 = BaseTitan.IsMeleeHitType(type);
		if (bVar13) {
			if (this.IsCrawler == false) {
				bVar13 = BaseTitan.IsComboStunType(type);
				if (bVar13) {
					pMVar19 = (this.klass.vtable)._124_get_ComboStunTime.method;
					fVar21 = this.get_ComboStunTime();
				}
				else {
					bVar13 = BaseTitan.IsKnockbackType(type);
					if (bVar13) {
						pMVar19 = (this.klass.vtable)._129_get_PushTime.method;
						fVar21 = this.get_PushTime();
					}
					else {
						fVar21 = this.StunTime;
					}
				}
				bVar13 = BaseTitan.IsComboStunType(type);
				x = Util.FindCharacterByViewId(viewId);
				bVar14 = ((Object)x != null);
				if (bVar14) {
					if (x != null) {
						pUVar8 = x.Cache;
						if (pUVar8 != null) {
							pUVar9 = pUVar8.Transform;
							if (pUVar9 != null) {
								UVar23 = pUVar9.position;
								pUVar8 = this.Cache;
								if (pUVar8 != null) {
									local_48._8_4_ = extraout_XMM0_Dc;
									local_48._0_8_ = UVar23._0_8_;
									local_48._12_4_ = extraout_XMM0_Dd;
									pUVar9 = pUVar8.Transform;
									local_5c = UVar23.z;
									if (pUVar9 != null) {
										UVar23 = pUVar9.position;
										fVar22 = UVar23.z;
										local_60 = local_5c - fVar22;
										local_68 = (ulong)(uint)((float)local_48._0_4_ - UVar23.x);
										pUVar8 = this.Cache;
										if (pUVar8 != null) {
											pUVar9 = pUVar8.Transform;
											uVar11 = il2cpp_runtime_helper_059d80e0(&local_68);
											if (pUVar9 != null) {
												UVar23.z = fVar22;
												UVar23.x = (float)(int)uVar11;
												UVar23.y = (float)(int)((ulong)uVar11 >> 0x20);
												pUVar9.forward = UVar23;
												pUVar8 = this.Cache;
												if (((pUVar8 != null) &&(pUVar10 = x.Cache, pUVar10 != null)) &&(pUVar9 = pUVar10.Transform, pUVar9 != null)) {
													__this_01 = pUVar8.Transform;
													UVar23 = pUVar9.position;
													if (__this_01 != null) {
														UVar23 = __this_01.InverseTransformPoint(UVar23);
														this.StunDirectional(UVar23.x < 0.0, fVar21, bVar13);
														goto label_05c34b15;
													}
												}
											}
										}
									}
								}
							}
						}
					}
					goto label_05c34c65;
				}
				this.StunDirectional(true, fVar21, bVar13);
			}
	label_05c34b15: ;
			this.GetMeleeHit(viewId, name, local_7c, type, collider);
			return;
		}
		pCVar4 = this.BaseTitanCache;
		if (pCVar4 == null) goto label_05c34c65;
		pUVar20 = (Object)pCVar4.EyesHurtbox;
		bVar13 = (pUVar20 != null);
		if (bVar13) {
			pCVar4 = this.BaseTitanCache;
			if ((pCVar4 == null) ||(pUVar20 = (Object)pCVar4.EyesHurtbox, pUVar20 == null )) goto label_05c34c65;
			pSVar15 = pUVar20.name;
			bVar13 = (collider == pSVar15);
			if (bVar13) {
				this.Blind();
				return;
			}
		}
		pCVar4 = this.BaseTitanCache;
		if (pCVar4 == null) goto label_05c34c65;
		pUVar20 = (Object)pCVar4.LegLHurtbox;
		bVar13 = (pUVar20 != null);
		if (bVar13) {
			pCVar4 = this.BaseTitanCache;
			if ((pCVar4 == null) ||(pUVar20 = (Object)pCVar4.LegLHurtbox, pUVar20 == null )) goto label_05c34c65;
			pSVar15 = pUVar20.name;
			bVar13 = (collider == pSVar15);
			if (!bVar13) {
				pCVar4 = this.BaseTitanCache;
				if ((pCVar4 == null) ||(pUVar20 = (Object)pCVar4.LegRHurtbox, pUVar20 == null)) goto label_05c34c65;
				pSVar15 = pUVar20.name;
				bVar13 = (collider == pSVar15);
				if (!bVar13) goto label_05c347ba;
			}
		}
		else {
	label_05c347ba: ;
			pCVar7 = this.BasicCache;
			if ((pCVar7 == null) ||(pUVar20 = (Object)pCVar7.ForearmLHurtbox, pUVar20 == null)) goto label_05c34c65;
			pSVar15 = pUVar20.name;
			bVar13 = (collider == pSVar15);
			if (bVar13) {
				pCVar17 = this.klass;
				if (this.IsCrawler == false) {
					vtableDispatch = (pCVar17.vtable)._178_DisableArm.methodPtr;
					pMVar19 = (pCVar17.vtable)._178_DisableArm.method;
					bVar13 = true;
	label_05c3487b: ;
					(*vtableDispatch)(this,bVar13,pMVar19);
					return;
				}
				goto label_05c34b7a;
			}
			pCVar7 = this.BasicCache;
			if ((pCVar7 == null) ||(pUVar20 = (Object)pCVar7.ForearmRHurtbox, pUVar20 == null)) goto label_05c34c65;
			pSVar15 = pUVar20.name;
			bVar13 = (collider == pSVar15);
			if (bVar13) {
				pCVar17 = this.klass;
				if (this.IsCrawler == false) {
					vtableDispatch = (pCVar17.vtable)._178_DisableArm.methodPtr;
					pMVar19 = (pCVar17.vtable)._178_DisableArm.method;
					bVar13 = false;
					goto label_05c3487b;
				}
				goto label_05c34b7a;
			}
			pCVar7 = this.BasicCache;
			if ((pCVar7 == null) ||(pUVar20 = (Object)pCVar7.HandLHurtbox, pUVar20 == null)) goto label_05c34c65;
			pSVar15 = pUVar20.name;
			bVar13 = (collider == pSVar15);
			if (bVar13) {
				if (this.IsCrawler == false) {
					bVar13 = true;
	label_05c34c4d: ;
					this.DisableLimb(bVar13, true);
					return;
				}
			}
			else {
				pCVar7 = this.BasicCache;
				if ((pCVar7 == null) ||(pUVar20 = (Object)pCVar7.HandRHurtbox, pUVar20 == null)) {
	label_05c34c65: ;
					throw new NullReferenceException();
				}
				pSVar15 = pUVar20.name;
				bVar13 = (collider == pSVar15);
				if (!bVar13) {
					pCVar4 = this.BaseTitanCache;
					if ((pCVar4 != null) &&(pUVar20 = (Object)pCVar4.NapeHurtbox, pUVar20 != null)) {
						pSVar15 = pUVar20.name;
						bVar13 = (collider == pSVar15);
						if ((bVar13) &&((this.GetHitRPC(viewId, name, local_7c, type, collider), 0 < local_7c && (this.CurrentHealth < 1)))) {
							UVar23 = this.GetNapeChunkVelocity(viewId);
							local_58.hasValue = false;
							local_58._1_3_ = 0;
							local_58.value.x = 0.0;
							local_58.value.y = 0.0;
							local_58.value.z = 0.0;
							local_58 = new Nullable<Vector3>(UVar23);
							this._napeChunkVelocity.hasValue = local_58.hasValue;
							*(undefined3)&this._napeChunkVelocity.field_0x1 = local_58._1_3_;
							this._napeChunkVelocity.value.x = local_58.value.x;
							pSVar12 = &this._napeChunkVelocity;
							pSVar12.value.y = local_58.value.y;
							pSVar12.value.z = local_58.value.z;
						}
						return;
					}
					goto label_05c34c65;
				}
				if (this.IsCrawler == false) {
					bVar13 = false;
					goto label_05c34c4d;
				}
			}
		}
		pCVar17 = this.klass;
	label_05c34b7a: ;
		this.Cripple(0.0);
		return;
	}

	[Token(Token = "0x60044E5")]
	[Address(RVA = "0x5B34C70", Offset = "0x5B33C70", VA = "0x5B34C70")]
	private Vector3 GetNapeChunkVelocity(int killerViewId)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$GetNapeChunkVelocity): 14 lines keep C-only constructs
		BaseComponentCache pUVar1;
		Transform __this_00;
		byte[] auVar2 = new byte[16];
		bool bVar3;
		BaseCharacter __this_01;
		float fVar4;
		float fVar5;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float fVar6;
		byte[] auVar7 = new byte[16];
		Vector3 UVar8;
		float local_38;
		float fStack_34;

		pUVar1 = this.Cache;
		if ((pUVar1 == null) ||(__this_00 = pUVar1.Transform, __this_00 == null)) {
	label_05c34e81: ;
			throw new NullReferenceException();
		}
		UVar8 = __this_00.forward;
		__this_01 = Util.FindCharacterByViewId(killerViewId);
		local_38 = UVar8.x;
		fStack_34 = UVar8.y;
		local_38 = local_38 * -10.0;
		fStack_34 = fStack_34 * -10.0;
		fVar4 = UVar8.z * -10.0;
		bVar3 = ((Object)__this_01 != null);
		if (!bVar3) goto label_05c34e77;
		if (__this_01 == null) goto label_05c34e81;
		UVar8 = __this_01.GetVelocity();
		fVar6 = UVar8.z;
		auVar7._0_8_ = UVar8._0_8_;
		auVar7._8_4_ = extraout_XMM0_Dc;
		auVar7._12_4_ = extraout_XMM0_Dd;
		fVar5 = fVar6 * fVar6 + UVar8.y * UVar8.y + UVar8.x * UVar8.x;
		if (1.0 < fVar5) {
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
				if (fVar5 < 0.0) goto label_05c34e30;
	label_05c34dd8: ;
				fVar5 = SQRT(fVar5);
			}
			else {
				if (0.0 <= fVar5) goto label_05c34dd8;
	label_05c34e30: ;
				fVar5 = sqrtf(fVar5);
			}
			fVar6 = fVar6 / fVar5;
			auVar2._4_4_ = fVar5;
			auVar2._0_4_ = fVar5;
			auVar2._8_4_ = fVar5;
			auVar2._12_4_ = fVar5;
			auVar7 = divps(auVar7, auVar2);
		}
		local_38 = local_38 + (float)auVar7._0_8_ * 15.0;
		fStack_34 = fStack_34 + (float)((ulong)auVar7._0_8_ >> 0x20) * 15.0;
		fVar4 = fVar4 + fVar6 * 15.0;
	label_05c34e77: ;
		UVar8.y = fStack_34;
		UVar8.x = local_38;
		UVar8.z = fVar4;
		return (Vector3)UVar8;
	}

	[Token(Token = "0x60044E6")]
	[Address(RVA = "0x5B34E90", Offset = "0x5B33E90", VA = "0x5B34E90")]
	[PunRPC]
	public void PlayNapeChunkRPC(Vector3 velocity, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$PlayNapeChunkRPC): clean
		float scale;
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		BasicTitanComponentCache pCVar3;
		Transform neck;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)) {
			if ((info.Sender != pPVar2._Owner_k__BackingField) ||(((this._napeChunkPlayed != false || (this.EffectsEnabled == false)) ||(this._GoreEnabled_k__BackingField == false)))) {
				return;
			}
			this._napeChunkPlayed = true;
			pCVar3 = this.BasicCache;
			if (pCVar3 != null) {
				neck = pCVar3.Neck;
				scale = this.Size;
				TitanNapeChunkEffect.Play(neck, scale, velocity);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044E7")]
	[Address(RVA = "0x5B34F90", Offset = "0x5B33F90", VA = "0x5B34F90", Slot = "153")]
	public override void Kick()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$Kick): clean
		this.Attack("AttackKick");
		return;
	}

	[Token(Token = "0x60044E8")]
	[Address(RVA = "0x5B34FE0", Offset = "0x5B33FE0", VA = "0x5B34FE0", Slot = "150")]
	public override void Attack(string attack)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$Attack): 52 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		float fVar3;
		uint uVar4;
		uint uVar5;
		Rigidbody pUVar6;
		Transform pUVar7;
		long plVar8;
		String a;
		object pIVar9;
		byte[] auVar12 = new byte[16];
		long lVar13;
		bool bVar14;
		sbyte cVar15;
		Dictionary<object, object> pSVar16;
		String b;
		UnityEngine_Vector3_StaticFields pUVar18;
		long lVar20;
		ulong uVar21;
		ulong uVar22;
		uint uVar23;
		uint extraout_XMM0_Db;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float fVar24;
		byte[] auVar25 = new byte[16];
		byte[] auVar26 = new byte[16];
		Vector3 UVar27;
		Vector3 UVar28;
		float fStack_a8;
		object pIStack_48;
		Vector3 UStack_40;
		float fStack_34;
		float fStack_28;
		float fStack_20;
		float fStack_1c;

		pIStack_48 = null;
		if ((((*(sbyte)((long)param_3 + 0x1ad) != false) || (*(sbyte)((long)param_3 + 0x1ae) != false)) ||(*(sbyte)((long)param_3 + 0x1af) != false)) || ((char)param_3[0x36] != false)) {
			pSVar16 = (Dictionary<object, object>)CharacterData.TitanAttackInfos;
			if ((pSVar16 == null) ||(pSVar16 = (Dictionary<object, object>)pSVar16.get_Item((Il2CppObject *)"Titan"), pSVar16 == null)) goto label_05c35b3e;
			bVar14 = pSVar16.TryGetValue((object)param_4, ref pIStack_48);
			if (bVar14) {
				if (pIStack_48 == null) goto label_05c35b3e;
				if (*(sbyte)((long)&pIStack_48[1].klass + 3) != false) {
					if (*(sbyte)((long)param_3 + 0x1ad) != false) {
						return;
					}
					if (*(sbyte)((long)param_3 + 0x1af) != false) {
						return;
					}
				}
				if (*(sbyte)((long)&pIStack_48[1].klass + 4) != false) {
					if (*(sbyte)((long)param_3 + 0x1ae) != false) {
						return;
					}
					if ((char)param_3[0x36] != false) {
						return;
					}
				}
			}
		}
		if (*(sbyte)((long)param_3 + 0xd4) == false) {
			bVar14 = (param_4 == "AttackBellyFlop");
			if (bVar14) {
				return;
			}
			bVar14 = (param_4 == "AttackRockThrow");
			if (bVar14) {
				return;
			}
		}
		if ((char)param_3[0x11] == false) {
			if ((param_3[0x10] == 0) ||(pUVar6 = *(Rigidbody*)(param_3[0x10] + 0x18), pUVar6 == null )) goto label_05c35b3e;
			UVar27 = pUVar6.linearVelocity;
			if ((param_3[0x10] == 0) ||(pUVar6 = *(Rigidbody*)(param_3[0x10] + 0x18), pUVar6 == null )) goto label_05c35b3e;
			UVar28 = pUVar6.linearVelocity;
			param_2 = UVar28.z;
			fStack_a8 = UVar27.x;
			*(float)(param_3 + 0x4b) = fStack_a8;
			*(uint)((long)param_3 + 0x25c) = 0;
			*(float)(param_3 + 0x4c) = param_2;
		}
		(**(code*)(*param_3 + 0xab8))(param_3,param_4,*(ulong)(*param_3 + 0xac0));
		if (param_3[0x55] == 0) goto label_05c35b3e;
		bVar14 = ((String)param_3[0x46] == *(String*)(param_3[0x55] + 0x98));
		if (bVar14) {
			lVar20 = param_3[0x46];
			lVar13 = param_3[0x66];
			*(byte)((long)param_3 + 0x256) = 1;
			if ((AnimationHandler)param_3[0x18] != null) {
				param_3[0x18].SetCullingType(true);
				(**(code*)(*param_3 + 0xc08))(param_3,*(ulong)(*param_3 + 0xc10));
				(**(code*)(*param_3 + 0xd08))(param_3,*(ulong)(*param_3 + 0xd10));
				0x3dcccccd.CrossFade(0, param_3, lVar20);
				*(uint)(param_3 + 0x20) = 10;
				param_3[0x48] = lVar20;
				*(int)((long)param_3 + 0x22c) = (int)lVar13;
				return;
			}
			goto label_05c35b3e;
		}
		if (param_3[0x55] == 0) goto label_05c35b3e;
		bVar14 = ((String)param_3[0x46] == *(String*)(param_3[0x55] + 0x1e0));
		if (bVar14) {
			if ((char)param_3[0x11] == false) {
				lVar20 = (**(code*)(*param_3 + 0x5f8))(param_3,*(ulong)(*param_3 + 0x600));
				param_3[0x6b] = lVar20;
				*(float)(param_3 + 0x6c) = param_2;
			}
			else {
				param_3[0x6d] = 0;
				if ((param_3[0x10] == 0) ||(pUVar7 = *(Transform*)(param_3[0x10] + 0x10), pUVar7 == null)) goto label_05c35b3e;
				UVar27 = pUVar7.forward;
				param_3[0x6e] = UVar27._0_8_;
				*(float)(param_3 + 0x6f) = UVar27.z;
				*(byte)((long)param_3 + 0x37c) = 0;
			}
	label_05c35524: ;
			0x3dcccccd.StateAttack(param_3, param_3[0x46]);
			return;
		}
		plVar8 = (long)param_3[0x55];
		if (plVar8 == null) goto label_05c35b3e;
		a = (String)param_3[0x46];
		b = (String)(**(code*)(*plVar8 + 0x1b8))(plVar8,*(ulong)(*plVar8 + 0x1c0));
		bVar14 = (a == b);
		if (!bVar14) {
			if (param_3[0x55] == 0) goto label_05c35b3e;
			bVar14 = ((String)param_3[0x46] == *(String*)(param_3[0x55] + 0x28));
			if (!bVar14) goto label_05c35524;
			pIVar9 = (object)param_3[0x2d];
			if (pIVar9 != null) {
				cVar15 = pIVar9.ValidTarget();
				if (cVar15 != false) {
					if (param_3[0x2d] == 0) goto label_05c35b3e;
					il2cpp_runtime_helper_02fd8410();
					if ((param_3[0x54] == 0) ||(pUVar7 = *(Transform*)(param_3[0x54] + 0x38), pUVar7 == null)) goto label_05c35b3e;
					pUVar7.position;
					il2cpp_runtime_helper_0599adc0();
					(**(code*)(*param_3 + 0x4d8))(param_3,*(ulong)(*param_3 + 0x4e0));
					il2cpp_runtime_helper_0599adc0();
					goto label_05c35aa2;
				}
			}
			if ((param_3[0x10] == 0) ||(pUVar7 = *(Transform*)(param_3[0x10] + 0x10), pUVar7 == null )) {
	label_05c35b3e: ;
				throw new NullReferenceException();
			}
			UVar27 = pUVar7.forward;
			uVar4 = (Vector3.upVector).x;
			fVar3 = UVar27.x + (float)uVar4;
			goto label_05c35b1e;
		}
		if ((char)param_3[0x11] != false) {
			pIVar9 = (object)param_3[0x2d];
			if (pIVar9 != null) {
				cVar15 = pIVar9.ValidTarget();
				if (cVar15 != false) {
					if (param_3[0x2d] == 0) goto label_05c35b3e;
					il2cpp_runtime_helper_02fd8410();
					if ((param_3[0x54] == 0) ||(pUVar7 = *(Transform*)(param_3[0x54] + 0x38), pUVar7 == null)) goto label_05c35b3e;
					pUVar7.position;
					il2cpp_runtime_helper_0599adc0();
					(**(code*)(*param_3 + 0x4d8))(param_3,*(ulong)(*param_3 + 0x4e0));
					il2cpp_runtime_helper_0599adc0();
	label_05c35aa2: ;
					fVar3 = (float)il2cpp_runtime_helper_059d80e0();
					goto label_05c35b1e;
				}
			}
			fVar3 = (Vector3.upVector).x;
			goto label_05c35b1e;
		}
		uVar21 = (**(code*)(*param_3 + 0x5f8))(param_3);
		if ((param_3[0x54] == 0) ||(pUVar7 = *(Transform*)(param_3[0x54] + 0x38), pUVar7 == null)) goto label_05c35b3e;
		UVar27 = pUVar7.position;
		auVar26._0_4_ = (float)uVar21 - UVar27.x;
		auVar25._4_4_ = (float)((ulong)uVar21 >> 0x20) - UVar27.y;
		param_2 = param_2 - UVar27.z;
		fStack_28 = auVar26._0_4_ * auVar26._0_4_;
		param_2 = param_2 * param_2;
		fVar3 = auVar25._4_4_ * auVar25._4_4_ + fStack_28 + param_2;
		fVar24 = 0.0;
		fStack_20 = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
		fStack_1c = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
		if (fVar3 < 0.0) {
			fVar3 = sqrtf(fVar3);
		}
		else {
			fVar3 = SQRT(fVar3);
		}
		fVar1 = *(float)(param_3 + 0x34);
		uVar22 = (**(code*)(*param_3 + 0x4d8))(param_3,*(ulong)(*param_3 + 0x4e0));
		uVar21._4_4_ = fStack_34;
		uVar21._0_4_ = UStack_40.z;
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			uVar21 = stack0xffffffffffffffc8;
		}
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			uVar21 = stack0xffffffffffffffc8;
		}
		fVar24 = fVar24 * fVar24 + SUB84(unique0x10000bda, 4) * SUB84(unique0x10000bda, 4) +(float)unique0x10000bda * (float)unique0x10000bda;
		if (fVar24 < 0.0) {
			fVar24 = sqrtf(fVar24);
		}
		else {
			fVar24 = SQRT(fVar24);
		}
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			UStack_40.x = 0.0;
			UStack_40.y = 0.0;
			if (Il2CppMethodInitialized_0753e729 != false) goto label_05c3573c;
	label_05c3581d: ;
			UStack_40.x = 0.0;
			UStack_40.y = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
			uVar5 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			UStack_40.x = 0.0;
			UStack_40.y = 0.0;
			if (Il2CppMethodInitialized_0753e729 == false) goto label_05c3581d;
	label_05c3573c: ;
			UStack_40.x = 0.0;
			UStack_40.y = 0.0;
			uVar5 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		fVar3 = auVar25._4_4_ + (fVar3 / fVar1) * fVar24 * 0.5 * (fVar3 / fVar1);
		if (uVar5 == 0) {
		}
		param_2 = param_2 + fStack_28 + fVar3 * fVar3;
		uVar23 = 0;
		if (param_2 < 0.0) {
			param_2 = sqrtf(param_2);
			uVar23 = extraout_XMM0_Db;
		}
		else {
			param_2 = SQRT(param_2);
		}
		if (param_2 <= 1e-05) {
			pUVar18 = typeof(Vector3).static_fields;
		}
		else {
			auVar25._0_4_ = auVar26._0_4_;
			auVar25._8_4_ = auVar25._4_4_;
			auVar25._12_4_ = auVar25._4_4_;
			auVar26._8_8_ = auVar25._8_8_;
			auVar26._4_4_ = fVar3;
			auVar12._4_4_ = param_2;
			auVar12._0_4_ = param_2;
			auVar12._8_4_ = uVar23;
			auVar12._12_4_ = uVar23;
			auVar26 = divps(auVar26, auVar12);
			UStack_40.x = auVar26._0_4_;
			UStack_40.y = auVar26._4_4_;
			pUVar18 = (UnityEngine_Vector3_StaticFields)&UStack_40;
		}
		uVar2 = (pUVar18.zeroVector).x;
		fVar3 = (float)uVar2;
	label_05c35b1e: ;
		(**(code*)(*param_3 + 0xa78))(fVar3,param_3,*(ulong)(*param_3 + 0xa80));
		return;
	}

	[Token(Token = "0x60044E9")]
	[Address(RVA = "0x5B35B50", Offset = "0x5B34B50", VA = "0x5B35B50", Slot = "187")]
	protected override void UpdateAttack()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$UpdateAttack): 166 lines keep C-only constructs
		BasicTitanAnimations* ppCVar1;
		String* ppSVar2;
		BaseCharacter* targetAddress;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		byte bVar8;
		int iVar9;
		uint uVar10;
		BasicTitanAnimations pCVar11;
		BasicTitanComponentCache pCVar12;
		BaseComponentCache pUVar13;
		PhotonView pPVar14;
		bool bVar15;
		bool bVar16;
		int iVar17;
		Transform pUVar19;
		byte puVar20;
		String pSVar21;
		BaseTitanAIController __this_00;
		BaseCharacter pCVar22;
		Object[] pSVar23;
		object pIVar24;
		long lVar25;
		ulong uVar27;
		BaseCharacter target;
		BaseHitbox pCVar28;
		float pfVar29;
		float fVar31;
		float fVar32;
		float fVar33;
		float extraout_XMM0_Db;
		ulong uVar34;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dd;
		uint uVar35;
		float fVar37;
		float fVar38;
		float fVar39;
		Vector3 UVar40;
		Vector3 UVar41;
		Vector3 position;
		Vector3 UVar42;
		Vector3 position_00;
		Vector3 UVar43;
		Vector3 position_01;
		Vector3 UVar44;
		Vector3 position_02;
		Vector3 UVar45;
		Quaternion UVar46;
		Vector3 direction;
		Vector3 direction_00;
		Quaternion rotation;
		Quaternion rotation_00;
		Quaternion rotation_01;
		Vector3 gravity;
		Vector3 velocity;
		ulong uStack_118;
		Quaternion UStack_108;
		ulong uStack_f8;
		float fStack_e8;
		float fStack_e4;
		float fStack_d8;
		float fStack_d4;
		Quaternion UStack_c8;
		Quaternion UStack_b0;
		float fStack_9c;
		byte[] auStack_98 = new byte[8];
		float fStack_90;
		float fStack_8c;
		ulong uStack_88;
		ulong uStack_78;
		ulong uStack_68;
		Quaternion UStack_58;
		byte[] auStack_48 = new byte[16];
		Quaternion UStack_38;

		UStack_38 = (Quaternion)ZEXT816(0);
		uStack_78 = 0;
		uStack_88 = 0;
		uStack_68 = 0;
		fVar31 = this.GetAnimationTime();
		UStack_b0.x = 4.712389;
		UStack_b0.y = 0.0;
		UStack_b0.z = 0.0;
		UVar46 = Quaternion.Internal_FromEulerRad(ref UStack_b0);
		fVar32 = UVar46.w;
		pCVar11 = this.BasicAnimations;
		if (pCVar11 == null) goto label_05c38970;
		fVar37 = fVar32;
		bVar15 = (this._currentAttackAnimation == pCVar11.AttackPunchCombo);
		if (bVar15) {
			iVar9 = this._currentAttackStage;
			if ((0.115 < fVar31) && (iVar9 == 0)) {
				this.PlaySound(TitanSounds.Swing1);
				pCVar12 = this.BasicCache;
				if (pCVar12 == null) goto label_05c38970;
				pCVar28 = pCVar12.HandRHitbox;
				fVar31 = this.GetHitboxTime(0.005);
				fVar32 = this.GetHitboxTime(0.025);
	joined_r0x05c35da3: ;
				if (pCVar28 != null) {
					goto label_05c36315;
				}
				goto label_05c38970;
			}
			if ((fVar31 <= 0.265) || (iVar9 != 1)) {
				if ((fVar31 <= 0.48) || (iVar9 != 2)) {
					if (fVar31 <= 0.52) {
						return;
					}
					if (iVar9 != 3) {
						return;
					}
					pCVar12 = this.BasicCache;
					if (pCVar12 != null) {
						pUVar19 = pCVar12.Transform;
						if (pUVar19 != null) {
							UVar40 = pUVar19.position;
							pCVar12 = this.BasicCache;
							if (pCVar12 != null) {
								pUVar19 = pCVar12.Transform;
								if (pUVar19 != null) {
									UVar41 = pUVar19.forward;
									fVar31 = this.Size;
									fVar32 = UVar41.z * 7.0 * fVar31;
									fVar37 = fVar31 * UVar41.x * 7.0;
									fVar39 = fVar31 * UVar41.y * 7.0;
									if ((typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor == 0) {
										fVar31 = this.Size;
									}
									uStack_118._0_4_ = UVar40.x;
									uStack_118._4_4_ = UVar40.y;
									UVar41.x = (float)uStack_118 + fVar37;
									UVar41.y = uStack_118._4_4_ + fVar39;
									fVar32 = UVar40.z + fVar32;
									pSVar21 = EffectPrefabs.Boom1;
									UVar41.z = fVar32;
									EffectSpawner.Spawn(pSVar21, UVar41, UVar46, fVar31, true, null);
									UVar40.z = fVar32;
									UVar40.x = UVar41.x;
									UVar40.y = UVar41.y;
									this.SpawnShatter(UVar40);
									this._currentAttackStage = 4;
									return;
								}
							}
						}
					}
				}
				else {
					this.PlaySound(TitanSounds.Swing3);
					pCVar12 = this.BasicCache;
					if (pCVar12 != null) {
						pCVar28 = pCVar12.HandLHitbox;
						fVar31 = this.GetHitboxTime(0.02);
						fVar32 = this.GetHitboxTime(0.02);
						if (pCVar28 != null) {
							pCVar28.Activate(fVar31, fVar32);
							pCVar12 = this.BasicCache;
							if (pCVar12 != null) {
								pCVar28 = pCVar12.HandRHitbox;
								fVar31 = this.GetHitboxTime(0.02);
								fVar32 = this.GetHitboxTime(0.02);
								if (pCVar28 != null) {
									pCVar28.Activate(fVar31, fVar32);
									this._currentAttackStage = 3;
									return;
								}
							}
						}
					}
				}
				goto label_05c38970;
			}
			this.PlaySound(TitanSounds.Swing2);
			pCVar12 = this.BasicCache;
			if (pCVar12 == null) goto label_05c38970;
			pCVar28 = pCVar12.HandLHitbox;
			fVar32 = this.GetHitboxTime(0.005);
			fVar31 = this.GetHitboxTime(0.025);
			if (pCVar28 == null) goto label_05c38970;
	label_05c367d6: ;
			pCVar28.Activate(fVar32, fVar31);
			goto label_05c367dc;
		}
		ppCVar1 = &this.BasicAnimations;
		if (*ppCVar1 == null) goto label_05c38970;
		bVar15 = (this._currentAttackAnimation == ((*ppCVar1).fields).AttackPunch);
		if (bVar15) {
			iVar9 = this._currentAttackStage;
			if (this.AI == false) {
				if ((fVar31 <= 0.2) || (iVar9 != 0)) {
					if (fVar31 <= 0.49) {
						return;
					}
					if (iVar9 != 1) {
						return;
					}
					this.PlaySound(TitanSounds.Swing2);
					pCVar12 = this.BasicCache;
					if (pCVar12 == null) goto label_05c38970;
					pCVar28 = pCVar12.HandLHitbox;
					fVar31 = 0.06;
					goto label_05c367b0;
				}
				this.PlaySound(TitanSounds.Swing1);
				pCVar12 = this.BasicCache;
				if (pCVar12 == null) goto label_05c38970;
				pCVar28 = pCVar12.HandRHitbox;
	label_05c362dd: ;
				fVar32 = this.GetHitboxTime(0.06);
			}
			else {
				if ((fVar31 <= 0.22) || (iVar9 != 0)) {
					if (fVar31 <= 0.505) {
						return;
					}
					if (iVar9 != 1) {
						return;
					}
					this.PlaySound(TitanSounds.Swing2);
					pCVar12 = this.BasicCache;
					if (pCVar12 == null) goto label_05c38970;
					pCVar28 = pCVar12.HandLHitbox;
					fVar31 = 0.04;
	label_05c367b0: ;
					fVar31 = this.GetHitboxTime(fVar31);
					if (pCVar28 == null) goto label_05c38970;
					fVar32 = 0.0;
					goto label_05c367d6;
				}
				this.PlaySound(TitanSounds.Swing1);
				pCVar12 = this.BasicCache;
				if (pCVar12 == null) goto label_05c38970;
				pCVar28 = pCVar12.HandRHitbox;
				fVar32 = this.GetHitboxTime(0.04);
			}
	joined_r0x05c35e8b: ;
			if (pCVar28 != null) {
				fVar31 = 0.0;
	label_05c36315: ;
				pCVar28.Activate(fVar31, fVar32);
				this._currentAttackStage = 1;
				return;
			}
			goto label_05c38970;
		}
		if (*ppCVar1 == null) goto label_05c38970;
		bVar15 = (this._currentAttackAnimation == ((*ppCVar1).fields).AttackSlam);
		if (bVar15) {
			iVar9 = this._currentAttackStage;
			if ((fVar31 <= 0.42) || (iVar9 != 0)) {
				if (fVar31 <= 0.45) {
					return;
				}
				if (iVar9 != 1) {
					return;
				}
				pCVar12 = this.BasicCache;
				if (pCVar12 == null) goto label_05c38970;
				pUVar19 = pCVar12.Transform;
				if (pUVar19 == null) goto label_05c38970;
				UVar40 = pUVar19.position;
				pCVar12 = this.BasicCache;
				if (pCVar12 == null) goto label_05c38970;
				pUVar19 = pCVar12.Transform;
				if (pUVar19 == null) goto label_05c38970;
				UVar41 = pUVar19.forward;
				fVar31 = this.Size;
				fVar37 = UVar41.z * 7.0 * fVar31;
				uStack_f8._0_4_ = fVar31 * UVar41.x * 7.0;
				fVar32 = fVar31 * UVar41.y * 7.0;
				if ((typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor == 0) {
					fVar31 = this.Size;
				}
				uStack_118._0_4_ = UVar40.x;
				uStack_118._4_4_ = UVar40.y;
				uStack_f8._0_4_ = (float)uStack_118 + (float)uStack_f8;
				fVar32 = uStack_118._4_4_ + fVar32;
				fVar37 = UVar40.z + fVar37;
				pSVar21 = EffectPrefabs.Boom1;
				uStack_118 = CONCAT44(fVar32, (float)uStack_f8);
	label_05c3662d: ;
				position.y = fVar32;
				position.x = (float)uStack_f8;
				position.z = fVar37;
				EffectSpawner.Spawn(pSVar21, position, UVar46, fVar31, true, null);
				UVar42.z = fVar37;
				UVar42.x = (float)uStack_118;
				UVar42.y = uStack_118._4_4_;
				this.SpawnShatter(UVar42);
				goto label_05c367dc;
			}
			this.PlaySound(TitanSounds.Swing3);
			pCVar12 = this.BasicCache;
			if (pCVar12 == null) goto label_05c38970;
			pCVar28 = pCVar12.HandLHitbox;
			fVar31 = this.GetHitboxTime(0.02);
			fVar32 = this.GetHitboxTime(0.01);
			if (pCVar28 == null) goto label_05c38970;
			pCVar28.Activate(fVar31, fVar32);
			pCVar12 = this.BasicCache;
			if (pCVar12 == null) goto label_05c38970;
			pCVar28 = pCVar12.HandRHitbox;
			fVar31 = this.GetHitboxTime(0.02);
			fVar32 = this.GetHitboxTime(0.01);
			goto joined_r0x05c35da3;
		}
		if (*ppCVar1 == null) goto label_05c38970;
		bVar15 = (this._currentAttackAnimation == ((*ppCVar1).fields).AttackBellyFlop);
		if (bVar15) {
			iVar9 = this._currentAttackStage;
			if ((fVar31 <= 0.65) || (iVar9 != 0)) {
				if ((fVar31 <= 0.805) || (iVar9 != 1)) {
					if (iVar9 != 2) {
						return;
					}
					pfVar29 = &this._stateTimeLeft;
					if (1.1 < *pfVar29 || *pfVar29 == 1.1) {
						return;
					}
					this._currentAttackStage = 3;
					pCVar11 = this.BasicAnimations;
					if (pCVar11 != null) {
						this.CrossFade(pCVar11.AttackBellyFlopGetup, 0.1, 0.0);
						return;
					}
					goto label_05c38970;
				}
				this._currentAttackStage = 2;
				pUVar13 = this.Cache;
				if (pUVar13 == null) goto label_05c38970;
				pUVar19 = pUVar13.Transform;
				if (pUVar19 == null) goto label_05c38970;
				UVar40 = pUVar19.position;
				pUVar13 = this.Cache;
				if (pUVar13 == null) goto label_05c38970;
				pUVar19 = pUVar13.Transform;
				if (pUVar19 == null) goto label_05c38970;
				UVar41 = pUVar19.forward;
				pUVar13 = this.Cache;
				uStack_118._0_4_ = UVar40.x;
				uStack_118._4_4_ = UVar40.y;
				if (pUVar13 == null) goto label_05c38970;
				pUVar19 = pUVar13.Transform;
				if (pUVar19 == null) goto label_05c38970;
				uStack_118._0_4_ = (float)uStack_118 + UVar41.x * 5.0;
				uStack_118._4_4_ = uStack_118._4_4_ + UVar41.y * 5.0;
				fVar37 = UVar40.z + UVar41.z * 5.0;
				pSVar21 = EffectPrefabs.Boom4;
				UStack_38 = (Quaternion)pUVar19.rotation;
				il2cpp_runtime_helper_05bbd050(&UStack_38);
				UStack_b0.y = extraout_XMM0_Db * 0.017453292;
				UStack_b0.x = 4.712389;
				UStack_b0.z = 0.0;
				UVar46 = Quaternion.Internal_FromEulerRad(ref UStack_b0);
				fStack_d8 = UVar46.z;
				fVar32 = UVar46.w;
				fStack_e4 = UVar46.y;
				fVar31 = this.Size;
				fStack_e8 = UVar46.x;
				goto label_05c36a72;
			}
			this._currentAttackStage = 1;
			pCVar12 = this.BasicCache;
			if (pCVar12 == null) goto label_05c38970;
			pCVar28 = pCVar12.BodyHitbox;
			fVar31 = 0.155;
	label_05c3670e: ;
			fVar31 = this.GetHitboxTime(fVar31);
			if (pCVar28 != null) {
				pCVar28.Activate(0.0, fVar31);
				return;
			}
			goto label_05c38970;
		}
		pCVar11 = this.BasicAnimations;
		if (pCVar11 == null) goto label_05c38970;
		ppSVar2 = &this._currentStateAnimation;
		bVar15 = (*ppSVar2 == pCVar11.AttackHitBack);
		if (bVar15) {
	label_05c366ba: ;
			iVar9 = this._currentAttackStage;
			if ((fVar31 <= 0.635) || (iVar9 != 0)) {
				if (fVar31 <= 0.68) {
					return;
				}
				if (iVar9 != 1) {
					return;
				}
				this._currentAttackStage = 2;
				pCVar12 = this.BasicCache;
				if (pCVar12 != null) {
					pCVar28 = pCVar12.HandRHitbox;
					if (pCVar28 != null) {
						pSVar21 = EffectPrefabs.Boom3;
						pUVar19 = pCVar28.transform ;
						if (pUVar19 != null) {
							UVar40 = pUVar19.position;
							fVar37 = UVar40.z;
							uStack_118._0_4_ = UVar40.x;
							uStack_118._4_4_ = UVar40.y;
							fVar31 = this.Size;
							fStack_e8 = UVar46.x;
							fStack_e4 = UVar46.y;
							fStack_d8 = UVar46.z;
	label_05c36a72: ;
							UVar45.y = uStack_118._4_4_;
							UVar45.x = (float)uStack_118;
							UVar45.z = fVar37;
							UVar46.y = fStack_e4;
							UVar46.x = fStack_e8;
							UVar46.w = fVar32;
							UVar46.z = fStack_d8;
							EffectSpawner.Spawn(pSVar21, UVar45, UVar46, fVar31, true, null);
							return;
						}
					}
				}
				goto label_05c38970;
			}
			this._currentAttackStage = 1;
			pCVar12 = this.BasicCache;
			if (pCVar12 == null) goto label_05c38970;
			pCVar28 = pCVar12.HandRHitbox;
			fVar31 = 0.055;
			goto label_05c3670e;
		}
		if (*ppCVar1 == null) goto label_05c38970;
		bVar15 = (*ppSVar2 == ((*ppCVar1).fields).AttackHitFace);
		if (bVar15) goto label_05c366ba;
		pSVar21 = this._currentAttack;
		if (pSVar21 == null) goto label_05c38970;
		bVar15 = pSVar21.StartsWith("AttackSlap");
		if (bVar15) {
			if (this._currentAttackStage != 0) {
				return;
			}
			uVar27 = (ulong)(this.AI == false);
			if (fVar31 < *(float)(&g_data_0100ad38 + uVar27 * 4) || fVar31 == *(float)(&g_data_0100ad38 + uVar27 * 4)) {
				return;
			}
			this.PlaySound(TitanSounds.Swing1);
			pCVar11 = this.BasicAnimations;
			if (pCVar11 == null) goto label_05c38970;
			uStack_118._0_4_ = *(float)(&g_data_0100aa78 + uVar27 * 4);
			bVar15 = (*ppSVar2 == pCVar11.AttackSlapL);
			if (bVar15) {
	label_05c36bee: ;
				pCVar12 = this.BasicCache;
				if (pCVar12 == null) goto label_05c38970;
				pCVar28 = pCVar12.HandLHitbox;
			}
			else {
				if (*ppCVar1 == null) goto label_05c38970;
				bVar15 = (*ppSVar2 == ((*ppCVar1).fields).AttackSlapHighL);
				if (bVar15) goto label_05c36bee;
				if (*ppCVar1 == null) goto label_05c38970;
				bVar15 = (*ppSVar2 == ((*ppCVar1).fields).AttackSlapLowL);
				if (bVar15) goto label_05c36bee;
				pCVar12 = this.BasicCache;
				if (pCVar12 == null) goto label_05c38970;
				pCVar28 = pCVar12.HandRHitbox;
			}
	label_05c36c05: ;
			fVar32 = this.GetHitboxTime((float)uStack_118);
			goto joined_r0x05c35e8b;
		}
		if (*ppCVar1 == null) goto label_05c38970;
		bVar15 = (this._currentAttackAnimation == ((*ppCVar1).fields).AttackKick);
		if (bVar15) {
			iVar9 = this._currentAttackStage;
			if ((fVar31 <= 0.39) || (iVar9 != 0)) {
				if (fVar31 <= 0.43) {
					return;
				}
				if (iVar9 != 1) {
					return;
				}
				this._currentAttackStage = 2;
				pCVar12 = this.BasicCache;
				if (pCVar12 != null) {
					pCVar28 = pCVar12.FootLHitbox;
					if (pCVar28 != null) {
						pUVar19 = pCVar28.transform ;
						if (pUVar19 != null) {
							UVar40 = pUVar19.position;
							position_00.z = UVar40.z;
							pCVar12 = this.BasicCache;
							if (pCVar12 != null) {
								pUVar19 = pCVar12.Transform;
								if (pUVar19 != null) {
									UVar41 = pUVar19.position;
									pCVar12 = this.BasicCache;
									if (pCVar12 != null) {
										pUVar19 = pCVar12.Transform;
										if (pUVar19 != null) {
											fStack_e8 = UVar40.x;
											pSVar21 = EffectPrefabs.Boom5;
											UVar46 = pUVar19.rotation;
											fVar31 = this.Size;
											position_00.x = fStack_e8;
											position_00.y = UVar41.y;
											EffectSpawner.Spawn(pSVar21, position_00, UVar46, fVar31, true, null);
											UVar43.z = position_00.z;
											UVar43.x = fStack_e8;
											UVar43.y = UVar41.y;
											this.SpawnShatter(UVar43);
											return;
										}
									}
								}
							}
						}
					}
				}
				goto label_05c38970;
			}
			pCVar12 = this.BasicCache;
			if (pCVar12 == null) goto label_05c38970;
			pCVar28 = pCVar12.FootLHitbox;
	label_05c36c8a: ;
			fVar32 = this.GetHitboxTime(0.09);
			goto joined_r0x05c35e8b;
		}
		if (*ppCVar1 == null) goto label_05c38970;
		bVar15 = (this._currentAttackAnimation == ((*ppCVar1).fields).AttackStomp);
		if (bVar15) {
			iVar9 = this._currentAttackStage;
			if ((fVar31 <= 0.38) || (iVar9 != 0)) {
				if (fVar31 <= 0.43) {
					return;
				}
				if (iVar9 != 1) {
					return;
				}
				this._currentAttackStage = 2;
				pCVar12 = this.BasicCache;
				if (pCVar12 != null) {
					pCVar28 = pCVar12.FootLHitbox;
					if (pCVar28 != null) {
						pUVar19 = pCVar28.transform ;
						if (pUVar19 != null) {
							UVar40 = pUVar19.position;
							position_01.z = UVar40.z;
							pCVar12 = this.BasicCache;
							if (pCVar12 != null) {
								pUVar19 = pCVar12.Transform;
								if (pUVar19 != null) {
									UVar41 = pUVar19.position;
									position_01.y = UVar41.y;
									uStack_f8._0_4_ = UVar40.x;
									pSVar21 = EffectPrefabs.Boom2;
									fVar31 = this.Size;
									position_01.x = (float)uStack_f8;
									EffectSpawner.Spawn(pSVar21, position_01, UVar46, fVar31, true, null);
									UVar44.z = position_01.z;
									UVar44.x = (float)uStack_f8;
									UVar44.y = position_01.y;
									this.SpawnShatter(UVar44);
									return;
								}
							}
						}
					}
				}
				goto label_05c38970;
			}
			pCVar12 = this.BasicCache;
			if (pCVar12 == null) goto label_05c38970;
			pCVar28 = pCVar12.FootLHitbox;
			goto label_05c362dd;
		}
		pSVar21 = this._currentAttack;
		if (pSVar21 == null) goto label_05c38970;
		bVar15 = pSVar21.StartsWith("AttackSwing");
		if (bVar15) {
			iVar9 = this._currentAttackStage;
			if ((fVar31 <= 0.41) || (iVar9 != 0)) {
				if (fVar31 <= 0.45) {
					return;
				}
				if (iVar9 != 1) {
					return;
				}
				if (*ppCVar1 == null) goto label_05c38970;
				bVar15 = (this._currentStateAnimation == ((*ppCVar1).fields).AttackSwingL);
				pCVar12 = this.BasicCache;
				if (bVar15) {
					if (pCVar12 == null) goto label_05c38970;
					pCVar28 = pCVar12.HandLHitbox;
				}
				else {
					if (pCVar12 == null) goto label_05c38970;
					pCVar28 = pCVar12.HandRHitbox;
				}
				if (pCVar28 == null) goto label_05c38970;
				pUVar19 = pCVar28.transform;
				if (pUVar19 == null) goto label_05c38970;
				UVar40 = pUVar19.position;
				fVar37 = UVar40.z;
				pCVar12 = this.BasicCache;
				if (pCVar12 == null) goto label_05c38970;
				pUVar19 = pCVar12.Transform;
				if (pUVar19 == null) goto label_05c38970;
				UVar41 = pUVar19.position;
				fVar32 = UVar41.y;
				uStack_f8._0_4_ = UVar40.x;
				pSVar21 = EffectPrefabs.Boom1;
				fVar31 = this.Size;
				uStack_118 = CONCAT44(fVar32, (float)uStack_f8);
				goto label_05c3662d;
			}
			this.PlaySound(TitanSounds.Swing1);
			pCVar11 = this.BasicAnimations;
			if (pCVar11 == null) goto label_05c38970;
			bVar15 = (this._currentStateAnimation == pCVar11.AttackSwingL);
			pCVar12 = this.BasicCache;
			if (bVar15) {
				if (pCVar12 == null) goto label_05c38970;
				pCVar28 = pCVar12.HandLHitbox;
			}
			else {
				if (pCVar12 == null) goto label_05c38970;
				pCVar28 = pCVar12.HandRHitbox;
			}
			fVar31 = this.GetHitboxTime(0.02);
			fVar32 = this.GetHitboxTime(0.02);
			goto joined_r0x05c35da3;
		}
		pSVar21 = this._currentAttack;
		if (pSVar21 == null) goto label_05c38970;
		bVar15 = pSVar21.StartsWith("AttackBite");
		if (bVar15) {
			if (*ppCVar1 == null) goto label_05c38970;
			bVar16 = (this._currentStateAnimation == ((*ppCVar1).fields).AttackBiteF);
			bVar15 = this.AI;
			uVar27 = (ulong)(bVar15 == false);
			pfVar29 = (float)(&g_data_0100afa8 + uVar27 * 4);
			if (bVar16) {
				pfVar29 = (float)(&g_data_0100aea0 + uVar27 * 4);
			}
			iVar9 = this._currentAttackStage;
			if ((iVar9 != 0) || (fVar31 < *pfVar29 || fVar31 == *pfVar29)) {
				puVar20 = &g_data_0100ac08;
				if (bVar16) {
					puVar20 = &g_data_0100af30;
				}
				if (iVar9 != 1) {
					return;
				}
				if (fVar31 < *(float)(puVar20 + (ulong)(bVar15 == false) * 4) || fVar31 == *(float)(puVar20 + (ulong)(bVar15 == false) * 4)) {
					return;
				}
				pCVar12 = this.BasicCache;
				if (pCVar12 == null) goto label_05c38970;
				pCVar28 = pCVar12.MouthHitbox;
				if (pCVar28 == null) goto label_05c38970;
				pUVar19 = pCVar28.transform;
				if (pUVar19 == null) goto label_05c38970;
				UVar40 = pUVar19.position;
				UVar41 = pUVar19.up;
				fVar31 = this.Size;
				fVar32 = UVar41.z * fVar31;
				auStack_98._4_4_ = fVar31 * UVar41.y;
				auStack_98._0_4_ = fVar31 * UVar41.x;
				fStack_90 = fVar31 * extraout_XMM0_Dc;
				fStack_8c = fVar31 * extraout_XMM0_Dd;
				if ((typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor == 0) {
					fVar31 = this.Size;
				}
				uStack_118._0_4_ = UVar40.x;
				uStack_118._4_4_ = UVar40.y;
				position_02.x = (float)uStack_118 + (float)auStack_98._0_4_;
				position_02.y = uStack_118._4_4_ + (float)auStack_98._4_4_;
				position_02.z = UVar40.z + fVar32;
				pSVar21 = EffectPrefabs.TitanBite;
				EffectSpawner.Spawn(pSVar21, position_02, UVar46, fVar31, true, null);
				pSVar21 = TitanSounds.GetRandomBite();
				this.PlaySound(pSVar21);
				goto label_05c367dc;
			}
			pCVar12 = this.BasicCache;
			if (pCVar12 == null) goto label_05c38970;
			pCVar28 = pCVar12.MouthHitbox;
			goto label_05c36c8a;
		}
		pSVar21 = this._currentAttack;
		if (pSVar21 == null) goto label_05c38970;
		bVar15 = pSVar21.StartsWith("AttackBrush");
		if (bVar15) {
			if (this._currentAttackStage != 0) {
				return;
			}
			uVar27 = (ulong)(this.AI == false);
			if (fVar31 < *(float)(&g_data_0100ac48 + uVar27 * 4) || fVar31 == *(float)(&g_data_0100ac48 + uVar27 * 4)) {
				return;
			}
			this.PlaySound(TitanSounds.Swing1);
			pCVar11 = this.BasicAnimations;
			if (pCVar11 == null) goto label_05c38970;
			uStack_118._0_4_ = *(float)(&g_data_0100ab98 + uVar27 * 4);
			bVar15 = (this._currentStateAnimation == pCVar11.AttackBrushChestL);
			pCVar12 = this.BasicCache;
			if (bVar15) {
				if (pCVar12 == null) goto label_05c38970;
				pCVar28 = pCVar12.HandLHitbox;
			}
			else {
				if (pCVar12 == null) goto label_05c38970;
				pCVar28 = pCVar12.HandRHitbox;
			}
			goto label_05c36c05;
		}
		pSVar21 = this._currentAttack;
		if (pSVar21 == null) goto label_05c38970;
		bVar15 = pSVar21.StartsWith("AttackGrab");
		if (bVar15) {
			if (this._currentAttackStage != 0) {
				return;
			}
			this._currentAttackStage = 1;
			pCVar11 = this.BasicAnimations;
			if (pCVar11 == null) goto label_05c38970;
			bVar15 = (*ppSVar2 == pCVar11.AttackGrabCoreL);
			if (bVar15) {
				pCVar12 = this.BasicCache;
				if (pCVar12 == null) goto label_05c38970;
				pCVar28 = pCVar12.HandLHitbox;
	label_05c3772a: ;
				fVar31 = this.GetHitboxTime(0.41);
				fVar32 = 0.12;
	label_05c3775d: ;
				fVar32 = this.GetHitboxTime(fVar32);
			}
			else {
				if (*ppCVar1 == null) goto label_05c38970;
				bVar15 = (*ppSVar2 == ((*ppCVar1).fields).AttackGrabCoreR);
				if (bVar15) {
					pCVar12 = this.BasicCache;
					if (pCVar12 == null) goto label_05c38970;
					pCVar28 = pCVar12.HandRHitbox;
					goto label_05c3772a;
				}
				if (*ppCVar1 == null) goto label_05c38970;
				bVar15 = (*ppSVar2 == ((*ppCVar1).fields).AttackGrabBackL);
				if (bVar15) {
					pCVar12 = this.BasicCache;
					if (pCVar12 == null) goto label_05c38970;
					pCVar28 = pCVar12.HandLHitbox;
					fVar31 = 0.32;
	label_05c37954: ;
					fVar31 = this.GetHitboxTime(fVar31);
					fVar32 = 0.16;
					goto label_05c3775d;
				}
				if (*ppCVar1 == null) goto label_05c38970;
				bVar15 = (*ppSVar2 == ((*ppCVar1).fields).AttackGrabBackR);
				if (bVar15) {
					pCVar12 = this.BasicCache;
					if (pCVar12 == null) goto label_05c38970;
					pCVar28 = pCVar12.HandRHitbox;
					fVar31 = this.GetHitboxTime(0.38);
					fVar32 = 0.3;
					goto label_05c3775d;
				}
				if (*ppCVar1 == null) goto label_05c38970;
				bVar15 = (*ppSVar2 == ((*ppCVar1).fields).AttackGrabStomachL);
				if (bVar15) {
					pCVar12 = this.BasicCache;
					if (pCVar12 == null) goto label_05c38970;
					pCVar28 = pCVar12.HandLHitbox;
	label_05c384c7: ;
					fVar31 = this.GetHitboxTime(0.35);
					fVar32 = 0.19;
					goto label_05c3775d;
				}
				if (*ppCVar1 == null) goto label_05c38970;
				bVar15 = (*ppSVar2 == ((*ppCVar1).fields).AttackGrabStomachR);
				if (bVar15) {
					pCVar12 = this.BasicCache;
					if (pCVar12 == null) goto label_05c38970;
					pCVar28 = pCVar12.HandRHitbox;
					goto label_05c384c7;
				}
				if (*ppCVar1 == null) goto label_05c38970;
				bVar15 = (*ppSVar2 == ((*ppCVar1).fields).AttackGrabHeadBackL) ;
				if (bVar15) {
					pCVar12 = this.BasicCache;
					if (pCVar12 == null) goto label_05c38970;
					pCVar28 = pCVar12.HandRHitbox;
	label_05c38573: ;
					fVar31 = 0.46;
	label_05c38585: ;
					fVar31 = this.GetHitboxTime(fVar31);
					fVar32 = 0.05;
					goto label_05c3775d;
				}
				if (*ppCVar1 == null) goto label_05c38970;
				bVar15 = (*ppSVar2 == ((*ppCVar1).fields).AttackGrabHeadBackR) ;
				if (bVar15) {
					pCVar12 = this.BasicCache;
					if (pCVar12 == null) goto label_05c38970;
					pCVar28 = pCVar12.HandLHitbox;
					goto label_05c38573;
				}
				if (*ppCVar1 == null) goto label_05c38970;
				bVar15 = (*ppSVar2 == ((*ppCVar1).fields).AttackGrabHeadFrontL);
				if (bVar15) {
					pCVar12 = this.BasicCache;
					if (pCVar12 == null) goto label_05c38970;
					pCVar28 = pCVar12.HandLHitbox;
	label_05c3861f: ;
					fVar31 = this.GetHitboxTime(0.42);
					fVar32 = 0.25;
					goto label_05c3775d;
				}
				if (*ppCVar1 == null) goto label_05c38970;
				bVar15 = (*ppSVar2 == ((*ppCVar1).fields).AttackGrabHeadFrontR);
				if (bVar15) {
					pCVar12 = this.BasicCache;
					if (pCVar12 == null) goto label_05c38970;
					pCVar28 = pCVar12.HandRHitbox;
					goto label_05c3861f;
				}
				if (*ppCVar1 == null) goto label_05c38970;
				bVar15 = (*ppSVar2 == ((*ppCVar1).fields).AttackGrabGroundFrontL);
				if (bVar15) {
					pCVar12 = this.BasicCache;
					if (pCVar12 == null) goto label_05c38970;
					pCVar28 = pCVar12.HandLHitbox;
	label_05c386cb: ;
					fVar31 = 0.42;
					goto label_05c37954;
				}
				if (*ppCVar1 == null) goto label_05c38970;
				bVar15 = (*ppSVar2 == ((*ppCVar1).fields).AttackGrabGroundFrontR);
				if (bVar15) {
					pCVar12 = this.BasicCache;
					if (pCVar12 == null) goto label_05c38970;
					pCVar28 = pCVar12.HandRHitbox;
					goto label_05c386cb;
				}
				if (*ppCVar1 == null) goto label_05c38970;
				bVar15 = (*ppSVar2 == ((*ppCVar1).fields).AttackGrabGroundBackL);
				if (bVar15) {
					pCVar12 = this.BasicCache;
					if (pCVar12 == null) goto label_05c38970;
					pCVar28 = pCVar12.HandLHitbox;
					fVar31 = 0.35;
					goto label_05c38585;
				}
				if (*ppCVar1 == null) goto label_05c38970;
				bVar15 = (*ppSVar2 == ((*ppCVar1).fields).AttackGrabGroundBackR);
				if (bVar15) {
					pCVar12 = this.BasicCache;
					if (pCVar12 == null) goto label_05c38970;
					pCVar28 = pCVar12.HandRHitbox;
					fVar31 = this.GetHitboxTime(0.35);
					fVar32 = 0.05;
				}
				else {
					if (*ppCVar1 == null) goto label_05c38970;
					bVar15 = (*ppSVar2 == ((*ppCVar1).fields).AttackGrabAirL);
					if (bVar15) {
						pCVar12 = this.BasicCache;
						if (pCVar12 == null) goto label_05c38970;
						pCVar28 = pCVar12.HandLHitbox;
						fVar31 = this.GetHitboxTime(0.3);
						fVar32 = 0.15;
					}
					else {
						if (*ppCVar1 == null) goto label_05c38970;
						bVar15 = (*ppSVar2 == ((*ppCVar1).fields).AttackGrabAirR);
						if (bVar15) {
	label_05c38893: ;
							pCVar12 = this.BasicCache;
							if (pCVar12 == null) goto label_05c38970;
							pCVar28 = pCVar12.HandRHitbox;
	label_05c388aa: ;
							fVar31 = 0.38;
						}
						else {
							if (*ppCVar1 == null) goto label_05c38970;
							bVar15 = (*ppSVar2 == ((*ppCVar1).fields).AttackGrabAirFarL);
							if (bVar15) {
								pCVar12 = this.BasicCache;
								if (pCVar12 == null) goto label_05c38970;
								pCVar28 = pCVar12.HandLHitbox;
								goto label_05c388aa;
							}
							if (*ppCVar1 == null) goto label_05c38970;
							bVar15 = (*ppSVar2 == ((*ppCVar1).fields).AttackGrabAirFarR);
							if (bVar15) goto label_05c38893;
							if (*ppCVar1 == null) goto label_05c38970;
							bVar15 = (*ppSVar2 == ((*ppCVar1).fields).AttackGrabHighL);
							if (bVar15) {
								pCVar12 = this.BasicCache;
								if (pCVar12 == null) goto label_05c38970;
								pCVar28 = pCVar12.HandLHitbox;
							}
							else {
								if (*ppCVar1 == null) goto label_05c38970;
								bVar15 = (*ppSVar2 == ((*ppCVar1).fields).AttackGrabHighR);
								if (!bVar15) {
									return;
								}
								pCVar12 = this.BasicCache;
								if (pCVar12 == null) goto label_05c38970;
								pCVar28 = pCVar12.HandRHitbox;
							}
							fVar31 = 0.3;
						}
						fVar31 = this.GetHitboxTime(fVar31);
						fVar32 = 0.17;
					}
				}
				fVar32 = this.GetHitboxTime(fVar32);
			}
			if (pCVar28 != null) {
				pCVar28.Activate(fVar31, fVar32);
				return;
			}
			goto label_05c38970;
		}
		if (*ppCVar1 == null) goto label_05c38970;
		bVar15 = (this._currentAttackAnimation == ((*ppCVar1).fields).AttackRockThrow);
		if (!bVar15) {
			return;
		}
		pCVar12 = this.BasicCache;
		if (pCVar12 == null) goto label_05c38970;
		pCVar28 = pCVar12.HandRHitbox;
		if (pCVar28 == null) goto label_05c38970;
		pUVar19 = pCVar28.transform;
		if (pUVar19 == null) goto label_05c38970;
		UVar40 = pUVar19.position;
		fVar32 = UVar40.z;
		fStack_d8 = UVar40.x;
		if (this.AI == false) {
			UVar41 = this.GetAimPoint();
			fVar39 = UVar41.z;
			this._rockThrowTarget.x = UVar41.x;
			this._rockThrowTarget.y = UVar41.y;
			this._rockThrowTarget.z = fVar39;
			if ((0.1 < fVar31) && (this._currentAttackStage == 0)) {
				this.PlaySound(TitanSounds.RockPickup);
				this._currentAttackStage = 1;
				pSVar21 = SpawnablePrefabs.Rock1;
				uStack_f8 = il2cpp_runtime_helper_05c3e430(0);
				fVar38 = this.Size;
				pSVar23 = (Object[])new object[1];
				pUVar13 = this.Cache;
				if ((pUVar13 == null) ||(pPVar14 = pUVar13.PhotonView, pPVar14 == null)) goto label_05c38970;
				UStack_b0.x = (float)pPVar14.viewIdField;
				pIVar24 = (object)UStack_b0;
				if (pSVar23 == null) goto label_05c38970;
				il2cpp_codegen_array_element_type_check((Array)pSVar23, pIVar24);
				il2cpp_runtime_helper_02ac8d90(pSVar23, 0, pIVar24);
				rotation.z = fVar39;
				rotation.w = fVar37;
				rotation.x = (float)uStack_f8;
				rotation.y = (float)uStack_f8._4_4_;
				SpawnableSpawner.Spawn(pSVar21, UVar40, rotation, fVar38 * 1.5, pSVar23);
			}
		}
		else {
			if ((0.1 < fVar31) && (this._currentAttackStage == 0)) {
				__this_00 = this.GetComponent<BaseTitanAIController>();
				pCVar22 = (BaseCharacter)this.TargetEnemy;
				if (pCVar22 == null) {
	label_05c376d1: ;
					target = null;
				}
				else {
					bVar8 = (typeof(BaseCharacter)._2).typeHierarchyDepth;
					if ((pCVar22.klass._2).typeHierarchyDepth < bVar8) goto label_05c376d1;
					target = null;
					if ((pCVar22.klass._2).typeHierarchy[(ulong)bVar8 - 1] ==typeof(BaseCharacter)) {
						target = pCVar22;
					}
				}
				if (__this_00 == null) goto label_05c38970;
				uVar35 = 0;
				fVar37 = fVar32;
				bVar15 = __this_00.HasRockThrowLineOfSight(UVar40, target);
				if (bVar15) {
					this._rockThrowTargetCharacter = target;
				}
				else {
					uVar35 = 0;
					fVar37 = fVar32;
					pCVar22 = __this_00.FindRockThrowTarget(UVar40, true);
					this._rockThrowTargetCharacter = pCVar22;
				}
				pCVar22 = this._rockThrowTargetCharacter;
				bVar15 = ((Object)pCVar22 == null);
				if (bVar15) {
					targetAddress = &this._rockThrowTargetCharacter;
					uVar35 = 0;
					fVar37 = fVar32;
					pCVar22 = __this_00.FindRockThrowTarget(UVar40, false);
					*targetAddress = pCVar22;
				}
				this.PlaySound(TitanSounds.RockPickup);
				this._currentAttackStage = 1;
				pSVar21 = SpawnablePrefabs.Rock1;
				uStack_f8 = il2cpp_runtime_helper_05c3e430(0);
				fVar39 = this.Size;
				pSVar23 = (Object[])new object[1];
				pUVar13 = this.Cache;
				if (pUVar13 == null) goto label_05c38970;
				pPVar14 = pUVar13.PhotonView;
				if (pPVar14 == null) goto label_05c38970;
				UStack_b0.x = (float)pPVar14.viewIdField;
				pIVar24 = (object)UStack_b0;
				if (pSVar23 == null) goto label_05c38970;
				il2cpp_codegen_array_element_type_check((Array)pSVar23, pIVar24);
				il2cpp_runtime_helper_02ac8d90(pSVar23, 0, pIVar24);
				rotation_00.z = fVar37;
				rotation_00.w = (float)uVar35;
				rotation_00.x = (float)uStack_f8;
				rotation_00.y = (float)uStack_f8._4_4_;
				SpawnableSpawner.Spawn(pSVar21, UVar40, rotation_00, fVar39 * 1.5, pSVar23);
			}
			pCVar22 = this._rockThrowTargetCharacter;
			bVar15 = ((Object)pCVar22 != null);
			if (bVar15) {
				pCVar22 = this._rockThrowTargetCharacter;
				if (pCVar22 == null) goto label_05c38970;
				bVar15 = pCVar22.ValidTarget();
				if (bVar15) {
					pCVar22 = this._rockThrowTargetCharacter;
					if (pCVar22 == null) goto label_05c38970;
					UVar41 = pCVar22.GetPosition();
					fVar37 = (float)il2cpp_runtime_helper_05956b50(fStack_d8, fVar32, UVar41.x, UVar41.z, 0);
					pCVar22 = this._rockThrowTargetCharacter;
					if (pCVar22 == null) goto label_05c38970;
					fVar39 = fVar37 / this.RockThrow1Speed;
					UVar41 = pCVar22.GetPosition();
					auStack_98._0_4_ = UVar41.z;
					pCVar22 = this._rockThrowTargetCharacter;
					if (pCVar22 == null) goto label_05c38970;
					fVar37 = fVar37 / 120.0;
					fVar38 = 1.0;
					if (fVar37 <= 1.0) {
						fVar38 = fVar37;
					}
					fVar38 = (float)(-(uint)(0.0 <= fVar37) & (uint)fVar38);
					UVar45 = pCVar22.GetVelocity();
					UStack_c8.x = UVar41.x;
					UStack_c8.y = UVar41.y;
					this._rockThrowTarget.x = UStack_c8.x + fVar38 * fVar39 * UVar45.x;
					this._rockThrowTarget.y = UStack_c8.y + fVar38 * fVar39 * UVar45.y;
					this._rockThrowTarget.z =(float)auStack_98._0_4_ + UVar45.z * fVar39 * fVar38;
				}
			}
		}
		fStack_d4 = UVar40.y;
		if (this.AI == false) {
	label_05c37d3c: ;
			pUVar13 = this.Cache;
			if ((pUVar13 == null) ||(pUVar19 = pUVar13.Transform, pUVar19 == null)) goto label_05c38970;
			UVar41 = pUVar19.forward;
			UStack_c8._0_8_ = UVar41._0_8_;
			auStack_98._0_4_ = UVar41.z;
	label_05c37d6e: ;
			uVar3 = this._rockThrowTarget.x;
			uVar6 = this._rockThrowTarget.y;
			fVar39 = this._rockThrowTarget.z - fVar32;
			uStack_78 = CONCAT44((float)uVar6 - fStack_d4, (float)uVar3 - fStack_d8);
			fVar37 = fVar39;
			uVar35 = il2cpp_runtime_helper_05bbcf10(0);
			uStack_88 = il2cpp_runtime_helper_05bbcf50((float)uVar3 - fStack_d8, fVar39, uVar35, fVar37, 0);
			if (this.AI == false) {
				this._rockThrowWillHitSelf = false;
			}
			else {
				UStack_108._0_8_ = il2cpp_runtime_helper_059d80e0(&uStack_78);
				fVar37 = (float)il2cpp_runtime_helper_0599adc0(&uStack_78);
				direction.z = fVar39;
				direction.x = UStack_108.x;
				direction.y = UStack_108.y;
				bVar15 = this.WouldRockHitSelf(UVar40, direction, fVar37);
				this._rockThrowWillHitSelf = bVar15;
				if (bVar15) goto label_05c38086;
			}
			fVar37 = this.RockThrowCloseAimAngle;
			fVar39 = this.RockThrowMaxAimAngle;
			fVar38 = this.Size;
			fStack_9c = this.RockThrowCloseAimDistance * fVar38;
			auStack_48._0_4_ = fVar38 * this.RockThrowFullAimDistance;
			fVar33 = (float)il2cpp_runtime_helper_0599adc0(&uStack_88, 0);
			fVar38 = 0.0;
			if ((fStack_9c != (float)auStack_48._0_4_) || (NAN(fStack_9c) || NAN((float)auStack_48._0_4_))) {
				fVar33 = (fVar33 - fStack_9c) / ((float)auStack_48._0_4_ - fStack_9c);
				fVar38 = 1.0;
				if (fVar33 <= 1.0) {
					fVar38 = fVar33;
				}
				fVar38 = (float)(-(uint)(0.0 <= fVar33) & (uint)fVar38);
			}
			fVar33 = 0.0;
			if (0.0 <= fVar38) {
				fVar33 = fVar38;
			}
			fVar39 = (fVar39 - fVar37) * fVar33;
			UStack_58._0_8_ = il2cpp_runtime_helper_059d80e0(&uStack_88, 0);
			UStack_b0.x = UStack_c8.x;
			UStack_b0.y = UStack_c8.y;
			UStack_b0.z = (float)auStack_98._0_4_;
			UStack_58.z = fVar33;
			UVar41 = Vector3.Internal_RotateTowards(ref UStack_b0, ref UStack_58, (fVar39 + fVar37) * 0.017453292, 0.0);
			fVar38 = UVar41.z;
			fVar37 = (float)il2cpp_runtime_helper_0599adc0(&uStack_88);
			uVar35 = 0;
			fVar39 = fVar38 * fVar37 + fVar32;
			auStack_98._0_4_ = fVar39;
			uVar34 = il2cpp_runtime_helper_05bbcf10(0);
			UStack_108.x = UVar41.x;
			UStack_108.y = UVar41.y;
			this._rockThrowTarget.x = uStack_78._4_4_ * (float)uVar34 + fVar37 * UStack_108.x + fStack_d8;
			this._rockThrowTarget.y = uStack_78._4_4_ * (float)((ulong)uVar34 >> 0x20) + fVar37 * UStack_108.y + fStack_d4;
			this._rockThrowTarget.z = fVar39 * uStack_78._4_4_ + (float)auStack_98._0_4_;
			pUVar13 = this.Cache;
			if ((pUVar13 == null) ||(pUVar19 = pUVar13.Transform, pUVar19 == null)) goto label_05c38970;
			UVar46 = pUVar19.rotation;
			auStack_98 = (byte[])UVar46._8_8_;
			fVar39 = 0.0;
			UStack_108._0_8_ = il2cpp_runtime_helper_05be1910(UStack_108.x);
			fVar37 = Time.deltaTime;
			UStack_b0.z = auStack_98._0_4_;
			UStack_b0.w = auStack_98._4_4_;
			UStack_58.x = UStack_108.x;
			UStack_58.y = UStack_108.y;
			UStack_b0._0_8_ = UVar46._0_8_;
			UStack_58.z = fVar38;
			UStack_58.w = fVar39;
			UVar46 = Quaternion.Internal_Lerp(ref UStack_b0, ref UStack_58, fVar37 * 5.0);
			pUVar19.rotation = UVar46;
		}
		else {
			pCVar22 = this._rockThrowTargetCharacter;
			bVar15 = ((Object)pCVar22 != null);
			if (bVar15) {
				if (this.AI == false) goto label_05c37d3c;
				UStack_c8.x = this._rockThrowForward.x;
				UStack_c8.y = this._rockThrowForward.y;
				auStack_98._0_4_ = this._rockThrowForward.z;
				goto label_05c37d6e;
			}
		}
	label_05c38086: ;
		if (fVar31 <= 0.61) {
			return;
		}
		if (this._currentAttackStage != 1) {
			return;
		}
		pUVar13 = this.Cache;
		if (pUVar13 != null) {
			pPVar14 = pUVar13.PhotonView;
			pSVar23 = (Object[])new object[0];
			if (pPVar14 != null) {
				pPVar14.RPC("ClearRockRPC", 0, pSVar23);
				if (this.AI != false) {
					pCVar22 = this._rockThrowTargetCharacter;
					bVar15 = ((Object)pCVar22 == null);
					if (bVar15) {
	label_05c367dc: ;
						this._currentAttackStage = 2;
						return;
					}
					pCVar22 = this._rockThrowTargetCharacter;
					if (pCVar22 == null) goto label_05c38970;
					bVar15 = pCVar22.ValidTarget();
					if (!bVar15) goto label_05c367dc;
				}
				iVar17 = Random.Range(0, 2);
				uVar10 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
				if (iVar17 == 0) {
					if (uVar10 == 0) {
					}
					lVar25 = 0x150;
				}
				else {
					if (uVar10 == 0) {
					}
					lVar25 = 0x158;
				}
				this.PlaySound(*(String*)((long)&TitanSounds.Footstep1 + lVar25));
				this._currentAttackStage = 2;
				uVar4 = this._rockThrowTarget.x;
				uVar7 = this._rockThrowTarget.y;
				fVar31 = this._rockThrowTarget.z - fVar32;
				uStack_68 = CONCAT44((float)uVar7 - fStack_d4, (float)uVar4 - fStack_d8);
				uVar34 = il2cpp_runtime_helper_059d80e0(&uStack_68);
				if (this.AI != false) {
					if (this._rockThrowWillHitSelf != false) {
	label_05c38259: ;
						this.Stun();
						return;
					}
					uVar5 = this._rockThrowTarget.x;
					fVar32 = (float)il2cpp_runtime_helper_05956b50(fStack_d8, fVar32, uVar5, this._rockThrowTarget.z, 0);
					direction_00.z = fVar31;
					direction_00.x = (float)(int)uVar34;
					direction_00.y = (float)(int)((ulong)uVar34 >> 0x20);
					bVar15 = this.WouldRockHitSelf(UVar40, direction_00, fVar32);
					if (bVar15) goto label_05c38259;
				}
				pSVar21 = ProjectilePrefabs.Rock1;
				uVar35 = 0;
				fVar32 = fVar31;
				uStack_f8 = il2cpp_runtime_helper_05be1910((float)uVar34, 0);
				auStack_48 = ZEXT416((uint)this.RockThrow1Speed);
				fVar37 = fVar32;
				auStack_98 = (byte[])il2cpp_runtime_helper_05b8d690(0);
				pUVar13 = this.Cache;
				fStack_9c = fVar37;
				if ((pUVar13 != null) &&(pPVar14 = pUVar13.PhotonView, pPVar14 != null)) {
					iVar17 = pPVar14.viewIdField;
					pSVar23 = (Object[])new object[1];
					UStack_b0.x = this.Size * 1.5;
					pIVar24 = (object)UStack_b0;
					if (pSVar23 != null) {
						fVar31 = fVar31 * (float)auStack_48._0_4_;
						fVar37 = (float)uVar34 * (float)auStack_48._0_4_;
						fVar39 = (float)((ulong)uVar34 >> 0x20) * (float)auStack_48._0_4_;
						il2cpp_codegen_array_element_type_check((Array)pSVar23, pIVar24);
						il2cpp_runtime_helper_02ac8d90(pSVar23, 0, pIVar24);
						rotation_01.z = fVar32;
						rotation_01.w = (float)uVar35;
						rotation_01.x = (float)uStack_f8;
						rotation_01.y = (float)uStack_f8._4_4_;
						gravity.z = fStack_9c;
						gravity.x = (float)auStack_98._0_4_;
						gravity.y = (float)auStack_98._4_4_;
						velocity.z = fVar31;
						velocity.x = fVar37;
						velocity.y = fVar39;
						ProjectileSpawner.Spawn(pSVar21, UVar40, rotation_01, velocity, gravity, 10.0, iVar17, "", pSVar23);
						return;
					}
				}
			}
		}
	label_05c38970: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044EA")]
	[Address(RVA = "0x5B38980", Offset = "0x5B37980", VA = "0x5B38980")]
	private bool WouldRockHitSelf(Vector3 hand, Vector3 direction, float distance)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$WouldRockHitSelf): 20 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		BasicTitanComponentCache pCVar3;
		Collider __this_00;
		CapsuleCollider __this_01;
		BaseComponentCache pUVar4;
		byte[] auVar5 = new byte[16];
		Ray ray;
		bool bVar6;
		Transform pUVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		ulong uVar11;
		byte[] auVar12 = new byte[16];
		uint in_XMM2_Dc;
		uint in_XMM2_Dd;
		Vector3 UVar13;
		Vector3 UVar14;
		ulong local_a8;
		float local_88;
		float fStack_84;
		uint uStack_64;
		uint uStack_60;
		float local_58;
		RaycastHit local_48;

		fVar9 = direction.z;
		auVar12._8_4_ = in_XMM2_Dc;
		auVar12._0_8_ = direction._0_8_;
		auVar12._12_4_ = in_XMM2_Dd;
		local_48.m_UV.x = 0.0;
		local_48.m_UV.y = 0.0;
		local_48.m_Collider.m_Data = (EntityId)0x0;
		local_48.m_Normal.y = 0.0;
		local_48.m_Normal.z = 0.0;
		local_48.m_FaceID = 0;
		local_48.m_Distance = 0.0;
		local_48.m_Point.x = 0.0;
		local_48.m_Point.y = 0.0;
		local_48.m_Point.z = 0.0;
		local_48.m_Normal.x = 0.0;
		pCVar3 = this.BasicCache;
		if (pCVar3 != null) {
			__this_00 = pCVar3.Movebox;
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
			}
			local_a8._0_4_ = direction.x;
			local_a8._4_4_ = direction.y;
			fVar8 = fVar9 * fVar9 + local_a8._4_4_ * local_a8._4_4_ + (float)local_a8 * (float)local_a8;
			if (fVar8 < 0.0) {
				fVar8 = sqrtf(fVar8);
			}
			else {
				fVar8 = SQRT(fVar8);
			}
			uVar11 = 0;
			fVar10 = 0.0;
			if (1e-05 < fVar8) {
				fVar10 = fVar9 / fVar8;
				auVar5._4_4_ = fVar8;
				auVar5._0_4_ = fVar8;
				auVar5._8_4_ = fVar8;
				auVar5._12_4_ = fVar8;
				auVar12 = divps(auVar12, auVar5);
				uVar11 = auVar12._0_8_;
			}
			if (__this_00 != null) {
				uStack_64 = (undefined4)uVar11;
				uStack_60 = (undefined4)((ulong)uVar11 >> 0x20);
				ray.m_Direction.z = fVar10;
				ray.m_Direction.y = (float)uStack_60;
				ray.m_Direction.x = (float)uStack_64;
				ray.m_Origin.z = hand.z;
				ray.m_Origin.x = hand.x;
				ray.m_Origin.y = hand.y;
				bVar6 = __this_00.Raycast(ray, ref local_48, distance);
				if (bVar6) {
					return true;
				}
				pCVar3 = this.BasicCache;
				if (pCVar3 != null) {
					__this_01 = (CapsuleCollider)pCVar3.Movebox;
					if (__this_01 != null) {
						bVar1 = (typeof(CapsuleCollider)._2).typeHierarchyDepth;
						if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CapsuleCollider))) {
							throw new InvalidCastException();
						}
					}
					if (__this_01 != null) {
						fVar8 = __this_01.radius;
						pUVar7 = __this_01.transform;
						if (pUVar7 != null) {
							UVar13 = pUVar7.lossyScale;
							pUVar7 = __this_01.transform;
							if (pUVar7 != null) {
								local_88 = hand.x;
								fStack_84 = hand.y;
								fVar10 = distance * local_a8._4_4_ + fStack_84;
								bVar6 = false;
								UVar14 = pUVar7.lossyScale;
								if (fVar10 < fStack_84) {
									pUVar4 = this.Cache;
									if ((pUVar4 == null) ||(pUVar7 = pUVar4.Transform, pUVar7 == null)) goto label_05c38cb1;
									local_58 = UVar13.x;
									if (local_58 <= UVar14.z) {
										local_58 = UVar14.z;
									}
									UVar13 = pUVar7.position;
									UVar14.z = fVar9 * distance + hand.z;
									UVar14.x = distance * (float)local_a8 + local_88;
									UVar14.y = fVar10;
									fVar9 = Util.DistanceIgnoreY(UVar14, UVar13);
									bVar6 = fVar9 <= fVar8 * local_58 * 1.5;
								}
								return bVar6;
							}
						}
					}
				}
			}
		}
	label_05c38cb1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044EB")]
	[Address(RVA = "0x5B38CC0", Offset = "0x5B37CC0", VA = "0x5B38CC0", Slot = "188")]
	protected override void UpdateEat()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$UpdateEat): clean
		Human pCVar1;
		bool bVar2;
		int iVar3;

		if (this.State != 0x1b) {
			pCVar1 = this.HoldHuman;
			bVar2 = ((Object)pCVar1 == null);
			if ((bVar2) && (4.72 < this._stateTimeLeft)) {
				this.IdleWait(0.5);
				return;
			}
			if ((this.State != 0x1b) && (this._stateTimeLeft <= 4.72)) {
				pCVar1 = this.HoldHuman;
				bVar2 = ((Object)pCVar1 != null);
				if (bVar2) {
					if (this.CustomDamageEnabled == false) {
						iVar3 = 100;
					}
					else {
						iVar3 = this.CustomDamage;
					}
					pCVar1 = this.HoldHuman;
					this.Ungrab();
					if (pCVar1 == null) goto label_05c38e8d;
					pCVar1.GetHit((BaseCharacter)this, iVar3, "TitanEat", "");
				}
			}
		}
		if (this.AI == false) {
			pCVar1 = this.HoldHuman;
			bVar2 = ((bool)(Object)pCVar1);
			if (bVar2) {
				pCVar1 = this.HoldHuman;
				if (pCVar1 == null) {
	label_05c38e8d: ;
					throw new NullReferenceException();
				}
				if ((pCVar1.Dead == false) && (this.HoldHumanLeft == false)) {
					bVar2 = Input.anyKeyDown;
					if ((bVar2) || (this.State == 0x1b)) {
						this.UpdateThrowHuman();
						return;
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x60044EC")]
	[Address(RVA = "0x5B38EA0", Offset = "0x5B37EA0", VA = "0x5B38EA0")]
	private void UpdateThrowHuman()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$UpdateThrowHuman): 81 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		BasicTitanAnimations pCVar5;
		AnimationHandler pCVar6;
		String name;
		BaseComponentCache pUVar7;
		BasicTitanComponentCache pCVar8;
		BaseHitbox __this_00;
		Human __this_01;
		Player targetPlayer;
		byte[] auVar9 = new byte[16];
		byte[] auVar10 = new byte[16];
		float fVar11;
		float fVar12;
		bool bVar13;
		UnityEngine_Vector3_StaticFields pUVar14;
		Transform pUVar15;
		PhotonView pPVar16;
		Object x;
		PhotonView pPVar17;
		Object[] parameters;
		object pIVar18;
		object pIVar19;
		float fVar20;
		float fVar21;
		uint uVar22;
		uint extraout_XMM0_Db;
		float extraout_XMM0_Db_00;
		uint extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float fVar23;
		uint extraout_XMM0_Dc_01;
		float extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float fVar24;
		uint extraout_XMM0_Dd_01;
		float extraout_XMM0_Dd_02;
		byte[] auVar25 = new byte[4];
		uint uVar26;
		uint uVar27;
		byte[] auVar28 = new byte[16];
		byte[] auVar29 = new byte[16];
		Quaternion UVar30;
		Quaternion UVar31;
		Vector3 UVar32;
		Vector3 UVar33;
		Vector3 UVar34;
		float fStack_a8;
		Vector3 UStack_98;
		Vector3 UStack_88;
		byte[] auStack_78 = new byte[4];
		byte[] auStack_74 = new byte[8];
		float fStack_6c;
		byte[] auStack_68 = new byte[12];
		float fStack_5c;
		Quaternion UStack_58;
		byte[] auStack_48 = new byte[8];
		float fStack_40;
		float fStack_3c;

		if (this.State != 0x1b) {
			pCVar5 = this.BasicAnimations;
			if ((pCVar5 == null) ||(pCVar6 = this.Animation, pCVar6 == null)) goto label_05c395e2;
			name = pCVar5.AttackRockThrow;
			fVar20 = pCVar6.GetLength(name);
			this._needFreshCore = true;
			pCVar6 = this.Animation;
			if (pCVar6 == null) goto label_05c395e2;
			pCVar6.SetCullingType(false);
			this.DeactivateAllHitboxes();
			this.CrossFade(name, 0.1, 0.0);
			this.State = 0x1b;
			this._currentStateAnimation = name;
			this._stateTimeLeft = fVar20;
		}
		UVar32 = this.GetAimPoint();
		pUVar7 = this.Cache;
		if (pUVar7 == null) goto label_05c395e2;
		auStack_68._8_4_ = extraout_XMM0_Dc;
		auStack_68._0_8_ = UVar32._0_8_;
		fStack_5c = (float)extraout_XMM0_Dd;
		pUVar15 = pUVar7.Transform;
		if (pUVar15 == null) goto label_05c395e2;
		UVar33 = pUVar15.position;
		pUVar7 = this.Cache;
		if ((pUVar7 == null) ||(pUVar15 = pUVar7.Transform, pUVar15 == null)) goto label_05c395e2;
		UVar34 = pUVar15.position;
		auVar25 = (byte[])UVar34.z;
		fVar20 = UVar34.x;
		fVar21 = UVar34.y;
		UStack_98.y = UVar33.y;
		uVar22 = auStack_68._0_4_;
		if (Il2CppMethodInitialized_0753e72d == false) {
			auStack_78 = auVar25;
			fStack_40 = extraout_XMM0_Dc_00;
			auStack_48 = (byte[])UVar34._0_8_;
			fStack_3c = extraout_XMM0_Dd_00;
			Il2CppMethodInitialized_0753e72d = true;
			UStack_88.x = 0.0;
			UStack_88.y = 0.0;
			fVar20 = (float)auStack_48._0_4_;
			fVar21 = (float)auStack_48._4_4_;
			fVar23 = fStack_40;
			fVar24 = fStack_3c;
			auVar25 = auStack_78;
			fVar11 = (float)auStack_68._8_4_;
			fVar12 = fStack_5c;
		}
		else {
			UStack_88.x = 0.0;
			UStack_88.y = 0.0;
			fVar23 = extraout_XMM0_Dc_00;
			fVar24 = extraout_XMM0_Dd_00;
			fVar11 = (float)auStack_68._8_4_;
			fVar12 = fStack_5c;
		}
		UStack_88.x = 0.0;
		UStack_88.y = 0.0;
		if (Il2CppMethodInitialized_0753e729 == false) {
			UStack_88.x = 0.0;
			UStack_88.y = 0.0;
			auStack_78 = auVar25;
			auStack_48._4_4_ = fVar21;
			auStack_48._0_4_ = fVar20;
			fStack_40 = fVar23;
			fStack_3c = fVar24;
			Il2CppMethodInitialized_0753e729 = true;
			fVar20 = (float)auStack_48._0_4_;
			fVar21 = (float)auStack_48._4_4_;
			fVar23 = fStack_40;
			fVar24 = fStack_3c;
			auVar25 = auStack_78;
		}
		auVar29._0_4_ = (float)uVar22 - fVar20;
		auVar29._4_4_ = UStack_98.y - fVar21;
		auVar29._8_4_ = fVar11 - fVar23;
		auVar29._12_4_ = fVar12 - fVar24;
		fVar20 = UVar32.z - (float)auVar25;
		uVar22 = 0;
		fVar21 = fVar20 * fVar20 + auVar29._4_4_ * auVar29._4_4_ + auVar29._0_4_ * auVar29._0_4_;
		uVar26 = 0;
		uVar27 = 0;
		if (fVar21 < 0.0) {
			fVar21 = sqrtf(fVar21);
			uVar22 = extraout_XMM0_Db;
			if (1e-05 < fVar21) goto label_05c39100;
	label_05c390c6: ;
			pUVar14 = typeof(Vector3).static_fields;
			fVar20 = (pUVar14.zeroVector).z;
		}
		else {
			fVar21 = SQRT(fVar21);
			if (fVar21 <= 1e-05) goto label_05c390c6;
	label_05c39100: ;
			fVar20 = fVar20 / fVar21;
			auVar10._4_4_ = fVar21;
			auVar10._0_4_ = fVar21;
			auVar10._8_4_ = uVar22;
			auVar10._12_4_ = uVar22;
			auVar29 = divps(auVar29, auVar10);
			UStack_88.x = auVar29._0_4_;
			UStack_88.y = auVar29._4_4_;
			pUVar14 = (UnityEngine_Vector3_StaticFields)&UStack_88;
		}
		pUVar7 = this.Cache;
		if ((pUVar7 == null) ||(pUVar15 = pUVar7.Transform, pUVar15 == null)) goto label_05c395e2;
		uVar1 = (pUVar14.zeroVector).x;
		uVar3 = (pUVar14.zeroVector).y;
		auStack_74._0_4_ = uVar3;
		auStack_78 = (byte[])uVar1;
		UVar30 = pUVar15.rotation;
		auStack_68._8_4_ = uVar26;
		auStack_68._0_8_ = UVar30._8_8_;
		fStack_5c = (float)uVar27;
		UStack_88.x = (float)auStack_78;
		UStack_88.y = (float)auStack_74._0_4_;
		UStack_88.z = fVar20;
		pUVar14 = typeof(Vector3).static_fields;
		UStack_58.x = (pUVar14.upVector).x;
		UStack_58.y = (pUVar14.upVector).y;
		UStack_58.z = (pUVar14.upVector).z;
		uVar22 = 0;
		uVar26 = 0;
		UVar31 = Quaternion.Internal_LookRotation(ref UStack_88, ref UStack_58);
		auStack_74._4_4_ = uVar22;
		fStack_6c = (float)uVar26;
		fVar20 = Time.deltaTime;
		UStack_88.z = auStack_68._0_4_;
		UStack_58.z = auStack_78;
		UStack_58.w = auStack_78._4_4_;
		pUVar14 = (UnityEngine_Vector3_StaticFields)&UStack_88;
		UStack_88._0_8_ = UVar30._0_8_;
		UStack_58._0_8_ = UVar31._0_8_;
		UVar30 = Quaternion.Internal_Lerp((Quaternion)pUVar14, ref UStack_58, fVar20 * 5.0);
		fVar20 = UVar30.w;
		pUVar15.rotation = UVar30;
		fVar21 = this.GetAnimationTime();
		if (fVar21 <= 0.61) {
			return;
		}
		pCVar8 = this.BasicCache;
		if ((pCVar8 == null) ||(__this_00 = pCVar8.HandRHitbox, __this_00 == null)) goto label_05c395e2;
		__this_01 = this.HoldHuman;
		pUVar15 = __this_00.transform;
		if (pUVar15 == null) goto label_05c395e2;
		UVar32 = pUVar15.position;
		auStack_74._4_4_ = extraout_XMM0_Dc_01;
		fStack_6c = (float)extraout_XMM0_Dd_01;
		auStack_68._0_4_ = UVar32.z;
		UVar32 = this.GetAimPoint();
		if (Il2CppMethodInitialized_0753e72d == false) {
			fVar20 = 0.0;
			Il2CppMethodInitialized_0753e72d = true;
			UStack_88.x = 0.0;
			UStack_88.y = 0.0;
		}
		else {
			UStack_88.x = 0.0;
			UStack_88.y = 0.0;
		}
		UStack_88.x = 0.0;
		UStack_88.y = 0.0;
		if (Il2CppMethodInitialized_0753e729 == false) {
			UStack_88.x = 0.0;
			UStack_88.y = 0.0;
			fVar20 = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
		}
		auVar28._0_4_ = UVar32.x - (float)auStack_78;
		auVar28._4_4_ = UVar32.y - (float)auStack_74._0_4_;
		auVar28._8_4_ = extraout_XMM0_Dc_02 - (float)auStack_74._4_4_;
		auVar28._12_4_ = extraout_XMM0_Dd_02 - fStack_6c;
		fStack_a8 = UVar32.z - (float)auStack_68._0_4_;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			fVar20 = 0.0;
		}
		fVar21 = fStack_a8 * fStack_a8 + auVar28._4_4_ * auVar28._4_4_ + auVar28._0_4_ * auVar28._0_4_;
		if (fVar21 < 0.0) {
			fVar21 = sqrtf(fVar21);
			fVar20 = extraout_XMM0_Db_00;
			if (1e-05 < fVar21) goto label_05c393f1;
	label_05c39326: ;
			pUVar14 = typeof(Vector3).static_fields;
			fStack_a8 = ((Quaternion)&pUVar14.zeroVector).z;
		}
		else {
			fVar21 = SQRT(fVar21);
			if (fVar21 <= 1e-05) goto label_05c39326;
	label_05c393f1: ;
			fStack_a8 = fStack_a8 / fVar21;
			auVar9._4_4_ = fVar21;
			auVar9._0_4_ = fVar21;
			auVar9._8_4_ = fVar20;
			auVar9._12_4_ = fVar20;
			auVar29 = divps(auVar28, auVar9);
			UStack_88.x = auVar29._0_4_;
			UStack_88.y = auVar29._4_4_;
		}
		uVar2 = (pUVar14.zeroVector).x;
		uVar4 = (pUVar14.zeroVector).y;
		this.Ungrab();
		if ((__this_01 != null) &&(pPVar16 = __this_01.photonView, pPVar16 != null)) {
			x = (Object)pPVar16.gameObject;
			bVar13 = (x != null);
			if (!bVar13) {
				return;
			}
			pPVar16 = __this_01.photonView;
			pPVar17 = __this_01.photonView;
			if (pPVar17 != null) {
				targetPlayer = pPVar17._Owner_k__BackingField;
				parameters = (Object[])new object[1];
				UStack_88.x = (float)uVar2 * 150.0;
				UStack_88.y = (float)uVar4 * 150.0;
				UStack_88.z = fStack_a8 * 150.0;
				pIVar18 = (object)UStack_88;
				if (parameters != null) {
					if ((pIVar18 != null) &&(pIVar19 = il2cpp_vm_Object_IsInst(pIVar18, (((parameters.obj).klass)._1).element_class), pIVar19 == null)) {
						pIVar18 = new ArrayTypeMismatchException();
						throw pIVar18;
					}
					if ((int)parameters.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					parameters[0] = pIVar18;
					if (pPVar16 != null) {
						pPVar16.RPC("BlowAwayRPC", targetPlayer, parameters);
						return;
					}
				}
			}
		}
	label_05c395e2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044ED")]
	[Address(RVA = "0x5B39600", Offset = "0x5B38600", VA = "0x5B39600", Slot = "168")]
	public override void Blind()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$Blind): 4 lines keep C-only constructs
		String* targetAddress;
		BasicTitanAnimations pCVar1;
		AnimationHandler pCVar2;
		String name;
		bool bVar3;
		MethodInfo method_00;
		float fVar4;

		pCVar1 = this.BasicAnimations;
		if (pCVar1 == null) {
	label_05c3978d: ;
			throw new NullReferenceException();
		}
		targetAddress = &this._currentStateAnimation;
		bVar3 = (*targetAddress == pCVar1.AttackBellyFlop);
		if (!bVar3) {
			pCVar1 = this.BasicAnimations;
			if (pCVar1 == null) goto label_05c3978d;
			method_00 = (MethodInfo)pCVar1.AttackBellyFlopGetup;
			bVar3 = (*targetAddress == (String)method_00);
			if (!bVar3) {
				if (this.IsCrawler == false) {
					this.Blind();
					return;
				}
				if ((this.State != 0x10) && (this.AI != false)) {
					pCVar1 = this.BasicAnimations;
					if ((pCVar1 != null) &&(pCVar2 = this.Animation, pCVar2 != null)) {
						name = pCVar1.BlindCrawler;
						fVar4 = pCVar2.GetLength(name);
						this._needFreshCore = true;
						pCVar2 = this.Animation;
						if (pCVar2 != null) {
							pCVar2.SetCullingType(false);
							this.Ungrab();
							this.DeactivateAllHitboxes();
							this.CrossFade(name, 0.1, 0.0);
							this.State = 0x10;
							this._currentStateAnimation = name;
							this._stateTimeLeft = fVar4;
							this.DamagedGrunt(1.0);
							return;
						}
					}
					goto label_05c3978d;
				}
			}
		}
		return;
	}

	[Token(Token = "0x60044EE")]
	[Address(RVA = "0x5B397A0", Offset = "0x5B387A0", VA = "0x5B397A0", Slot = "181")]
	protected override string GetSitIdleAniamtion()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$GetSitIdleAniamtion): clean
		BasicTitanAnimations pCVar1;
		BaseTitanAnimations pCVar2;
		String pSVar3;

		if (this.IsCrawler == false) {
			pCVar2 = this.BaseTitanAnimations;
			if (pCVar2 != null) {
				return pSVar3;
			}
		}
		else {
			pCVar1 = this.BasicAnimations;
			if (pCVar1 != null) {
				return pCVar1.SitIdleCrawler;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044EF")]
	[Address(RVA = "0x5B397F0", Offset = "0x5B387F0", VA = "0x5B397F0", Slot = "182")]
	protected override string GetSitFallAnimation()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$GetSitFallAnimation): clean
		BasicTitanAnimations pCVar1;
		BaseTitanAnimations pCVar2;
		String pSVar3;

		if (this.IsCrawler == false) {
			pCVar2 = this.BaseTitanAnimations;
			if (pCVar2 != null) {
				return pSVar3;
			}
		}
		else {
			pCVar1 = this.BasicAnimations;
			if (pCVar1 != null) {
				return pCVar1.SitFallCrawler;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044F0")]
	[Address(RVA = "0x5B39840", Offset = "0x5B38840", VA = "0x5B39840", Slot = "183")]
	protected override string GetSitUpAnimation()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$GetSitUpAnimation): clean
		BasicTitanAnimations pCVar1;
		BaseTitanAnimations pCVar2;
		String pSVar3;

		if (this.IsCrawler == false) {
			pCVar2 = this.BaseTitanAnimations;
			if (pCVar2 != null) {
				return pSVar3;
			}
		}
		else {
			pCVar1 = this.BasicAnimations;
			if (pCVar1 != null) {
				return pCVar1.SitUpCrawler;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044F1")]
	[Address(RVA = "0x5B39890", Offset = "0x5B38890", VA = "0x5B39890", Slot = "169")]
	public override void Cripple(float time = 0f)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$Cripple): clean
		BasicTitanAnimations pCVar1;
		AnimationHandler pCVar2;
		String name;
		bool bVar3;
		MethodInfo method_00;
		float fVar4;

		if (this.IsCrawler == false) {
			pCVar1 = this.BasicAnimations;
			if (pCVar1 != null) {
				bVar3 = (this._currentStateAnimation == pCVar1.AttackBellyFlop);
				if (!bVar3) {
					pCVar1 = this.BasicAnimations;
					if (pCVar1 == null) goto label_05c39a36;
					method_00 = (MethodInfo)pCVar1.AttackBellyFlopGetup;
					bVar3 = (this._currentStateAnimation == (String)method_00);
					if (!bVar3) {
						this.Cripple(time);
						return;
					}
				}
				return;
			}
		}
		else {
			if (this.State == 0x11) {
				return;
			}
			if (this.AI == false) {
				return;
			}
			if (time <= 0.0) {
				time = this.get_DefaultCrippleTime();
			}
			this._currentCrippleTime = time;
			pCVar1 = this.BasicAnimations;
			if ((pCVar1 != null) &&(pCVar2 = this.Animation, pCVar2 != null)) {
				name = pCVar1.SitFallCrawler;
				fVar4 = pCVar2.GetLength(name);
				this._needFreshCore = true;
				pCVar2 = this.Animation;
				if (pCVar2 != null) {
					pCVar2.SetCullingType(false);
					this.Ungrab();
					this.DeactivateAllHitboxes();
					this.CrossFade(name, 0.1, 0.0);
					this.State = 0x13;
					this._currentStateAnimation = name;
					this._stateTimeLeft = fVar4;
					this.DamagedGrunt(1.0);
					return;
				}
			}
		}
	label_05c39a36: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044F2")]
	[Address(RVA = "0x5B39A40", Offset = "0x5B38A40", VA = "0x5B39A40", Slot = "170")]
	protected override void RegenerateWardedWeakSpot()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$RegenerateWardedWeakSpot): 8 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		ulong in_RAX;
		Object[] parameters;
		object pIVar2;
		object pIVar3;
		ulong uStack_28;

		uStack_28 = in_RAX;
		if (((this.isWarded == false) || (this.CurrentWardedWeakSpot != 0)) ||(1 < this.LastWardedWeakSpot - 3U)) {
			return;
		}
		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			__this_00 = pUVar1.PhotonView;
			parameters = (Object[])new object[2];
			uStack_28._0_4_ = CONCAT13(this.isWarded, (undefined3)uStack_28);
			pIVar2 = (object)(((long)&uStack_28 + 3));
			if (parameters != null) {
				if ((pIVar2 != null) &&(pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((parameters.obj).klass)._1).element_class), pIVar3 == null)) {
	label_05c39bc6: ;
					pIVar2 = new ArrayTypeMismatchException();
					throw pIVar2;
				}
				if ((int)parameters.Length != 0) {
					parameters[0] = pIVar2;
					uStack_28 = CONCAT44(this.LastWardedWeakSpot, (undefined4)uStack_28);
					pIVar2 = (object)(((long)&uStack_28 + 4));
					if ((pIVar2 != null) &&(pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((parameters.obj).klass)._1).element_class), pIVar3 == null)) goto label_05c39bc6;
					if ((parameters.Length & 0xfffffffe) != 0) {
						parameters[1] = pIVar2;
						if (__this_00 != null) {
							__this_00.RPC("SetWardedRPC", 0, parameters);
							return;
						}
						goto label_05c39bbc;
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_05c39bbc: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044F3")]
	[Address(RVA = "0x5B39BE0", Offset = "0x5B38BE0", VA = "0x5B39BE0", Slot = "89")]
	public override void OnHit(BaseHitbox hitbox, object victim, Collider collider, string type, bool firstHit)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$OnHit): 16 lines keep C-only constructs
		byte bVar1;
		BasicTitanComponentCache pCVar2;
		BaseHitbox pCVar3;
		Human x;
		BaseMenu obj;
		bool bVar4;
		String pSVar5;
		Il2CppClass pIVar6;
		Transform __this_00;
		object pIVar7;
		InGameMenu __this_01;
		byte bVar8;
		String* ppSVar9;
		String pSVar10;
		ulong uVar11;
		MethodInfo pMVar12;
		Il2CppMethodPointer vtableDispatch;
		uint damage;
		Vector3 position;

		pCVar2 = this.BasicCache;
		if (pCVar2 == null) goto label_05c3a0e1;
		pCVar3 = pCVar2.HandLHitbox;
		bVar4 = ((Object)hitbox == (Object)pCVar3);
		if (bVar4) {
			if (this.LeftArmDisabled != false) {
				return;
			}
			if (this.LeftHandDisabled != false) {
				return;
			}
		}
		pCVar2 = this.BasicCache;
		if (pCVar2 == null) goto label_05c3a0e1;
		pCVar3 = pCVar2.HandRHitbox;
		bVar4 = ((Object)hitbox == (Object)pCVar3);
		if (bVar4) {
			if (this.RightArmDisabled != false) {
				return;
			}
			if (this.RightHandDisabled != false) {
				return;
			}
		}
		if (this.CustomDamageEnabled == false) {
			damage = 100;
		}
		else {
			damage = this.CustomDamage;
		}
		if (victim != null) {
			pIVar6 = victim.klass;
			bVar8 = (pIVar6._2).typeHierarchyDepth;
			bVar1 = (typeof(CustomLogicCollisionHandler)._2).typeHierarchyDepth;
			if ((bVar1 <= bVar8) &&((pIVar6._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicCollisionHandler))) {
				if (hitbox != null) {
					pSVar5 = this.RichTextName;
					__this_00 = hitbox.transform;
					if (__this_00 != null) {
						position = __this_00.position;
						bVar8 = (typeof(CustomLogicCollisionHandler)._2).typeHierarchyDepth;
						if ((bVar8 <= (victim.klass._2).typeHierarchyDepth) &&((victim.klass._2).typeHierarchy[(ulong)bVar8 - 1] ==typeof(CustomLogicCollisionHandler))) {
							victim.GetHit((BaseCharacter)this, pSVar5, damage, type, position);
							return;
						}
						goto label_05c3a0e6;
					}
				}
				goto label_05c3a0e1;
			}
			bVar1 = (typeof(BaseCharacter)._2).typeHierarchyDepth;
			if ((bVar8 < bVar1) ||((pIVar6._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(BaseCharacter))) {
	label_05c3a0e6: ;
				throw new InvalidCastException();
			}
		}
		if ((this.State == 10) &&(bVar4 = this.IsGrabAttack())) {
			if (victim == null) {
	label_05c39f58: ;
				if (!firstHit) {
					return;
				}
				goto label_05c3a0e1;
			}
			pIVar6 = victim.klass;
			bVar8 = (pIVar6._2).typeHierarchyDepth;
			bVar1 = (typeof(Human)._2).typeHierarchyDepth;
			if ((bVar1 <= bVar8) &&((pIVar6._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Human))) {
				victim = il2cpp_codegen_is_inst_class(victim, typeof(Human));
				x = this.HoldHuman;
				bVar4 = ((Object)x == null);
				if (!bVar4) {
					return;
				}
				if (!firstHit) {
					return;
				}
				if (victim == null) goto label_05c3a0e1;
				if (*(sbyte)&victim[7].monitor != false) {
					return;
				}
				pCVar2 = this.BasicCache;
				if (pCVar2 == null) goto label_05c3a0e1;
				pCVar3 = pCVar2.HandLHitbox;
				bVar4 = ((Object)hitbox == (Object)pCVar3);
				this.HoldHumanLeft = bVar4;
				if (bVar4) {
					if (collider == null) goto label_05c3a0e1;
					pSVar5 = collider.name;
					ppSVar9 = &"GrabLeft";
				}
				else {
					if (collider == null) goto label_05c3a0e1;
					pSVar5 = collider.name;
					ppSVar9 = &"GrabRight";
				}
				vtableDispatch = victim.klass.vtable[0x5f].methodPtr;
				pMVar12 = victim.klass.vtable[0x5f].method;
				uVar11 = 0;
				pSVar10 = *ppSVar9;
				goto label_05c3a097;
			}
		}
		else {
			if (victim == null) goto label_05c39f58;
			pIVar6 = victim.klass;
			bVar8 = (pIVar6._2).typeHierarchyDepth;
		}
		bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
		if ((bVar1 <= bVar8) &&((pIVar6._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BaseTitan))) {
			this.OnHitTitan(hitbox, (BaseTitan)victim, collider, damage, firstHit);
			return;
		}
		if (!firstHit) {
			return;
		}
		if (*(sbyte)&victim[7].monitor != false) {
			return;
		}
		bVar4 = this.IsMainCharacter();
		if (bVar4) {
			obj = UIManager.CurrentMenu;
			pIVar7 = il2cpp_codegen_is_inst_class((object)obj, typeof(InGameMenu));
			if (pIVar7 == null) goto label_05c3a0e1;
			__this_01 = (InGameMenu)il2cpp_codegen_is_inst_class((object)obj, typeof(InGameMenu));
			__this_01.ShowKillScore(damage, false);
		}
		if (collider != null) {
			pSVar5 = collider.name;
			vtableDispatch = victim.klass.vtable[0x5f].methodPtr;
			pMVar12 = victim.klass.vtable[0x5f].method;
			uVar11 = (ulong)damage;
			pSVar10 = "Titan";
	label_05c3a097: ;
			(*vtableDispatch)(victim,this,uVar11,pSVar10,pSVar5,pMVar12);
			return;
		}
	label_05c3a0e1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044F4")]
	[Address(RVA = "0x5B3A0F0", Offset = "0x5B390F0", VA = "0x5B3A0F0", Slot = "94")]
	protected override void OnNotifyDie(BaseCharacter killer)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$OnNotifyDie): 1 lines keep C-only constructs
		byte bVar1;
		BasicTitanComponentCache pCVar2;
		ParticleSystem __this_00;

		if (killer != null) {
			bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
			if ((bVar1 <= (killer.klass._2).typeHierarchyDepth) &&((killer.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BaseTitan))) {
				pCVar2 = this.BasicCache;
				if ((pCVar2 == null) ||(__this_00 = pCVar2.NapeBlood, __this_00 == null)) {
					throw new NullReferenceException();
				}
				__this_00.Stop(true, 0);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60044F6")]
	[Address(RVA = "0x5B3A190", Offset = "0x5B39190", VA = "0x5B3A190", Slot = "156")]
	protected override void OnFinisherKill(Vector3 direction, bool launch, bool decapitate)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$OnFinisherKill): 2 lines keep C-only constructs
		undefined7 in_register_00000031;
		float fVar1;

		if ((int)CONCAT71(in_register_00000031, launch) != 0) {
			fVar1 = this.get_LaunchForce();
			fVar1 = fVar1 / this.Size;
			this._finisherDeathVelocity.x = fVar1 * direction.x;
			this._finisherDeathVelocity.y = fVar1 * direction.y;
			this._finisherDeathVelocity.z = fVar1 * direction.z;
		}
		if (decapitate) {
			this._headLaunchVelocity.x = direction.x * 45.0;
			this._headLaunchVelocity.y = direction.y * 45.0;
			this._headLaunchVelocity.z = direction.z * 45.0;
			return;
		}
		return;
	}

	[Token(Token = "0x60044F7")]
	[Address(RVA = "0x5B34030", Offset = "0x5B33030", VA = "0x5B34030")]
	private void DetachHead()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$DetachHead): 3 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		Object[] parameters;
		object pIVar2;
		object pIVar3;
		ulong local_30;

		this.PlaySound(TitanSounds.Decapitate);
		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			__this_00 = pUVar1.PhotonView;
			parameters = (Object[])new object[1];
			local_30._0_4_ = this._headLaunchVelocity.x;
			local_30._4_4_ = this._headLaunchVelocity.y;
			pIVar2 = (object)local_30;
			if (parameters != null) {
				if (pIVar2 != null) {
					pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((parameters.obj).klass)._1).element_class);
					if (pIVar3 == null) {
						pIVar2 = new ArrayTypeMismatchException();
						throw pIVar2;
					}
				}
				if ((int)parameters.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				parameters[0] = pIVar2;
				if (__this_00 != null) {
					__this_00.RPC("DetachHeadRPC", 0, parameters);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044F8")]
	[Address(RVA = "0x5B3A230", Offset = "0x5B39230", VA = "0x5B3A230")]
	[PunRPC]
	public void DetachHeadRPC(Vector3 launch, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$DetachHeadRPC): 19 lines keep C-only constructs
		bool bVar1;
		BaseComponentCache pUVar2;
		PhotonView pPVar3;
		InGameManager pGVar4;
		HashSet<object> __this_00;
		HookUseable __this_01;
		BasicTitanComponentCache pCVar5;
		Il2CppClass __this_02;
		GraphicsSettings pSVar6;
		BoolSetting pSVar7;
		object pIVar8;
		bool bVar9;
		sbyte cVar10;
		uint uVar11;
		Transform pUVar12;
		SkinnedMeshRenderer source;
		Object[] pSVar13;
		BasicTitan.d__167<PlayDecapitationBlood> __this_03;
		uint uVar14;
		ParticleSystem pUVar15;
		float fVar16;
		uint in_XMM0_Dc;
		float extraout_XMM0_Dc;
		uint in_XMM0_Dd;
		float extraout_XMM0_Dd;
		float fVar17;
		Vector3 UVar18;
		byte[] auStack_78 = new byte[8];
		object pIStack_68;
		byte[] auStack_60 = new byte[16];
		object pIStack_50;
		byte[] auStack_48 = new byte[8];
		float fStack_40;
		float fStack_3c;

		fStack_40 = (float)in_XMM0_Dc;
		auStack_48 = (byte[])launch._0_8_;
		fStack_3c = (float)in_XMM0_Dd;
		auStack_78 = (byte[])0x0;
		pIStack_68 = null;
		pUVar2 = this.Cache;
		if ((pUVar2 != null) &&(pPVar3 = pUVar2.PhotonView, pPVar3 != null)) {
			if (info.Sender != pPVar3._Owner_k__BackingField) {
				return;
			}
			if (this._headDetached != false) {
				return;
			}
			this._headDetached = true;
			pGVar4 = this._inGameManager;
			if ((pGVar4 != null) &&(__this_00 = (HashSet<object>)pGVar4.Humans, __this_00 != null)) {
				auStack_60.GetEnumerator(__this_00);
				pIStack_68 = pIStack_50;
				auStack_78 = (byte[])auStack_60._0_8_;
				auStack_60._0_8_ = null;
				auStack_60._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)auStack_78;
				while (true) {
					bVar9 = auStack_78.MoveNext();
					pIVar8 = pIStack_68;
					if (!(bVar9)) break;
					if (pIStack_68 == null) {
						throw new NullReferenceException();
					}
					cVar10 = (*pIStack_68.klass.vtable[0x4a].methodPtr)(pIStack_68,pIStack_68.klass.vtable[0x4a].method);
					if (cVar10 != false) {
						__this_01 = pIVar8[0x12].monitor;
						if (__this_01 != null) {
							pCVar5 = this.BasicCache;
							if (pCVar5 == null) {
								throw new NullReferenceException();
							}
							if (__this_01 == null) {
								throw new NullReferenceException();
							}
							__this_01.MoveHookParents(pCVar5.Head, pCVar5.Neck);
						}
						__this_02 = pIVar8[0x13].klass;
						if (__this_02 != null) {
							pCVar5 = this.BasicCache;
							if (pCVar5 == null) {
								throw new NullReferenceException();
							}
							__this_02.MoveHookParents(pCVar5.Head, pCVar5.Neck);
						}
					}
				}
				auStack_78.Dispose() ;
				pCVar5 = this.BasicCache;
				if ((pCVar5 != null) &&(pUVar15 = pCVar5.NapeBlood, pUVar15 != null)) {
					pUVar15.Stop(true, 0);
					pUVar2 = this.Cache;
					if ((pUVar2 != null) &&((pUVar12 = pUVar2.Transform, pUVar12 != null &&(pUVar12 = pUVar12.Find("Head"), pUVar12 != null)))) {
						source = pUVar12.GetComponent<SkinnedMeshRenderer>();
						if (this.EffectsEnabled == false) {
							bVar9 = true;
						}
						else {
							pSVar6 = SettingsManager.GraphicsSettings;
							if ((pSVar6 == null) ||(pSVar7 = pSVar6.NapeBloodEnabled, pSVar7 == null)) goto label_05c3a6de;
							bVar1 = pSVar7._value;
							bVar9 = bVar1 == false;
							if (this._GoreEnabled_k__BackingField != false) {
								pCVar5 = this.BasicCache;
								if (pCVar5 == null) goto label_05c3a6de;
								pUVar12 = pCVar5.Head;
								pUVar15 = null;
								UVar18 = this.GetVelocity();
								if (bVar1 != false) {
									pCVar5 = this.BasicCache;
									if (pCVar5 == null) goto label_05c3a6de;
									pUVar15 = pCVar5.DecapitationBlood;
								}
								auStack_48._4_4_ = UVar18.y + (float)auStack_48._4_4_;
								auStack_48._0_4_ = UVar18.x + (float)auStack_48._0_4_;
								fStack_40 = extraout_XMM0_Dc + fStack_40;
								fStack_3c = extraout_XMM0_Dd + fStack_3c;
								UVar18.z = UVar18.z + launch.z;
								fVar17 = this._deathVisualStartTime;
								fVar16 = Time.time;
								fVar16 = (fVar17 + 3.0) - fVar16;
								fVar17 = 0.0;
								if (0.0 <= fVar16) {
									fVar17 = fVar16;
								}
								UVar18.x = (float)auStack_48._0_4_;
								UVar18.y = (float)auStack_48._4_4_;
								TitanLimbFallEffect.PlayHead(source, pUVar12, UVar18, pUVar15, fVar17) ;
							}
						}
						if (source != null) {
							source.enabled = false;
							pCVar5 = this.BasicCache;
							if (((pCVar5 != null) &&(pUVar12 = pCVar5.Head, pUVar12 != null)) &&(pSVar13 = pUVar12.GetComponentsInChildren<Renderer>(), pSVar13 != null)) {
								uVar11 = (uint)pSVar13.Length;
								if (0 < (int)uVar11) {
									uVar14 = 0;
									do {
										if (uVar11 <= uVar14) {
											throw new IndexOutOfRangeException();
										}
										if ((Renderer)pSVar13[(int)uVar14] == null ) goto label_05c3a6de;
										(pSVar13[(int)uVar14]).enabled = false;
										uVar14 = uVar14 + 1;
										uVar11 = (uint)pSVar13.Length;
									} while ((int)uVar14 < (int)uVar11);
								}
								if (!bVar9) {
									__this_03 = il2cpp_codegen_object_new((Il2CppClass)typeof(BasicTitan.d__167<PlayDecapitationBlood>));
									__this_03 = new BasicTitan.d__167<PlayDecapitationBlood>(0);
									if (__this_03 == null) goto label_05c3a6de;
									__this_03.__4__this = this;
									this.StartCoroutine((IEnumerator)__this_03);
								}
								return;
							}
						}
					}
				}
			}
		}
	label_05c3a6de: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044F9")]
	[Address(RVA = "0x5B3A770", Offset = "0x5B39770", VA = "0x5B3A770")]
	[IteratorStateMachine(typeof(_003CPlayDecapitationBlood_003Ed__167))]
	private IEnumerator PlayDecapitationBlood()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$PlayDecapitationBlood): clean
		BasicTitan.d__167<PlayDecapitationBlood> __this_00;

		__this_00 = new BasicTitan.d__167<PlayDecapitationBlood>(0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60044FA")]
	[Address(RVA = "0x5B3A7E0", Offset = "0x5B397E0", VA = "0x5B3A7E0")]
	private Vector2 GetLookAngle(Vector3 target)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$GetLookAngle): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		Transform pUVar2;
		BasicTitanComponentCache pCVar3;
		float fVar4;
		float fVar5;
		Vector3 UVar6;
		Vector3 UVar7;
		Vector3 b;
		float local_58;
		float fStack_54;
		float fStack_34;
		float fStack_24;
		Quaternion local_18;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pUVar2 = pUVar1.Transform, pUVar2 != null)) {
			UVar6 = pUVar2.position;
			local_58 = target.x;
			fVar4 = atan2f(target.z - UVar6.z, local_58 - UVar6.x);
			pUVar1 = this.Cache;
			if ((pUVar1 != null) &&(pUVar2 = pUVar1.Transform, pUVar2 != null)) {
				local_18 = pUVar2.rotation;
				UVar6 = Quaternion.Internal_ToEulerRad(ref local_18);
				UVar7.x = UVar6.x * 57.29578;
				UVar7.y = UVar6.y * 57.29578;
				UVar7.z = UVar6.z * 57.29578;
				UVar6 = Quaternion.Internal_MakePositive(UVar7);
				pCVar3 = this.BasicCache;
				if (pCVar3 != null) {
					pUVar2 = pCVar3.Neck;
					if (pUVar2 != null) {
						UVar7 = pUVar2.position;
						pCVar3 = this.BasicCache;
						if (pCVar3 != null) {
							pUVar2 = pCVar3.Transform;
							if (pUVar2 != null) {
								b = pUVar2.position;
								fStack_24 = UVar6.y;
								fVar5 = fVar4 * 57.29578 + fStack_24 + -90.0;
								fVar4 = floorf(fVar5 / 360.0);
								fVar5 = fVar4 * -360.0 + fVar5;
								fVar4 = 360.0;
								if (fVar5 <= 360.0) {
									fVar4 = fVar5;
								}
								fVar4 = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar4);
								fVar5 = Util.DistanceIgnoreY(target, b);
								fStack_34 = UVar7.y;
								fStack_54 = target.y;
								fVar5 = atan2f(fStack_34 - fStack_54, fVar5);
								return (Vector2)(CONCAT44(~-(uint)(180.0 < fVar4) & (uint)fVar4 |(uint)(fVar4 + -360.0) & -(uint)(180.0 < fVar4), fVar5 * 57.29578) ^ 0x8000000000000000);
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044FB")]
	[Address(RVA = "0x5B3A9F0", Offset = "0x5B399F0", VA = "0x5B3A9F0")]
	protected void LateUpdateHeadPosition(Vector3 position)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$LateUpdateHeadPosition): 106 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		BaseComponentCache pUVar3;
		BaseCamera pCVar4;
		Camera pUVar5;
		BasicTitanComponentCache pCVar6;
		Transform pUVar7;
		Vector2 UVar8;
		Vector2 UVar9;
		System_Nullable_Quaternion__o pSVar10;
		UnityEngine_Vector3_StaticFields pUVar11;
		Transform pUVar12;
		uint uVar14;
		uint uVar15;
		float fVar16;
		float fVar17;
		float fVar18;
		uint extraout_XMM0_Db;
		uint uVar19;
		uint in_XMM0_Dc;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dc_03;
		uint extraout_XMM0_Dc_04;
		uint extraout_XMM0_Dc_05;
		uint in_XMM0_Dd;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint extraout_XMM0_Dd_02;
		uint extraout_XMM0_Dd_03;
		uint extraout_XMM0_Dd_04;
		uint extraout_XMM0_Dd_05;
		byte[] auVar20 = new byte[16];
		byte[] auVar21 = new byte[16];
		byte[] auVar22 = new byte[16];
		float fVar23;
		byte[] auVar24 = new byte[16];
		Quaternion UVar25;
		Quaternion UVar26;
		Vector3 UVar27;
		Vector3 UVar28;
		Vector3 euler;
		Vector3 euler_00;
		float fStack_b4;
		byte[] local_a8 = new byte[16];
		byte[] local_98 = new byte[32];
		Quaternion local_78;
		float local_60;
		float local_5c;
		Quaternion local_58;
		byte[] local_48 = new byte[16];
		byte[] local_38 = new byte[8];
		float fStack_30;
		float fStack_2c;
		Quaternion local_28;

		UVar28.z = position.z;
		local_78.z = (float)in_XMM0_Dc;
		local_78._0_8_ = position._0_8_;
		local_78.w = (float)in_XMM0_Dd;
		local_58 = (Quaternion)ZEXT816(0);
		pUVar3 = this.Cache;
		if ((pUVar3 == null) ||(pUVar12 = pUVar3.Transform, pUVar12 == null)) goto label_05c3afe1;
		UVar27 = pUVar12.position;
		local_5c = UVar27.z;
		fStack_30 = (float)extraout_XMM0_Dc;
		local_38 = UVar27._0_8_;
		fStack_2c = (float)extraout_XMM0_Dd;
		UVar28.x = local_78.x;
		UVar28.y = local_78.y;
		UVar9 = this.GetLookAngle(UVar28);
		fVar17 = UVar9.y;
		auVar21._8_4_ = extraout_XMM0_Dc_00;
		auVar21._0_4_ = UVar9.x;
		auVar21._4_4_ = UVar9.y;
		auVar21._12_4_ = extraout_XMM0_Dd_00;
		if ((-120.0 < fVar17 && fVar17 < -50.0) || (fVar17 < 120.0 && 50.0 < fVar17)) {
			fVar17 = this.LastGoodHeadAngle.y;
			if ((fVar17 < -50.0) || (local_a8 = auVar21, 50.0 < fVar17)) {
				pCVar4 = SceneLoader.CurrentCamera;
				if ((pCVar4 == null) ||((pUVar5 = pCVar4.Camera, pUVar5 == null ||(pUVar12 = pUVar5.transform , pUVar12 == null)))) goto label_05c3afe1;
				UVar28 = pUVar12.position;
				UVar9 = this.GetLookAngle(UVar28);
				local_a8._8_4_ = extraout_XMM0_Dc_02;
				local_a8._0_4_ = UVar9.x;
				local_a8._4_4_ = UVar9.y;
				local_a8._12_4_ = extraout_XMM0_Dd_02;
				fVar17 = this.LastGoodHeadAngle.y;
			}
			this.LastGoodHeadAngle.x = (float)local_a8._0_4_;
			local_a8._4_4_ = fVar17;
		}
		else {
			pUVar3 = this.Cache;
			if ((pUVar3 == null) ||(pUVar12 = pUVar3.Transform, pUVar12 == null)) goto label_05c3afe1;
			UVar27 = pUVar12.forward;
			local_48._8_4_ = extraout_XMM0_Dc_01;
			local_48._0_8_ = UVar27._0_8_;
			local_48._12_4_ = extraout_XMM0_Dd_01;
			local_60 = UVar27.z;
			if (Il2CppMethodInitialized_0753e72d == false) {
				Il2CppMethodInitialized_0753e72d = true;
				local_98[0] = false;
				local_98._1_3_ = 0;
				local_98._4_4_ = 0.0;
			}
			else {
				local_98[0] = false;
				local_98._1_3_ = 0;
				local_98._4_4_ = 0.0;
			}
			local_98[0] = false;
			local_98._1_3_ = 0;
			local_98._4_4_ = 0.0;
			if (Il2CppMethodInitialized_0753e729 == false) {
				local_98[0] = false;
				local_98._1_3_ = 0;
				local_98._4_4_ = 0.0;
				Il2CppMethodInitialized_0753e729 = true;
			}
			local_78.x = local_78.x - (float)local_38._0_4_;
			local_78.y = local_78.y - (float)local_38._4_4_;
			fVar23 = UVar28.z - local_5c;
			local_78.z = local_78.z - fStack_30;
			local_78.w = local_78.w - fStack_2c;
			fVar16 = local_78.x;
			fVar18 = local_78.y;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
				fVar16 = local_78.x;
				fVar18 = local_78.y;
			}
			uVar19 = 0;
			fVar16 = fVar23 * fVar23 + fVar18 * fVar18 + fVar16 * fVar16;
			if (fVar16 < 0.0) {
				fVar16 = sqrtf(fVar16);
				uVar19 = extraout_XMM0_Db;
				if (fVar16 <= 1e-05) goto label_05c3aba3;
	label_05c3ac73: ;
				fVar23 = fVar23 / fVar16;
				auVar20._4_4_ = fVar16;
				auVar20._0_4_ = fVar16;
				auVar20._8_4_ = uVar19;
				auVar20._12_4_ = uVar19;
				auVar20 = divps((byte[])local_78, auVar20);
				local_98[0] = auVar20[0];
				local_98._1_3_ = auVar20._1_3_;
				local_98._4_4_ = auVar20._4_4_;
				pUVar11 = (UnityEngine_Vector3_StaticFields)local_98;
			}
			else {
				fVar16 = SQRT(fVar16);
				if (1e-05 < fVar16) goto label_05c3ac73;
	label_05c3aba3: ;
				pUVar11 = typeof(Vector3).static_fields;
				fVar23 = (pUVar11.zeroVector).z;
			}
			uVar1 = (pUVar11.zeroVector).x;
			uVar2 = (pUVar11.zeroVector).y;
			if (0.0 <= local_60 * fVar23 + (float)local_48._4_4_ * (float)uVar2 + (float)local_48._0_4_ * (float)uVar1 ) {
				local_a8._0_4_ = UVar9.x;
				fVar23 = (float)local_a8._0_4_;
				local_a8 = auVar21;
			}
			else {
				pCVar4 = SceneLoader.CurrentCamera;
				if (((pCVar4 == null) ||(pUVar5 = pCVar4.Camera, pUVar5 == null)) ||(pUVar12 = pUVar5.transform, pUVar12 == null)) goto label_05c3afe1;
				UVar28 = pUVar12.position;
				UVar9 = this.GetLookAngle(UVar28);
				fVar17 = UVar9.y;
				local_a8._8_4_ = extraout_XMM0_Dc_03;
				local_a8._0_4_ = UVar9.x;
				local_a8._4_4_ = UVar9.y;
				local_a8._12_4_ = extraout_XMM0_Dd_03;
				fVar23 = UVar9.x;
			}
			UVar8.y = fVar17;
			UVar8.x = fVar23;
			this.LastGoodHeadAngle = UVar8;
		}
		pCVar6 = this.BasicCache;
		if ((pCVar6 != null) &&(pUVar12 = pCVar6.Head, pUVar12 != null)) {
			local_58 = pUVar12.rotation;
			UVar28 = Quaternion.Internal_ToEulerRad(ref local_58);
			UVar27.x = UVar28.x * 57.29578;
			UVar27.y = UVar28.y * 57.29578;
			UVar27.z = UVar28.z * 57.29578;
			UVar28 = Quaternion.Internal_MakePositive(UVar27);
			pCVar6 = this.BasicCache;
			if (pCVar6 != null) {
				local_78.z = (float)extraout_XMM0_Dc_04;
				local_78._0_8_ = UVar28._0_8_;
				local_78.w = (float)extraout_XMM0_Dd_04;
				pUVar7 = pCVar6.Head;
				if (pUVar7 != null) {
					local_58 = pUVar7.rotation;
					UVar28 = Quaternion.Internal_ToEulerRad(ref local_58);
					euler.x = UVar28.x * 57.29578;
					euler.y = UVar28.y * 57.29578;
					euler.z = UVar28.z * 57.29578;
					UVar28 = Quaternion.Internal_MakePositive(euler);
					pCVar6 = this.BasicCache;
					if ((pCVar6 != null) &&(pUVar7 = pCVar6.Head, pUVar7 != null)) {
						auVar21 = minps(_DAT_01007a20, local_a8);
						uVar14 = -(uint)(-80.0 <= local_a8._0_4_);
						uVar15 = -(uint)(-80.0 <= local_a8._4_4_);
						auVar22._0_4_ = auVar21._0_4_ & uVar14;
						auVar22._4_4_ = auVar21._4_4_ & uVar15;
						auVar22._8_4_ = auVar21._8_4_ & -(uint)(0.0 <= local_a8._8_4_);
						auVar22._12_4_ = auVar21._12_4_ & -(uint)(0.0 <= local_a8._12_4_);
						auVar24._0_8_ = CONCAT44(~uVar15, ~uVar14) & 0xc2a00000c2a00000;
						auVar24._8_8_ = 0;
						local_58 = pUVar7.rotation;
						UVar27 = Quaternion.Internal_ToEulerRad(ref local_58);
						euler_00.x = UVar27.x * 57.29578;
						euler_00.y = UVar27.y * 57.29578;
						euler_00.z = UVar27.z * 57.29578;
						UVar27 = Quaternion.Internal_MakePositive(euler_00);
						fStack_b4 = UVar28.y;
						local_a8._0_4_ = SUB164(auVar24 | auVar22, 0);
						local_a8._4_4_ = SUB164(auVar24 | auVar22, 4);
						local_98._0_4_ = (local_78.x + (float)local_a8._0_4_) * 0.017453292;
						local_98._4_4_ = (fStack_b4 + (float)local_a8._4_4_) * 0.017453292;
						local_98._8_4_ = UVar27.z * 0.017453292;
						UVar25 = Quaternion.Internal_FromEulerRad((Vector3)local_98);
						pUVar12.rotation = UVar25;
						pCVar6 = this.BasicCache;
						if ((pCVar6 != null) &&(pUVar12 = pCVar6.Head, pUVar12 != null)) {
							UVar26 = this._oldHeadRotation;
							UVar25 = pUVar12.localRotation;
							local_78.z = (float)extraout_XMM0_Dc_05;
							local_78._0_8_ = UVar25._0_8_;
							local_78.w = (float)extraout_XMM0_Dd_05;
							fVar17 = Time.deltaTime;
							local_a8._0_8_ = UVar26._0_8_;
							local_a8._8_8_ = UVar26._8_8_;
							local_98._0_8_ = local_a8._0_8_;
							local_98._8_8_ = local_a8._8_8_;
							local_28.x = local_78.x;
							local_28.y = local_78.y;
							local_28._8_8_ = UVar25._8_8_;
							UVar25 = Quaternion.Internal_Lerp((Quaternion)local_98, ref local_28, fVar17 * 10.0);
							pUVar12.localRotation = UVar25;
							pCVar6 = this.BasicCache;
							if ((pCVar6 != null) &&(pUVar12 = pCVar6.Head, pUVar12 != null)) {
								UVar26 = (Quaternion)pUVar12.localRotation;
								this._oldHeadRotation = UVar26;
								pCVar6 = this.BasicCache;
								if ((pCVar6 != null) &&(pUVar12 = pCVar6.Head, pUVar12 != null)) {
									UVar25 = pUVar12.rotation;
									local_98[0] = false;
									local_98._1_3_ = 0;
									local_98._4_4_ = 0.0;
									local_98._8_4_ = 0.0;
									local_98._12_4_ = 0.0;
									local_98._16_4_ = 0.0;
									local_98 = new Nullable<Quaternion>(UVar25);
									this.LateUpdateHeadRotation.value.w = (float)local_98._16_4_;
									this.LateUpdateHeadRotation.hasValue = (bool)local_98[0];
									*(undefined3)&this.LateUpdateHeadRotation.field_0x1 = local_98._1_3_;
									this.LateUpdateHeadRotation.value.x = (float)local_98._4_4_;
									pSVar10 = &this.LateUpdateHeadRotation;
									pSVar10.value.y = (float)local_98._8_4_;
									pSVar10.value.z = (float)local_98._12_4_;
									return;
								}
							}
						}
					}
				}
			}
		}
	label_05c3afe1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044FC")]
	[Address(RVA = "0x5B3AFF0", Offset = "0x5B39FF0", VA = "0x5B3AFF0")]
	protected void LateUpdateHead(BaseCharacter target)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$LateUpdateHead): 61 lines keep C-only constructs
		float fVar1;
		float fVar2;
		byte bVar3;
		BaseComponentCache pUVar4;
		Transform pUVar5;
		Transform pUVar6;
		System_Nullable_Quaternion__o pSVar7;
		bool bVar8;
		BasicTitanComponentCache pCVar9;
		uint uVar10;
		float fVar11;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_02;
		float fVar12;
		ulong uVar13;
		byte[] auVar14 = new byte[16];
		byte[] auVar15 = new byte[16];
		byte[] auVar17 = new byte[12];
		byte[] auVar16 = new byte[16];
		Quaternion UVar18;
		Vector3 UVar19;
		Vector3 UVar20;
		Vector3 euler;
		Vector3 euler_00;
		Vector3 euler_01;
		Vector3 b;
		float local_c8;
		float fStack_c4;
		float local_b8;
		Quaternion local_a8;
		byte[] local_98 = new byte[8];
		System_Nullable_Quaternion__Fields local_88;
		float local_70;
		float local_6c;
		Quaternion local_68;
		float local_58;
		float fStack_54;
		byte[] local_48 = new byte[16];
		float local_38;
		float fStack_34;
		Quaternion local_28;

		local_a8 = (Quaternion)ZEXT816(0);
		if (this.Dead != false) {
			return;
		}
		bVar8 = ((Object)target != null);
		if (bVar8) {
			if (((target == null) ||(pUVar4 = target.Cache, pUVar4 == null)) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_05c3b69f;
			UVar19 = pUVar5.position;
			fVar1 = UVar19.y;
			bVar3 = (typeof(BaseTitan)._2).typeHierarchyDepth;
			if ((bVar3 <= (target.klass._2).typeHierarchyDepth) &&((target.klass._2).typeHierarchy[(ulong)bVar3 - 1] == typeof(BaseTitan))) {
				if (((*(ulong)((sbyte)target + 0x108)) == null) ||(pUVar5 = *(Transform*)((long)(*(ulong)((sbyte)target + 0x108)) + 0x38), pUVar5 == null)) goto label_05c3b69f;
				UVar19 = pUVar5.position;
				fVar1 = UVar19.y;
			}
			pUVar4 = target.Cache;
			if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_05c3b69f;
			UVar19 = pUVar5.position;
			pUVar4 = this.Cache;
			if (pUVar4 == null) goto label_05c3b69f;
			local_98._0_4_ = UVar19.z;
			pUVar5 = pUVar4.Transform;
			if (pUVar5 == null) goto label_05c3b69f;
			UVar20 = pUVar5.position;
			local_c8 = UVar19.x;
			fVar2 = atan2f((float)local_98._0_4_ - UVar20.z, local_c8 - UVar20.x);
			pUVar4 = this.Cache;
			if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_05c3b69f;
			local_a8 = pUVar5.rotation;
			UVar19 = Quaternion.Internal_ToEulerRad(ref local_a8);
			UVar20.x = UVar19.x * 57.29578;
			UVar20.y = UVar19.y * 57.29578;
			UVar20.z = UVar19.z * 57.29578;
			UVar19 = Quaternion.Internal_MakePositive(UVar20);
			fStack_34 = UVar19.y;
			local_38 = fStack_34 + -90.0 + fVar2 * 57.29578;
			fVar2 = floorf(local_38 / 360.0);
			pCVar9 = this.BasicCache;
			if ((pCVar9 == null) ||(pUVar5 = pCVar9.Neck, local_6c = fVar2, pUVar5 == null)) goto label_05c3b69f;
			UVar19 = pUVar5.position;
			pUVar4 = target.Cache;
			if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_05c3b69f;
			local_98._0_4_ = this.Size;
			UVar20 = pUVar5.position;
			pCVar9 = this.BasicCache;
			if (pCVar9 == null) goto label_05c3b69f;
			local_58 = UVar20.z;
			local_68.z = extraout_XMM0_Dc;
			local_68._0_8_ = UVar20._0_8_;
			local_68.w = extraout_XMM0_Dd;
			pUVar5 = pCVar9.Transform;
			if (pUVar5 == null) goto label_05c3b69f;
			fStack_c4 = UVar19.y;
			UVar19 = pUVar5.position;
			fVar2 = UVar19.x;
			fVar11 = UVar19.y;
			fVar12 = UVar19.z;
			if ((typeof(Util)._2).cctor_finished_or_no_cctor == 0) {
				local_48._8_4_ = extraout_XMM0_Dc_00;
				local_48._0_8_ = UVar19._0_8_;
				local_48._12_4_ = extraout_XMM0_Dd_00;
				local_70 = UVar19.z;
				fVar2 = (float)local_48._0_4_;
				fVar11 = (float)local_48._4_4_;
				fVar12 = local_70;
			}
			UVar19.z = local_58;
			UVar19.x = local_68.x;
			UVar19.y = local_68.y;
			b.y = fVar11;
			b.x = fVar2;
			b.z = fVar12;
			fVar2 = Util.DistanceIgnoreY(UVar19, b);
			fVar1 = atan2f((fStack_c4 + (float)local_98._0_4_ + (float)local_98._0_4_) - fVar1, fVar2);
			pCVar9 = this.BasicCache;
			if ((pCVar9 == null) ||(pUVar5 = pCVar9.Head, pUVar5 == null)) goto label_05c3b69f;
			local_a8 = pUVar5.rotation;
			UVar19 = Quaternion.Internal_ToEulerRad(ref local_a8);
			euler.x = UVar19.x * 57.29578;
			euler.y = UVar19.y * 57.29578;
			euler.z = UVar19.z * 57.29578;
			UVar19 = Quaternion.Internal_MakePositive(euler);
			pCVar9 = this.BasicCache;
			if ((pCVar9 == null) ||(pUVar6 = pCVar9.Head, pUVar6 == null)) goto label_05c3b69f;
			local_a8 = pUVar6.rotation;
			UVar20 = Quaternion.Internal_ToEulerRad(ref local_a8);
			euler_00.x = UVar20.x * 57.29578;
			euler_00.y = UVar20.y * 57.29578;
			euler_00.z = UVar20.z * 57.29578;
			UVar20 = Quaternion.Internal_MakePositive(euler_00);
			pCVar9 = this.BasicCache;
			if (pCVar9 == null) goto label_05c3b69f;
			local_98 = (byte[])UVar20._0_8_;
			pUVar6 = pCVar9.Head;
			if (pUVar6 == null) goto label_05c3b69f;
			fVar2 = local_38 + local_6c * -360.0;
			auVar17 = ZEXT812(0x43b40000);
			if (fVar2 <= auVar17._0_4_) {
				auVar17._4_8_ = auVar17._4_8_;
				auVar17._0_4_ = fVar2;
			}
			fVar2 = (float)(-(uint)(0.0 <= fVar2) & auVar17._0_4_);
			fVar12 = (float)(~-(uint)(180.0 < fVar2) & (uint)fVar2 | (uint)(fVar2 + -360.0) & -(uint)(180.0 < fVar2));
			fVar11 = -fVar12;
			fVar2 = 40.0;
			if (fVar11 <= 40.0) {
				fVar2 = fVar11;
			}
			uVar10 = -(uint)(fVar12 <= 40.0);
			fVar1 = fVar1 * 57.29578;
			local_68 = (Quaternion)ZEXT416(~uVar10 & 0xc2200000 | (uint)fVar2 & uVar10);
			fVar2 = 30.0;
			if (fVar1 <= 30.0) {
				fVar2 = fVar1;
			}
			auVar14._0_12_ = ZEXT812(0xc2200000);
			auVar14._12_4_ = 0;
			fVar11 = auVar14._0_4_;
			uVar10 = -(uint)(fVar11 <= fVar1);
			local_a8 = pUVar6.rotation;
			auVar15._8_8_ = auVar14._8_8_;
			auVar15._0_8_ = local_a8._8_8_;
			UVar20 = Quaternion.Internal_ToEulerRad(ref local_a8);
			auVar17 = auVar15._4_12_;
			euler_01.x = UVar20.x * 57.29578;
			euler_01.y = UVar20.y * 57.29578;
			euler_01.z = UVar20.z * 57.29578;
			UVar20 = Quaternion.Internal_MakePositive(euler_01);
			local_c8 = UVar19.x;
			local_88.value.x = ((float)local_98._4_4_ + local_68.x) * 0.017453292;
			local_88._0_4_ = (local_c8 + (float)(~uVar10 & (uint)fVar11 | (uint)fVar2 & uVar10)) * 0.017453292;
			auVar16._0_4_ = UVar20.z * 0.017453292;
			auVar16._4_12_ = auVar17;
			local_88.value.y = auVar16._0_4_;
			UVar18 = Quaternion.Internal_FromEulerRad(ref local_88);
			pUVar5.rotation = UVar18;
		}
		bVar8 = this.IsMine();
		local_b8 = 10.0;
		if ((bVar8) && (uVar10 = this.State - 10, uVar10 < 9)) {
			local_b8 = *(float)(&g_data_010a5cdc + (long)(int)uVar10 * 4);
		}
		pCVar9 = this.BasicCache;
		if (pCVar9 == null) goto label_05c3b69f;
		pUVar5 = pCVar9.Head;
		if (this._aiHeadRotation.hasValue == false) {
			if (pUVar5 == null) goto label_05c3b69f;
			UVar18 = pUVar5.rotation;
			uVar13 = UVar18._8_8_;
			fVar1 = UVar18.x;
			fVar2 = UVar18.y;
			pCVar9 = this.BasicCache;
			if (pCVar9 == null) goto label_05c3b69f;
		}
		else {
			pSVar7 = &this._aiHeadRotation;
			fVar1 = pSVar7.value.x;
			fVar2 = pSVar7.value.y;
			pSVar7 = &this._aiHeadRotation;
			uVar13._0_4_ = pSVar7.value.z;
			uVar13._4_4_ = pSVar7.value.w;
		}
		local_98 = (byte[])uVar13;
		pUVar6 = pCVar9.Head;
		if (pUVar6 != null) {
			UVar18 = pUVar6.rotation;
			local_68.z = extraout_XMM0_Dc_02;
			local_68._0_8_ = UVar18._0_8_;
			local_68.w = extraout_XMM0_Dd_02;
			fVar11 = Time.deltaTime;
			local_c8._0_1_ = SUB41(fVar1, 0);
			local_c8._1_3_ = (undefined3)((uint)fVar1 >> 8);
			local_88.hasValue = local_c8._0_1_;
			local_88._1_3_ = local_c8._1_3_;
			local_88.value.x = fVar2;
			local_88.value.y = (float)local_98._0_4_;
			local_88.value.z = (float)local_98._4_4_;
			local_28.x = local_68.x;
			local_28.y = local_68.y;
			local_28.z = local_58;
			local_28.w = fStack_54;
			UVar18 = Quaternion.Internal_Lerp(ref local_88, ref local_28, fVar11 * local_b8);
			if (pUVar5 != null) {
				pUVar5.rotation = UVar18;
				pCVar9 = this.BasicCache;
				if ((pCVar9 != null) &&(pUVar5 = pCVar9.Head, pUVar5 != null)) {
					UVar18 = pUVar5.rotation;
					local_88.hasValue = false;
					local_88._1_3_ = 0;
					local_88.value.x = 0.0;
					local_88.value.y = 0.0;
					local_88.value.z = 0.0;
					local_88.value.w = 0.0;
					local_88 = new Nullable<Quaternion>(UVar18);
					this._aiHeadRotation.value.w = local_88.value.w;
					this._aiHeadRotation.hasValue = local_88.hasValue;
					*(undefined3)&this._aiHeadRotation.field_0x1 = local_88._1_3_;
					this._aiHeadRotation.value.x = local_88.value.x;
					pSVar7 = &this._aiHeadRotation;
					pSVar7.value.y = local_88.value.y;
					pSVar7.value.z = local_88.value.z;
					return;
				}
			}
		}
	label_05c3b69f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044FD")]
	[Address(RVA = "0x5B3B6B0", Offset = "0x5B3A6B0", VA = "0x5B3B6B0", Slot = "184")]
	protected override void Update()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$Update): clean
		this.StartDeathAnimation();
		this.Update();
		return;
	}

	[Token(Token = "0x60044FE")]
	[Address(RVA = "0x5B3B6D0", Offset = "0x5B3A6D0", VA = "0x5B3B6D0", Slot = "113")]
	protected override void FixedUpdate()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$FixedUpdate): clean
		TitanDeathDissolve pCVar1;
		AnimationHandler pCVar2;
		BasicTitanComponentCache pCVar3;
		BaseHitbox pCVar4;
		Collider pUVar5;
		bool bVar6;
		String __this_00;
		bool bVar7;
		float fVar8;

		pCVar1 = this.DeathDissolve;
		if ((pCVar1 != null) &&(pCVar1._CollidersDisabled_k__BackingField != false)) {
			return;
		}
		this.FixedUpdate();
		bVar7 = true;
		if (this.Dead == false) {
			pCVar2 = this.Animation;
			if (pCVar2 == null) goto label_05c3b893;
			__this_00 = pCVar2.GetCurrentAnimation();
			if (__this_00 == null) goto label_05c3b893;
			bVar6 = __this_00.StartsWith("Amarture_VER2|grab.", 4);
			if (bVar6) {
				pCVar2 = this.Animation;
				if (pCVar2 == null) goto label_05c3b893;
				fVar8 = pCVar2.GetCurrentNormalizedTime();
				bVar7 = 1.0 <= fVar8;
			}
		}
		pCVar3 = this.BasicCache;
		if (pCVar3 != null) {
			if ((bVar7) || (this.LeftArmDisabled != false)) {
				bVar6 = false;
			}
			else {
				bVar6 = this.LeftHandDisabled == false;
			}
			pCVar4 = pCVar3.HandLHitbox;
			pUVar5 = pCVar3.HandLHurtbox;
			fVar8 = pCVar3.HandLHurtboxRadius;
			BasicTitan.UpdateHandHurtbox(pUVar5, pCVar4, fVar8, bVar6);
			pCVar3 = this.BasicCache;
			if (pCVar3 != null) {
				if ((bVar7) || (this.RightArmDisabled != false)) {
					bVar7 = false;
				}
				else {
					bVar7 = this.RightHandDisabled == false;
				}
				pCVar4 = pCVar3.HandRHitbox;
				pUVar5 = pCVar3.HandRHurtbox;
				fVar8 = pCVar3.HandRHurtboxRadius;
				BasicTitan.UpdateHandHurtbox(pUVar5, pCVar4, fVar8, bVar7);
				return;
			}
		}
	label_05c3b893: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60044FF")]
	[Address(RVA = "0x5B3B8A0", Offset = "0x5B3A8A0", VA = "0x5B3B8A0")]
	private static void UpdateHandHurtbox(Collider hurtbox, BaseHitbox hitbox, float normalRadius, bool grabbing)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$UpdateHandHurtbox): 2 lines keep C-only constructs
		byte bVar1;
		SphereCollider __this;
		float fVar2;

		if (hurtbox != null) {
			bVar1 = (typeof(SphereCollider)._2).typeHierarchyDepth;
			if ((bVar1 <= (hurtbox.klass._2).typeHierarchyDepth) &&((hurtbox.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(SphereCollider))) {
				if (hitbox == null) {
					throw new NullReferenceException();
				}
				__this = (SphereCollider)hitbox._collider;
				if (((__this != null) &&(bVar1 <= (__this.klass._2).typeHierarchyDepth)) &&((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(SphereCollider))) {
					if (grabbing) {
						normalRadius = __this.radius;
					}
					fVar2 = hurtbox.radius;
					if ((fVar2 != normalRadius) || (NAN(fVar2) || NAN(normalRadius))) {
						hurtbox.radius = normalRadius;
						return;
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x6004500")]
	[Address(RVA = "0x5B3B980", Offset = "0x5B3A980", VA = "0x5B3B980", Slot = "114")]
	protected override void LateUpdate()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$LateUpdate): 69 lines keep C-only constructs
		code cVar1;
		uint uVar2;
		int viewId;
		object obj;
		BasicTitanAnimations pCVar5;
		AnimationHandler __this_00;
		BasicTitanComponentCache pCVar6;
		Transform pUVar7;
		IntPtr pvVar8;
		ulong uVar9;
		ulong uVar10;
		ulong uVar11;
		ulong uVar12;
		ulong uVar13;
		System_Nullable_Quaternion__o pSVar14;
		bool bVar15;
		sbyte cVar16;
		bool bVar17;
		BaseCharacter target;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		MethodInfo pMVar20;
		MethodInfo extraout_RDX_03;
		bool bVar22;
		float fVar23;
		ulong uVar24;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dd;
		float in_XMM1_Da;
		float in_XMM1_Db;
		float fVar25;
		Vector3 UVar26;
		Vector3 a;
		Quaternion UVar27;
		Vector3 b;
		Quaternion UStack_78;
		byte[] auStack_68 = new byte[8];
		Quaternion UStack_58;
		ulong uStack_48;
		float fStack_40;
		float fStack_3c;
		Quaternion UStack_30;

		this.LateUpdate();
		if (this._headDetached != false) {
			this.UpdateHiddenLimbs();
			this.UpdateDeathDissolve();
			return;
		}
		this.UpdateHeadScale();
		uVar2 = this.State;
		if ((3 < uVar2) || (bVar22 = true, uVar2 == 2)) {
			bVar22 = uVar2 == 0x18;
		}
		target = (BaseCharacter)(this.klass.vtable)._74_IsMine.method;
		bVar15 = this.IsMine();
		bVar17 = this.AI;
		pMVar20 = extraout_RDX;
		if (bVar15) {
			if (bVar17 == false) {
				if (bVar22 == false) {
					this.LateUpdateHeadRotation.hasValue = false;
					*(undefined3)&this.LateUpdateHeadRotation.field_0x1 = 0;
					this.LateUpdateHeadRotation.value.x = 0.0;
					pSVar14 = &this.LateUpdateHeadRotation;
					pSVar14.value.y = 0.0;
					pSVar14.value.z = 0.0;
					this.LateUpdateHeadRotation.value.w = 0.0;
					goto label_05c3bc0e;
				}
				target = (BaseCharacter)(this.klass.vtable)._76_GetAimPoint.method;
				UVar26 = this.GetAimPoint();
				this.LateUpdateHeadPosition(UVar26);
				goto label_05c3bcb9;
			}
			obj = (object)this.TargetEnemy;
			if (obj == null) {
	label_05c3bc9e: ;
				this.TargetViewId = -1;
			}
			else {
				cVar16 = obj.ValidTarget();
				uVar11._4_4_ = UStack_30.y;
				uVar11._0_4_ = UStack_30.x;
				uVar9._4_4_ = UStack_58.y;
				uVar9._0_4_ = UStack_58.x;
				pMVar20 = extraout_RDX_01;
				if ((cVar16 == false) ||(pMVar20 = (MethodInfo)this.TargetEnemy, pMVar20 == null)) goto label_05c3bc9e;
				cVar1 = (code)(typeof(BaseCharacter)._2).typeHierarchyDepth;
				if (((byte)pMVar20.methodPointer[0x130] < (byte)cVar1) ||(*(BaseCharacter*)(*(long)(pMVar20.methodPointer + 200) + -8 + (ulong)(byte)cVar1 * 8) != typeof(BaseCharacter))) goto label_05c3bc9e;
				uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
				if (pMVar20[1].return_type == null) goto label_05c3be7e;
				pvVar8 = pMVar20[1].return_type[2].data;
				UStack_58._0_8_ = uVar9;
				uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
				UStack_30._0_8_ = uVar11;
				if (pvVar8 == null) goto label_05c3be7e;
				this.TargetViewId = *(int)((long)pvVar8 + 0x94);
				bVar17 = false;
				if (this.IsCrawler == false) {
					uVar24 = il2cpp_runtime_helper_02fd8410();
					uVar12._4_4_ = UStack_30.y;
					uVar12._0_4_ = UStack_30.x;
					uVar10._4_4_ = UStack_58.y;
					uVar10._0_4_ = in_XMM1_Da;
					pCVar6 = this.BasicCache;
					uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
					if (pCVar6 == null) goto label_05c3be7e;
					pUVar7 = pCVar6.Transform;
					fStack_40 = extraout_XMM0_Dc;
					fStack_3c = extraout_XMM0_Dd;
					UStack_58._0_8_ = uVar10;
					uStack_48 = uVar24;
					UStack_30._0_8_ = uVar12;
					if (pUVar7 == null) goto label_05c3be7e;
					UStack_58.x = in_XMM1_Da;
					UVar26 = pUVar7.position;
					fVar23 = UVar26.x;
					fVar25 = UVar26.y;
					if ((typeof(Util)._2).cctor_finished_or_no_cctor == 0) {
						auStack_68 = (byte[])UVar26._0_8_;
						fVar23 = (float)auStack_68._0_4_;
						fVar25 = (float)auStack_68._4_4_;
					}
					a.z = UStack_58.x;
					a.x = (float)(int)uStack_48;
					a.y = (float)(int)((ulong)uStack_48 >> 0x20);
					b.y = fVar25;
					b.x = fVar23;
					b.z = UVar26.z;
					fVar23 = Util.DistanceIgnoreY(a, b);
					bVar17 = fVar23 < 100.0;
					pMVar20 = extraout_RDX_02;
				}
				if ((bVar17 & bVar22) != 0) {
					this.LookAtTarget = true;
					target = (BaseCharacter)il2cpp_codegen_is_inst_class((object)this.TargetEnemy, typeof(BaseCharacter));
					pMVar20 = extraout_RDX_03;
					goto label_05c3bcb4;
				}
			}
			this.LookAtTarget = false;
	label_05c3bcaf: ;
			target = null;
	label_05c3bcb4: ;
			this.LateUpdateHead(target);
		}
		else {
			if (bVar17 != false) {
				if ((this.LookAtTarget == false) || (viewId = this.TargetViewId, viewId < 0)) goto label_05c3bcaf;
				target = Util.FindCharacterByViewId(viewId);
				pMVar20 = extraout_RDX_00;
				goto label_05c3bcb4;
			}
			if ((bVar22 & this.LateUpdateHeadRotationRecv.hasValue) != 0) {
				pCVar6 = this.BasicCache;
				if (pCVar6 == null) goto label_05c3be7e;
				pUVar7 = pCVar6.Head;
				UVar27 = (this.LateUpdateHeadRotationRecv).Value;
				uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
				if (pUVar7 == null) goto label_05c3be7e;
				fVar23 = UVar27.z;
				fVar25 = UVar27.w;
				pUVar7.rotation = UVar27;
				uVar13._4_4_ = UStack_30.y;
				uVar13._0_4_ = UStack_30.x;
				uVar24._4_4_ = UStack_58.y;
				uVar24._0_4_ = UStack_58.x;
				pCVar6 = this.BasicCache;
				uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
				if (pCVar6 == null) goto label_05c3be7e;
				pUVar7 = pCVar6.Head;
				UStack_58._0_8_ = uVar24;
				uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
				UStack_30._0_8_ = uVar13;
				if (pUVar7 == null) goto label_05c3be7e;
				uStack_48._0_4_ = this._oldHeadRotation.x;
				uStack_48._4_4_ = this._oldHeadRotation.y;
				fStack_40 = this._oldHeadRotation.z;
				fStack_3c = this._oldHeadRotation.w;
				UStack_58._0_8_ = pUVar7.localRotation;
				auStack_68._4_4_ = fVar25;
				auStack_68._0_4_ = fVar23;
				fVar23 = Time.deltaTime;
				UStack_78.y = uStack_48._4_4_;
				UStack_78.x = (float)uStack_48;
				UStack_78._8_8_ = CONCAT44(fStack_3c, fStack_40);
				UStack_30.z = auStack_68._0_4_;
				UStack_30.w = auStack_68._4_4_;
				UStack_30._0_8_ = UStack_58._0_8_;
				UVar27 = Quaternion.Internal_Lerp(ref UStack_78, ref UStack_30, fVar23 * 10.0);
				in_XMM1_Da = UVar27.z;
				in_XMM1_Db = UVar27.w;
				pUVar7.localRotation = UVar27;
	label_05c3bc0e: ;
				pCVar6 = this.BasicCache;
				uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
				if (pCVar6 == null) goto label_05c3be7e;
				uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
				if (pCVar6.Head == null) goto label_05c3be7e;
				target = null;
				uVar24 = UnityEngine_Transform__get_localRotation();
				this._oldHeadRotation.x = (float)(int)uVar24;
				this._oldHeadRotation.y = (float)(int)((ulong)uVar24 >> 0x20);
				this._oldHeadRotation.z = in_XMM1_Da;
				this._oldHeadRotation.w = in_XMM1_Db;
			}
		}
	label_05c3bcb9: ;
		this.UpdateHiddenLimbs();
		this.UpdateLimbCuts();
		if (this.AI != false) {
	label_05c3bd7e: ;
			this.UpdateDeathDissolve();
			return;
		}
		pCVar5 = this.BasicAnimations;
		if (pCVar5 != null) {
			__this_00 = this.Animation;
			if (__this_00 != null) {
				target = (BaseCharacter)pCVar5.RunCrawler;
				bVar22 = __this_00.IsPlaying((String)target);
				if (!bVar22) goto label_05c3bd7e;
				pCVar6 = this.BasicCache;
				if (pCVar6 != null) {
					pUVar7 = pCVar6.Body;
					UStack_78.x = -1.5707964;
					UStack_78.y = 0.0;
					UStack_78._8_8_ = UStack_78._8_8_ & 0xffffffff00000000;
					UVar27 = Quaternion.Internal_FromEulerRad(ref UStack_78);
					if (pUVar7 != null) {
						pUVar7.localRotation = UVar27;
						pCVar6 = this.BasicCache;
						if (pCVar6 != null) {
							pUVar7 = pCVar6.Core;
							if (pUVar7 != null) {
								target = null;
								pUVar7.localPosition = (Vector3)ZEXT812(0xbd4ccccd00000000);
								goto label_05c3bd7e;
							}
						}
					}
				}
			}
		}
	label_05c3be7e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004501")]
	[Address(RVA = "0x5B3BE90", Offset = "0x5B3AE90", VA = "0x5B3BE90")]
	private void UpdateHiddenLimbs()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$UpdateHiddenLimbs): 8 lines keep C-only constructs
		Vector3 pUVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		BasicTitanComponentCache pCVar11;
		Transform pUVar12;
		bool bVar13;
		float fVar14;
		float fVar15;
		float fVar16;
		Vector3 value;
		Vector3 UVar17;
		Vector3 value_00;
		Vector3 value_01;

		pCVar11 = this.BasicCache;
		if (pCVar11 == null) goto label_05c3c4bd;
		if (this.LeftArmDisabled == false) {
			bVar13 = false;
		}
		else if (this._GoreEnabled_k__BackingField == false) {
			bVar13 = true;
		}
		else {
			bVar13 = 6.5 <= this._leftArmDisabledTimeLeft;
		}
		pUVar12 = pCVar11.ForearmL;
		if ((typeof(BasicTitan)._2).cctor_finished_or_no_cctor == 0) {
			if (bVar13) goto label_05c3bf19;
	label_05c3bf8a: ;
			if (pUVar12 == null) goto label_05c3c4bd;
			UVar17 = pUVar12.localScale;
			pUVar1 = &Vector3.oneVector;
			uVar2 = pUVar1.x;
			uVar6 = pUVar1.y;
			fVar14 = UVar17.y - (float)uVar6;
			fVar15 = UVar17.z - (Vector3.oneVector).z;
			fVar16 = UVar17.x - (float)uVar2;
			if (9.9999994e-11 <= fVar14 * fVar14 + fVar16 * fVar16 + fVar15 * fVar15) {
				pUVar12.localScale = (Vector3)pUVar1.fields;
			}
		}
		else {
			if (!bVar13) goto label_05c3bf8a;
	label_05c3bf19: ;
			if (pUVar12 == null) goto label_05c3c4bd;
			UVar17.z = 0.01;
			UVar17.x = 0.01;
			UVar17.y = 0.01;
			pUVar12.localScale = UVar17;
			pUVar12.localRotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
		}
		pCVar11 = this.BasicCache;
		if (pCVar11 == null) goto label_05c3c4bd;
		if (this.RightArmDisabled == false) {
			bVar13 = false;
			pUVar12 = pCVar11.ForearmR;
			uVar10 = (typeof(BasicTitan)._2).cctor_finished_or_no_cctor;
	joined_r0x05c3c08a: ;
			if (uVar10 != 0) goto label_05c3c090;
	label_05c3c11a: ;
			if (bVar13) goto label_05c3c099;
	label_05c3c128: ;
			if (pUVar12 == null) goto label_05c3c4bd;
			UVar17 = pUVar12.localScale;
			pUVar1 = &Vector3.oneVector;
			uVar3 = pUVar1.x;
			uVar7 = pUVar1.y;
			fVar14 = UVar17.y - (float)uVar7;
			fVar15 = UVar17.z - (Vector3.oneVector).z;
			fVar16 = UVar17.x - (float)uVar3;
			if (9.9999994e-11 <= fVar14 * fVar14 + fVar16 * fVar16 + fVar15 * fVar15) {
				pUVar12.localScale = (Vector3)pUVar1.fields;
			}
		}
		else {
			if (this._GoreEnabled_k__BackingField == false) {
				bVar13 = true;
				pUVar12 = pCVar11.ForearmR;
				uVar10 = (typeof(BasicTitan)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05c3c08a;
			}
			bVar13 = 6.5 <= this._rightArmDisabledTimeLeft;
			pUVar12 = pCVar11.ForearmR;
			if ((typeof(BasicTitan)._2).cctor_finished_or_no_cctor == 0) goto label_05c3c11a;
	label_05c3c090: ;
			if (!bVar13) goto label_05c3c128;
	label_05c3c099: ;
			if (pUVar12 == null) goto label_05c3c4bd;
			value.z = 0.01;
			value.x = 0.01;
			value.y = 0.01;
			pUVar12.localScale = value;
			pUVar12.localRotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
		}
		pCVar11 = this.BasicCache;
		if (pCVar11 == null) goto label_05c3c4bd;
		if (this.LeftHandDisabled == false) {
			bVar13 = false;
			pUVar12 = pCVar11.HandL;
			if ((typeof(BasicTitan)._2).cctor_finished_or_no_cctor != 0) goto label_05c3c202;
	label_05c3c28b: ;
			if (bVar13) goto label_05c3c20b;
	label_05c3c299: ;
			if (pUVar12 == null) goto label_05c3c4bd;
			UVar17 = pUVar12.localScale;
			pUVar1 = &Vector3.oneVector;
			uVar4 = pUVar1.x;
			uVar8 = pUVar1.y;
			fVar14 = UVar17.y - (float)uVar8;
			fVar15 = UVar17.z - (Vector3.oneVector).z;
			fVar16 = UVar17.x - (float)uVar4;
			if (9.9999994e-11 <= fVar14 * fVar14 + fVar16 * fVar16 + fVar15 * fVar15) {
				pUVar12.localScale = (Vector3)pUVar1.fields;
			}
		}
		else {
			bVar13 = this._GoreEnabled_k__BackingField == false;
			pUVar12 = pCVar11.HandL;
			if ((typeof(BasicTitan)._2).cctor_finished_or_no_cctor == 0) goto label_05c3c28b;
	label_05c3c202: ;
			if (!bVar13) goto label_05c3c299;
	label_05c3c20b: ;
			if (pUVar12 == null) goto label_05c3c4bd;
			value_00.z = 0.01;
			value_00.x = 0.01;
			value_00.y = 0.01;
			pUVar12.localScale = value_00;
			pUVar12.localRotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
		}
		pCVar11 = this.BasicCache;
		if (pCVar11 != null) {
			if (this.RightHandDisabled == false) {
				bVar13 = false;
				pUVar12 = pCVar11.HandR;
				uVar10 = (typeof(BasicTitan)._2).cctor_finished_or_no_cctor;
			}
			else {
				bVar13 = this._GoreEnabled_k__BackingField == false;
				pUVar12 = pCVar11.HandR;
				uVar10 = (typeof(BasicTitan)._2).cctor_finished_or_no_cctor;
			}
			if (uVar10 == 0) {
			}
			if (bVar13) {
				if (pUVar12 != null) {
					value_01.z = 0.01;
					value_01.x = 0.01;
					value_01.y = 0.01;
					pUVar12.localScale = value_01;
					pUVar12.localRotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
					return;
				}
			}
			else if (pUVar12 != null) {
				UVar17 = pUVar12.localScale;
				pUVar1 = &Vector3.oneVector;
				uVar5 = pUVar1.x;
				uVar9 = pUVar1.y;
				fVar14 = UVar17.y - (float)uVar9;
				fVar15 = UVar17.z - (Vector3.oneVector).z;
				fVar16 = UVar17.x - (float)uVar5;
				if (fVar14 * fVar14 + fVar16 * fVar16 + fVar15 * fVar15 < 9.9999994e-11) {
					return;
				}
				pUVar12.localScale = (Vector3)pUVar1.fields;
				return;
			}
		}
	label_05c3c4bd: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004502")]
	[Address(RVA = "0x5B3CB50", Offset = "0x5B3BB50", VA = "0x5B3CB50")]
	private static void SetLimbHidden(Transform limb, bool hidden)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$SetLimbHidden): 4 lines keep C-only constructs
		Vector3 pUVar1;
		uint uVar2;
		uint uVar3;
		undefined7 in_register_00000031;
		float fVar4;
		float fVar5;
		float fVar6;
		Vector3 UVar7;

		if ((int)CONCAT71(in_register_00000031, hidden) == 0) {
			if (limb != null) {
				UVar7 = limb.localScale;
				pUVar1 = &Vector3.oneVector;
				uVar2 = pUVar1.x;
				uVar3 = pUVar1.y;
				fVar4 = UVar7.y - (float)uVar3;
				fVar5 = UVar7.z - (Vector3.oneVector).z;
				fVar6 = UVar7.x - (float)uVar2;
				if (9.9999994e-11 <= fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5) {
					limb.localScale = (Vector3)pUVar1.fields;
					return;
				}
				return;
			}
		}
		else if (limb != null) {
			UVar7.z = 0.01;
			UVar7.x = 0.01;
			UVar7.y = 0.01;
			limb.localScale = UVar7;
			limb.localRotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
			return;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004503")]
	[Address(RVA = "0x5B318F0", Offset = "0x5B308F0", VA = "0x5B318F0")]
	private Vector3 GetLimbEffectPosition(bool left, bool hand)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$GetLimbEffectPosition): 11 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		BasicTitanComponentCache pCVar3;
		Transform* ppUVar5;
		undefined3 in_register_00000011;
		float fVar6;
		Vector3 UVar7;
		Vector3 UVar8;
		Vector3 UVar9;

		pCVar3 = this.BasicCache;
		if (CONCAT31(in_register_00000011, hand) == 0) {
			if (left) {
				if (pCVar3 == null) goto label_05c319ea;
				ppUVar5 = &pCVar3.ForearmL;
			}
			else {
				if (pCVar3 == null) goto label_05c319ea;
				ppUVar5 = &pCVar3.ForearmR;
			}
			if (*ppUVar5 != null) {
				UVar8 = (*ppUVar5).position;
				uVar1 = (Vector3.downVector).x;
				uVar2 = (Vector3.downVector).y;
				fVar6 = this.Size * 0.1;
				UVar9.x = UVar8.x + fVar6 * (float)uVar1;
				UVar9.y = UVar8.y + fVar6 * (float)uVar2;
				UVar9.z = UVar8.z + (Vector3.downVector).z * fVar6;
				return (Vector3)UVar9;
			}
		}
		else {
			if (left) {
				if (pCVar3 == null) goto label_05c319ea;
				ppUVar5 = &pCVar3.HandL;
			}
			else {
				if (pCVar3 == null) goto label_05c319ea;
				ppUVar5 = &pCVar3.HandR;
			}
			if (*ppUVar5 != null) {
				UVar7 = (Vector3)(*ppUVar5).position;
				return (Vector3)UVar7;
			}
		}
	label_05c319ea: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004504")]
	[Address(RVA = "0x5B31700", Offset = "0x5B30700", VA = "0x5B31700")]
	private void EnsureLimbMesh()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$EnsureLimbMesh): 2 lines keep C-only constructs
		BaseComponentCache pUVar1;
		BasicTitanComponentCache pCVar2;
		Transform rightHand;
		Transform pUVar3;
		SkinnedMeshRenderer renderer;
		Material woundMaterial;
		TitanLimbMesh __this_00;
		TitanLimbMesh* targetAddress;

		if (this._limbMesh != null) {
			return;
		}
		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pUVar3 = pUVar1.Transform, pUVar3 != null)) {
			pUVar3 = pUVar3.Find("Body");
			if (pUVar3 != null) {
				renderer = pUVar3.GetComponent<SkinnedMeshRenderer>();
				pCVar2 = this.BasicCache;
				if (pCVar2 != null) {
					targetAddress = &this._limbMesh;
					pUVar3 = pCVar2.HandL;
					rightHand = pCVar2.HandR;
					woundMaterial = BasicTitanComponentCache.LoadWoundMaterial();
					__this_00 = new TitanLimbMesh(renderer, pUVar3, rightHand, woundMaterial);
					*targetAddress = __this_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004505")]
	[Address(RVA = "0x5B3C780", Offset = "0x5B3B780", VA = "0x5B3C780")]
	private void UpdateLimbCuts()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$UpdateLimbCuts): 107 lines keep C-only constructs
		float pfVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		byte uVar6;
		byte uVar7;
		byte uVar8;
		byte uVar9;
		BasicTitanComponentCache pCVar10;
		ParticleSystem pUVar11;
		Transform pUVar12;
		TitanLimbMesh __this_00;
		UnityEngine_Vector3_StaticFields pUVar13;
		byte[] auVar14 = new byte[14];
		byte[] auVar15 = new byte[12];
		unkbyte10 Var16;
		byte bVar17;
		bool bVar18;
		Transform pUVar19;
		uint in_ECX;
		uint uVar20;
		bool leftRegrowing;
		bool bVar21;
		ulong extraout_XMM0_Qb;
		byte[] auVar22 = new byte[16];
		byte[] auVar23 = new byte[16];
		byte[] auVar31 = new byte[16];
		byte[] auVar30 = new byte[16];
		byte[] auVar29 = new byte[16];
		byte[] auVar28 = new byte[16];
		byte[] auVar27 = new byte[16];
		byte[] auVar26 = new byte[16];
		byte[] auVar25 = new byte[16];
		byte[] auVar24 = new byte[16];
		ushort uVar37;
		byte[] auVar35 = new byte[16];
		byte[] auVar34 = new byte[16];
		byte[] auVar33 = new byte[16];
		byte[] auVar32 = new byte[16];
		ulong extraout_XMM0_Qb_00;
		ulong extraout_XMM0_Qb_01;
		byte[] auVar36 = new byte[16];
		ulong extraout_XMM0_Qb_02;
		byte[] auVar38 = new byte[16];
		float fVar39;
		Vector3 UVar40;
		Vector3 value;

		if (this.DeathDissolve != null) {
			return;
		}
		bVar21 = this.LeftHandDisabled;
		if (this._GoreEnabled_k__BackingField == false) {
			if ((bVar21 != false) || (this.LeftArmDisabled != false)) {
				pCVar10 = this.BasicCache;
				if ((pCVar10 == null) ||(pUVar11 = pCVar10.ForearmSmokeL, pUVar11 == null)) goto label_05c3cb4a;
				pUVar19 = pUVar11.transform;
				pCVar10 = this.BasicCache;
				if (this.LeftHandDisabled == false) {
					if ((pCVar10 == null) ||(pUVar12 = pCVar10.ForearmL, pUVar12 == null)) goto label_05c3cb4a;
					UVar40 = pUVar12.position;
					pUVar13 = typeof(Vector3).static_fields;
					uVar2 = (pUVar13.downVector).x;
					uVar4 = (pUVar13.downVector).y;
					fVar39 = this.Size * 0.1;
					auVar22._0_4_ = UVar40.x + fVar39 * (float)uVar2;
					auVar22._4_4_ = UVar40.y + fVar39 * (float)uVar4;
					auVar22._8_4_ = (float)extraout_XMM0_Qb_00 + fVar39 * 0.0;
					auVar22._12_4_ = (float)((ulong)extraout_XMM0_Qb_00 >> 0x20) + fVar39 * 0.0;
					fVar39 = UVar40.z + (pUVar13.downVector).z * fVar39;
				}
				else {
					if ((pCVar10 == null) ||(pUVar12 = pCVar10.HandL, pUVar12 == null)) goto label_05c3cb4a;
					UVar40 = pUVar12.position;
					fVar39 = UVar40.z;
					auVar22._0_8_ = UVar40._0_8_;
					auVar22._8_8_ = extraout_XMM0_Qb;
				}
				if (pUVar19 == null) goto label_05c3cb4a;
				UVar40._0_8_ = auVar22._0_8_;
				UVar40.z = fVar39;
				pUVar19.position = UVar40;
			}
			if ((this.RightHandDisabled == false) && (this.RightArmDisabled == false)) {
				return;
			}
			pCVar10 = this.BasicCache;
			if ((pCVar10 != null) &&(pUVar11 = pCVar10.ForearmSmokeR, pUVar11 != null)) {
				pUVar19 = pUVar11.transform;
				pCVar10 = this.BasicCache;
				if (this.RightHandDisabled == false) {
					if ((pCVar10 == null) ||(pUVar12 = pCVar10.ForearmR, pUVar12 == null)) goto label_05c3cb4a;
					UVar40 = pUVar12.position;
					pUVar13 = typeof(Vector3).static_fields;
					uVar3 = (pUVar13.downVector).x;
					uVar5 = (pUVar13.downVector).y;
					fVar39 = this.Size * 0.1;
					auVar36._0_4_ = UVar40.x + fVar39 * (float)uVar3;
					auVar36._4_4_ = UVar40.y + fVar39 * (float)uVar5;
					auVar36._8_4_ = (float)extraout_XMM0_Qb_02 + fVar39 * 0.0;
					auVar36._12_4_ = (float)((ulong)extraout_XMM0_Qb_02 >> 0x20) + fVar39 * 0.0;
					fVar39 = UVar40.z + (pUVar13.downVector).z * fVar39;
				}
				else {
					if ((pCVar10 == null) ||(pUVar12 = pCVar10.HandR, pUVar12 == null)) goto label_05c3cb4a;
					UVar40 = pUVar12.position;
					fVar39 = UVar40.z;
					auVar36._0_8_ = UVar40._0_8_;
					auVar36._8_8_ = extraout_XMM0_Qb_01;
				}
				if (pUVar19 != null) {
					value._0_8_ = auVar36._0_8_;
					value.z = fVar39;
					pUVar19.position = value;
					return;
				}
			}
			goto label_05c3cb4a;
		}
		if (bVar21 == false) {
			bVar21 = this.LeftArmDisabled == false;
			if (this.RightHandDisabled != false) goto label_05c3c7c6;
	label_05c3c862: ;
			bVar18 = this.RightArmDisabled == false;
			if (!(bool)(bVar21 & bVar18)) goto label_05c3c88d;
			if (this._limbCutsVisible == false) {
				return;
			}
			this._limbCutsVisible = false;
			bVar18 = true;
		}
		else {
			bVar21 = false;
			if (this.RightHandDisabled == false) goto label_05c3c862;
	label_05c3c7c6: ;
			bVar18 = false;
	label_05c3c88d: ;
			this._limbCutsVisible = true;
		}
		this.EnsureLimbMesh();
		leftRegrowing = false;
		if (!bVar21) {
			pfVar1 = &this._leftArmDisabledTimeLeft;
			leftRegrowing = *pfVar1 <= 6.5 && *pfVar1 != 6.5;
		}
		__this_00 = this._limbMesh;
		if (bVar18) {
			bVar21 = false;
		}
		else {
			pfVar1 = &this._rightArmDisabledTimeLeft;
			bVar21 = *pfVar1 <= 6.5 && *pfVar1 != 6.5;
		}
		if (__this_00 != null) {
			uVar6 = this.LeftArmDisabled;
			uVar7 = this.RightArmDisabled;
			uVar8 = this.LeftHandDisabled;
			uVar9 = this.RightHandDisabled;
			auVar38[0] = -(uVar6 == false);
			auVar38[1] = -(uVar7 == false);
			auVar38[2] = -(uVar8 == false);
			auVar38[3] = -(uVar9 == false);
			auVar38[4] = 0xff;
			auVar38[5] = 0xff;
			auVar38[6] = 0xff;
			auVar38[7] = 0xff;
			auVar38[8] = 0xff;
			auVar38[9] = -(SUB161((byte[])0x0, 9) == false);
			auVar38[10] = -(SUB161((byte[])0x0, 10) == false);
			auVar38[0xb] = -(SUB161((byte[])0x0, 0xb) == false);
			auVar38[0xc] = -(SUB161((byte[])0x0, 0xc) == false);
			auVar38[0xd] = -(SUB161((byte[])0x0, 0xd) == false);
			auVar38[0xe] = -(SUB161((byte[])0x0, 0xe) == false);
			auVar38[0xf] = -(SUB161((byte[])0x0, 0xf) == false);
			auVar23._8_4_ = 0xffffffff;
			auVar23._0_8_ = 0xffffffffffffffff;
			auVar23._12_4_ = 0xffffffff;
			auVar23 = auVar23 ^ auVar38;
			auVar31._0_14_ = auVar23._0_14_;
			auVar31[0xe] = auVar23[7];
			auVar31[0xf] = auVar23[7];
			auVar30._14_2_ = auVar31._14_2_;
			auVar30._0_13_ = auVar23._0_13_;
			auVar30[0xd] = auVar23[6];
			auVar29._13_3_ = auVar30._13_3_;
			auVar29._0_12_ = auVar23._0_12_;
			auVar29[0xc] = auVar23[6];
			auVar28._12_4_ = auVar29._12_4_;
			auVar28._0_11_ = auVar23._0_11_;
			auVar28[0xb] = auVar23[5];
			auVar27._11_5_ = auVar28._11_5_;
			auVar27._0_10_ = auVar23._0_10_;
			auVar27[10] = auVar23[5];
			auVar26._10_6_ = auVar27._10_6_;
			auVar26._0_9_ = auVar23._0_9_;
			auVar26[9] = auVar23[4];
			auVar25._9_7_ = auVar26._9_7_;
			auVar25._0_8_ = auVar23._0_8_;
			auVar25[8] = auVar23[4];
			Var16 = CONCAT91(CONCAT81(auVar25._8_8_, auVar23[3]), auVar23[3]);
			auVar15._2_10_ = Var16;
			auVar15[1] = auVar23[2];
			auVar15[0] = auVar23[2];
			auVar14._2_12_ = auVar15;
			auVar14[1] = auVar23[1];
			auVar14[0] = auVar23[1];
			auVar24._0_2_ = CONCAT11(auVar23[0], auVar23[0]);
			auVar24._2_14_ = auVar14;
			uVar37 = (undefined2)Var16;
			auVar35._0_12_ = auVar24._0_12_;
			auVar35._12_2_ = uVar37;
			auVar35._14_2_ = uVar37;
			auVar34._12_4_ = auVar35._12_4_;
			auVar34._0_10_ = auVar24._0_10_;
			auVar34._10_2_ = auVar15._0_2_;
			auVar33._10_6_ = auVar34._10_6_;
			auVar33._0_8_ = auVar24._0_8_;
			auVar33._8_2_ = auVar15._0_2_;
			auVar32._8_8_ = auVar33._8_8_;
			auVar32._6_2_ = auVar14._0_2_;
			auVar32._4_2_ = auVar14._0_2_;
			auVar32._2_2_ = auVar24._0_2_;
			auVar32._0_2_ = auVar24._0_2_;
			uVar20 = movmskps(in_ECX, auVar32);
			bVar17 = (byte)uVar20;
			bVar18 = (bool)((bVar17 & 2) >> 1);
			__this_00.SetDisabled((bool)((bVar17 & 4) >> 2), (bool)(bVar17 >> 3), (bool)(bVar17 & 1), bVar18, leftRegrowing, bVar21);
			this.UpdateLimbRegrowth(true, this.LeftArmDisabled, this.LeftHandDisabled, this._leftArmDisabledTimeLeft);
			this.UpdateLimbRegrowth(false, this.RightArmDisabled, this.RightHandDisabled, this._rightArmDisabledTimeLeft);
			return;
		}
	label_05c3cb4a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004506")]
	[Address(RVA = "0x5B31840", Offset = "0x5B30840", VA = "0x5B31840")]
	private static float GetLimbRegrowthProgress(float timeLeft, bool arm)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$GetLimbRegrowthProgress): 4 lines keep C-only constructs
		undefined3 in_register_00000039;
		uint in_register_0000003c;
		float fVar1;
		float fVar2;

		fVar1 = 6.5 - timeLeft;
		fVar2 = 6.5;
		if (fVar1 <= 6.5) {
			fVar2 = fVar1;
		}
		fVar2 = (float)(-(uint)(0.0 <= fVar1) & (uint)fVar2);
		if (CONCAT31(in_register_00000039, arm) == 0) {
			return fVar2 / 6.5;
		}
		if (3.5 < fVar2) {
			fVar1 = powf((CustomLogicMathBuiltin)CONCAT44(in_register_0000003c, CONCAT31(in_register_00000039, arm)), (fVar2 + -3.5) / -3.0 + 1.0, 1.5, method);
			fVar1 = 1.0 - fVar1;
			fVar2 = 1.0;
			if (fVar1 <= 1.0) {
				fVar2 = fVar1;
			}
			return (float)(~-(uint)(0.0 <= fVar1) & 0x3f22e8ba |(uint)(fVar2 * 0.36363637 + 0.6363636) & -(uint)(0.0 <= fVar1));
		}
		return fVar2 / 5.5;
	}

	[Token(Token = "0x6004507")]
	[Address(RVA = "0x5B3CC70", Offset = "0x5B3BC70", VA = "0x5B3CC70")]
	private void UpdateLimbRegrowth(bool left, bool armDisabled, bool handDisabled, float timeLeft)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$UpdateLimbRegrowth): 68 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		BasicTitanComponentCache pCVar7;
		Transform __this_00;
		TitanLimbMesh __this_01;
		byte[] auVar8 = new byte[16];
		ulong __this_02;
		ParticleSystem* ppUVar9;
		Transform pUVar10;
		UnityEngine_Vector3_StaticFields pUVar11;
		Transform pUVar12;
		Transform* ppUVar13;
		Transform* ppUVar14;
		undefined7 in_register_00000031;
		MethodInfo method_00;
		BasicTitan __this_03;
		float fVar15;
		float extraout_XMM0_Db;
		uint extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float extraout_XMM0_Dc_01;
		float fVar16;
		uint extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float extraout_XMM0_Dd_01;
		float fVar17;
		float fVar18;
		float fVar19;
		byte[] auVar20 = new byte[12];
		byte[] auVar21 = new byte[12];
		byte[] auVar22 = new byte[16];
		Vector3 UVar23;
		Vector3 UVar24;
		Vector3 UVar25;
		float local_88;
		float fStack_84;
		byte[] local_70 = new byte[12];
		float fStack_64;
		float fStack_60;
		float fStack_5c;
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[24];

		method_00 = (MethodInfo)CONCAT71(in_register_00000031, left);
		pCVar7 = this.BasicCache;
		if (left) {
			if (pCVar7 == null) goto label_05c3d194;
			ppUVar13 = &pCVar7.HandL;
			ppUVar14 = &pCVar7.ForearmL;
			ppUVar9 = &pCVar7.ForearmSmokeL;
		}
		else {
			if (pCVar7 == null) goto label_05c3d194;
			ppUVar13 = &pCVar7.HandR;
			ppUVar14 = &pCVar7.ForearmR;
			ppUVar9 = &pCVar7.ForearmSmokeR;
		}
		pUVar12 = *ppUVar13;
		__this_00 = *ppUVar14;
		local_58._0_8_ = *ppUVar9;
		if ((armDisabled) || (fVar19 = 0.0, handDisabled)) {
			__this_03 = typeof(BasicTitan);
			auVar20 = ZEXT812(0x40d00000);
			fVar19 = 6.5 - timeLeft;
			if (fVar19 <= auVar20._0_4_) {
				auVar20._4_8_ = auVar20._4_8_;
				auVar20._0_4_ = fVar19;
			}
			fVar19 = (float)(-(uint)(0.0 <= fVar19) & auVar20._0_4_);
			if (armDisabled) {
				if (3.5 < fVar19) {
					fVar19 = powf((CustomLogicMathBuiltin)__this_03, (fVar19 + -3.5) / -3.0 + 1.0, 1.5, method_00);
					auVar21 = ZEXT812(0x3f800000);
					fVar19 = 1.0 - fVar19;
					if (fVar19 <= auVar21._0_4_) {
						auVar21._4_8_ = auVar21._4_8_;
						auVar21._0_4_ = fVar19;
					}
					fVar19 = (float)(~-(uint)(0.0 <= fVar19) & 0x3f22e8ba |(uint)(auVar21._0_4_ * 0.36363637 + 0.6363636) & -(uint)(0.0 <= fVar19));
				}
				else {
					fVar19 = fVar19 / 5.5;
				}
			}
			else {
				fVar19 = fVar19 / 6.5;
			}
		}
		pUVar10 = pUVar12;
		if (!handDisabled) {
			pUVar10 = __this_00;
		}
		if (pUVar10 == null) goto label_05c3d194;
		UVar23 = pUVar10.position;
		fVar18 = UVar23.y;
		__this_01 = this._limbMesh;
		if (__this_01 == null) goto label_05c3d194;
		UVar23 = __this_01.UpdateRegrowth(left, armDisabled, fVar19, UVar23, this.EffectsEnabled);
		local_48._8_4_ = extraout_XMM0_Dc;
		local_48._0_8_ = UVar23._0_8_;
		local_48._12_4_ = extraout_XMM0_Dd;
		if (armDisabled) {
			pCVar7 = this.BasicCache;
			if (left) {
				if (pCVar7 == null) goto label_05c3d194;
				ppUVar9 = &pCVar7.ForearmBloodL;
			}
			else {
				if (pCVar7 == null) goto label_05c3d194;
				ppUVar9 = &pCVar7.ForearmBloodR;
			}
			if ((*ppUVar9 == null) ||(pUVar10 = (*ppUVar9).transform, __this_00 == null)) goto label_05c3d194;
			UVar24 = __this_00.position;
			if (Il2CppMethodInitialized_075450a5 == false) {
				fVar18 = 0.0;
				Il2CppMethodInitialized_075450a5 = true;
			}
			if (pUVar10 == null) goto label_05c3d194;
			fVar19 = this.Size * 0.1;
			pUVar11 = typeof(Vector3).static_fields;
			UVar25.z = UVar24.z + (pUVar11.downVector).z * fVar19;
			uVar1 = (pUVar11.downVector).x;
			uVar4 = (pUVar11.downVector).y;
			UVar25.x = UVar24.x + fVar19 * (float)uVar1;
			UVar25.y = UVar24.y + fVar19 * (float)uVar4;
			pUVar10.position = UVar25;
		}
		if (pUVar12 == null) goto label_05c3d194;
		UVar24 = pUVar12.position;
		if (__this_00 == null) goto label_05c3d194;
		UVar25 = __this_00.position;
		fVar19 = UVar25.x;
		fVar15 = UVar25.y;
		fVar16 = extraout_XMM0_Dc_01;
		fVar17 = extraout_XMM0_Dd_01;
		if (Il2CppMethodInitialized_0753e72d == false) {
			fStack_60 = extraout_XMM0_Dc_01;
			fStack_5c = extraout_XMM0_Dd_01;
			Il2CppMethodInitialized_0753e72d = true;
			fVar19 = (float)local_70._8_4_;
			fVar15 = fStack_64;
			fVar16 = fStack_60;
			fVar17 = fStack_5c;
		}
		local_70._0_4_ = 0.0;
		local_70._4_4_ = 0.0;
		__this_02 = local_58._0_8_;
		local_88 = UVar24.x;
		fStack_84 = UVar24.y;
		if (Il2CppMethodInitialized_0753e729 == false) {
			fStack_64 = fVar15;
			local_70._8_4_ = fVar19;
			fStack_60 = fVar16;
			fStack_5c = fVar17;
			Il2CppMethodInitialized_0753e729 = true;
			fVar19 = (float)local_70._8_4_;
			fVar15 = fStack_64;
			fVar16 = fStack_60;
			fVar17 = fStack_5c;
		}
		auVar22._0_4_ = local_88 - fVar19;
		auVar22._4_4_ = fStack_84 - fVar15;
		auVar22._8_4_ = extraout_XMM0_Dc_00 - fVar16;
		auVar22._12_4_ = extraout_XMM0_Dd_00 - fVar17;
		fVar19 = UVar24.z - UVar25.z;
		fVar15 = fVar19 * fVar19 + auVar22._4_4_ * auVar22._4_4_ + auVar22._0_4_ * auVar22._0_4_;
		if (fVar15 < 0.0) {
			fVar15 = sqrtf(fVar15);
			fVar18 = extraout_XMM0_Db;
			if (1e-05 < fVar15) goto label_05c3d08d;
	label_05c3d055: ;
			pUVar11 = typeof(Vector3).static_fields;
			fVar19 = (pUVar11.zeroVector).z;
		}
		else {
			fVar15 = SQRT(fVar15);
			if (fVar15 <= 1e-05) goto label_05c3d055;
	label_05c3d08d: ;
			fVar19 = fVar19 / fVar15;
			auVar8._4_4_ = fVar15;
			auVar8._0_4_ = fVar15;
			auVar8._8_4_ = fVar18;
			auVar8._12_4_ = fVar18;
			auVar22 = divps(auVar22, auVar8);
			local_70._0_4_ = auVar22._0_4_;
			local_70._4_4_ = auVar22._4_4_;
			pUVar11 = (UnityEngine_Vector3_StaticFields)local_70;
		}
		if ((Component)__this_02 != null) {
			uVar2 = (pUVar11.zeroVector).x;
			uVar5 = (pUVar11.zeroVector).y;
			pUVar12 = __this_02.transform;
			fVar18 = this.Size;
			if (Il2CppMethodInitialized_075450a5 == false) {
				local_58 = ZEXT416((uint)fVar18);
				Il2CppMethodInitialized_075450a5 = true;
				fVar18 = (float)local_58._0_4_;
			}
			if (pUVar12 != null) {
				pUVar11 = typeof(Vector3).static_fields;
				fVar18 = fVar18 * 0.15;
				fVar15 = this.Size * 0.2;
				uVar3 = (pUVar11.downVector).x;
				uVar6 = (pUVar11.downVector).y;
				UVar23.z = (pUVar11.downVector).z * fVar15 + UVar23.z + fVar19 * fVar18;
				UVar23.x = fVar15 * (float)uVar3 + (float)local_48._0_4_ + (float)uVar2 * fVar18;
				UVar23.y = (float)uVar6 * fVar15 + (float)local_48._4_4_ + (float)uVar5 * fVar18;
				pUVar12.position = UVar23;
				return;
			}
		}
	label_05c3d194: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004508")]
	[Address(RVA = "0x5B3C4D0", Offset = "0x5B3B4D0", VA = "0x5B3C4D0")]
	private void UpdateDeathDissolve()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$UpdateDeathDissolve): 4 lines keep C-only constructs
		TitanDeathDissolve* targetAddress;
		BaseComponentCache pUVar1;
		BasicTitanComponentCache pCVar2;
		ParticleSystem pUVar3;
		BasicTitan.c__DisplayClass182_0 __this_00;
		Transform pUVar4;
		SkinnedMeshRenderer pUVar5;
		MethodInfo pMVar6;
		Func<Renderer, bool> __this_01;
		TitanDeathDissolve pCVar7;
		float fVar8;
		float fVar9;

		if (this.Dead != false) {
			fVar8 = Time.time;
			fVar8 = (fVar8 - this._deathVisualStartTime) + -3.0;
			this.UpdateDeathSounds(fVar8);
			if (0.0 <= fVar8) {
				pCVar7 = this.DeathDissolve;
				if (pCVar7 != null) {
	label_05c3c733: ;
					fVar8 = fVar8 / 6.0;
					fVar9 = 1.0;
					if (fVar8 <= 1.0) {
						fVar9 = fVar8;
					}
					pCVar7.Update((float)(-(uint)(0.0 <= fVar8) & (uint)fVar9));
					return;
				}
				pMVar6 = null;
				__this_00 = new BasicTitan.c__DisplayClass182_0();
				this.UpdateLimbCuts();
				this.RemoveOutline();
				pUVar1 = this.Cache;
				if ((((pUVar1 != null) &&(pUVar4 = pUVar1.Transform, pUVar4 != null)) &&(pUVar4 = pUVar4.Find("Body"), pUVar4 != null)) &&(pUVar5 = pUVar4.GetComponent<SkinnedMeshRenderer>(), __this_00 != null)) {
					__this_00.body = pUVar5;
					pUVar1 = this.Cache;
					if ((pUVar1 != null) &&(pUVar4 = pUVar1.Transform, pUVar4 != null)) {
						targetAddress = &this.DeathDissolve;
						pMVar6 = (MethodInfo)pUVar4.Find("Head");
						__this_00.head = (Transform)pMVar6;
						pUVar5 = __this_00.body;
						fVar9 = this.GetDeathDissolveScale();
						__this_01 = new Func<Renderer, bool>((object)__this_00, (intptr_t)MethodInfo_Characters_BasicTitan_c__DisplayClass182_0_UpdateDeathDissolve_b__0);
						pCVar7 = new TitanDeathDissolve((BaseTitan)this, pUVar5, fVar9, __this_01);
						this.DeathDissolve = pCVar7;
						pCVar2 = this.BasicCache;
						if ((pCVar2 != null) &&(pUVar3 = pCVar2.ForearmSmokeL, pUVar3 != null)) {
							pUVar3.Stop();
							pCVar2 = this.BasicCache;
							if ((pCVar2 != null) &&(pUVar3 = pCVar2.ForearmSmokeR, pUVar3 != null)) {
								pUVar3.Stop();
								pCVar7 = *targetAddress;
								if (pCVar7 != null) goto label_05c3c733;
							}
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6004509")]
	[Address(RVA = "0x5B3D320", Offset = "0x5B3C320", VA = "0x5B3D320")]
	private float GetDeathDissolveScale()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$GetDeathDissolveScale): clean
		uint uVar1;
		BaseComponentCache pUVar2;
		BasicTitanComponentCache pCVar3;
		Transform pUVar4;
		Transform __this_00;
		Transform __this_01;
		Transform __this_02;
		Transform __this_03;
		float fVar5;
		float fVar6;
		float fVar7;
		Vector3 UVar8;
		Vector3 UVar9;
		float local_68;
		float fStack_64;
		float local_58;
		float fStack_54;

		pUVar2 = this.Cache;
		if (((pUVar2 != null) &&(pCVar3 = this.BasicCache, pCVar3 != null)) &&(pUVar4 = pCVar3.Hip, pUVar4 != null)) {
			__this_00 = pUVar2.Transform;
			__this_01 = pUVar4.Find("thigh.");
			if ((__this_01 != null) &&(__this_02 = __this_01.Find("shin."), __this_02 != null)) {
				__this_03 = __this_02.Find("foot.");
				UVar8 = pUVar4.position;
				if (__this_00 != null) {
					UVar8 = __this_00.InverseTransformPoint(UVar8);
					pCVar3 = this.BasicCache;
					if ((pCVar3 != null) &&(pUVar4 = pCVar3.Neck, pUVar4 != null)) {
						UVar9 = pUVar4.position;
						UVar9 = __this_00.InverseTransformPoint(UVar9);
						if (Il2CppMethodInitialized_0753e7b7 == false) {
							Il2CppMethodInitialized_0753e7b7 = true;
							uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						else {
							uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						if (uVar1 == 0) {
						}
						fVar5 = UVar8.z - UVar9.z;
						local_68 = UVar8.x;
						fStack_64 = UVar8.y;
						local_68 = local_68 - UVar9.x;
						fStack_64 = fStack_64 - UVar9.y;
						fVar5 = fVar5 * fVar5 + fStack_64 * fStack_64 + local_68 * local_68;
						if (fVar5 < 0.0) {
							fVar5 = sqrtf(fVar5);
						}
						else {
							fVar5 = SQRT(fVar5);
						}
						UVar8 = __this_01.position;
						UVar8 = __this_00.InverseTransformPoint(UVar8);
						UVar9 = __this_02.position;
						UVar9 = __this_00.InverseTransformPoint(UVar9);
						if (Il2CppMethodInitialized_0753e7b7 == false) {
							Il2CppMethodInitialized_0753e7b7 = true;
							uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						else {
							uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						if (uVar1 == 0) {
						}
						fVar6 = UVar8.z - UVar9.z;
						local_68 = UVar8.x;
						fStack_64 = UVar8.y;
						local_68 = local_68 - UVar9.x;
						fStack_64 = fStack_64 - UVar9.y;
						fVar6 = fVar6 * fVar6 + fStack_64 * fStack_64 + local_68 * local_68;
						if (fVar6 < 0.0) {
							fVar6 = sqrtf(fVar6);
						}
						else {
							fVar6 = SQRT(fVar6);
						}
						UVar8 = __this_02.position;
						UVar8 = __this_00.InverseTransformPoint(UVar8);
						if (__this_03 != null) {
							UVar9 = __this_03.position;
							UVar9 = __this_00.InverseTransformPoint(UVar9);
							if (Il2CppMethodInitialized_0753e7b7 == false) {
								Il2CppMethodInitialized_0753e7b7 = true;
								uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
							}
							else {
								uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
							}
							if (uVar1 == 0) {
							}
							local_58 = UVar8.x;
							fStack_54 = UVar8.y;
							fStack_54 = fStack_54 - UVar9.y;
							fVar7 = UVar8.z - UVar9.z;
							local_58 = local_58 - UVar9.x;
							fVar7 = fStack_54 * fStack_54 + local_58 * local_58 + fVar7 * fVar7;
							if (fVar7 < 0.0) {
								fVar7 = sqrtf(fVar7);
							}
							else {
								fVar7 = SQRT(fVar7);
							}
							return (fVar5 + fVar6 + fVar7) * 1.2;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600450A")]
	[Address(RVA = "0x5B3D1A0", Offset = "0x5B3C1A0", VA = "0x5B3D1A0")]
	private void UpdateDeathSounds(float dissolveElapsed)
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$UpdateDeathSounds): clean
		BaseComponentCache pUVar1;
		Dictionary<object, object> __this_00;
		bool bVar2;
		AudioSource __this_01;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;

		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			__this_00 = (Dictionary<object, object>)pUVar1.AudioSources;
			if (__this_00 != null) {
				__this_01 = __this_00.get_Item((object)TitanSounds.DeathFall);
				if (__this_01 != null) {
					bVar2 = __this_01.isPlaying;
					if (bVar2) {
						fVar3 = __this_01.time;
						fVar5 = (1.2 - fVar3) / 0.2;
						fVar3 = 1.0;
						if (fVar5 <= 1.0) {
							fVar3 = fVar5;
						}
						fVar3 = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar3);
						__this_01.volume = this._deathFallSoundVolume * fVar3;
						if ((0.0 <= dissolveElapsed) || (fVar3 <= 0.0)) {
							__this_01.Stop();
						}
					}
					fVar5 = dissolveElapsed + dissolveElapsed;
					fVar3 = 1.0;
					if (fVar5 <= 1.0) {
						fVar3 = fVar5;
					}
					fVar4 = 6.25 - dissolveElapsed;
					fVar6 = 1.0;
					if (fVar4 <= 1.0) {
						fVar6 = fVar4;
					}
					this.SetSteamVolume((float)(-(uint)(0.0 <= fVar4) & (uint)fVar6) *(float)(-(uint)(0.0 <= fVar5) & (uint)fVar3));
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600450B")]
	[Address(RVA = "0x5B3D710", Offset = "0x5B3C710", VA = "0x5B3D710", Slot = "112")]
	protected override void OnDestroy()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$OnDestroy): clean
		TitanLimbMesh __this_00;
		TitanDeathDissolve __this_01;
		BasicTitanComponentCache pCVar1;
		ParticleSystem pUVar2;
		bool bVar3;
		Object pUVar4;

		__this_00 = this._limbMesh;
		if (__this_00 != null) {
			__this_00.Dispose();
		}
		__this_01 = this.DeathDissolve;
		if (__this_01 != null) {
			__this_01.Dispose();
		}
		this.OnDestroy();
		pCVar1 = this.BasicCache;
		if (pCVar1 != null) {
			pUVar2 = pCVar1.ForearmSmokeL;
			bVar3 = ((Object)pUVar2 != null);
			if (bVar3) {
				pCVar1 = this.BasicCache;
				if ((pCVar1 == null) ||(pUVar2 = pCVar1.ForearmSmokeL, pUVar2 == null)) goto label_05c3d864;
				pUVar4 = (Object)pUVar2.gameObject;
				Object.Destroy(pUVar4);
			}
			pCVar1 = this.BasicCache;
			if (pCVar1 != null) {
				pUVar2 = pCVar1.ForearmSmokeR;
				bVar3 = ((Object)pUVar2 != null);
				if (!bVar3) {
					return;
				}
				pCVar1 = this.BasicCache;
				if ((pCVar1 != null) &&(pUVar2 = pCVar1.ForearmSmokeR, pUVar2 != null)) {
					pUVar4 = (Object)pUVar2.gameObject;
					Object.Destroy(pUVar4);
					return;
				}
			}
		}
	label_05c3d864: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600450C")]
	[Address(RVA = "0x5B3D870", Offset = "0x5B3C870", VA = "0x5B3D870", Slot = "117")]
	protected override int GetFootstepPhase()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$GetFootstepPhase): clean
		BasicTitanAnimations pCVar1;
		bool bVar2;
		MethodInfo method_00;
		String pSVar3;
		AnimationHandler pCVar4;
		float fVar5;
		float fStack_14;

		pCVar1 = this.BasicAnimations;
		if (pCVar1 != null) {
			pCVar4 = this.Animation;
			method_00 = (MethodInfo)pCVar1.get_Walk();
			if (pCVar4 != null) {
				bVar2 = pCVar4.IsPlaying((String)method_00);
				if (bVar2) {
					pCVar4 = this.Animation;
					if (pCVar4 == null) goto label_05c3daca;
					fVar5 = pCVar4.GetCurrentNormalizedTime();
					fVar5 = fmodf(fVar5, 1.0, (MethodInfo)pCVar4);
					if (fVar5 < 0.1) {
						return 0;
					}
					fStack_14 = 0.6;
	label_05c3dab1: ;
					return (uint)(fVar5 < fStack_14);
				}
				pSVar3 = this.GetPlayingRunAnimation();
				bVar2 = (pSVar3 != "");
				pCVar4 = this.Animation;
				if (bVar2) {
					if (pCVar4 != null) {
						fVar5 = pCVar4.GetCurrentNormalizedTime();
						fVar5 = fmodf(fVar5, 1.0, (MethodInfo)pCVar4);
						if (0.0 <= fVar5) {
							return (uint)(0.5 <= fVar5);
						}
						return 1;
					}
				}
				else {
					pCVar1 = this.BasicAnimations;
					if ((pCVar1 != null) &&(pSVar3 = pCVar1.get_Turn90L(), pCVar4 != null)) {
						bVar2 = pCVar4.IsPlaying(pSVar3);
						fStack_14 = 0.85;
						if (!bVar2) {
							pCVar1 = this.BasicAnimations;
							if ((pCVar1 == null) ||(pCVar4 = this.Animation, pCVar4 == null)) goto label_05c3daca;
							bVar2 = pCVar4.IsPlaying(pCVar1.Turn90LCrawler);
							if (!bVar2) {
								pCVar1 = this.BasicAnimations;
								if (pCVar1 == null) goto label_05c3daca;
								pCVar4 = this.Animation;
								pSVar3 = pCVar1.get_Turn90R();
								if (pCVar4 == null) goto label_05c3daca;
								bVar2 = pCVar4.IsPlaying(pSVar3);
								fStack_14 = 0.8;
								if (!bVar2) {
									pCVar1 = this.BasicAnimations;
									if ((pCVar1 == null) ||(pCVar4 = this.Animation, pCVar4 == null)) goto label_05c3daca;
									bVar2 = pCVar4.IsPlaying(pCVar1.Turn90RCrawler);
									if (!bVar2) {
										return this._stepPhase;
									}
								}
							}
						}
						pCVar4 = this.Animation;
						if (pCVar4 != null) {
							fVar5 = pCVar4.GetCurrentNormalizedTime();
							if (fVar5 < 0.4) {
								this._stepPhase = 0;
								return 0;
							}
							goto label_05c3dab1;
						}
					}
				}
			}
		}
	label_05c3daca: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600450D")]
	[Address(RVA = "0x5B3DAD0", Offset = "0x5B3CAD0", VA = "0x5B3DAD0")]
	protected string GetPlayingRunAnimation()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$GetPlayingRunAnimation): clean
		uint uVar1;
		BasicTitanAnimations pCVar2;
		AnimationHandler pCVar3;
		String[] pSVar4;
		String name;
		bool bVar5;
		ulong uVar6;
		ulong uVar7;

		pCVar2 = this.BasicAnimations;
		if ((pCVar2 != null) &&(pCVar3 = this.Animation, pCVar3 != null)) {
			bVar5 = pCVar3.IsPlaying(pCVar2.RunCrawler);
			pCVar2 = this.BasicAnimations;
			if (bVar5) {
				if (pCVar2 != null) {
					return pCVar2.RunCrawler;
				}
			}
			else if ((pCVar2 != null) &&(pSVar4 = pCVar2.Runs, pSVar4 != null)) {
				if (0 < (int)pSVar4.Length) {
					uVar6 = pSVar4.Length & 0xffffffff;
					uVar7 = 0;
					do {
						if (uVar6 <= uVar7) {
							throw new IndexOutOfRangeException();
						}
						pCVar3 = this.Animation;
						if (pCVar3 == null) goto label_05c3dbae;
						name = pSVar4[uVar7];
						bVar5 = pCVar3.IsPlaying(name);
						if (bVar5) {
							return name;
						}
						uVar7 = uVar7 + 1;
						uVar1 = (uint)pSVar4.Length;
						uVar6 = (ulong)uVar1;
					} while ((long)uVar7 < (long)(int)uVar1);
				}
				return "";
			}
		}
	label_05c3dbae: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600450E")]
	[Address(RVA = "0x5B3DBC0", Offset = "0x5B3CBC0", VA = "0x5B3DBC0", Slot = "107")]
	protected override void CheckGround()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$CheckGround): 35 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		byte bVar3;
		BaseTitanComponentCache pCVar4;
		CapsuleCollider __this_00;
		Component pUVar5;
		BaseComponentCache pUVar6;
		UnityEngine_Vector3_StaticFields pUVar7;
		bool bVar8;
		int layerMask;
		Transform pUVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		float extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		float extraout_XMM0_Dd_01;
		float fVar14;
		float fVar15;
		Vector3 UVar16;
		Vector3 UVar17;
		Vector3 point2;
		float fStack_b8;
		LayerMask[] aUStack_90 = new LayerMask[2];
		float fStack_88;
		ulong uStack_78;
		ulong uStack_70;
		byte[] auStack_68 = new byte[8];
		float fStack_60;
		float fStack_5c;
		byte[] auStack_58 = new byte[8];
		float fStack_50;
		float fStack_4c;
		RaycastHit UStack_48;

		UStack_48.m_UV.x = 0.0;
		UStack_48.m_UV.y = 0.0;
		UStack_48.m_Collider.m_Data = (EntityId)0x0;
		UStack_48.m_Normal.y = 0.0;
		UStack_48.m_Normal.z = 0.0;
		UStack_48.m_FaceID = 0;
		UStack_48.m_Distance = 0.0;
		UStack_48.m_Point.x = 0.0;
		UStack_48.m_Point.y = 0.0;
		UStack_48.m_Point.z = 0.0;
		UStack_48.m_Normal.x = 0.0;
		pCVar4 = this.BaseTitanCache;
		if (pCVar4 == null) goto label_05c3e0df;
		__this_00 = (CapsuleCollider)pCVar4.Movebox;
		if (__this_00 != null) {
			bVar3 = (typeof(CapsuleCollider)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar3) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(CapsuleCollider))) {
				throw new InvalidCastException();
			}
		}
		bVar8 = this.IsCrawler;
		if (this.State - 5U < 2) {
			if (bVar8 == false) {
				if (__this_00 == null) goto label_05c3e0df;
				fVar10 = this._originalCapsuleValue * 0.7;
	label_05c3dd05: ;
				__this_00.radius = fVar10;
			}
			else {
				if (__this_00 == null) goto label_05c3e0df;
				fVar10 = this._originalCapsuleValue * 0.7;
	label_05c3dcb9: ;
				__this_00.height = fVar10;
			}
		}
		else if (bVar8 == false) {
			if (__this_00 == null) goto label_05c3e0df;
			fVar11 = __this_00.radius;
			fVar10 = this._originalCapsuleValue;
			if ((fVar11 != fVar10) || (NAN(fVar11) || NAN(fVar10))) goto label_05c3dd05;
		}
		else {
			if (__this_00 == null) goto label_05c3e0df;
			fVar11 = __this_00.height;
			fVar10 = this._originalCapsuleValue;
			if ((fVar11 != fVar10) || (NAN(fVar11) || NAN(fVar10))) goto label_05c3dcb9;
		}
		if (this.IsCrawler == false) {
			this.CheckGround();
			return;
		}
		pCVar4 = this.BaseTitanCache;
		if ((pCVar4 != null) &&(pUVar5 = (Component)pCVar4.Movebox, pUVar5 != null)) {
			pUVar9 = pUVar5.transform;
			if (pUVar9 != null) {
				UVar16 = pUVar9.lossyScale;
				fStack_88 = __this_00.radius;
				pCVar4 = this.BaseTitanCache;
				if ((pCVar4 != null) &&(pUVar5 = (Component)pCVar4.Movebox, pUVar5 != null)) {
					pUVar9 = pUVar5.transform;
					if (pUVar9 != null) {
						UVar17 = pUVar9.lossyScale;
						fStack_60 = (float)extraout_XMM0_Dc;
						auStack_68 = (byte[])UVar17._0_8_;
						fStack_5c = (float)extraout_XMM0_Dd;
						fVar10 = __this_00.height;
						pUVar6 = this.Cache;
						if (pUVar6 != null) {
							pUVar9 = pUVar6.Transform;
							if (pUVar9 != null) {
								UVar17 = pUVar9.position;
								fStack_50 = (float)extraout_XMM0_Dc_00;
								auStack_58 = (byte[])UVar17._0_8_;
								fStack_4c = (float)extraout_XMM0_Dd_00;
								pUVar6 = this.Cache;
								if ((pUVar6 != null) &&(pUVar9 = pUVar6.Transform, pUVar9 != null)) {
									fStack_b8 = UVar16.x;
									fStack_88 = fStack_88 * fStack_b8;
									pUVar7 = typeof(Vector3).static_fields;
									uStack_78._0_4_ = (pUVar7.upVector).x;
									uStack_78._4_4_ = (pUVar7.upVector).y;
									uStack_70 = 0;
									fVar14 = fStack_88 + 1.0;
									fVar11 = (pUVar7.upVector).z;
									UVar16 = pUVar9.forward;
									pUVar6 = this.Cache;
									if (pUVar6 != null) {
										pUVar9 = pUVar6.Transform;
										if (pUVar9 != null) {
											fVar15 = (fVar10 * (float)auStack_68._0_4_ - (fStack_88 + fStack_88)) * 0.5;
											auStack_58._4_4_ = (float)auStack_58._4_4_ + fVar14 * uStack_78._4_4_;
											auStack_58._0_4_ = (float)auStack_58._0_4_ + fVar14 * (float)uStack_78;
											fStack_50 = fStack_50 + fVar14 * (float)uStack_70;
											fStack_4c = fStack_4c + fVar14 * uStack_70._4_4_;
											fVar10 = UVar17.z + fVar11 * fVar14;
											uStack_78 = CONCAT44(uStack_78._4_4_, UVar16.z * fVar15);
											auStack_68._4_4_ = UVar16.y * fVar15;
											auStack_68._0_4_ = UVar16.x * fVar15;
											fStack_60 = extraout_XMM0_Dc_01 * fVar15;
											fStack_5c = extraout_XMM0_Dd_01 * fVar15;
											UVar16 = pUVar9.forward;
											this.JustGrounded = false;
											auStack_68._4_4_ = (float)auStack_58._4_4_ - (float)auStack_68._4_4_;
											auStack_68._0_4_ = (float)auStack_58._0_4_ - (float)auStack_68._0_4_;
											fStack_60 = fStack_50 - fStack_60;
											fStack_5c = fStack_4c - fStack_5c;
											uStack_78 = CONCAT44(uStack_78._4_4_, fVar10 - (float)uStack_78);
											fVar14 = UVar16.x * fVar15 + (float)auStack_58._0_4_;
											fVar13 = UVar16.y * fVar15 + (float)auStack_58._4_4_;
											pUVar7 = typeof(Vector3).static_fields;
											uVar1 = (pUVar7.downVector).x;
											uVar2 = (pUVar7.downVector).y;
											auStack_58._4_4_ = uVar2;
											auStack_58._0_4_ = uVar1;
											fVar11 = (pUVar7.downVector).z;
											fVar12 = this.get_GroundDistance();
											aUStack_90[0] =this.get_GroundMask();
											layerMask = aUStack_90.value;
											point2.y = fVar13;
											point2.x = fVar14;
											UVar17.z = (float)uStack_78;
											UVar17.x = (float)auStack_68._0_4_;
											UVar17.y = (float)auStack_68._4_4_;
											point2.z = UVar16.z * fVar15 + fVar10;
											UVar16.z = fVar11;
											UVar16.x = (float)auStack_58._0_4_;
											UVar16.y = (float)auStack_58._4_4_;
											bVar8 = Physics.CapsuleCast(UVar17, point2, fStack_88, UVar16, ref UStack_48, fVar12 + 1.0, layerMask);
											if (bVar8) {
												if (this.Grounded == false) {
													this.Grounded = true;
													this.JustGrounded = true;
												}
												fStack_88 = UStack_48.distance;
												fVar10 = this.get_GroundDistance();
												fStack_88 = fStack_88 + -1.0;
												if (fStack_88 <= fVar10) {
													fVar10 = fStack_88;
												}
												this._currentGroundDistance =(float)(-(uint)(0.0 <= fStack_88) & (uint)fVar10);
											}
											else {
												this.Grounded = false;
												fVar10 = this.get_GroundDistance();
												this._currentGroundDistance = fVar10;
											}
											return;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05c3e0df: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600450F")]
	[Address(RVA = "0x5B3E0F0", Offset = "0x5B3D0F0", VA = "0x5B3E0F0")]
	public BasicTitan()
	{
		// Lifted from source/cpp/Characters/BasicTitan.c (Characters.BasicTitan$$.ctor): 9 lines keep C-only constructs
		float fVar1;
		System_Nullable_Quaternion__o pSVar3;
		float fVar4;
		System_Nullable_Quaternion__Fields SStack_58;
		System_Nullable_Quaternion__Fields SStack_38;

		SStack_38.hasValue = false;
		SStack_38._1_3_ = 0;
		SStack_38.value.x = 0.0;
		SStack_38.value.y = 0.0;
		SStack_38.value.z = 0.0;
		SStack_38.value.w = 0.0;
		SStack_38 = new Nullable<Quaternion>((UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields);
		this.LateUpdateHeadRotation.value.w = SStack_38.value.w;
		this.LateUpdateHeadRotation.hasValue = SStack_38.hasValue;
		*(undefined3)&this.LateUpdateHeadRotation.field_0x1 = SStack_38._1_3_;
		this.LateUpdateHeadRotation.value.x = SStack_38.value.x;
		pSVar3 = &this.LateUpdateHeadRotation;
		pSVar3.value.y = SStack_38.value.y;
		pSVar3.value.z = SStack_38.value.z;
		SStack_58.hasValue = false;
		SStack_58._1_3_ = 0;
		SStack_58.value.x = 0.0;
		SStack_58.value.y = 0.0;
		SStack_58.value.z = 0.0;
		SStack_58.value.w = 0.0;
		SStack_58 = new Nullable<Quaternion>((UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields);
		this.LateUpdateHeadRotationRecv.value.w = SStack_58.value.w;
		this.LateUpdateHeadRotationRecv.hasValue = SStack_58.hasValue;
		*(undefined3)&this.LateUpdateHeadRotationRecv.field_0x1 = SStack_58._1_3_;
		this.LateUpdateHeadRotationRecv.value.x = SStack_58.value.x;
		pSVar3 = &this.LateUpdateHeadRotationRecv;
		pSVar3.value.y = SStack_58.value.y;
		pSVar3.value.z = SStack_58.value.z;
		this.LastGoodHeadAngle = (Vector2.zeroVector) ;
		this.BellyFlopTime = 5.5;
		this.ArmDisableTime = 13.5;
		this.RockThrow1Speed = 140.0;
		this.RockThrowMaxAimAngle = 60.0;
		this.RockThrowCloseAimAngle = 15.0;
		this.RockThrowCloseAimDistance = 15.0;
		this.RockThrowFullAimDistance = 40.0;
		this.TargetViewId = -1;
		this.HeadSize = 1.0;
		fVar4 = (Vector3.oneVector).y;
		fVar1 = (Vector3.oneVector).z;
		this._headScale.x = (Vector3.oneVector).x;
		this._headScale.y = fVar4;
		this._headScale.z = fVar1;
		this._skinSlot = -1;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/BasicTitan.c.

	// Characters.BasicTitan$$.cctor: clean
	static BasicTitan()
	{
		String[] pSVar1;

		pSVar1 = (String[])new string[5];
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar1.Length != 0) {
			pSVar1[0] = "Amarture_VER2|idle";
			if ((pSVar1.Length & 0xfffffffe) != 0) {
				pSVar1[1] = "Amarture_VER2|run.walk";
				if (2 < (uint)pSVar1.Length) {
					pSVar1[2] = "Amarture_VER2|run.abnormal";
					if ((pSVar1.Length & 0xfffffffc) != 0) {
						pSVar1[3] = "Amarture_VER2|run.abnormal.1";
						if (4 < (uint)pSVar1.Length) {
							pSVar1[4] = "Amarture_VER2|die.front";
							BasicTitan.SizeScaledAnimations = pSVar1;
							return;
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// Characters.BasicTitan.<>c__DisplayClass182_0$$.ctor: clean
	private void c__DisplayClass182_0__ctor()
	{
		base();
		return;
	}

	// Characters.BasicTitan.<>c__DisplayClass182_0$$<UpdateDeathDissolve>b__0: clean
	private bool c__DisplayClass182_0__UpdateDeathDissolve_b__0(Renderer renderer)
	{
		Object y;
		Transform y_00;
		bool bVar1;
		Transform x;
		String pSVar2;

		y = (Object)this.body;
		bVar1 = ((Object)renderer == y);
		if (!bVar1) {
			if (renderer == null) {
				throw new NullReferenceException();
			}
			x = renderer.transform;
			y_00 = this.head;
			bVar1 = ((Object)x == (Object)y_00);
			if (!bVar1) {
				pSVar2 = renderer.name;
				bVar1 = (pSVar2 == "Left limb regrowth");
				if (!bVar1) {
					pSVar2 = renderer.name;
					bVar1 = (pSVar2 == "Right limb regrowth");
					return bVar1;
				}
			}
		}
		return true;
	}
}
