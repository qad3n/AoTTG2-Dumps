// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtilsResources
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.ComponentModel;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule.Util;

[Serializable]
[Token(Token = "0x20002B0")]
[HideInInspector]
[Category("Resources/Render Graph Helper Function Resources")]
[SupportedOnRenderPipeline(new Type[] { })]
internal class RenderGraphUtilsResources : IRenderPipelineResources, IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x20002B1")]
	public enum Version
	{
		[Token(Token = "0x4000C39")]
		Initial = 0,
		[Token(Token = "0x4000C3A")]
		Count = 1,
		[Token(Token = "0x4000C3B")]
		Latest = Initial
	}

	[Token(Token = "0x4000C36")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[HideInInspector]
	private Version m_Version;

	[Token(Token = "0x4000C37")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[ResourcePath("Shaders/CoreCopy.shader", SearchType.ProjectPath)]
	internal Shader m_CoreCopyPS;

	[Token(Token = "0x17000261")]
	private int UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002Eversion
	{
		[Token(Token = "0x6001337")]
		[Address(RVA = "0x658B5B0", Offset = "0x658A5B0", VA = "0x658B5B0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000262")]
	public Shader coreCopyPS
	{
		[Token(Token = "0x6001338")]
		[Address(RVA = "0x658B5C0", Offset = "0x658A5C0", VA = "0x658B5C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001339")]
		[Address(RVA = "0x658B5D0", Offset = "0x658A5D0", VA = "0x658B5D0")]
		set
		{
		}
	}

	[Token(Token = "0x600133A")]
	[Address(RVA = "0x658B630", Offset = "0x658A630", VA = "0x658B630")]
	public RenderGraphUtilsResources()
	{
	}
}
