// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ShaderTagId
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003C5")]
public struct ShaderTagId : IEquatable<ShaderTagId>
{
	[Token(Token = "0x4000C19")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ShaderTagId none;

	[Token(Token = "0x4000C1A")]
	[FieldOffset(Offset = "0x0")]
	private int m_Id;

	[Token(Token = "0x17000397")]
	internal int id
	{
		[Token(Token = "0x60016FF")]
		[Address(RVA = "0xD18930", Offset = "0xD16F30", VA = "0x180D18930")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001700")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		set
		{
		}
	}

	[Token(Token = "0x17000398")]
	public string name
	{
		[Token(Token = "0x6001701")]
		[Address(RVA = "0x2F71600", Offset = "0x2F6FC00", VA = "0x182F71600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60016FE")]
	[Address(RVA = "0x2F715E0", Offset = "0x2F6FBE0", VA = "0x182F715E0")]
	public ShaderTagId(string name)
	{
	}

	[Token(Token = "0x6001702")]
	[Address(RVA = "0x2F71530", Offset = "0x2F6FB30", VA = "0x182F71530", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001703")]
	[Address(RVA = "0x2ED9400", Offset = "0x2ED7A00", VA = "0x182ED9400", Slot = "4")]
	public bool Equals(ShaderTagId other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001704")]
	[Address(RVA = "0x2F715C0", Offset = "0x2F6FBC0", VA = "0x182F715C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001705")]
	[Address(RVA = "0x2F24CA0", Offset = "0x2F232A0", VA = "0x182F24CA0")]
	public static bool operator ==(ShaderTagId tag1, ShaderTagId tag2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001706")]
	[Address(RVA = "0x2F71610", Offset = "0x2F6FC10", VA = "0x182F71610")]
	public static bool operator !=(ShaderTagId tag1, ShaderTagId tag2)
	{
		return default(bool);
	}
}
