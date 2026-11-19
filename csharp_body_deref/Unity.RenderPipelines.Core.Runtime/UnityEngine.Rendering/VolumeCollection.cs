// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VolumeCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001F3")]
internal class VolumeCollection
{
	[Token(Token = "0x400097D")]
	internal const int k_MaxLayerCount = 32;

	[Token(Token = "0x400097E")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<int, List<Volume>> m_SortedVolumes;

	[Token(Token = "0x400097F")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<Volume> m_Volumes;

	[Token(Token = "0x4000980")]
	[FieldOffset(Offset = "0x20")]
	private readonly Dictionary<int, bool> m_SortNeeded;

	[Token(Token = "0x170001E6")]
	public int count
	{
		[Token(Token = "0x6000ED9")]
		[Address(RVA = "0x6553140", Offset = "0x6552140", VA = "0x6553140")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000EDA")]
	[Address(RVA = "0x6553180", Offset = "0x6552180", VA = "0x6553180")]
	public bool Register(Volume volume, int layer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EDB")]
	[Address(RVA = "0x6553660", Offset = "0x6552660", VA = "0x6553660")]
	public bool Unregister(Volume volume, int layer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EDC")]
	[Address(RVA = "0x65538D0", Offset = "0x65528D0", VA = "0x65538D0")]
	public bool ChangeLayer(Volume volume, int previousLayerIndex, int currentLayerIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EDD")]
	[Address(RVA = "0x65539B0", Offset = "0x65529B0", VA = "0x65539B0")]
	internal static void SortByPriority(List<Volume> volumes)
	{
	}

	[Token(Token = "0x6000EDE")]
	[Address(RVA = "0x6553AE0", Offset = "0x6552AE0", VA = "0x6553AE0")]
	public List<Volume> GrabVolumes(LayerMask mask)
	{
		return null;
	}

	[Token(Token = "0x6000EDF")]
	[Address(RVA = "0x65534D0", Offset = "0x65524D0", VA = "0x65534D0")]
	public void SetLayerIndexDirty(int layerIndex)
	{
	}

	[Token(Token = "0x6000EE0")]
	public bool IsComponentActiveInMask<T>(LayerMask layerMask) where T : VolumeComponent
	{
		return default(bool);
	}

	[Token(Token = "0x6000EE1")]
	[Address(RVA = "0x6553DC0", Offset = "0x6552DC0", VA = "0x6553DC0")]
	public VolumeCollection()
	{
	}
}
