using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000481")]
internal class VisualTreeStyleUpdater : BaseVisualTreeUpdater
{
	[Token(Token = "0x4000D87")]
	[FieldOffset(Offset = "0x20")]
	private HashSet<VisualElement> m_ApplyStyleUpdateList;

	[Token(Token = "0x4000D88")]
	[FieldOffset(Offset = "0x28")]
	private HashSet<VisualElement> m_TransitionPropertyUpdateList;

	[Token(Token = "0x4000D89")]
	[FieldOffset(Offset = "0x30")]
	private bool m_IsApplyingStyles;

	[Token(Token = "0x4000D8A")]
	[FieldOffset(Offset = "0x34")]
	private uint m_Version;

	[Token(Token = "0x4000D8B")]
	[FieldOffset(Offset = "0x38")]
	private uint m_LastVersion;

	[Token(Token = "0x4000D8C")]
	[FieldOffset(Offset = "0x40")]
	private VisualTreeStyleUpdaterTraversal m_StyleContextHierarchyTraversal;

	[Token(Token = "0x4000D8D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string s_Description;

	[Token(Token = "0x4000D8E")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker s_ProfilerMarker;

	[Token(Token = "0x17000752")]
	public override ProfilerMarker profilerMarker
	{
		[Token(Token = "0x6001BEF")]
		[Address(RVA = "0x4C52D20", Offset = "0x4C52D20", VA = "0x4C52D20", Slot = "10")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x17000753")]
	protected bool disposed
	{
		[Token(Token = "0x6001BF2")]
		[Address(RVA = "0x4C537F0", Offset = "0x4C537F0", VA = "0x4C537F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001BF3")]
		[Address(RVA = "0x4C53800", Offset = "0x4C53800", VA = "0x4C53800")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001BF0")]
	[Address(RVA = "0x4C52D90", Offset = "0x4C52D90", VA = "0x4C52D90", Slot = "13")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6001BF1")]
	[Address(RVA = "0x4C52F00", Offset = "0x4C52F00", VA = "0x4C52F00", Slot = "12")]
	public override void Update()
	{
	}

	[Token(Token = "0x6001BF4")]
	[Address(RVA = "0x4C53810", Offset = "0x4C53810", VA = "0x4C53810", Slot = "11")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001BF5")]
	[Address(RVA = "0x4C532F0", Offset = "0x4C532F0", VA = "0x4C532F0")]
	private void ApplyStyles()
	{
	}

	[Token(Token = "0x6001BF6")]
	[Address(RVA = "0x4C538A0", Offset = "0x4C538A0", VA = "0x4C538A0")]
	public VisualTreeStyleUpdater()
	{
	}
}
