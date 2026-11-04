// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderPipelineGraphicsSettingsContainer
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
[Token(Token = "0x2000166")]
public class RenderPipelineGraphicsSettingsContainer : ISerializationCallbackReceiver
{
	[Token(Token = "0x40006F1")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[HideInInspector]
	private RenderPipelineGraphicsSettingsCollection m_RuntimeSettings;

	[Token(Token = "0x17000154")]
	public List<IRenderPipelineGraphicsSettings> settingsList
	{
		[Token(Token = "0x6000B61")]
		[Address(RVA = "0x11282C0", Offset = "0x11268C0", VA = "0x1811282C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	public void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x2B2DBF0", Offset = "0x2B2C1F0", VA = "0x182B2DBF0")]
	public RenderPipelineGraphicsSettingsContainer()
	{
	}
}
