// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderingDebuggerRuntimeResources
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Categorization;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x200017F")]
[HideInInspector]
[SupportedOnRenderPipeline(new Type[] { })]
[CategoryInfo(Name = "R : Rendering Debugger Resources", Order = 100)]
[ElementInfo(Order = 0)]
internal class RenderingDebuggerRuntimeResources : IRenderPipelineResources, IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x2000180")]
	private enum Version
	{
		[Token(Token = "0x400078C")]
		Initial = 0,
		[Token(Token = "0x400078D")]
		Count = 1,
		[Token(Token = "0x400078E")]
		Last = Initial
	}

	[Token(Token = "0x400078A")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[HideInInspector]
	private Version m_version;

	[Token(Token = "0x17000169")]
	private int UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002Eversion
	{
		[Token(Token = "0x6000BA1")]
		[Address(RVA = "0x6525790", Offset = "0x6524790", VA = "0x6525790", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x65257A0", Offset = "0x65247A0", VA = "0x65257A0")]
	public RenderingDebuggerRuntimeResources()
	{
	}
}
