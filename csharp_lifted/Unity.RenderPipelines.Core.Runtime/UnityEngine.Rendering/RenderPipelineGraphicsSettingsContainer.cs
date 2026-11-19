// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderPipelineGraphicsSettingsContainer
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
		[Address(RVA = "0x651DB20", Offset = "0x651CB20", VA = "0x651DB20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x651DB40", Offset = "0x651CB40", VA = "0x651DB40", Slot = "4")]
	public void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x651DB50", Offset = "0x651CB50", VA = "0x651DB50", Slot = "5")]
	public void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x651DB60", Offset = "0x651CB60", VA = "0x651DB60")]
	public RenderPipelineGraphicsSettingsContainer()
	{
	}
}
