using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Internal;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002E6")]
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

	[Token(Token = "0x17000281")]
	public bool excludeMotionVectorObjects
	{
		[Token(Token = "0x600103E")]
		[Address(RVA = "0x4B06CA0", Offset = "0x4B06CA0", VA = "0x4B06CA0")]
		set
		{
		}
	}

	[Token(Token = "0x600103D")]
	[Address(RVA = "0x4B06BC0", Offset = "0x4B06BC0", VA = "0x4B06BC0")]
	public FilteringSettings([Optional][DefaultValue("RenderQueueRange.all")] RenderQueueRange? renderQueueRange, int layerMask = -1, uint renderingLayerMask = uint.MaxValue, int excludeMotionVectorObjects = 0)
	{
	}

	[Token(Token = "0x600103F")]
	[Address(RVA = "0x4B06CB0", Offset = "0x4B06CB0", VA = "0x4B06CB0", Slot = "4")]
	public bool Equals(FilteringSettings other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001040")]
	[Address(RVA = "0x4B06D60", Offset = "0x4B06D60", VA = "0x4B06D60", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001041")]
	[Address(RVA = "0x4B06E40", Offset = "0x4B06E40", VA = "0x4B06E40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001042")]
	[Address(RVA = "0x4B06EB0", Offset = "0x4B06EB0", VA = "0x4B06EB0")]
	public static bool operator ==(FilteringSettings left, FilteringSettings right)
	{
		return default(bool);
	}
}
