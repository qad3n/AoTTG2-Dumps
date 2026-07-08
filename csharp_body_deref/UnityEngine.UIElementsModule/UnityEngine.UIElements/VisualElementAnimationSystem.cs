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
		[Address(RVA = "0x4C51560", Offset = "0x4C51560", VA = "0x4C51560", Slot = "10")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x17000750")]
	private static ProfilerMarker stylePropertyAnimationProfilerMarker
	{
		[Token(Token = "0x6001BD1")]
		[Address(RVA = "0x4C515D0", Offset = "0x4C515D0", VA = "0x4C515D0")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x6001BD2")]
	[Address(RVA = "0x4C51640", Offset = "0x4C51640", VA = "0x4C51640")]
	public void UnregisterAnimation(IValueAnimationUpdate anim)
	{
	}

	[Token(Token = "0x6001BD3")]
	[Address(RVA = "0x4C516A0", Offset = "0x4C516A0", VA = "0x4C516A0")]
	public void UnregisterAnimations(List<IValueAnimationUpdate> anims)
	{
	}

	[Token(Token = "0x6001BD4")]
	[Address(RVA = "0x4C51820", Offset = "0x4C51820", VA = "0x4C51820")]
	public void RegisterAnimation(IValueAnimationUpdate anim)
	{
	}

	[Token(Token = "0x6001BD5")]
	[Address(RVA = "0x4C51880", Offset = "0x4C51880", VA = "0x4C51880")]
	public void RegisterAnimations(List<IValueAnimationUpdate> anims)
	{
	}

	[Token(Token = "0x6001BD6")]
	[Address(RVA = "0x4C51A00", Offset = "0x4C51A00", VA = "0x4C51A00", Slot = "12")]
	public override void Update()
	{
	}

	[Token(Token = "0x6001BD7")]
	[Address(RVA = "0x4C51E60", Offset = "0x4C51E60", VA = "0x4C51E60", Slot = "13")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6001BD8")]
	[Address(RVA = "0x4C51E70", Offset = "0x4C51E70", VA = "0x4C51E70")]
	public VisualElementAnimationSystem()
	{
	}
}
