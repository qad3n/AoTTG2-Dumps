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
		[Address(RVA = "0x3F0FEA0", Offset = "0x3F0FEA0", VA = "0x3F0FEA0")]
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
		[Address(RVA = "0x3F0FC40", Offset = "0x3F0FC40", VA = "0x3F0FC40")]
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
	[Address(RVA = "0x3F0EC40", Offset = "0x3F0EC40", VA = "0x3F0EC40")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x3F0EC90", Offset = "0x3F0EC90", VA = "0x3F0EC90")]
	private void Update()
	{
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x3F0F170", Offset = "0x3F0F170", VA = "0x3F0F170")]
	public void CacheDiscreteTriggers()
	{
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x3F0F5C0", Offset = "0x3F0F5C0", VA = "0x3F0F5C0")]
	public bool DoesLayerSynchronizeTypeExist(int layerIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x3F0F6A0", Offset = "0x3F0F6A0", VA = "0x3F0F6A0")]
	public bool DoesParameterSynchronizeTypeExist(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x3F0F790", Offset = "0x3F0F790", VA = "0x3F0F790")]
	public List<SynchronizedLayer> GetSynchronizedLayers()
	{
		return null;
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x3F0F7A0", Offset = "0x3F0F7A0", VA = "0x3F0F7A0")]
	public List<SynchronizedParameter> GetSynchronizedParameters()
	{
		return null;
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x3F0F7B0", Offset = "0x3F0F7B0", VA = "0x3F0F7B0")]
	public SynchronizeType GetLayerSynchronizeType(int layerIndex)
	{
		return default(SynchronizeType);
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x3F0F8D0", Offset = "0x3F0F8D0", VA = "0x3F0F8D0")]
	public SynchronizeType GetParameterSynchronizeType(string name)
	{
		return default(SynchronizeType);
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x3F0FA00", Offset = "0x3F0FA00", VA = "0x3F0FA00")]
	public void SetLayerSynchronized(int layerIndex, SynchronizeType synchronizeType)
	{
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x3F0FC50", Offset = "0x3F0FC50", VA = "0x3F0FC50")]
	public void SetParameterSynchronized(string name, ParameterType type, SynchronizeType synchronizeType)
	{
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x3F0EE00", Offset = "0x3F0EE00", VA = "0x3F0EE00")]
	private void SerializeDataContinuously()
	{
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x3F0F2B0", Offset = "0x3F0F2B0", VA = "0x3F0F2B0")]
	private void DeserializeDataContinuously()
	{
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x3F0FEB0", Offset = "0x3F0FEB0", VA = "0x3F0FEB0")]
	private void SerializeDataDiscretly(PhotonStream stream)
	{
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x3F102A0", Offset = "0x3F102A0", VA = "0x3F102A0")]
	private void DeserializeDataDiscretly(PhotonStream stream)
	{
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x3F10720", Offset = "0x3F10720", VA = "0x3F10720")]
	private void SerializeSynchronizationTypeState(PhotonStream stream)
	{
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x3F108E0", Offset = "0x3F108E0", VA = "0x3F108E0")]
	private void DeserializeSynchronizationTypeState(PhotonStream stream)
	{
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x3F10AA0", Offset = "0x3F10AA0", VA = "0x3F10AA0", Slot = "4")]
	public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x3F10BC0", Offset = "0x3F10BC0", VA = "0x3F10BC0")]
	public PhotonAnimatorView()
	{
	}
}
