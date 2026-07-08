using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun;

[Token(Token = "0x2000028")]
[AddComponentMenu("Photon Networking/Photon Animator View")]
public class PhotonAnimatorView : MonoBehaviourPun, IPunObservable
{
	[Token(Token = "0x2000029")]
	public enum ParameterType
	{
		[Token(Token = "0x40000E8")]
		Float = 1,
		[Token(Token = "0x40000E9")]
		Int = 3,
		[Token(Token = "0x40000EA")]
		Bool = 4,
		[Token(Token = "0x40000EB")]
		Trigger = 9
	}

	[Token(Token = "0x200002A")]
	public enum SynchronizeType
	{
		[Token(Token = "0x40000ED")]
		Disabled,
		[Token(Token = "0x40000EE")]
		Discrete,
		[Token(Token = "0x40000EF")]
		Continuous
	}

	[Serializable]
	[Token(Token = "0x200002B")]
	public class SynchronizedParameter
	{
		[Token(Token = "0x40000F0")]
		[FieldOffset(Offset = "0x10")]
		public ParameterType Type;

		[Token(Token = "0x40000F1")]
		[FieldOffset(Offset = "0x14")]
		public SynchronizeType SynchronizeType;

		[Token(Token = "0x40000F2")]
		[FieldOffset(Offset = "0x18")]
		public string Name;

		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x3C1A550", Offset = "0x3C1A550", VA = "0x3C1A550")]
		public SynchronizedParameter()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200002C")]
	public class SynchronizedLayer
	{
		[Token(Token = "0x40000F3")]
		[FieldOffset(Offset = "0x10")]
		public SynchronizeType SynchronizeType;

		[Token(Token = "0x40000F4")]
		[FieldOffset(Offset = "0x14")]
		public int LayerIndex;

		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x3C1A2F0", Offset = "0x3C1A2F0", VA = "0x3C1A2F0")]
		public SynchronizedLayer()
		{
		}
	}

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x28")]
	private bool TriggerUsageWarningDone;

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x30")]
	private Animator m_Animator;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x38")]
	private PhotonStreamQueue m_StreamQueue;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x40")]
	[HideInInspector]
	[SerializeField]
	private bool ShowLayerWeightsInspector;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x41")]
	[HideInInspector]
	[SerializeField]
	private bool ShowParameterInspector;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x48")]
	[HideInInspector]
	[SerializeField]
	private List<SynchronizedParameter> m_SynchronizeParameters;

	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x50")]
	[HideInInspector]
	[SerializeField]
	private List<SynchronizedLayer> m_SynchronizeLayers;

	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0x58")]
	private Vector3 m_ReceiverPosition;

	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x64")]
	private float m_LastDeserializeTime;

	[Token(Token = "0x40000E5")]
	[FieldOffset(Offset = "0x68")]
	private bool m_WasSynchronizeTypeChanged;

	[Token(Token = "0x40000E6")]
	[FieldOffset(Offset = "0x70")]
	private List<string> m_raisedDiscreteTriggersCache;

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x3C192F0", Offset = "0x3C192F0", VA = "0x3C192F0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x3C19340", Offset = "0x3C19340", VA = "0x3C19340")]
	private void Update()
	{
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x3C19820", Offset = "0x3C19820", VA = "0x3C19820")]
	public void CacheDiscreteTriggers()
	{
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x3C19C70", Offset = "0x3C19C70", VA = "0x3C19C70")]
	public bool DoesLayerSynchronizeTypeExist(int layerIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x3C19D50", Offset = "0x3C19D50", VA = "0x3C19D50")]
	public bool DoesParameterSynchronizeTypeExist(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x3C19E40", Offset = "0x3C19E40", VA = "0x3C19E40")]
	public List<SynchronizedLayer> GetSynchronizedLayers()
	{
		return null;
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x3C19E50", Offset = "0x3C19E50", VA = "0x3C19E50")]
	public List<SynchronizedParameter> GetSynchronizedParameters()
	{
		return null;
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x3C19E60", Offset = "0x3C19E60", VA = "0x3C19E60")]
	public SynchronizeType GetLayerSynchronizeType(int layerIndex)
	{
		return default(SynchronizeType);
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x3C19F80", Offset = "0x3C19F80", VA = "0x3C19F80")]
	public SynchronizeType GetParameterSynchronizeType(string name)
	{
		return default(SynchronizeType);
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x3C1A0B0", Offset = "0x3C1A0B0", VA = "0x3C1A0B0")]
	public void SetLayerSynchronized(int layerIndex, SynchronizeType synchronizeType)
	{
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x3C1A300", Offset = "0x3C1A300", VA = "0x3C1A300")]
	public void SetParameterSynchronized(string name, ParameterType type, SynchronizeType synchronizeType)
	{
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x3C194B0", Offset = "0x3C194B0", VA = "0x3C194B0")]
	private void SerializeDataContinuously()
	{
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x3C19960", Offset = "0x3C19960", VA = "0x3C19960")]
	private void DeserializeDataContinuously()
	{
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x3C1A560", Offset = "0x3C1A560", VA = "0x3C1A560")]
	private void SerializeDataDiscretly(PhotonStream stream)
	{
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x3C1A950", Offset = "0x3C1A950", VA = "0x3C1A950")]
	private void DeserializeDataDiscretly(PhotonStream stream)
	{
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x3C1ADD0", Offset = "0x3C1ADD0", VA = "0x3C1ADD0")]
	private void SerializeSynchronizationTypeState(PhotonStream stream)
	{
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x3C1AF90", Offset = "0x3C1AF90", VA = "0x3C1AF90")]
	private void DeserializeSynchronizationTypeState(PhotonStream stream)
	{
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x3C1B150", Offset = "0x3C1B150", VA = "0x3C1B150", Slot = "4")]
	public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x3C1B270", Offset = "0x3C1B270", VA = "0x3C1B270")]
	public PhotonAnimatorView()
	{
	}
}
