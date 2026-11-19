// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualTreeStyleUpdater
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x200055C")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal class VisualTreeStyleUpdater : BaseVisualTreeUpdater
{
	[Token(Token = "0x4001229")]
	[FieldOffset(Offset = "0x28")]
	private HashSet<VisualElement> m_ApplyStyleUpdateList;

	[Token(Token = "0x400122A")]
	[FieldOffset(Offset = "0x30")]
	private HashSet<VisualElement> m_TransitionPropertyUpdateList;

	[Token(Token = "0x400122B")]
	[FieldOffset(Offset = "0x38")]
	private bool m_IsApplyingStyles;

	[Token(Token = "0x400122C")]
	[FieldOffset(Offset = "0x3C")]
	private uint m_Version;

	[Token(Token = "0x400122D")]
	[FieldOffset(Offset = "0x40")]
	private uint m_LastVersion;

	[Token(Token = "0x400122E")]
	[FieldOffset(Offset = "0x48")]
	private VisualTreeStyleUpdaterTraversal m_StyleContextHierarchyTraversal;

	[Token(Token = "0x400122F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string s_Description;

	[Token(Token = "0x4001230")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker s_ProfilerMarker;

	[Token(Token = "0x17000A3A")]
	public override ProfilerMarker profilerMarker
	{
		[Token(Token = "0x600285F")]
		[Address(RVA = "0x6B72F90", Offset = "0x6B71F90", VA = "0x6B72F90", Slot = "12")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x17000A3B")]
	protected bool disposed
	{
		[Token(Token = "0x6002862")]
		[Address(RVA = "0x6B739D0", Offset = "0x6B729D0", VA = "0x6B739D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002863")]
		[Address(RVA = "0x6B739E0", Offset = "0x6B729E0", VA = "0x6B739E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002860")]
	[Address(RVA = "0x6B73000", Offset = "0x6B72000", VA = "0x6B73000", Slot = "15")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6002861")]
	[Address(RVA = "0x6B73170", Offset = "0x6B72170", VA = "0x6B73170", Slot = "14")]
	public override void Update()
	{
	}

	[Token(Token = "0x6002864")]
	[Address(RVA = "0x6B739F0", Offset = "0x6B729F0", VA = "0x6B739F0", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002865")]
	[Address(RVA = "0x6B73510", Offset = "0x6B72510", VA = "0x6B73510")]
	private void ApplyStyles()
	{
	}

	[Token(Token = "0x6002866")]
	[Address(RVA = "0x6B73A50", Offset = "0x6B72A50", VA = "0x6B73A50")]
	public VisualTreeStyleUpdater()
	{
	}
}
