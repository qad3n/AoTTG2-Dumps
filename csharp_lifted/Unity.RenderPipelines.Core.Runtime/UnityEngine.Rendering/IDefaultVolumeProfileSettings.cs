// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IDefaultVolumeProfileSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200017B")]
public interface IDefaultVolumeProfileSettings : IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x17000160")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x6000B91")]
		[Address(RVA = "0x6525570", Offset = "0x6524570", VA = "0x6525570", Slot = "0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000161")]
	VolumeProfile volumeProfile
	{
		[Token(Token = "0x6000B92")]
		get;
		[Token(Token = "0x6000B93")]
		set;
	}
}
