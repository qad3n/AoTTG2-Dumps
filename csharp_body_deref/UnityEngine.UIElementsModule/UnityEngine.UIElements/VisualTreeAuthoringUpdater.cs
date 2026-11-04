// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualTreeAuthoringUpdater
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements;

[Token(Token = "0x200000D")]
internal sealed class VisualTreeAuthoringUpdater : BaseVisualTreeUpdater
{
	[Token(Token = "0x400001E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker s_UpdateProfilerMarker;

	[Token(Token = "0x400001F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker s_UpdateChangeProfilerMarker;

	[Token(Token = "0x4000020")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly List<IVisualElementChangeProcessor> m_RegisteredProcessors;

	[Token(Token = "0x4000021")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly List<IVisualElementChangeProcessor> m_ProcessorRegistrationList;

	[Token(Token = "0x4000022")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly List<IVisualElementChangeProcessor> m_ProcessorUnregistrationList;

	[Token(Token = "0x4000023")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private BaseVisualElementPanel m_AttachedPanel;

	[Token(Token = "0x4000024")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly AuthoringChanges m_Changes1;

	[Token(Token = "0x4000025")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly AuthoringChanges m_Changes2;

	[Token(Token = "0x4000026")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private AuthoringChanges m_Accumulator;

	[Token(Token = "0x4000027")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private AuthoringChanges m_Notifier;

	[Token(Token = "0x4000028")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private bool m_AccumulatingChanges;

	[Token(Token = "0x1700000D")]
	public override ProfilerMarker profilerMarker
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x3098940", Offset = "0x3096F40", VA = "0x183098940", Slot = "12")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x1700000E")]
	private bool shouldUpdate
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x3098990", Offset = "0x3096F90", VA = "0x183098990")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x30987A0", Offset = "0x3096DA0", VA = "0x1830987A0")]
	public VisualTreeAuthoringUpdater()
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x3097F10", Offset = "0x3096510", VA = "0x183097F10", Slot = "15")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x3098110", Offset = "0x3096710", VA = "0x183098110", Slot = "14")]
	public override void Update()
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x3097E20", Offset = "0x3096420", VA = "0x183097E20")]
	private void OnPanelChanged(BaseVisualElementPanel p)
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x3097710", Offset = "0x3095D10", VA = "0x183097710", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x3097B00", Offset = "0x3096100", VA = "0x183097B00")]
	private void OnHierarchyChange(VisualElement ve, HierarchyChangeType type, [Optional] IReadOnlyList<VisualElement> additionalContext)
	{
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x30980A0", Offset = "0x30966A0", VA = "0x1830980A0")]
	private void SwapBuffers()
	{
	}
}
