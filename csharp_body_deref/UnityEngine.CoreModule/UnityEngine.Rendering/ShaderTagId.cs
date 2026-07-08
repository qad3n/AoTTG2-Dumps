using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002F9")]
public struct ShaderTagId : IEquatable<ShaderTagId>
{
	[Token(Token = "0x4000912")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ShaderTagId none;

	[Token(Token = "0x4000913")]
	[FieldOffset(Offset = "0x0")]
	private int m_Id;

	[Token(Token = "0x1700029F")]
	internal int id
	{
		[Token(Token = "0x60010B3")]
		[Address(RVA = "0x4B060F0", Offset = "0x4B060F0", VA = "0x4B060F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60010B4")]
		[Address(RVA = "0x4B062D0", Offset = "0x4B062D0", VA = "0x4B062D0")]
		set
		{
		}
	}

	[Token(Token = "0x60010B2")]
	[Address(RVA = "0x4B0B390", Offset = "0x4B0B390", VA = "0x4B0B390")]
	public ShaderTagId(string name)
	{
	}

	[Token(Token = "0x60010B5")]
	[Address(RVA = "0x4B0B3B0", Offset = "0x4B0B3B0", VA = "0x4B0B3B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B6")]
	[Address(RVA = "0x4B06590", Offset = "0x4B06590", VA = "0x4B06590", Slot = "4")]
	public bool Equals(ShaderTagId other)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B7")]
	[Address(RVA = "0x4B09F00", Offset = "0x4B09F00", VA = "0x4B09F00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60010B8")]
	[Address(RVA = "0x4B09CE0", Offset = "0x4B09CE0", VA = "0x4B09CE0")]
	public static bool operator ==(ShaderTagId tag1, ShaderTagId tag2)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B9")]
	[Address(RVA = "0x4B0B410", Offset = "0x4B0B410", VA = "0x4B0B410")]
	public static bool operator !=(ShaderTagId tag1, ShaderTagId tag2)
	{
		return default(bool);
	}
}
