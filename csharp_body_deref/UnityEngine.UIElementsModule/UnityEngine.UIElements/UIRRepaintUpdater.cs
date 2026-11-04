// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIRRepaintUpdater
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x32BB050", Offset = "0x32B9650", VA = "0x1832BB050", Slot = "12")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x170003F3")]
	public bool forceGammaRendering
	{
		[Token(Token = "0x600135E")]
		[Address(RVA = "0xF1D190", Offset = "0xF1B790", VA = "0x180F1D190", Slot = "16")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600135F")]
		[Address(RVA = "0x32BB0B0", Offset = "0x32B96B0", VA = "0x1832BB0B0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x170003F4")]
	public uint vertexBudget
	{
		[Token(Token = "0x6001360")]
		[Address(RVA = "0x19CF1C0", Offset = "0x19CD7C0", VA = "0x1819CF1C0", Slot = "18")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x6001361")]
		[Address(RVA = "0x32BB120", Offset = "0x32B9720", VA = "0x1832BB120", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x170003F5")]
	public TextureSlotCount textureSlotCount
	{
		[Token(Token = "0x6001362")]
		[Address(RVA = "0x58A8B0", Offset = "0x588EB0", VA = "0x18058A8B0", Slot = "23")]
		get
		{
			return default(TextureSlotCount);
		}
		[Token(Token = "0x6001363")]
		[Address(RVA = "0x58AA60", Offset = "0x589060", VA = "0x18058AA60", Slot = "20")]
		set
		{
		}
	}

	[Token(Token = "0x170003F6")]
	public bool drawStats
	{
		[Token(Token = "0x6001364")]
		[Address(RVA = "0x1CC5A60", Offset = "0x1CC4060", VA = "0x181CC5A60")]
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
		[Address(RVA = "0x12B3A90", Offset = "0x12B2090", VA = "0x1812B3A90")]
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
		[Address(RVA = "0x12B3AD0", Offset = "0x12B20D0", VA = "0x1812B3AD0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001378")]
		[Address(RVA = "0x32BB0A0", Offset = "0x32B96A0", VA = "0x1832BB0A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600135C")]
	[Address(RVA = "0x32BAFC0", Offset = "0x32B95C0", VA = "0x1832BAFC0")]
	public UIRRepaintUpdater()
	{
	}

	[Token(Token = "0x6001366")]
	[Address(RVA = "0x32BAA40", Offset = "0x32B9040", VA = "0x1832BAA40", Slot = "15")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6001367")]
	[Address(RVA = "0x32BAD80", Offset = "0x32B9380", VA = "0x1832BAD80", Slot = "14")]
	public override void Update()
	{
	}

	[Token(Token = "0x6001368")]
	[Address(RVA = "0x32BAC30", Offset = "0x32B9230", VA = "0x1832BAC30", Slot = "22")]
	public void Render()
	{
	}

	[Token(Token = "0x6001369")]
	[Address(RVA = "0x32BA1D0", Offset = "0x32B87D0", VA = "0x1832BA1D0", Slot = "24")]
	protected virtual RenderTreeManager CreateRenderChain()
	{
		return null;
	}

	[Token(Token = "0x600136A")]
	[Address(RVA = "0x32BAEB0", Offset = "0x32B94B0", VA = "0x1832BAEB0")]
	static UIRRepaintUpdater()
	{
	}

	[Token(Token = "0x600136B")]
	[Address(RVA = "0x32BA800", Offset = "0x32B8E00", VA = "0x1832BA800")]
	private static void OnGraphicsResourcesRecreate(bool recreate)
	{
	}

	[Token(Token = "0x600136C")]
	[Address(RVA = "0x32BA9B0", Offset = "0x32B8FB0", VA = "0x1832BA9B0")]
	private void OnPanelChanged(BaseVisualElementPanel obj)
	{
	}

	[Token(Token = "0x600136D")]
	[Address(RVA = "0x32B9D90", Offset = "0x32B8390", VA = "0x1832B9D90")]
	private void AttachToPanel()
	{
	}

	[Token(Token = "0x600136E")]
	[Address(RVA = "0x32BA2B0", Offset = "0x32B88B0", VA = "0x1832BA2B0")]
	private void DetachFromPanel()
	{
	}

	[Token(Token = "0x600136F")]
	[Address(RVA = "0x32BA740", Offset = "0x32B8D40", VA = "0x1832BA740")]
	private void InitRenderChain()
	{
	}

	[Token(Token = "0x6001370")]
	[Address(RVA = "0x32BA240", Offset = "0x32B8840", VA = "0x1832BA240", Slot = "21")]
	public void Reset()
	{
	}

	[Token(Token = "0x6001371")]
	[Address(RVA = "0x32BA240", Offset = "0x32B8840", VA = "0x1832BA240")]
	private void DestroyRenderChain()
	{
	}

	[Token(Token = "0x6001372")]
	[Address(RVA = "0x32BA240", Offset = "0x32B8840", VA = "0x1832BA240")]
	private void OnPanelIsFlatChanged()
	{
	}

	[Token(Token = "0x6001373")]
	[Address(RVA = "0x32BA240", Offset = "0x32B8840", VA = "0x1832BA240")]
	private void OnPanelAtlasChanged()
	{
	}

	[Token(Token = "0x6001374")]
	[Address(RVA = "0x32BA240", Offset = "0x32B8840", VA = "0x1832BA240")]
	private void OnPanelDrawsInCamerasChanged()
	{
	}

	[Token(Token = "0x6001375")]
	[Address(RVA = "0x32BA9D0", Offset = "0x32B8FD0", VA = "0x1832BA9D0")]
	private void OnPanelHierarchyChanged(VisualElement ve, HierarchyChangeType changeType, [Optional] IReadOnlyList<VisualElement> additionalContext)
	{
	}

	[Token(Token = "0x6001376")]
	[Address(RVA = "0x32BACC0", Offset = "0x32B92C0", VA = "0x1832BACC0")]
	private void ResetAllElementsDataRecursive(VisualElement ve)
	{
	}

	[Token(Token = "0x6001379")]
	[Address(RVA = "0x32BA710", Offset = "0x32B8D10", VA = "0x1832BA710", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}
}
