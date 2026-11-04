// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.URPDefaultVolumeProfileSettings
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Categorization;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x200019C")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
[CategoryInfo(Name = "Volume", Order = 0)]
public class URPDefaultVolumeProfileSettings : IDefaultVolumeProfileSettings, IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x200019D")]
	internal enum Version
	{
		[Token(Token = "0x400090A")]
		Initial
	}

	[Token(Token = "0x4000907")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[HideInInspector]
	private Version m_Version;

	[Token(Token = "0x4000908")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private VolumeProfile m_VolumeProfile;

	[Token(Token = "0x17000224")]
	public int version
	{
		[Token(Token = "0x60008F6")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000225")]
	public VolumeProfile volumeProfile
	{
		[Token(Token = "0x60008F7")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008F8")]
		[Address(RVA = "0x2CA2BA0", Offset = "0x2CA11A0", VA = "0x182CA2BA0", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x60008F9")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public URPDefaultVolumeProfileSettings()
	{
	}
}
