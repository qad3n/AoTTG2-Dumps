// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord
// Update status: CHANGED in this game update
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
		[Token(Token = "0x600009C")]
		[Address(RVA = "0xD18930", Offset = "0xD16F30", VA = "0x180D18930")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000029")]
	public GlyphValueRecord glyphValueRecord
	{
		[Token(Token = "0x600009D")]
		[Address(RVA = "0x2F76380", Offset = "0x2F74980", VA = "0x182F76380")]
		get
		{
			return default(GlyphValueRecord);
		}
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x180D1A0", Offset = "0x180B7A0", VA = "0x18180D1A0")]
	public GlyphAdjustmentRecord(uint glyphIndex, GlyphValueRecord glyphValueRecord)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x3002660", Offset = "0x3000C60", VA = "0x183002660", Slot = "2")]
	[ExcludeFromDocs]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x30025F0", Offset = "0x3000BF0", VA = "0x1830025F0", Slot = "0")]
	[ExcludeFromDocs]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x3002560", Offset = "0x3000B60", VA = "0x183002560", Slot = "4")]
	[ExcludeFromDocs]
	public bool Equals(GlyphAdjustmentRecord other)
	{
		return default(bool);
	}
}
