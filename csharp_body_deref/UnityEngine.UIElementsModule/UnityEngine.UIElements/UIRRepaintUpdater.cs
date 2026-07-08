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
		[Address(RVA = "0x4D4D6D0", Offset = "0x4D4D6D0", VA = "0x4D4D6D0", Slot = "10")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x17000300")]
	public bool drawStats
	{
		[Token(Token = "0x6000F79")]
		[Address(RVA = "0x4D4D740", Offset = "0x4D4D740", VA = "0x4D4D740")]
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
		[Address(RVA = "0x4D4D750", Offset = "0x4D4D750", VA = "0x4D4D750")]
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
		[Address(RVA = "0x4D4E6C0", Offset = "0x4D4E6C0", VA = "0x4D4E6C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F8B")]
		[Address(RVA = "0x4D4E6D0", Offset = "0x4D4E6D0", VA = "0x4D4E6D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000F77")]
	[Address(RVA = "0x4D4D650", Offset = "0x4D4D650", VA = "0x4D4D650")]
	public UIRRepaintUpdater()
	{
	}

	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x4D4D760", Offset = "0x4D4D760", VA = "0x4D4D760", Slot = "13")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x4D4D880", Offset = "0x4D4D880", VA = "0x4D4D880", Slot = "12")]
	public override void Update()
	{
	}

	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x4D4DA20", Offset = "0x4D4DA20", VA = "0x4D4DA20", Slot = "14")]
	protected virtual RenderChain CreateRenderChain()
	{
		return null;
	}

	[Token(Token = "0x6000F7E")]
	[Address(RVA = "0x4D4DA80", Offset = "0x4D4DA80", VA = "0x4D4DA80")]
	static UIRRepaintUpdater()
	{
	}

	[Token(Token = "0x6000F7F")]
	[Address(RVA = "0x4D4DB80", Offset = "0x4D4DB80", VA = "0x4D4DB80")]
	private static void OnGraphicsResourcesRecreate(bool recreate)
	{
	}

	[Token(Token = "0x6000F80")]
	[Address(RVA = "0x4D4DEA0", Offset = "0x4D4DEA0", VA = "0x4D4DEA0")]
	private void OnPanelChanged(BaseVisualElementPanel obj)
	{
	}

	[Token(Token = "0x6000F81")]
	[Address(RVA = "0x4D4E0B0", Offset = "0x4D4E0B0", VA = "0x4D4E0B0")]
	private void AttachToPanel()
	{
	}

	[Token(Token = "0x6000F82")]
	[Address(RVA = "0x4D4DEC0", Offset = "0x4D4DEC0", VA = "0x4D4DEC0")]
	private void DetachFromPanel()
	{
	}

	[Token(Token = "0x6000F83")]
	[Address(RVA = "0x4D4D960", Offset = "0x4D4D960", VA = "0x4D4D960")]
	private void InitRenderChain()
	{
	}

	[Token(Token = "0x6000F84")]
	[Address(RVA = "0x4D4DE30", Offset = "0x4D4DE30", VA = "0x4D4DE30")]
	internal void DestroyRenderChain()
	{
	}

	[Token(Token = "0x6000F85")]
	[Address(RVA = "0x4D4E620", Offset = "0x4D4E620", VA = "0x4D4E620")]
	private void OnPanelAtlasChanged()
	{
	}

	[Token(Token = "0x6000F86")]
	[Address(RVA = "0x4D4E690", Offset = "0x4D4E690", VA = "0x4D4E690")]
	private void OnPanelHierarchyChanged(VisualElement ve, HierarchyChangeType changeType)
	{
	}

	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x4D4E290", Offset = "0x4D4E290", VA = "0x4D4E290")]
	private void OnPanelStandardShaderChanged()
	{
	}

	[Token(Token = "0x6000F88")]
	[Address(RVA = "0x4D4E410", Offset = "0x4D4E410", VA = "0x4D4E410")]
	private void OnPanelStandardWorldSpaceShaderChanged()
	{
	}

	[Token(Token = "0x6000F89")]
	[Address(RVA = "0x4D4E590", Offset = "0x4D4E590", VA = "0x4D4E590")]
	private void ResetAllElementsDataRecursive(VisualElement ve)
	{
	}

	[Token(Token = "0x6000F8C")]
	[Address(RVA = "0x4D4E6E0", Offset = "0x4D4E6E0", VA = "0x4D4E6E0", Slot = "11")]
	protected override void Dispose(bool disposing)
	{
	}
}
