// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualElementAnimationSystem
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine.UIElements.Experimental;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000554")]
internal class VisualElementAnimationSystem : BaseVisualTreeUpdater
{
	[Token(Token = "0x4001204")]
	[FieldOffset(Offset = "0x28")]
	private HashSet<IValueAnimationUpdate> m_Animations;

	[Token(Token = "0x4001205")]
	[FieldOffset(Offset = "0x30")]
	private List<IValueAnimationUpdate> m_IterationList;

	[Token(Token = "0x4001206")]
	[FieldOffset(Offset = "0x38")]
	private bool m_HasNewAnimations;

	[Token(Token = "0x4001207")]
	[FieldOffset(Offset = "0x39")]
	private bool m_IterationListDirty;

	[Token(Token = "0x4001208")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string s_Description;

	[Token(Token = "0x4001209")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker s_ProfilerMarker;

	[Token(Token = "0x400120A")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string s_StylePropertyAnimationDescription;

	[Token(Token = "0x400120B")]
	[FieldOffset(Offset = "0x18")]
	private static readonly ProfilerMarker s_StylePropertyAnimationProfilerMarker;

	[Token(Token = "0x400120C")]
	[FieldOffset(Offset = "0x40")]
	private double lastUpdate;

	[Token(Token = "0x17000A36")]
	public override ProfilerMarker profilerMarker
	{
		[Token(Token = "0x600282E")]
		[Address(RVA = "0x3162C60", Offset = "0x3161260", VA = "0x183162C60", Slot = "12")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x17000A37")]
	private static ProfilerMarker stylePropertyAnimationProfilerMarker
	{
		[Token(Token = "0x600282F")]
		[Address(RVA = "0x3162CB0", Offset = "0x31612B0", VA = "0x183162CB0")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x6002830")]
	[Address(RVA = "0x31624F0", Offset = "0x3160AF0", VA = "0x1831624F0")]
	public void UnregisterAnimation(IValueAnimationUpdate anim)
	{
	}

	[Token(Token = "0x6002831")]
	[Address(RVA = "0x3162550", Offset = "0x3160B50", VA = "0x183162550")]
	public void UnregisterAnimations(List<IValueAnimationUpdate> anims)
	{
	}

	[Token(Token = "0x6002832")]
	[Address(RVA = "0x3162340", Offset = "0x3160940", VA = "0x183162340")]
	public void RegisterAnimation(IValueAnimationUpdate anim)
	{
	}

	[Token(Token = "0x6002833")]
	[Address(RVA = "0x31623A0", Offset = "0x31609A0", VA = "0x1831623A0")]
	public void RegisterAnimations(List<IValueAnimationUpdate> anims)
	{
	}

	[Token(Token = "0x6002834")]
	[Address(RVA = "0x31626A0", Offset = "0x3160CA0", VA = "0x1831626A0", Slot = "14")]
	public override void Update()
	{
	}

	[Token(Token = "0x6002835")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "15")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6002836")]
	[Address(RVA = "0x3162B90", Offset = "0x3161190", VA = "0x183162B90")]
	public VisualElementAnimationSystem()
	{
	}
}
