using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Serializable]
[Token(Token = "0x2000011")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct GlyphAdjustmentRecord : IEquatable<GlyphAdjustmentRecord>
{
	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("glyphIndex")]
	private uint m_GlyphIndex;

	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0x4")]
	[UnityEngine.Bindings.NativeName("glyphValueRecord")]
	[SerializeField]
	private GlyphValueRecord m_GlyphValueRecord;

	[Token(Token = "0x17000028")]
	public uint glyphIndex
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x4B7EBF0", Offset = "0x4B7EBF0", VA = "0x4B7EBF0")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000029")]
	public GlyphValueRecord glyphValueRecord
	{
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x4B7EC00", Offset = "0x4B7EC00", VA = "0x4B7EC00")]
		get
		{
			return default(GlyphValueRecord);
		}
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x4B7EC10", Offset = "0x4B7EC10", VA = "0x4B7EC10", Slot = "2")]
	[ExcludeFromDocs]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x4B7EC70", Offset = "0x4B7EC70", VA = "0x4B7EC70", Slot = "0")]
	[ExcludeFromDocs]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x4B7ECD0", Offset = "0x4B7ECD0", VA = "0x4B7ECD0", Slot = "4")]
	[ExcludeFromDocs]
	public bool Equals(GlyphAdjustmentRecord other)
	{
		return default(bool);
	}
}
