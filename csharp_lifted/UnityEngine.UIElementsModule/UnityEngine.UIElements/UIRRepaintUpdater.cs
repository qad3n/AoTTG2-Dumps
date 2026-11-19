// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIRRepaintUpdater
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine.UIElements.UIR;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002DD")]
internal class UIRRepaintUpdater : BaseVisualTreeUpdater, IPanelRenderer
{
	[Token(Token = "0x4000B26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private BaseVisualElementPanel attachedPanel;

	[Token(Token = "0x4000B27")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal RenderTreeManager renderTreeManager;

	[Token(Token = "0x4000B28")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly string s_Description;

	[Token(Token = "0x4000B29")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker s_ProfilerMarker;

	[Token(Token = "0x4000B2A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private bool m_ForceGammaRendering;

	[Token(Token = "0x4000B2B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	private uint m_VertexBudget;

	[Token(Token = "0x4000B2C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private TextureSlotCount m_TextureSlotCount;

	[Token(Token = "0x170003F2")]
	public override ProfilerMarker profilerMarker
	{
		[Token(Token = "0x600135D")]
		[Address(RVA = "0x6CC0480", Offset = "0x6CBF480", VA = "0x6CC0480", Slot = "12")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x170003F3")]
	public bool forceGammaRendering
	{
		[Token(Token = "0x600135E")]
		[Address(RVA = "0x6CC04F0", Offset = "0x6CBF4F0", VA = "0x6CC04F0", Slot = "16")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600135F")]
		[Address(RVA = "0x6CC0500", Offset = "0x6CBF500", VA = "0x6CC0500", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x170003F4")]
	public uint vertexBudget
	{
		[Token(Token = "0x6001360")]
		[Address(RVA = "0x6CC05E0", Offset = "0x6CBF5E0", VA = "0x6CC05E0", Slot = "18")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x6001361")]
		[Address(RVA = "0x6CC05F0", Offset = "0x6CBF5F0", VA = "0x6CC05F0", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x170003F5")]
	public TextureSlotCount textureSlotCount
	{
		[Token(Token = "0x6001362")]
		[Address(RVA = "0x6CC0660", Offset = "0x6CBF660", VA = "0x6CC0660", Slot = "23")]
		get
		{
			return default(TextureSlotCount);
		}
		[Token(Token = "0x6001363")]
		[Address(RVA = "0x6CC0670", Offset = "0x6CBF670", VA = "0x6CC0670", Slot = "20")]
		set
		{
		}
	}

	[Token(Token = "0x170003F6")]
	public bool drawStats
	{
		[Token(Token = "0x6001364")]
		[Address(RVA = "0x6CC0680", Offset = "0x6CBF680", VA = "0x6CC0680")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003F7")]
	public bool breakBatches
	{
		[Token(Token = "0x6001365")]
		[Address(RVA = "0x6CC0690", Offset = "0x6CBF690", VA = "0x6CC0690")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003F8")]
	protected bool disposed
	{
		[Token(Token = "0x6001377")]
		[Address(RVA = "0x6CC1860", Offset = "0x6CC0860", VA = "0x6CC1860")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001378")]
		[Address(RVA = "0x6CC1870", Offset = "0x6CC0870", VA = "0x6CC1870")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600135C")]
	[Address(RVA = "0x6CC0400", Offset = "0x6CBF400", VA = "0x6CC0400")]
	public UIRRepaintUpdater()
	{
	}

	[Token(Token = "0x6001366")]
	[Address(RVA = "0x6CC06A0", Offset = "0x6CBF6A0", VA = "0x6CC06A0", Slot = "15")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6001367")]
	[Address(RVA = "0x6CC0800", Offset = "0x6CBF800", VA = "0x6CC0800", Slot = "14")]
	public override void Update()
	{
	}

	[Token(Token = "0x6001368")]
	[Address(RVA = "0x6CC0920", Offset = "0x6CBF920", VA = "0x6CC0920", Slot = "22")]
	public void Render()
	{
	}

	[Token(Token = "0x6001369")]
	[Address(RVA = "0x6CC09A0", Offset = "0x6CBF9A0", VA = "0x6CC09A0", Slot = "24")]
	protected virtual RenderTreeManager CreateRenderChain()
	{
		return null;
	}

	[Token(Token = "0x600136A")]
	[Address(RVA = "0x6CC0A00", Offset = "0x6CBFA00", VA = "0x6CC0A00")]
	static UIRRepaintUpdater()
	{
	}

	[Token(Token = "0x600136B")]
	[Address(RVA = "0x6CC0B00", Offset = "0x6CBFB00", VA = "0x6CC0B00")]
	private static void OnGraphicsResourcesRecreate(bool recreate)
	{
	}

	[Token(Token = "0x600136C")]
	[Address(RVA = "0x6CC0D60", Offset = "0x6CBFD60", VA = "0x6CC0D60")]
	private void OnPanelChanged(BaseVisualElementPanel obj)
	{
	}

	[Token(Token = "0x600136D")]
	[Address(RVA = "0x6CC11C0", Offset = "0x6CC01C0", VA = "0x6CC11C0")]
	private void AttachToPanel()
	{
	}

	[Token(Token = "0x600136E")]
	[Address(RVA = "0x6CC0D80", Offset = "0x6CBFD80", VA = "0x6CC0D80")]
	private void DetachFromPanel()
	{
	}

	[Token(Token = "0x600136F")]
	[Address(RVA = "0x6CC0870", Offset = "0x6CBF870", VA = "0x6CC0870")]
	private void InitRenderChain()
	{
	}

	[Token(Token = "0x6001370")]
	[Address(RVA = "0x6CC15C0", Offset = "0x6CC05C0", VA = "0x6CC15C0", Slot = "21")]
	public void Reset()
	{
	}

	[Token(Token = "0x6001371")]
	[Address(RVA = "0x6CC0570", Offset = "0x6CBF570", VA = "0x6CC0570")]
	private void DestroyRenderChain()
	{
	}

	[Token(Token = "0x6001372")]
	[Address(RVA = "0x6CC16E0", Offset = "0x6CC06E0", VA = "0x6CC16E0")]
	private void OnPanelIsFlatChanged()
	{
	}

	[Token(Token = "0x6001373")]
	[Address(RVA = "0x6CC1750", Offset = "0x6CC0750", VA = "0x6CC1750")]
	private void OnPanelAtlasChanged()
	{
	}

	[Token(Token = "0x6001374")]
	[Address(RVA = "0x6CC17C0", Offset = "0x6CC07C0", VA = "0x6CC17C0")]
	private void OnPanelDrawsInCamerasChanged()
	{
	}

	[Token(Token = "0x6001375")]
	[Address(RVA = "0x6CC1830", Offset = "0x6CC0830", VA = "0x6CC1830")]
	private void OnPanelHierarchyChanged(VisualElement ve, HierarchyChangeType changeType, [Optional] IReadOnlyList<VisualElement> additionalContext)
	{
	}

	[Token(Token = "0x6001376")]
	[Address(RVA = "0x6CC1630", Offset = "0x6CC0630", VA = "0x6CC1630")]
	private void ResetAllElementsDataRecursive(VisualElement ve)
	{
	}

	[Token(Token = "0x6001379")]
	[Address(RVA = "0x6CC1880", Offset = "0x6CC0880", VA = "0x6CC1880", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}
}
