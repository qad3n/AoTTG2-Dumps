// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderPipelineGraphicsSettingsCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000360")]
public class RenderPipelineGraphicsSettingsCollection
{
	[Token(Token = "0x40009C6")]
	[FieldOffset(Offset = "0x10")]
	[SerializeReference]
	private List<IRenderPipelineGraphicsSettings> m_List;

	[Token(Token = "0x1700031E")]
	public List<IRenderPipelineGraphicsSettings> settingsList
	{
		[Token(Token = "0x6001320")]
		[Address(RVA = "0x69409B0", Offset = "0x693F9B0", VA = "0x69409B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001321")]
	[Address(RVA = "0x69409C0", Offset = "0x693F9C0", VA = "0x69409C0")]
	public RenderPipelineGraphicsSettingsCollection()
	{
	}
}
