// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord
// Update status: unchanged since the previous dump
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
		[Token(Token = "0x60000A6")]
		[Address(RVA = "0x69FD260", Offset = "0x69FC260", VA = "0x69FD260")]
		get
		{
			return default(GlyphAdjustmentRecord);
		}
		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x69FD270", Offset = "0x69FC270", VA = "0x69FD270")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public GlyphAdjustmentRecord secondAdjustmentRecord
	{
		[Token(Token = "0x60000A8")]
		[Address(RVA = "0x69FD280", Offset = "0x69FC280", VA = "0x69FD280")]
		get
		{
			return default(GlyphAdjustmentRecord);
		}
	}

	[Token(Token = "0x1700002C")]
	public FontFeatureLookupFlags featureLookupFlags
	{
		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x69FD2A0", Offset = "0x69FC2A0", VA = "0x69FD2A0")]
		get
		{
			return default(FontFeatureLookupFlags);
		}
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x69FD2B0", Offset = "0x69FC2B0", VA = "0x69FD2B0")]
	public GlyphPairAdjustmentRecord(GlyphAdjustmentRecord firstAdjustmentRecord, GlyphAdjustmentRecord secondAdjustmentRecord)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x69FD2E0", Offset = "0x69FC2E0", VA = "0x69FD2E0", Slot = "2")]
	[ExcludeFromDocs]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x69FD340", Offset = "0x69FC340", VA = "0x69FD340", Slot = "0")]
	[ExcludeFromDocs]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x69FD3B0", Offset = "0x69FC3B0", VA = "0x69FD3B0", Slot = "4")]
	[ExcludeFromDocs]
	public bool Equals(GlyphPairAdjustmentRecord other)
	{
		return default(bool);
	}
}
