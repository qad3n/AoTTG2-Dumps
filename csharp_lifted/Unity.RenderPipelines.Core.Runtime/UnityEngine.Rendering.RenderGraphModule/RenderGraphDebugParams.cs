// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RenderGraphDebugParams
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x2000259")]
internal class RenderGraphDebugParams : IDebugDisplaySettingsQuery
{
	[Token(Token = "0x200025A")]
	private static class Strings
	{
		[Token(Token = "0x4000ACE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly DebugUI.Widget.NameAndTooltip ClearRenderTargetsAtCreation;

		[Token(Token = "0x4000ACF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public static readonly DebugUI.Widget.NameAndTooltip ClearRenderTargetsAtFree;

		[Token(Token = "0x4000AD0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public static readonly DebugUI.Widget.NameAndTooltip DisablePassCulling;

		[Token(Token = "0x4000AD1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public static readonly DebugUI.Widget.NameAndTooltip DisablePassMerging;

		[Token(Token = "0x4000AD2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public static readonly DebugUI.Widget.NameAndTooltip ImmediateMode;

		[Token(Token = "0x4000AD3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public static readonly DebugUI.Widget.NameAndTooltip EnableLogging;

		[Token(Token = "0x4000AD4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public static readonly DebugUI.Widget.NameAndTooltip LogFrameInformation;

		[Token(Token = "0x4000AD5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		public static readonly DebugUI.Widget.NameAndTooltip LogResources;
	}

	[Token(Token = "0x4000AC5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private DebugUI.Widget[] m_DebugItems;

	[Token(Token = "0x4000AC6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private DebugUI.Panel m_DebugPanel;

	[Token(Token = "0x4000AC7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public bool clearRenderTargetsAtCreation;

	[Token(Token = "0x4000AC8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
	public bool clearRenderTargetsAtRelease;

	[Token(Token = "0x4000AC9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x22")]
	public bool disablePassCulling;

	[Token(Token = "0x4000ACA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x23")]
	public bool disablePassMerging;

	[Token(Token = "0x4000ACB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	public bool immediateMode;

	[Token(Token = "0x4000ACC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x25")]
	public bool logFrameInformation;

	[Token(Token = "0x4000ACD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x26")]
	public bool logResources;

	[Token(Token = "0x17000221")]
	public bool enableLogging
	{
		[Token(Token = "0x60010B2")]
		[Address(RVA = "0x65621A0", Offset = "0x65611A0", VA = "0x65621A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000222")]
	public bool AreAnySettingsActive
	{
		[Token(Token = "0x60010B9")]
		[Address(RVA = "0x6560360", Offset = "0x655F360", VA = "0x6560360", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60010B3")]
	[Address(RVA = "0x6560A40", Offset = "0x655FA40", VA = "0x6560A40")]
	public void ResetLogging()
	{
	}

	[Token(Token = "0x60010B4")]
	[Address(RVA = "0x656F220", Offset = "0x656E220", VA = "0x656F220")]
	internal void Reset()
	{
	}

	[Token(Token = "0x60010B5")]
	[Address(RVA = "0x655F9F0", Offset = "0x655E9F0", VA = "0x655F9F0")]
	internal List<DebugUI.Widget> GetWidgetList(string name)
	{
		return null;
	}

	[Token(Token = "0x60010B6")]
	[Address(RVA = "0x656F230", Offset = "0x656E230", VA = "0x656F230")]
	private bool IsImmediateModeSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x60010B7")]
	[Address(RVA = "0x65603C0", Offset = "0x655F3C0", VA = "0x65603C0")]
	public void RegisterDebug(string name, [Optional] DebugUI.Panel debugPanel)
	{
	}

	[Token(Token = "0x60010B8")]
	[Address(RVA = "0x65605F0", Offset = "0x655F5F0", VA = "0x65605F0")]
	public void UnRegisterDebug(string name)
	{
	}

	[Token(Token = "0x60010BA")]
	[Address(RVA = "0x655F440", Offset = "0x655E440", VA = "0x655F440")]
	public RenderGraphDebugParams()
	{
	}
}
