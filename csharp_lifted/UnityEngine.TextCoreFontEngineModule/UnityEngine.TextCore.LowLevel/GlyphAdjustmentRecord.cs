// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Serializable]
[Token(Token = "0x2000013")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct GlyphAdjustmentRecord : IEquatable<GlyphAdjustmentRecord>
{
	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("glyphIndex")]
	private uint m_GlyphIndex;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("glyphValueRecord")]
	private GlyphValueRecord m_GlyphValueRecord;

	[Token(Token = "0x17000028")]
	public uint glyphIndex
	{
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x69FD0E0", Offset = "0x69FC0E0", VA = "0x69FD0E0")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000029")]
	public GlyphValueRecord glyphValueRecord
	{
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x69FD0F0", Offset = "0x69FC0F0", VA = "0x69FD0F0")]
		get
		{
			return default(GlyphValueRecord);
		}
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x69FD100", Offset = "0x69FC100", VA = "0x69FD100")]
	public GlyphAdjustmentRecord(uint glyphIndex, GlyphValueRecord glyphValueRecord)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x69FD110", Offset = "0x69FC110", VA = "0x69FD110", Slot = "2")]
	[ExcludeFromDocs]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x69FD170", Offset = "0x69FC170", VA = "0x69FD170", Slot = "0")]
	[ExcludeFromDocs]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x69FD1D0", Offset = "0x69FC1D0", VA = "0x69FD1D0", Slot = "4")]
	[ExcludeFromDocs]
	public bool Equals(GlyphAdjustmentRecord other)
	{
		return default(bool);
	}
}
