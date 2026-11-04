// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumeStreamableAsset
// Update status: NEW in this game update
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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000140")]
	public TextAsset asset
	{
		[Token(Token = "0x6000ACF")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000141")]
	public int elementSize
	{
		[Token(Token = "0x6000AD0")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000142")]
	public SerializedDictionary<int, StreamableCellDesc> streamableCellDescs
	{
		[Token(Token = "0x6000AD1")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AD2")]
	[Address(RVA = "0x2B2D5C0", Offset = "0x2B2BBC0", VA = "0x182B2D5C0")]
	public ProbeVolumeStreamableAsset(string apvStreamingAssetsPath, SerializedDictionary<int, StreamableCellDesc> cellDescs, int elementSize, string bakingSetGUID, string assetGUID)
	{
	}

	[Token(Token = "0x6000AD3")]
	[Address(RVA = "0x2B2D520", Offset = "0x2B2BB20", VA = "0x182B2D520")]
	internal void RefreshAssetPath()
	{
	}

	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x2B2D2D0", Offset = "0x2B2B8D0", VA = "0x182B2D2D0")]
	public string GetAssetPath()
	{
		return null;
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x2B2D410", Offset = "0x2B2BA10", VA = "0x182B2D410")]
	internal bool HasValidAssetReference()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x2B2D1F0", Offset = "0x2B2B7F0", VA = "0x182B2D1F0")]
	public bool FileExists()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x2B2D390", Offset = "0x2B2B990", VA = "0x182B2D390")]
	public long GetFileSize()
	{
		return default(long);
	}

	[Token(Token = "0x6000AD8")]
	[Address(RVA = "0x2B2D4A0", Offset = "0x2B2BAA0", VA = "0x182B2D4A0")]
	public bool IsOpen()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AD9")]
	[Address(RVA = "0x2B2D4B0", Offset = "0x2B2BAB0", VA = "0x182B2D4B0")]
	public FileHandle OpenFile()
	{
		return default(FileHandle);
	}

	[Token(Token = "0x6000ADA")]
	[Address(RVA = "0x2B2D100", Offset = "0x2B2B700", VA = "0x182B2D100")]
	public void CloseFile()
	{
	}

	[Token(Token = "0x6000ADB")]
	[Address(RVA = "0x20F2AD0", Offset = "0x20F10D0", VA = "0x1820F2AD0")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x2B2D180", Offset = "0x2B2B780", VA = "0x182B2D180")]
	public void Dispose()
	{
	}
}
