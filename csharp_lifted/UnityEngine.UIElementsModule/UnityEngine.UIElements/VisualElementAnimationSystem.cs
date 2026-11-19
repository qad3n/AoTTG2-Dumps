// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualElementAnimationSystem
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6B6F2A0", Offset = "0x6B6E2A0", VA = "0x6B6F2A0", Slot = "12")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x17000A37")]
	private static ProfilerMarker stylePropertyAnimationProfilerMarker
	{
		[Token(Token = "0x600282F")]
		[Address(RVA = "0x6B6F310", Offset = "0x6B6E310", VA = "0x6B6F310")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x6002830")]
	[Address(RVA = "0x6B6F380", Offset = "0x6B6E380", VA = "0x6B6F380")]
	public void UnregisterAnimation(IValueAnimationUpdate anim)
	{
	}

	[Token(Token = "0x6002831")]
	[Address(RVA = "0x6B6F3E0", Offset = "0x6B6E3E0", VA = "0x6B6F3E0")]
	public void UnregisterAnimations(List<IValueAnimationUpdate> anims)
	{
	}

	[Token(Token = "0x6002832")]
	[Address(RVA = "0x6B6F550", Offset = "0x6B6E550", VA = "0x6B6F550")]
	public void RegisterAnimation(IValueAnimationUpdate anim)
	{
	}

	[Token(Token = "0x6002833")]
	[Address(RVA = "0x6B6F5B0", Offset = "0x6B6E5B0", VA = "0x6B6F5B0")]
	public void RegisterAnimations(List<IValueAnimationUpdate> anims)
	{
	}

	[Token(Token = "0x6002834")]
	[Address(RVA = "0x6B6F720", Offset = "0x6B6E720", VA = "0x6B6F720", Slot = "14")]
	public override void Update()
	{
	}

	[Token(Token = "0x6002835")]
	[Address(RVA = "0x6B6FB90", Offset = "0x6B6EB90", VA = "0x6B6FB90", Slot = "15")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6002836")]
	[Address(RVA = "0x6B6FBA0", Offset = "0x6B6EBA0", VA = "0x6B6FBA0")]
	public VisualElementAnimationSystem()
	{
	}
}
