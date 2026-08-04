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

[Token(Token = "0x200047B")]
internal class VisualElementAnimationSystem : BaseVisualTreeUpdater
{
	[Token(Token = "0x4000D6C")]
	[FieldOffset(Offset = "0x20")]
	private HashSet<IValueAnimationUpdate> m_Animations;

	[Token(Token = "0x4000D6D")]
	[FieldOffset(Offset = "0x28")]
	private List<IValueAnimationUpdate> m_IterationList;

	[Token(Token = "0x4000D6E")]
	[FieldOffset(Offset = "0x30")]
	private bool m_HasNewAnimations;

	[Token(Token = "0x4000D6F")]
	[FieldOffset(Offset = "0x31")]
	private bool m_IterationListDirty;

	[Token(Token = "0x4000D70")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string s_Description;

	[Token(Token = "0x4000D71")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker s_ProfilerMarker;

	[Token(Token = "0x4000D72")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string s_StylePropertyAnimationDescription;

	[Token(Token = "0x4000D73")]
	[FieldOffset(Offset = "0x18")]
	private static readonly ProfilerMarker s_StylePropertyAnimationProfilerMarker;

	[Token(Token = "0x4000D74")]
	[FieldOffset(Offset = "0x38")]
	private long lastUpdate;

	[Token(Token = "0x1700074F")]
	public override ProfilerMarker profilerMarker
	{
		[Token(Token = "0x6001BD0")]
		[Address(RVA = "0x4F78E90", Offset = "0x4F78E90", VA = "0x4F78E90", Slot = "10")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x17000750")]
	private static ProfilerMarker stylePropertyAnimationProfilerMarker
	{
		[Token(Token = "0x6001BD1")]
		[Address(RVA = "0x4F78F00", Offset = "0x4F78F00", VA = "0x4F78F00")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x6001BD2")]
	[Address(RVA = "0x4F78F70", Offset = "0x4F78F70", VA = "0x4F78F70")]
	public void UnregisterAnimation(IValueAnimationUpdate anim)
	{
	}

	[Token(Token = "0x6001BD3")]
	[Address(RVA = "0x4F78FD0", Offset = "0x4F78FD0", VA = "0x4F78FD0")]
	public void UnregisterAnimations(List<IValueAnimationUpdate> anims)
	{
	}

	[Token(Token = "0x6001BD4")]
	[Address(RVA = "0x4F79150", Offset = "0x4F79150", VA = "0x4F79150")]
	public void RegisterAnimation(IValueAnimationUpdate anim)
	{
	}

	[Token(Token = "0x6001BD5")]
	[Address(RVA = "0x4F791B0", Offset = "0x4F791B0", VA = "0x4F791B0")]
	public void RegisterAnimations(List<IValueAnimationUpdate> anims)
	{
	}

	[Token(Token = "0x6001BD6")]
	[Address(RVA = "0x4F79330", Offset = "0x4F79330", VA = "0x4F79330", Slot = "12")]
	public override void Update()
	{
	}

	[Token(Token = "0x6001BD7")]
	[Address(RVA = "0x4F79790", Offset = "0x4F79790", VA = "0x4F79790", Slot = "13")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6001BD8")]
	[Address(RVA = "0x4F797A0", Offset = "0x4F797A0", VA = "0x4F797A0")]
	public VisualElementAnimationSystem()
	{
	}
}
