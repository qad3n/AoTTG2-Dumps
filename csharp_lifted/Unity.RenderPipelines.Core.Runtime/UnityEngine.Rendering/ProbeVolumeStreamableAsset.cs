// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumeStreamableAsset
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.IO.LowLevel.Unsafe;
using UnityEngine.Scripting.APIUpdating;
using UnityEngine.Serialization;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000141")]
[MovedFrom(false, "UnityEngine.Rendering", "Unity.RenderPipelines.Core.Runtime", "ProbeVolumeBakingSet.StreamableAsset")]
internal class ProbeVolumeStreamableAsset
{
	[Serializable]
	[Token(Token = "0x2000142")]
	[MovedFrom(false, "UnityEngine.Rendering", "Unity.RenderPipelines.Core.Runtime", "ProbeVolumeBakingSet.StreamableAsset.StreamableCellDesc")]
	public struct StreamableCellDesc
	{
		[Token(Token = "0x400061B")]
		[FieldOffset(Offset = "0x0")]
		public int offset;

		[Token(Token = "0x400061C")]
		[FieldOffset(Offset = "0x4")]
		public int elementCount;
	}

	[Token(Token = "0x4000614")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[FormerlySerializedAs("assetGUID")]
	private string m_AssetGUID;

	[Token(Token = "0x4000615")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[FormerlySerializedAs("streamableAssetPath")]
	private string m_StreamableAssetPath;

	[Token(Token = "0x4000616")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[FormerlySerializedAs("elementSize")]
	private int m_ElementSize;

	[Token(Token = "0x4000617")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[FormerlySerializedAs("streamableCellDescs")]
	private SerializedDictionary<int, StreamableCellDesc> m_StreamableCellDescs;

	[Token(Token = "0x4000618")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private TextAsset m_Asset;

	[Token(Token = "0x4000619")]
	[FieldOffset(Offset = "0x38")]
	private string m_FinalAssetPath;

	[Token(Token = "0x400061A")]
	[FieldOffset(Offset = "0x40")]
	private FileHandle m_AssetFileHandle;

	[Token(Token = "0x1700013F")]
	public string assetGUID
	{
		[Token(Token = "0x6000ACE")]
		[Address(RVA = "0x6511110", Offset = "0x6510110", VA = "0x6511110")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000140")]
	public TextAsset asset
	{
		[Token(Token = "0x6000ACF")]
		[Address(RVA = "0x6511120", Offset = "0x6510120", VA = "0x6511120")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000141")]
	public int elementSize
	{
		[Token(Token = "0x6000AD0")]
		[Address(RVA = "0x6511130", Offset = "0x6510130", VA = "0x6511130")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000142")]
	public SerializedDictionary<int, StreamableCellDesc> streamableCellDescs
	{
		[Token(Token = "0x6000AD1")]
		[Address(RVA = "0x6511140", Offset = "0x6510140", VA = "0x6511140")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AD2")]
	[Address(RVA = "0x6511150", Offset = "0x6510150", VA = "0x6511150")]
	public ProbeVolumeStreamableAsset(string apvStreamingAssetsPath, SerializedDictionary<int, StreamableCellDesc> cellDescs, int elementSize, string bakingSetGUID, string assetGUID)
	{
	}

	[Token(Token = "0x6000AD3")]
	[Address(RVA = "0x65112D0", Offset = "0x65102D0", VA = "0x65112D0")]
	internal void RefreshAssetPath()
	{
	}

	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x6511370", Offset = "0x6510370", VA = "0x6511370")]
	public string GetAssetPath()
	{
		return null;
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x65113A0", Offset = "0x65103A0", VA = "0x65113A0")]
	internal bool HasValidAssetReference()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x6511420", Offset = "0x6510420", VA = "0x6511420")]
	public bool FileExists()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x65114F0", Offset = "0x65104F0", VA = "0x65114F0")]
	public long GetFileSize()
	{
		return default(long);
	}

	[Token(Token = "0x6000AD8")]
	[Address(RVA = "0x6511570", Offset = "0x6510570", VA = "0x6511570")]
	public bool IsOpen()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AD9")]
	[Address(RVA = "0x6511580", Offset = "0x6510580", VA = "0x6511580")]
	public FileHandle OpenFile()
	{
		return default(FileHandle);
	}

	[Token(Token = "0x6000ADA")]
	[Address(RVA = "0x65115D0", Offset = "0x65105D0", VA = "0x65115D0")]
	public void CloseFile()
	{
	}

	[Token(Token = "0x6000ADB")]
	[Address(RVA = "0x6511640", Offset = "0x6510640", VA = "0x6511640")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x6511650", Offset = "0x6510650", VA = "0x6511650")]
	public void Dispose()
	{
	}
}
