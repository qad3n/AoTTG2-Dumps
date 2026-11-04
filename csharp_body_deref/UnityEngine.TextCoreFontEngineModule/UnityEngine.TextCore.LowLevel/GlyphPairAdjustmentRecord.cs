// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Serializable]
[Token(Token = "0x2000014")]
[DebuggerDisplay("First glyphIndex = {m_FirstAdjustmentRecord.m_GlyphIndex},  Second glyphIndex = {m_SecondAdjustmentRecord.m_GlyphIndex}")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct GlyphPairAdjustmentRecord : IEquatable<GlyphPairAdjustmentRecord>
{
	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("firstAdjustmentRecord")]
	private GlyphAdjustmentRecord m_FirstAdjustmentRecord;

	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("secondAdjustmentRecord")]
	private GlyphAdjustmentRecord m_SecondAdjustmentRecord;

	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private FontFeatureLookupFlags m_FeatureLookupFlags;

	[Token(Token = "0x1700002A")]
	public GlyphAdjustmentRecord firstAdjustmentRecord
	{
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x3002A00", Offset = "0x3001000", VA = "0x183002A00")]
		get
		{
			return default(GlyphAdjustmentRecord);
		}
		[Token(Token = "0x60000A3")]
		[Address(RVA = "0x3002A10", Offset = "0x3001010", VA = "0x183002A10")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public GlyphAdjustmentRecord secondAdjustmentRecord
	{
		[Token(Token = "0x60000A4")]
		[Address(RVA = "0x1536FE0", Offset = "0x15355E0", VA = "0x181536FE0")]
		get
		{
			return default(GlyphAdjustmentRecord);
		}
	}

	[Token(Token = "0x1700002C")]
	public FontFeatureLookupFlags featureLookupFlags
	{
		[Token(Token = "0x60000A5")]
		[Address(RVA = "0xE282E0", Offset = "0xE268E0", VA = "0x180E282E0")]
		get
		{
			return default(FontFeatureLookupFlags);
		}
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x30029D0", Offset = "0x3000FD0", VA = "0x1830029D0")]
	public GlyphPairAdjustmentRecord(GlyphAdjustmentRecord firstAdjustmentRecord, GlyphAdjustmentRecord secondAdjustmentRecord)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x3002970", Offset = "0x3000F70", VA = "0x183002970", Slot = "2")]
	[ExcludeFromDocs]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x3002850", Offset = "0x3000E50", VA = "0x183002850", Slot = "0")]
	[ExcludeFromDocs]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x30028C0", Offset = "0x3000EC0", VA = "0x1830028C0", Slot = "4")]
	[ExcludeFromDocs]
	public bool Equals(GlyphPairAdjustmentRecord other)
	{
		return default(bool);
	}
}
