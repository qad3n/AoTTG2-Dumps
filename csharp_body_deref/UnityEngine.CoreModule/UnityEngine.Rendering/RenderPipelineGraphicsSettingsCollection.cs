// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderPipelineGraphicsSettingsCollection
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000363")]
public class RenderPipelineGraphicsSettingsCollection
{
	[Token(Token = "0x40009CA")]
	[FieldOffset(Offset = "0x10")]
	[SerializeReference]
	private List<IRenderPipelineGraphicsSettings> m_List;

	[Token(Token = "0x1700031B")]
	public List<IRenderPipelineGraphicsSettings> settingsList
	{
		[Token(Token = "0x600153B")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600153C")]
	[Address(RVA = "0x2F69460", Offset = "0x2F67A60", VA = "0x182F69460")]
	public RenderPipelineGraphicsSettingsCollection()
	{
	}
}
