// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.FilteringSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Internal;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002E9")]
public struct FilteringSettings : IEquatable<FilteringSettings>
{
	[Token(Token = "0x40008AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private RenderQueueRange m_RenderQueueRange;

	[Token(Token = "0x40008B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private int m_LayerMask;

	[Token(Token = "0x40008B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	private uint m_RenderingLayerMask;

	[Token(Token = "0x40008B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int m_ExcludeMotionVectorObjects;

	[Token(Token = "0x40008B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private SortingLayerRange m_SortingLayerRange;

	[Token(Token = "0x17000282")]
	public bool excludeMotionVectorObjects
	{
		[Token(Token = "0x6001040")]
		[Address(RVA = "0x4E2E5D0", Offset = "0x4E2E5D0", VA = "0x4E2E5D0")]
		set
		{
		}
	}

	[Token(Token = "0x600103F")]
	[Address(RVA = "0x4E2E4F0", Offset = "0x4E2E4F0", VA = "0x4E2E4F0")]
	public FilteringSettings([Optional][DefaultValue("RenderQueueRange.all")] RenderQueueRange? renderQueueRange, int layerMask = -1, uint renderingLayerMask = uint.MaxValue, int excludeMotionVectorObjects = 0)
	{
	}

	[Token(Token = "0x6001041")]
	[Address(RVA = "0x4E2E5E0", Offset = "0x4E2E5E0", VA = "0x4E2E5E0", Slot = "4")]
	public bool Equals(FilteringSettings other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001042")]
	[Address(RVA = "0x4E2E690", Offset = "0x4E2E690", VA = "0x4E2E690", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001043")]
	[Address(RVA = "0x4E2E770", Offset = "0x4E2E770", VA = "0x4E2E770", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001044")]
	[Address(RVA = "0x4E2E7E0", Offset = "0x4E2E7E0", VA = "0x4E2E7E0")]
	public static bool operator ==(FilteringSettings left, FilteringSettings right)
	{
		return default(bool);
	}
}
