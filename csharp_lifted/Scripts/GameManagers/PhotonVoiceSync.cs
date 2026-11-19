// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.PhotonVoiceSync
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/GameManagers/PhotonVoiceSync.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PhotonVoiceSync.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Voice.PUN;
using Photon.Voice.Unity;
using Photon.Voice.Unity.UtilityScripts;
using UnityEngine;

namespace GameManagers;

[Token(Token = "0x200039E")]
internal class PhotonVoiceSync : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x4001263")]
	[FieldOffset(Offset = "0x28")]
	public PhotonView PhotonView;

	[Token(Token = "0x4001264")]
	[FieldOffset(Offset = "0x30")]
	public PhotonVoiceView VoiceView;

	[Token(Token = "0x4001265")]
	[FieldOffset(Offset = "0x38")]
	public Recorder Recorder;

	[Token(Token = "0x4001266")]
	[FieldOffset(Offset = "0x40")]
	public GameObject SpeakerObject;

	[Token(Token = "0x4001267")]
	[FieldOffset(Offset = "0x48")]
	public AudioSource AudioSource;

	[Token(Token = "0x4001268")]
	[FieldOffset(Offset = "0x50")]
	public Speaker Speaker;

	[Token(Token = "0x4001269")]
	[FieldOffset(Offset = "0x58")]
	public Transform Transform;

	[Token(Token = "0x400126A")]
	[FieldOffset(Offset = "0x60")]
	public MicAmplifier MicAmplifier;

	[Token(Token = "0x400126B")]
	private const float PushToTalkIdleSeconds = 30f;

	[Token(Token = "0x400126C")]
	private const bool ClosesIdleMicrophone = false;

	[Token(Token = "0x400126D")]
	[FieldOffset(Offset = "0x68")]
	private bool _hasMicrophone;

	[Token(Token = "0x400126E")]
	[FieldOffset(Offset = "0x6C")]
	private float _lastTransmitTime;

	[Token(Token = "0x6001741")]
	[Address(RVA = "0x5856CC0", Offset = "0x5855CC0", VA = "0x5856CC0")]
	private void Awake()
	{
		// Lifted from source/cpp/GameManagers/PhotonVoiceSync.c (GameManagers.PhotonVoiceSync$$Awake): 18 lines keep C-only constructs
		int piVar1;
		Recorder* targetAddress;
		byte bVar2;
		uint uVar3;
		BaseGameManager pGVar4;
		CancellationTokenSource __this_00;
		Object[] pSVar5;
		Transform pUVar6;
		PhotonView pPVar7;
		PhotonVoiceView pPVar8;
		Recorder pPVar9;
		AudioSource pUVar10;
		Speaker pPVar11;
		MethodInfo pMVar12;

		if (Il2CppMethodInitialized_075458b0 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_PhotonVoiceView) ;
			Il2CppMethodInitialized_075458b0 = true;
		}
		pMVar12 = MethodInfo_System_Collections_Generic_List_PhotonVoiceSync_Add;
		pGVar4 = SceneLoader.CurrentGameManager;
		if (pGVar4 != null) {
			bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((pGVar4.klass._2).typeHierarchyDepth < bVar2) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) {
				throw new InvalidCastException();
			}
			__this_00 = (*(ulong)((sbyte)pGVar4 + 0x68));
			if (__this_00 != null) {
				piVar1 = (int)((long)&__this_00._registeredCallbacksLists + 4);
				*piVar1 = *piVar1 + 1;
				pSVar5 = (Object[])__this_00._kernelEvent;
				if (pSVar5 != null) {
					uVar3 = *(uint)&__this_00._registeredCallbacksLists;
					if (uVar3 < (uint)pSVar5.Length) {
						*(uint)&__this_00._registeredCallbacksLists = uVar3 + 1;
						pSVar5[(int)uVar3] = (object)this;
					}
					else {
						__this_00.AddWithResize((object)this);
					}
					pUVar6 = this.transform;
					this.Transform = pUVar6;
					pPVar7 = this.GetComponent<PhotonView>();
					this.PhotonView = pPVar7;
					pPVar8 = (PhotonVoiceView)this.GetComponent<PhotonVoiceView>();
					this.VoiceView = pPVar8;
					pPVar9 = this.GetComponent<Recorder>();
					targetAddress = &this.Recorder;
					this.Recorder = pPVar9;
					pUVar6 = this.transform;
					if (pUVar6 != null) {
						pUVar6 = pUVar6.Find("Speaker");
						if (pUVar6 != null) {
							pUVar10 = pUVar6.GetComponent<AudioSource>();
							this.AudioSource = pUVar10;
							pUVar10 = this.AudioSource;
							if (pUVar10 != null) {
								pUVar10.ignoreListenerVolume = true;
								pUVar6 = this.transform;
								if (pUVar6 != null) {
									pUVar6 = pUVar6.Find("Speaker");
									if (pUVar6 != null) {
										pPVar11 = pUVar6.GetComponent<Speaker>();
										this.Speaker = pPVar11;
										pMVar12 = (MethodInfo)this.GetComponent<MicAmplifier>();
										this.MicAmplifier = (MicAmplifier)pMVar12;
										pPVar7 = this.PhotonView;
										if (pPVar7 != null) {
											if (pPVar7._IsMine_k__BackingField == false) {
	label_05956fe2: ;
												this.Apply();
												return;
											}
											pPVar9 = *targetAddress;
											if (pPVar9 != null) {
												pPVar9.useMicrophoneTypeFallback = true;
												pPVar9.recordWhenJoined = false;
												pPVar9.LoopAudioClip = true;
												if (*targetAddress != null) {
													(*targetAddress).VoiceDetectionThreshold = 0.01;
													if (*targetAddress != null) {
														(*targetAddress).FrameDuration = 20000;
														if (*targetAddress != null) {
															(*targetAddress).SamplingRate = 48000;
															if (*targetAddress != null) {
																pMVar12 = (MethodInfo)0x1f4;
																(*targetAddress).VoiceDetectionDelayMs = 500;
																goto label_05956fe2;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001742")]
	[Address(RVA = "0x5857000", Offset = "0x5856000", VA = "0x5857000")]
	public void Apply()
	{
		// Lifted from source/cpp/GameManagers/PhotonVoiceSync.c (GameManagers.PhotonVoiceSync$$Apply): 2 lines keep C-only constructs
		PhotonView pPVar1;
		Recorder pPVar2;
		SoundSettings pSVar3;
		IntSetting pSVar4;
		MicAmplifier __this_00;
		InGameSet pSVar5;
		InGameMiscSettings pSVar6;
		FloatSetting pSVar7;
		DeviceInfo value;
		String[] devices;
		AudioSource pUVar8;
		float fVar9;
		DeviceInfo local_40;

		pPVar1 = this.PhotonView;
		if (pPVar1 == null) goto label_0595726d;
		if (pPVar1._IsMine_k__BackingField != false) {
			pPVar2 = this.Recorder;
			if (pPVar2 == null) goto label_0595726d;
			pPVar2.TransmitEnabled = false;
			pSVar3 = SettingsManager.SoundSettings;
			if (((pSVar3 == null) ||(pSVar4 = pSVar3.VoiceChatInput, pSVar4 == null)) ||(pPVar2 = this.Recorder, pPVar2 == null)) goto label_0595726d;
			pPVar2.VoiceDetection = pSVar4._value == 1;
			devices = Microphone.devices;
			pPVar2 = this.Recorder;
			if (pPVar2 == null) goto label_0595726d;
			pPVar2.MicrophoneType = 0;
			pPVar2 = this.Recorder;
			local_40 = VoiceChatManager.GetRecorderDevice(devices);
			if (pPVar2 == null) goto label_0595726d;
			value._IDString_k__BackingField = local_40._IDString_k__BackingField;
			value._IsDefault_k__BackingField = local_40._IsDefault_k__BackingField;
			value._1_3_ = local_40._1_3_;
			value._IDInt_k__BackingField = local_40._IDInt_k__BackingField;
			value._Name_k__BackingField = local_40._Name_k__BackingField;
			value.features = local_40.features;
			value.useStringID = local_40.useStringID;
			value._33_7_ = local_40._33_7_;
			pPVar2.MicrophoneDevice = value;
			if (devices == null) goto label_0595726d;
			this._hasMicrophone = (int)devices.Length != 0;
			__this_00 = this.MicAmplifier;
			fVar9 = VoiceChatManager.GetInputVolume();
			if (__this_00 == null) goto label_0595726d;
			__this_00.AmplificationFactor = fVar9 ;
		}
		pSVar5 = SettingsManager.InGameCurrent;
		if (((pSVar5 != null) &&(pSVar6 = pSVar5.Misc, pSVar6 != null)) &&(pSVar4 = pSVar6.VoiceChat, pSVar4 != null)) {
			pUVar8 = this.AudioSource;
			if (pSVar4._value == 1) {
				pSVar7 = pSVar6.ProximityMaxDistance;
				if ((pSVar7 != null) && (pUVar8 != null)) {
					pUVar8.maxDistance = pSVar7._value;
					pSVar5 = SettingsManager.InGameCurrent;
					if ((pSVar5 != null) &&(((pSVar6 = pSVar5.Misc, pSVar6 != null &&(pSVar7 = pSVar6.ProximityMinDistance, pSVar7 != null)) &&(pUVar8 = this.AudioSource, pUVar8 != null)))) {
						pUVar8.minDistance = pSVar7._value;
						pUVar8 = this.AudioSource;
						if (pUVar8 != null) {
							fVar9 = VoiceChatManager.ProximitySpatialBlend;
							goto label_0595725c;
						}
					}
				}
			}
			else if (pUVar8 != null) {
				fVar9 = 0.0;
	label_0595725c: ;
				pUVar8.spatialBlend = fVar9;
				return;
			}
		}
	label_0595726d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001743")]
	[Address(RVA = "0x5857280", Offset = "0x5856280", VA = "0x5857280")]
	private void Update()
	{
		// Lifted from source/cpp/GameManagers/PhotonVoiceSync.c (GameManagers.PhotonVoiceSync$$Update): 4 lines keep C-only constructs
		int iVar1;
		int iVar2;
		BaseGameManager pGVar3;
		InGameSet pSVar4;
		InGameMiscSettings pSVar5;
		IntSetting pSVar6;
		PhotonView view;
		SoundSettings pSVar7;
		Object x;
		Object pUVar8;
		Transform __this_00;
		InputSettings pSVar9;
		GeneralInputSettings pSVar10;
		KeybindSetting __this_01;
		Recorder pPVar11;
		bool bVar12;
		bool bVar13;
		Transform pUVar14;
		byte bVar15;
		AudioSource __this_02;
		bool bVar16;
		bool bVar17;
		float fVar18;
		Vector3 value;

		pGVar3 = SceneLoader.CurrentGameManager;
		if (pGVar3 != null) {
			bVar15 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((pGVar3.klass._2).typeHierarchyDepth < bVar15) ||((pGVar3.klass._2).typeHierarchy[(ulong)bVar15 - 1] !=typeof(InGameManager))) {
				throw new InvalidCastException();
			}
		}
		pSVar4 = SettingsManager.InGameCurrent;
		if ((((pSVar4 == null) ||(pSVar5 = pSVar4.Misc, pSVar5 == null)) ||(pSVar6 = pSVar5.VoiceChat, pSVar6 == null)) ||(view = this.PhotonView, view == null)) goto label_0595766b;
		iVar1 = pSVar6._value;
		if (view._IsMine_k__BackingField == false) {
			__this_02 = this.AudioSource;
			if (iVar1 == 2) {
				if (__this_02 != null) {
					fVar18 = 0.0;
					goto label_0595762d;
				}
			}
			else {
				fVar18 = VoiceChatManager.GetOuputVolume(view);
				if (__this_02 != null) {
	label_0595762d: ;
					__this_02.volume = fVar18;
					return;
				}
			}
		}
		else {
			pSVar7 = SettingsManager.SoundSettings;
			if ((pSVar7 != null) &&(pSVar6 = pSVar7.VoiceChatInput, pSVar6 != null)) {
				iVar2 = pSVar6._value;
				bVar16 = iVar2 != 2;
				bVar17 = iVar1 != 2;
				if (pGVar3 != null) {
					x = (*(ulong)((sbyte)pGVar3 + 0x80));
					bVar12 = (x != null);
					if (bVar12) {
						if (x == null) goto label_0595766b;
						pUVar8 = x.klass;
						bVar15 = (typeof(BaseTitan)._2).typeHierarchyDepth;
						if (((pUVar8._2).typeHierarchyDepth < bVar15) ||((pUVar8._2).typeHierarchy[(ulong)bVar15 - 1] != typeof(BaseTitan))) {
							__this_00 = this.Transform;
							pUVar14 = (Transform)(**(code*)&((Il2CppClass)pUVar8).vtable[77].methodPtr)(x);
							if (pUVar14 == null) goto label_0595766b;
							value = pUVar14.position;
						}
						else {
							if ((x[0xb].klass == null) ||(pUVar14 = *(Transform*)&((x[0xb].klass)._1).this_arg.bits, pUVar14 == null)) goto label_0595766b;
							__this_00 = this.Transform;
							value = pUVar14.position;
						}
						if (__this_00 == null) goto label_0595766b;
						__this_00.position = value;
					}
					bVar15 = 0;
					bVar12 = (x != null);
					if (bVar12) {
						if (x == null) goto label_0595766b;
						bVar15 = *(byte)&(*(ulong)((sbyte)x + 0x78)) ^ 1;
					}
					bVar12 = (bVar16 && bVar17) && (iVar1 != 1 || bVar15 != 0);
					if ((iVar2 != 1) && ((bVar16 && bVar17) && (iVar1 != 1 || bVar15 != 0))) {
						bVar12 = false;
						bVar13 = ChatManager.IsChatActive();
						if (!bVar13) {
							pSVar9 = SettingsManager.InputSettings;
							if (((pSVar9 == null) ||(pSVar10 = pSVar9.General, pSVar10 == null)) ||(__this_01 = pSVar10.PushToTalk, __this_01 == null)) goto label_0595766b;
							bVar12 = __this_01.GetKey(false);
						}
					}
					bVar13 = bVar12;
					if (iVar2 == 1) {
						bVar13 = bVar16 && bVar17;
					}
					if (((this._hasMicrophone == false) && (bVar13 != false)) &&(*(int)&(*(ulong)((sbyte)pGVar3 + 0x78)) == 1)) {
						VoiceChatManager.RequestMicrophonePermission();
					}
					if (bVar12 != false) {
						fVar18 = Time.unscaledTime;
						this._lastTransmitTime = fVar18;
					}
					pPVar11 = this.Recorder;
					if (pPVar11 != null) {
						pPVar11.RecordingEnabled = (bool)(this._hasMicrophone & (bVar16 && bVar17));
						pPVar11 = this.Recorder;
						if (pPVar11 != null) {
							pPVar11.TransmitEnabled = bVar12;
							__this_02 = this.AudioSource;
							if (__this_02 != null) {
								fVar18 = 1.0;
								goto label_0595762d;
							}
						}
					}
				}
			}
		}
	label_0595766b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001744")]
	[Address(RVA = "0x5857680", Offset = "0x5856680", VA = "0x5857680")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/GameManagers/PhotonVoiceSync.c (GameManagers.PhotonVoiceSync$$LateUpdate): clean
		PhotonVoiceView pPVar1;
		bool bVar2;
		PhotonView pPVar3;
		Player player;

		if (Il2CppMethodInitialized_075458b3 == false) {
			Il2CppMethodInitialized_075458b3 = true;
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) goto label_05957747;
	label_059576ab: ;
			bVar2 = ChatManager.IsChatAvailable();
		}
		else {
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor != 0) goto label_059576ab;
	label_05957747: ;
			bVar2 = ChatManager.IsChatAvailable();
		}
		if (!bVar2) {
			return;
		}
		pPVar3 = this.PhotonView;
		if (pPVar3 != null) {
			if (pPVar3._IsMine_k__BackingField == false) {
				pPVar1 = this.VoiceView;
				if (pPVar1 != null) {
					bVar2 = pPVar1.IsSpeaking;
					pPVar3 = this.photonView;
					if (pPVar3 != null) {
						player = pPVar3._Owner_k__BackingField;
						goto label_059577a0;
					}
				}
			}
			else {
				pPVar3 = this.photonView;
				if ((pPVar3 != null) &&(pPVar1 = this.VoiceView, pPVar1 != null)) {
					player = pPVar3._Owner_k__BackingField;
					bVar2 = pPVar1.IsRecording;
	label_059577a0: ;
					ChatManager.IsTalking(player, bVar2);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001745")]
	[Address(RVA = "0x58577B0", Offset = "0x58567B0", VA = "0x58577B0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/GameManagers/PhotonVoiceSync.c (GameManagers.PhotonVoiceSync$$OnDestroy): clean
		int actorNumber;
		PhotonView pPVar1;

		pPVar1 = this.PhotonView;
		if (pPVar1 == null) {
			throw new NullReferenceException();
		}
		actorNumber = pPVar1.ownerActorNr;
		if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
			ChatManager.ClearTalking(actorNumber);
			return;
		}
		ChatManager.ClearTalking(actorNumber);
		return;
	}

	[Token(Token = "0x6001746")]
	[Address(RVA = "0x5857810", Offset = "0x5856810", VA = "0x5857810")]
	public PhotonVoiceSync()
	{
		// Lifted from source/cpp/GameManagers/PhotonVoiceSync.c (GameManagers.PhotonVoiceSync$$.ctor): clean
		this._lastTransmitTime = -INFINITY;
		base();
		return;
	}
}
