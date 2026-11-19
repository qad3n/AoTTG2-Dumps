// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.VoiceChatManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/VoiceChatManager.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/VoiceChatManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Voice;
using Photon.Voice.PUN;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x2000989")]
internal class VoiceChatManager : MonoBehaviour
{
	[Token(Token = "0x4003038")]
	[FieldOffset(Offset = "0x0")]
	private static VoiceChatManager _instance;

	[Token(Token = "0x4003039")]
	[FieldOffset(Offset = "0x8")]
	public static PunVoiceClient Client;

	[Token(Token = "0x400303A")]
	[FieldOffset(Offset = "0x10")]
	public static float ProximitySpatialBlend;

	[Token(Token = "0x400303B")]
	public const string DefaultDevice = "";

	[Token(Token = "0x17000F50")]
	public static string[] MicrophoneDevices
	{
		[Token(Token = "0x6005925")]
		[Address(RVA = "0x5D1E660", Offset = "0x5D1D660", VA = "0x5D1E660")]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/VoiceChatManager.c (ApplicationManagers.VoiceChatManager$$get_MicrophoneDevices): 2 lines keep C-only constructs
			String[] pSVar1;
			System_Collections_Generic_IEnumerable_TSource__o source;

			pSVar1 = Microphone.devices;
			source = Enumerable.Prepend<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar1, (Il2CppObject *)"");
			pSVar1 = (String[])Enumerable.ToArray<string>(source);
			return pSVar1;
		}
	}

	[Token(Token = "0x6005926")]
	[Address(RVA = "0x5D1E6D0", Offset = "0x5D1D6D0", VA = "0x5D1E6D0")]
	public static string GetDeviceLabel(string device)
	{
		// Lifted from source/cpp/ApplicationManagers/VoiceChatManager.c (ApplicationManagers.VoiceChatManager$$GetDeviceLabel): clean
		bool bVar1;
		String pSVar2;

		bVar1 = (device == "");
		if (bVar1) {
			pSVar2 = UIManager.GetLocale("SettingsPopup", "Sound", "VoiceChatDeviceDefault", "", "");
			return pSVar2;
		}
		return device;
	}

	[Token(Token = "0x6005927")]
	[Address(RVA = "0x5D1E7A0", Offset = "0x5D1D7A0", VA = "0x5D1E7A0")]
	public static DeviceInfo GetRecorderDevice(string[] devices)
	{
		// Lifted from source/cpp/ApplicationManagers/VoiceChatManager.c (ApplicationManagers.VoiceChatManager$$GetRecorderDevice): 8 lines keep C-only constructs
		SoundSettings pSVar1;
		StringSetting pSVar2;
		String pSVar3;
		DeviceFeatures pPVar5;
		undefined7 uVar6;
		bool bVar7;
		undefined3 uVar8;
		int iVar9;

		pSVar1 = SettingsManager.SoundSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.VoiceChatDevice, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		pSVar3 = pSVar2._value;
		iVar9 = Array.IndexOf<string>((Object[])devices, (object)pSVar3);
		if (iVar9 < 0) {
			uVar6 = *(undefined7)&(DeviceInfo.Default).field_0x21;
			__return_storage_ptr__.useStringID = (DeviceInfo.Default).useStringID;
			*(undefined7)&__return_storage_ptr__.field_0x21 = uVar6;
			bVar7 = (DeviceInfo.Default)._IsDefault_k__BackingField;
			uVar8 = *(undefined3)&(DeviceInfo.Default).field_0x1;
			iVar9 = (DeviceInfo.Default)._IDInt_k__BackingField;
			pSVar3 = (DeviceInfo.Default)._IDString_k__BackingField;
			pPVar5 = (DeviceInfo.Default).features;
			__return_storage_ptr__._Name_k__BackingField = (DeviceInfo.Default)._Name_k__BackingField;
			__return_storage_ptr__.features = pPVar5;
			__return_storage_ptr__._IsDefault_k__BackingField = bVar7;
			*(undefined3)&__return_storage_ptr__.field_0x1 = uVar8;
			__return_storage_ptr__._IDInt_k__BackingField = iVar9;
			__return_storage_ptr__._IDString_k__BackingField = pSVar3;
		}
		else {
			__return_storage_ptr__._Name_k__BackingField = null;
			__return_storage_ptr__.features = null;
			__return_storage_ptr__._IsDefault_k__BackingField = false;
			*(undefined3)&__return_storage_ptr__.field_0x1 = 0;
			__return_storage_ptr__._IDInt_k__BackingField = 0;
			__return_storage_ptr__._IDString_k__BackingField = null;
			*(ulong)&__return_storage_ptr__.useStringID = 0;
			__return_storage_ptr__ = new DeviceInfo(pSVar3, null);
		}
		return __return_storage_ptr__;
	}

	[Token(Token = "0x6005928")]
	[Address(RVA = "0x5D1E8B0", Offset = "0x5D1D8B0", VA = "0x5D1E8B0")]
	public static bool HasMicrophonePermission()
	{
		// Lifted from source/cpp/ApplicationManagers/VoiceChatManager.c (ApplicationManagers.VoiceChatManager$$HasMicrophonePermission): clean
		return true;
	}

	[Token(Token = "0x6005929")]
	[Address(RVA = "0x5D1E8C0", Offset = "0x5D1D8C0", VA = "0x5D1E8C0")]
	public static void RequestMicrophonePermission()
	{
		// Lifted from source/cpp/ApplicationManagers/VoiceChatManager.c (ApplicationManagers.VoiceChatManager$$RequestMicrophonePermission): clean
		return;
	}

	[Token(Token = "0x600592A")]
	[Address(RVA = "0x5D09230", Offset = "0x5D08230", VA = "0x5D09230")]
	public static void Init()
	{
		// Lifted from source/cpp/ApplicationManagers/VoiceChatManager.c (ApplicationManagers.VoiceChatManager$$Init): clean
		VoiceChatManager pAVar2;
		PunVoiceClient pPVar3;
		VoiceLogger pPVar4;

		pAVar2 = SingletonFactory.CreateSingleton<VoiceChatManager>((object)VoiceChatManager._instance);
		VoiceChatManager._instance = pAVar2;
		pPVar3 = (PunVoiceClient)ComponentHolderProtocol.AddComponent<PunVoiceClient>((Object)VoiceChatManager._instance);
		VoiceChatManager.Client = pPVar3;
		pPVar3 = VoiceChatManager.Client;
		if (pPVar3 != null) {
			pPVar4 = pPVar3.VoiceLogger;
			if (pPVar4 != null) {
				pPVar4.LogLevel = 1;
				pPVar3 = VoiceChatManager.Client;
				if (pPVar3 != null) {
					pPVar3.AutoConnectAndJoin = false;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600592B")]
	[Address(RVA = "0x5D16380", Offset = "0x5D15380", VA = "0x5D16380")]
	public static void ApplySoundSettings()
	{
		// Lifted from source/cpp/ApplicationManagers/VoiceChatManager.c (ApplicationManagers.VoiceChatManager$$ApplySoundSettings): 3 lines keep C-only constructs
		byte bVar1;
		BaseGameManager pGVar2;
		CancellationTokenSource __this;
		object __this_00;
		bool bVar3;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_28;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		pGVar2 = SceneLoader.CurrentGameManager;
		bVar3 = ((Object)pGVar2 == null);
		if ((!bVar3) &&(pGVar2 = SceneLoader.CurrentGameManager, pGVar2 != null)) {
			bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if ((bVar1 <= (pGVar2.klass._2).typeHierarchyDepth) &&((pGVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(InGameManager))) {
				__this = (*(ulong)((sbyte)pGVar2 + 0x68));
				if (__this == null) {
					throw new NullReferenceException();
				}
				local_48 = __this.GetEnumerator();
				local_28 = (byte)&local_48;
				while(true) {
					bVar3 = local_48.MoveNext();
					__this_00 = local_48._current;
					if (!bVar3) break;
					bVar3 = ((Object)__this_00 != null);
					if (bVar3) {
						if ((PhotonVoiceSync)__this_00 == null) {
							throw new NullReferenceException();
						}
						__this_00.Apply();
					}
				}
				local_48.Dispose();
			}
		}
		return;
	}

	[Token(Token = "0x600592C")]
	[Address(RVA = "0x5D1E8D0", Offset = "0x5D1D8D0", VA = "0x5D1E8D0")]
	public static float GetInputVolume()
	{
		// Lifted from source/cpp/ApplicationManagers/VoiceChatManager.c (ApplicationManagers.VoiceChatManager$$GetInputVolume): clean
		SoundSettings pSVar1;
		IntSetting pSVar2;
		FloatSetting pSVar3;
		float fVar4;
		float fVar5;

		pSVar1 = SettingsManager.SoundSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.VoiceChatInput, pSVar2 == null)) {
	label_05e1e969: ;
			throw new NullReferenceException();
		}
		fVar4 = 0.0;
		if (pSVar2._value != 2) {
			pSVar3 = pSVar1.VoiceChatMicVolume;
			if (pSVar3 == null) goto label_05e1e969;
			fVar4 = pSVar3._value;
			fVar5 = 1.0;
			if (fVar4 <= 1.0) {
				fVar5 = fVar4;
			}
			fVar4 = (float)(-(uint)(0.0 <= fVar4) & (uint)(fVar5 * 4.0));
		}
		return fVar4;
	}

	[Token(Token = "0x600592D")]
	[Address(RVA = "0x5D1E970", Offset = "0x5D1D970", VA = "0x5D1E970")]
	public static float GetOuputVolume(PhotonView view)
	{
		// Lifted from source/cpp/ApplicationManagers/VoiceChatManager.c (ApplicationManagers.VoiceChatManager$$GetOuputVolume): clean
		int item;
		SoundSettings pSVar1;
		IntSetting pSVar2;
		HashSet<int> __this;
		Dictionary<int, float> pSVar3;
		FloatSetting pSVar4;
		bool bVar5;
		float fVar6;
		float fVar7;

		if (((view != null) &&(pSVar1 = SettingsManager.SoundSettings, pSVar1 != null)) &&(pSVar2 = pSVar1.VoiceChatInput, pSVar2 != null)) {
			if (pSVar2._value == 2) {
				return 0.0;
			}
			item = view.ownerActorNr;
			__this = InGameManager.MuteVoiceChat;
			if (__this != null) {
				bVar5 = __this.Contains(item);
				if (bVar5) {
					return 0.0;
				}
				pSVar3 = InGameManager.VoiceChatVolumeMultiplier;
				if (pSVar3 != null) {
					bVar5 = pSVar3.ContainsKey(item);
					if (bVar5) {
						pSVar3 = InGameManager.VoiceChatVolumeMultiplier;
						if (pSVar3 == null) goto label_05e1eb34;
						fVar6 = pSVar3.get_Item(item);
					}
					else {
						fVar6 = 1.0;
					}
					pSVar1 = SettingsManager.SoundSettings;
					if ((pSVar1 != null) &&(pSVar4 = pSVar1.VoiceChatAudioVolume, pSVar4 != null)) {
						fVar6 = fVar6 * pSVar4._value;
						fVar7 = 1.0;
						if (fVar6 <= 1.0) {
							fVar7 = fVar6;
						}
						return (float)(-(uint)(0.0 <= fVar6) & (uint)fVar7);
					}
				}
			}
		}
	label_05e1eb34: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600592E")]
	[Address(RVA = "0x5D1EB40", Offset = "0x5D1DB40", VA = "0x5D1EB40")]
	public VoiceChatManager()
	{
		// Lifted from source/cpp/ApplicationManagers/VoiceChatManager.c (ApplicationManagers.VoiceChatManager$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ApplicationManagers/VoiceChatManager.c.

	// ApplicationManagers.VoiceChatManager$$.cctor: clean
	static VoiceChatManager()
	{
		VoiceChatManager.ProximitySpatialBlend = 1.0;
		return;
	}
}
