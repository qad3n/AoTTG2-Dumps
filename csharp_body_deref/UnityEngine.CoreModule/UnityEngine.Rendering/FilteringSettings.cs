// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.FilteringSettings
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Internal;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003AF")]
public struct FilteringSettings : IEquatable<FilteringSettings>
{
	[Token(Token = "0x4000BA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private RenderQueueRange m_RenderQueueRange;

	[Token(Token = "0x4000BA7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private int m_LayerMask;

	[Token(Token = "0x4000BA8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	private uint m_RenderingLayerMask;

	[Token(Token = "0x4000BA9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private uint m_BatchLayerMask;

	[Token(Token = "0x4000BAA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int m_ExcludeMotionVectorObjects;

	[Token(Token = "0x4000BAB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int m_ForceAllMotionVectorObjects;

	[Token(Token = "0x4000BAC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private SortingLayerRange m_SortingLayerRange;

	[Token(Token = "0x1700035B")]
	public RenderQueueRange renderQueueRange
	{
		[Token(Token = "0x6001634")]
		[Address(RVA = "0x737B90", Offset = "0x736190", VA = "0x180737B90")]
		get
		{
			return default(RenderQueueRange);
		}
	}

	[Token(Token = "0x1700035C")]
	public uint batchLayerMask
	{
		[Token(Token = "0x6001635")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		set
		{
		}
	}

	[Token(Token = "0x1700035D")]
	public bool excludeMotionVectorObjects
	{
		[Token(Token = "0x6001636")]
		[Address(RVA = "0x2F658C0", Offset = "0x2F63EC0", VA = "0x182F658C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700035E")]
	public bool forceAllMotionVectorObjects
	{
		[Token(Token = "0x6001637")]
		[Address(RVA = "0x2F658D0", Offset = "0x2F63ED0", VA = "0x182F658D0")]
		set
		{
		}
	}

	[Token(Token = "0x6001633")]
	[Address(RVA = "0x2F65730", Offset = "0x2F63D30", VA = "0x182F65730")]
	public FilteringSettings([Optional][DefaultValue("RenderQueueRange.all")] RenderQueueRange? renderQueueRange, int layerMask = -1, uint renderingLayerMask = 4294967295u, int excludeMotionVectorObjects = 0)
	{
	}

	[Token(Token = "0x6001638")]
	[Address(RVA = "0x2F65560", Offset = "0x2F63B60", VA = "0x182F65560", Slot = "4")]
	public bool Equals(FilteringSettings other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001639")]
	[Address(RVA = "0x2F65610", Offset = "0x2F63C10", VA = "0x182F65610", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600163A")]
	[Address(RVA = "0x2F656B0", Offset = "0x2F63CB0", VA = "0x182F656B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600163B")]
	[Address(RVA = "0x2F65810", Offset = "0x2F63E10", VA = "0x182F65810")]
	public static bool operator ==(FilteringSettings left, FilteringSettings right)
	{
		return default(bool);
	}
}
