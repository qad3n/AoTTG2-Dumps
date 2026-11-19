// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.GlyphValueRecord
// Update status: unchanged since the previous dump
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
		[Token(Token = "0x6000094")]
		[Address(RVA = "0x69FCF10", Offset = "0x69FBF10", VA = "0x69FCF10")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000095")]
		[Address(RVA = "0x69FCF20", Offset = "0x69FBF20", VA = "0x69FCF20")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public float yPlacement
	{
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x69FCF30", Offset = "0x69FBF30", VA = "0x69FCF30")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x69FCF40", Offset = "0x69FBF40", VA = "0x69FCF40")]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	public float xAdvance
	{
		[Token(Token = "0x6000098")]
		[Address(RVA = "0x69FCF50", Offset = "0x69FBF50", VA = "0x69FCF50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x69FCF60", Offset = "0x69FBF60", VA = "0x69FCF60")]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public float yAdvance
	{
		[Token(Token = "0x600009A")]
		[Address(RVA = "0x69FCF70", Offset = "0x69FBF70", VA = "0x69FCF70")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x69FCF80", Offset = "0x69FBF80", VA = "0x69FCF80")]
	public GlyphValueRecord(float xPlacement, float yPlacement, float xAdvance, float yAdvance)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x69FCFA0", Offset = "0x69FBFA0", VA = "0x69FCFA0")]
	public static GlyphValueRecord operator +(GlyphValueRecord a, GlyphValueRecord b)
	{
		return default(GlyphValueRecord);
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x69FCFB0", Offset = "0x69FBFB0", VA = "0x69FCFB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x69FD000", Offset = "0x69FC000", VA = "0x69FD000", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x69FD060", Offset = "0x69FC060", VA = "0x69FD060", Slot = "4")]
	public bool Equals(GlyphValueRecord other)
	{
		return default(bool);
	}
}
