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

[Token(Token = "0x2000383")]
public struct FilteringSettings : IEquatable<FilteringSettings>
{
	[Token(Token = "0x4000A86")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private RenderQueueRange m_RenderQueueRange;

	[Token(Token = "0x4000A87")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private int m_LayerMask;

	[Token(Token = "0x4000A88")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	private uint m_RenderingLayerMask;

	[Token(Token = "0x4000A89")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private uint m_BatchLayerMask;

	[Token(Token = "0x4000A8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int m_ExcludeMotionVectorObjects;

	[Token(Token = "0x4000A8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int m_ForceAllMotionVectorObjects;

	[Token(Token = "0x4000A8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private SortingLayerRange m_SortingLayerRange;

	[Token(Token = "0x17000349")]
	public RenderQueueRange renderQueueRange
	{
		[Token(Token = "0x60015D9")]
		[Address(RVA = "0x695AFA0", Offset = "0x6959FA0", VA = "0x695AFA0")]
		get
		{
			return default(RenderQueueRange);
		}
	}

	[Token(Token = "0x1700034A")]
	public uint batchLayerMask
	{
		[Token(Token = "0x60015DA")]
		[Address(RVA = "0x695AFB0", Offset = "0x6959FB0", VA = "0x695AFB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700034B")]
	public bool excludeMotionVectorObjects
	{
		[Token(Token = "0x60015DB")]
		[Address(RVA = "0x695AFC0", Offset = "0x6959FC0", VA = "0x695AFC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700034C")]
	public bool forceAllMotionVectorObjects
	{
		[Token(Token = "0x60015DC")]
		[Address(RVA = "0x695AFD0", Offset = "0x6959FD0", VA = "0x695AFD0")]
		set
		{
		}
	}

	[Token(Token = "0x60015D8")]
	[Address(RVA = "0x695AEB0", Offset = "0x6959EB0", VA = "0x695AEB0")]
	public FilteringSettings([Optional][DefaultValue("RenderQueueRange.all")] RenderQueueRange? renderQueueRange, int layerMask = -1, uint renderingLayerMask = 4294967295u, int excludeMotionVectorObjects = 0)
	{
	}

	[Token(Token = "0x60015DD")]
	[Address(RVA = "0x695AFE0", Offset = "0x6959FE0", VA = "0x695AFE0", Slot = "4")]
	public bool Equals(FilteringSettings other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DE")]
	[Address(RVA = "0x695B0A0", Offset = "0x695A0A0", VA = "0x695B0A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DF")]
	[Address(RVA = "0x695B1A0", Offset = "0x695A1A0", VA = "0x695B1A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60015E0")]
	[Address(RVA = "0x695B220", Offset = "0x695A220", VA = "0x695B220")]
	public static bool operator ==(FilteringSettings left, FilteringSettings right)
	{
		return default(bool);
	}
}
