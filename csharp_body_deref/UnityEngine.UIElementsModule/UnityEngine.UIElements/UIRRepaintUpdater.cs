// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIRRepaintUpdater
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine.UIElements.UIR;

namespace UnityEngine.UIElements;

[Token(Token = "0x200025A")]
internal class UIRRepaintUpdater : BaseVisualTreeUpdater
{
	[Token(Token = "0x40008BC")]
	[FieldOffset(Offset = "0x20")]
	private BaseVisualElementPanel attachedPanel;

	[Token(Token = "0x40008BD")]
	[FieldOffset(Offset = "0x28")]
	internal RenderChain renderChain;

	[Token(Token = "0x40008BE")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string s_Description;

	[Token(Token = "0x40008BF")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker s_ProfilerMarker;

	[Token(Token = "0x170002FF")]
	public override ProfilerMarker profilerMarker
	{
		[Token(Token = "0x6000F78")]
		[Address(RVA = "0x5075000", Offset = "0x5075000", VA = "0x5075000", Slot = "10")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x17000300")]
	public bool drawStats
	{
		[Token(Token = "0x6000F79")]
		[Address(RVA = "0x5075070", Offset = "0x5075070", VA = "0x5075070")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000301")]
	public bool breakBatches
	{
		[Token(Token = "0x6000F7A")]
		[Address(RVA = "0x5075080", Offset = "0x5075080", VA = "0x5075080")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000302")]
	protected bool disposed
	{
		[Token(Token = "0x6000F8A")]
		[Address(RVA = "0x5075FF0", Offset = "0x5075FF0", VA = "0x5075FF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F8B")]
		[Address(RVA = "0x5076000", Offset = "0x5076000", VA = "0x5076000")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000F77")]
	[Address(RVA = "0x5074F80", Offset = "0x5074F80", VA = "0x5074F80")]
	public UIRRepaintUpdater()
	{
	}

	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x5075090", Offset = "0x5075090", VA = "0x5075090", Slot = "13")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x50751B0", Offset = "0x50751B0", VA = "0x50751B0", Slot = "12")]
	public override void Update()
	{
	}

	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x5075350", Offset = "0x5075350", VA = "0x5075350", Slot = "14")]
	protected virtual RenderChain CreateRenderChain()
	{
		return null;
	}

	[Token(Token = "0x6000F7E")]
	[Address(RVA = "0x50753B0", Offset = "0x50753B0", VA = "0x50753B0")]
	static UIRRepaintUpdater()
	{
	}

	[Token(Token = "0x6000F7F")]
	[Address(RVA = "0x50754B0", Offset = "0x50754B0", VA = "0x50754B0")]
	private static void OnGraphicsResourcesRecreate(bool recreate)
	{
	}

	[Token(Token = "0x6000F80")]
	[Address(RVA = "0x50757D0", Offset = "0x50757D0", VA = "0x50757D0")]
	private void OnPanelChanged(BaseVisualElementPanel obj)
	{
	}

	[Token(Token = "0x6000F81")]
	[Address(RVA = "0x50759E0", Offset = "0x50759E0", VA = "0x50759E0")]
	private void AttachToPanel()
	{
	}

	[Token(Token = "0x6000F82")]
	[Address(RVA = "0x50757F0", Offset = "0x50757F0", VA = "0x50757F0")]
	private void DetachFromPanel()
	{
	}

	[Token(Token = "0x6000F83")]
	[Address(RVA = "0x5075290", Offset = "0x5075290", VA = "0x5075290")]
	private void InitRenderChain()
	{
	}

	[Token(Token = "0x6000F84")]
	[Address(RVA = "0x5075760", Offset = "0x5075760", VA = "0x5075760")]
	internal void DestroyRenderChain()
	{
	}

	[Token(Token = "0x6000F85")]
	[Address(RVA = "0x5075F50", Offset = "0x5075F50", VA = "0x5075F50")]
	private void OnPanelAtlasChanged()
	{
	}

	[Token(Token = "0x6000F86")]
	[Address(RVA = "0x5075FC0", Offset = "0x5075FC0", VA = "0x5075FC0")]
	private void OnPanelHierarchyChanged(VisualElement ve, HierarchyChangeType changeType)
	{
	}

	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x5075BC0", Offset = "0x5075BC0", VA = "0x5075BC0")]
	private void OnPanelStandardShaderChanged()
	{
	}

	[Token(Token = "0x6000F88")]
	[Address(RVA = "0x5075D40", Offset = "0x5075D40", VA = "0x5075D40")]
	private void OnPanelStandardWorldSpaceShaderChanged()
	{
	}

	[Token(Token = "0x6000F89")]
	[Address(RVA = "0x5075EC0", Offset = "0x5075EC0", VA = "0x5075EC0")]
	private void ResetAllElementsDataRecursive(VisualElement ve)
	{
	}

	[Token(Token = "0x6000F8C")]
	[Address(RVA = "0x5076010", Offset = "0x5076010", VA = "0x5076010", Slot = "11")]
	protected override void Dispose(bool disposing)
	{
	}
}
