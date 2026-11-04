// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VolumeCollection
// Update status: NEW in this game update
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
		[Address(RVA = "0x2B653D0", Offset = "0x2B639D0", VA = "0x182B653D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000EDA")]
	[Address(RVA = "0x2B64B30", Offset = "0x2B63130", VA = "0x182B64B30")]
	public bool Register(Volume volume, int layer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EDB")]
	[Address(RVA = "0x2B65070", Offset = "0x2B63670", VA = "0x182B65070")]
	public bool Unregister(Volume volume, int layer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EDC")]
	[Address(RVA = "0x2B646F0", Offset = "0x2B62CF0", VA = "0x182B646F0")]
	public bool ChangeLayer(Volume volume, int previousLayerIndex, int currentLayerIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EDD")]
	[Address(RVA = "0x2B64F60", Offset = "0x2B63560", VA = "0x182B64F60")]
	internal static void SortByPriority(List<Volume> volumes)
	{
	}

	[Token(Token = "0x6000EDE")]
	[Address(RVA = "0x2B647D0", Offset = "0x2B62DD0", VA = "0x182B647D0")]
	public List<Volume> GrabVolumes(LayerMask mask)
	{
		return null;
	}

	[Token(Token = "0x6000EDF")]
	[Address(RVA = "0x2B64DF0", Offset = "0x2B633F0", VA = "0x182B64DF0")]
	public void SetLayerIndexDirty(int layerIndex)
	{
	}

	[Token(Token = "0x6000EE0")]
	public bool IsComponentActiveInMask<T>(LayerMask layerMask) where T : VolumeComponent
	{
		return default(bool);
	}

	[Token(Token = "0x6000EE1")]
	[Address(RVA = "0x2B652C0", Offset = "0x2B638C0", VA = "0x182B652C0")]
	public VolumeCollection()
	{
	}
}
