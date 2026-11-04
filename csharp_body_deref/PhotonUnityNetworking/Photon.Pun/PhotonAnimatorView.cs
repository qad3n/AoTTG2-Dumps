// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.PhotonAnimatorView
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/Views/PhotonAnimatorView.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun;

[Token(Token = "0x2000026")]
[AddComponentMenu("Photon Networking/Photon Animator View")]
public class PhotonAnimatorView : MonoBehaviourPun, IPunObservable
{
	[Token(Token = "0x2000027")]
	public enum ParameterType
	{
		[Token(Token = "0x40000E3")]
		Float = 1,
		[Token(Token = "0x40000E4")]
		Int = 3,
		[Token(Token = "0x40000E5")]
		Bool = 4,
		[Token(Token = "0x40000E6")]
		Trigger = 9
	}

	[Token(Token = "0x2000028")]
	public enum SynchronizeType
	{
		[Token(Token = "0x40000E8")]
		Disabled,
		[Token(Token = "0x40000E9")]
		Discrete,
		[Token(Token = "0x40000EA")]
		Continuous
	}

	[Serializable]
	[Token(Token = "0x2000029")]
	public class SynchronizedParameter
	{
		[Token(Token = "0x40000EB")]
		[FieldOffset(Offset = "0x10")]
		public ParameterType Type;

		[Token(Token = "0x40000EC")]
		[FieldOffset(Offset = "0x14")]
		public SynchronizeType SynchronizeType;

		[Token(Token = "0x40000ED")]
		[FieldOffset(Offset = "0x18")]
		public string Name;

		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public SynchronizedParameter()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200002A")]
	public class SynchronizedLayer
	{
		[Token(Token = "0x40000EE")]
		[FieldOffset(Offset = "0x10")]
		public SynchronizeType SynchronizeType;

		[Token(Token = "0x40000EF")]
		[FieldOffset(Offset = "0x14")]
		public int LayerIndex;

		[Token(Token = "0x60001A4")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public SynchronizedLayer()
		{
		}
	}

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x28")]
	private bool TriggerUsageWarningDone;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x30")]
	private Animator m_Animator;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x38")]
	private PhotonStreamQueue m_StreamQueue;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x40")]
	[HideInInspector]
	[SerializeField]
	private bool ShowLayerWeightsInspector;

	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x41")]
	[HideInInspector]
	[SerializeField]
	private bool ShowParameterInspector;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x48")]
	[HideInInspector]
	[SerializeField]
	private List<SynchronizedParameter> m_SynchronizeParameters;

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x50")]
	[HideInInspector]
	[SerializeField]
	private List<SynchronizedLayer> m_SynchronizeLayers;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x58")]
	private Vector3 m_ReceiverPosition;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x64")]
	private float m_LastDeserializeTime;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x68")]
	private bool m_WasSynchronizeTypeChanged;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x70")]
	private List<string> m_raisedDiscreteTriggersCache;

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x1D611A0", Offset = "0x1D5F7A0", VA = "0x181D611A0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x1D62E10", Offset = "0x1D61410", VA = "0x181D62E10")]
	private void Update()
	{
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x1D611F0", Offset = "0x1D5F7F0", VA = "0x181D611F0")]
	public void CacheDiscreteTriggers()
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x1D61C50", Offset = "0x1D60250", VA = "0x181D61C50")]
	public bool DoesLayerSynchronizeTypeExist(int layerIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x1D61D20", Offset = "0x1D60320", VA = "0x181D61D20")]
	public bool DoesParameterSynchronizeTypeExist(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
	public List<SynchronizedLayer> GetSynchronizedLayers()
	{
		return null;
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
	public List<SynchronizedParameter> GetSynchronizedParameters()
	{
		return null;
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x1D61E00", Offset = "0x1D60400", VA = "0x181D61E00")]
	public SynchronizeType GetLayerSynchronizeType(int layerIndex)
	{
		return default(SynchronizeType);
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x1D61F10", Offset = "0x1D60510", VA = "0x181D61F10")]
	public SynchronizeType GetParameterSynchronizeType(string name)
	{
		return default(SynchronizeType);
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x1D629F0", Offset = "0x1D60FF0", VA = "0x181D629F0")]
	public void SetLayerSynchronized(int layerIndex, SynchronizeType synchronizeType)
	{
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x1D62BF0", Offset = "0x1D611F0", VA = "0x181D62BF0")]
	public void SetParameterSynchronized(string name, ParameterType type, SynchronizeType synchronizeType)
	{
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x1D62170", Offset = "0x1D60770", VA = "0x181D62170")]
	private void SerializeDataContinuously()
	{
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x1D612E0", Offset = "0x1D5F8E0", VA = "0x181D612E0")]
	private void DeserializeDataContinuously()
	{
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x1D624D0", Offset = "0x1D60AD0", VA = "0x181D624D0")]
	private void SerializeDataDiscretly(PhotonStream stream)
	{
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x1D61660", Offset = "0x1D5FC60", VA = "0x181D61660")]
	private void DeserializeDataDiscretly(PhotonStream stream)
	{
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x1D62830", Offset = "0x1D60E30", VA = "0x181D62830")]
	private void SerializeSynchronizationTypeState(PhotonStream stream)
	{
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x1D61AA0", Offset = "0x1D600A0", VA = "0x181D61AA0")]
	private void DeserializeSynchronizationTypeState(PhotonStream stream)
	{
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x1D62030", Offset = "0x1D60630", VA = "0x181D62030", Slot = "4")]
	public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x1D63040", Offset = "0x1D61640", VA = "0x181D63040")]
	public PhotonAnimatorView()
	{
	}
}
