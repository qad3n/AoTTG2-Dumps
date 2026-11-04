// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.GlyphValueRecord
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Serializable]
[Token(Token = "0x2000012")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct GlyphValueRecord : IEquatable<GlyphValueRecord>
{
	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("xPlacement")]
	[SerializeField]
	private float m_XPlacement;

	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x4")]
	[UnityEngine.Bindings.NativeName("yPlacement")]
	[SerializeField]
	private float m_YPlacement;

	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.NativeName("xAdvance")]
	[SerializeField]
	private float m_XAdvance;

	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0xC")]
	[UnityEngine.Bindings.NativeName("yAdvance")]
	[SerializeField]
	private float m_YAdvance;

	[Token(Token = "0x17000024")]
	public float xPlacement
	{
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x2ECC6C0", Offset = "0x2ECACC0", VA = "0x182ECC6C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000091")]
		[Address(RVA = "0x2CDDC80", Offset = "0x2CDC280", VA = "0x182CDDC80")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public float yPlacement
	{
		[Token(Token = "0x6000092")]
		[Address(RVA = "0x2E97670", Offset = "0x2E95C70", VA = "0x182E97670")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000093")]
		[Address(RVA = "0x2CDDC90", Offset = "0x2CDC290", VA = "0x182CDDC90")]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	public float xAdvance
	{
		[Token(Token = "0x6000094")]
		[Address(RVA = "0x2E97660", Offset = "0x2E95C60", VA = "0x182E97660")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000095")]
		[Address(RVA = "0x2CDDA10", Offset = "0x2CDC010", VA = "0x182CDDA10")]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public float yAdvance
	{
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x2EAE460", Offset = "0x2EACA60", VA = "0x182EAE460")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x298BAD0", Offset = "0x298A0D0", VA = "0x18298BAD0")]
	public GlyphValueRecord(float xPlacement, float yPlacement, float xAdvance, float yAdvance)
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x3002D20", Offset = "0x3001320", VA = "0x183002D20")]
	public static GlyphValueRecord operator +(GlyphValueRecord a, GlyphValueRecord b)
	{
		return default(GlyphValueRecord);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x3002CD0", Offset = "0x30012D0", VA = "0x183002CD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x3002BF0", Offset = "0x30011F0", VA = "0x183002BF0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x3002C50", Offset = "0x3001250", VA = "0x183002C50", Slot = "4")]
	public bool Equals(GlyphValueRecord other)
	{
		return default(bool);
	}
}
