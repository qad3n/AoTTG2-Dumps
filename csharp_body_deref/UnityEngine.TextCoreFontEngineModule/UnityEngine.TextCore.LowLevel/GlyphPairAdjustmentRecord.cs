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
		[Address(RVA = "0x4EA6690", Offset = "0x4EA6690", VA = "0x4EA6690")]
		get
		{
			return default(GlyphAdjustmentRecord);
		}
	}

	[Token(Token = "0x1700002B")]
	public GlyphAdjustmentRecord secondAdjustmentRecord
	{
		[Token(Token = "0x600007F")]
		[Address(RVA = "0x4EA66A0", Offset = "0x4EA66A0", VA = "0x4EA66A0")]
		get
		{
			return default(GlyphAdjustmentRecord);
		}
	}

	[Token(Token = "0x1700002C")]
	public FontFeatureLookupFlags featureLookupFlags
	{
		[Token(Token = "0x6000080")]
		[Address(RVA = "0x4EA66C0", Offset = "0x4EA66C0", VA = "0x4EA66C0")]
		get
		{
			return default(FontFeatureLookupFlags);
		}
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x4EA66D0", Offset = "0x4EA66D0", VA = "0x4EA66D0", Slot = "2")]
	[ExcludeFromDocs]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x4EA6730", Offset = "0x4EA6730", VA = "0x4EA6730", Slot = "0")]
	[ExcludeFromDocs]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x4EA67A0", Offset = "0x4EA67A0", VA = "0x4EA67A0", Slot = "4")]
	[ExcludeFromDocs]
	public bool Equals(GlyphPairAdjustmentRecord other)
	{
		return default(bool);
	}
}
