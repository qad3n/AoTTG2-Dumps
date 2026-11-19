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
		[Address(RVA = "0x56FADD0", Offset = "0x56F9DD0", VA = "0x56FADD0")]
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
		[Address(RVA = "0x56FAB70", Offset = "0x56F9B70", VA = "0x56FAB70")]
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
	[Address(RVA = "0x56F9BD0", Offset = "0x56F8BD0", VA = "0x56F9BD0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x56F9C20", Offset = "0x56F8C20", VA = "0x56F9C20")]
	private void Update()
	{
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x56FA0B0", Offset = "0x56F90B0", VA = "0x56FA0B0")]
	public void CacheDiscreteTriggers()
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x56FA4F0", Offset = "0x56F94F0", VA = "0x56FA4F0")]
	public bool DoesLayerSynchronizeTypeExist(int layerIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x56FA5D0", Offset = "0x56F95D0", VA = "0x56FA5D0")]
	public bool DoesParameterSynchronizeTypeExist(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x56FA6C0", Offset = "0x56F96C0", VA = "0x56FA6C0")]
	public List<SynchronizedLayer> GetSynchronizedLayers()
	{
		return null;
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x56FA6D0", Offset = "0x56F96D0", VA = "0x56FA6D0")]
	public List<SynchronizedParameter> GetSynchronizedParameters()
	{
		return null;
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x56FA6E0", Offset = "0x56F96E0", VA = "0x56FA6E0")]
	public SynchronizeType GetLayerSynchronizeType(int layerIndex)
	{
		return default(SynchronizeType);
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x56FA800", Offset = "0x56F9800", VA = "0x56FA800")]
	public SynchronizeType GetParameterSynchronizeType(string name)
	{
		return default(SynchronizeType);
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x56FA930", Offset = "0x56F9930", VA = "0x56FA930")]
	public void SetLayerSynchronized(int layerIndex, SynchronizeType synchronizeType)
	{
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x56FAB80", Offset = "0x56F9B80", VA = "0x56FAB80")]
	public void SetParameterSynchronized(string name, ParameterType type, SynchronizeType synchronizeType)
	{
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x56F9D90", Offset = "0x56F8D90", VA = "0x56F9D90")]
	private void SerializeDataContinuously()
	{
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x56FA1F0", Offset = "0x56F91F0", VA = "0x56FA1F0")]
	private void DeserializeDataContinuously()
	{
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x56FADE0", Offset = "0x56F9DE0", VA = "0x56FADE0")]
	private void SerializeDataDiscretly(PhotonStream stream)
	{
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x56FB190", Offset = "0x56FA190", VA = "0x56FB190")]
	private void DeserializeDataDiscretly(PhotonStream stream)
	{
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x56FB5D0", Offset = "0x56FA5D0", VA = "0x56FB5D0")]
	private void SerializeSynchronizationTypeState(PhotonStream stream)
	{
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x56FB790", Offset = "0x56FA790", VA = "0x56FB790")]
	private void DeserializeSynchronizationTypeState(PhotonStream stream)
	{
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x56FB940", Offset = "0x56FA940", VA = "0x56FB940", Slot = "4")]
	public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x56FBA60", Offset = "0x56FAA60", VA = "0x56FBA60")]
	public PhotonAnimatorView()
	{
	}
}
