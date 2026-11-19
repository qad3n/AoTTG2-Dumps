// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ShaderTagId
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000399")]
public struct ShaderTagId : IEquatable<ShaderTagId>
{
	[Token(Token = "0x4000AF9")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ShaderTagId none;

	[Token(Token = "0x4000AFA")]
	[FieldOffset(Offset = "0x0")]
	private int m_Id;

	[Token(Token = "0x17000385")]
	internal int id
	{
		[Token(Token = "0x60016A4")]
		[Address(RVA = "0x695A4F0", Offset = "0x69594F0", VA = "0x695A4F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60016A5")]
		[Address(RVA = "0x695A730", Offset = "0x6959730", VA = "0x695A730")]
		set
		{
		}
	}

	[Token(Token = "0x17000386")]
	public string name
	{
		[Token(Token = "0x60016A6")]
		[Address(RVA = "0x6961BA0", Offset = "0x6960BA0", VA = "0x6961BA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60016A3")]
	[Address(RVA = "0x6961B80", Offset = "0x6960B80", VA = "0x6961B80")]
	public ShaderTagId(string name)
	{
	}

	[Token(Token = "0x60016A7")]
	[Address(RVA = "0x6961BB0", Offset = "0x6960BB0", VA = "0x6961BB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60016A8")]
	[Address(RVA = "0x695AAA0", Offset = "0x6959AA0", VA = "0x695AAA0", Slot = "4")]
	public bool Equals(ShaderTagId other)
	{
		return default(bool);
	}

	[Token(Token = "0x60016A9")]
	[Address(RVA = "0x695F330", Offset = "0x695E330", VA = "0x695F330", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60016AA")]
	[Address(RVA = "0x695F0E0", Offset = "0x695E0E0", VA = "0x695F0E0")]
	public static bool operator ==(ShaderTagId tag1, ShaderTagId tag2)
	{
		return default(bool);
	}

	[Token(Token = "0x60016AB")]
	[Address(RVA = "0x6961C10", Offset = "0x6960C10", VA = "0x6961C10")]
	public static bool operator !=(ShaderTagId tag1, ShaderTagId tag2)
	{
		return default(bool);
	}
}
