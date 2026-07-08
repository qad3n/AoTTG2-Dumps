using System;
using System.Diagnostics;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Serializable]
[Token(Token = "0x2000012")]
[UnityEngine.Scripting.UsedByNativeCode]
[DebuggerDisplay("First glyphIndex = {m_FirstAdjustmentRecord.m_GlyphIndex},  Second glyphIndex = {m_SecondAdjustmentRecord.m_GlyphIndex}")]
public struct GlyphPairAdjustmentRecord : IEquatable<GlyphPairAdjustmentRecord>
{
	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("firstAdjustmentRecord")]
	private GlyphAdjustmentRecord m_FirstAdjustmentRecord;

	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("secondAdjustmentRecord")]
	private GlyphAdjustmentRecord m_SecondAdjustmentRecord;

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private FontFeatureLookupFlags m_FeatureLookupFlags;

	[Token(Token = "0x1700002A")]
	public GlyphAdjustmentRecord firstAdjustmentRecord
	{
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x4B7ED60", Offset = "0x4B7ED60", VA = "0x4B7ED60")]
		get
		{
			return default(GlyphAdjustmentRecord);
		}
	}

	[Token(Token = "0x1700002B")]
	public GlyphAdjustmentRecord secondAdjustmentRecord
	{
		[Token(Token = "0x600007F")]
		[Address(RVA = "0x4B7ED70", Offset = "0x4B7ED70", VA = "0x4B7ED70")]
		get
		{
			return default(GlyphAdjustmentRecord);
		}
	}

	[Token(Token = "0x1700002C")]
	public FontFeatureLookupFlags featureLookupFlags
	{
		[Token(Token = "0x6000080")]
		[Address(RVA = "0x4B7ED90", Offset = "0x4B7ED90", VA = "0x4B7ED90")]
		get
		{
			return default(FontFeatureLookupFlags);
		}
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x4B7EDA0", Offset = "0x4B7EDA0", VA = "0x4B7EDA0", Slot = "2")]
	[ExcludeFromDocs]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x4B7EE00", Offset = "0x4B7EE00", VA = "0x4B7EE00", Slot = "0")]
	[ExcludeFromDocs]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x4B7EE70", Offset = "0x4B7EE70", VA = "0x4B7EE70", Slot = "4")]
	[ExcludeFromDocs]
	public bool Equals(GlyphPairAdjustmentRecord other)
	{
		return default(bool);
	}
}
