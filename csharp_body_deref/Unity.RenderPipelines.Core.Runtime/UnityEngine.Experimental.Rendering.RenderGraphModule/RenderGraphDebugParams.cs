// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugParams
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000028")]
internal class RenderGraphDebugParams
{
	[Token(Token = "0x2000029")]
	private static class Strings
	{
		[Token(Token = "0x400008F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly DebugUI.Widget.NameAndTooltip ClearRenderTargetsAtCreation;

		[Token(Token = "0x4000090")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public static readonly DebugUI.Widget.NameAndTooltip DisablePassCulling;

		[Token(Token = "0x4000091")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public static readonly DebugUI.Widget.NameAndTooltip ImmediateMode;

		[Token(Token = "0x4000092")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public static readonly DebugUI.Widget.NameAndTooltip EnableLogging;

		[Token(Token = "0x4000093")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public static readonly DebugUI.Widget.NameAndTooltip LogFrameInformation;

		[Token(Token = "0x4000094")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public static readonly DebugUI.Widget.NameAndTooltip LogResources;
	}

	[Token(Token = "0x4000086")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private DebugUI.Widget[] m_DebugItems;

	[Token(Token = "0x4000087")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private DebugUI.Panel m_DebugPanel;

	[Token(Token = "0x4000088")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public bool clearRenderTargetsAtCreation;

	[Token(Token = "0x4000089")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
	public bool clearRenderTargetsAtRelease;

	[Token(Token = "0x400008A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x22")]
	public bool disablePassCulling;

	[Token(Token = "0x400008B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x23")]
	public bool immediateMode;

	[Token(Token = "0x400008C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	public bool enableLogging;

	[Token(Token = "0x400008D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x25")]
	public bool logFrameInformation;

	[Token(Token = "0x400008E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x26")]
	public bool logResources;

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x4B7B200", Offset = "0x4B7B200", VA = "0x4B7B200")]
	public void RegisterDebug(string name, [Optional] DebugUI.Panel debugPanel)
	{
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x4B7BA00", Offset = "0x4B7BA00", VA = "0x4B7BA00")]
	public void UnRegisterDebug(string name)
	{
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x4B7BA80", Offset = "0x4B7BA80", VA = "0x4B7BA80")]
	public RenderGraphDebugParams()
	{
	}
}
