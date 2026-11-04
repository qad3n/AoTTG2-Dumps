// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IDefaultVolumeProfileSettings
// Update status: NEW in this game update
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
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "0")]
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
