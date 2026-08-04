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

[Token(Token = "0x20002FC")]
public struct ShaderTagId : IEquatable<ShaderTagId>
{
	[Token(Token = "0x4000912")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ShaderTagId none;

	[Token(Token = "0x4000913")]
	[FieldOffset(Offset = "0x0")]
	private int m_Id;

	[Token(Token = "0x170002A0")]
	internal int id
	{
		[Token(Token = "0x60010B5")]
		[Address(RVA = "0x4E2DA20", Offset = "0x4E2DA20", VA = "0x4E2DA20")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60010B6")]
		[Address(RVA = "0x4E2DC00", Offset = "0x4E2DC00", VA = "0x4E2DC00")]
		set
		{
		}
	}

	[Token(Token = "0x60010B4")]
	[Address(RVA = "0x4E32CC0", Offset = "0x4E32CC0", VA = "0x4E32CC0")]
	public ShaderTagId(string name)
	{
	}

	[Token(Token = "0x60010B7")]
	[Address(RVA = "0x4E32CE0", Offset = "0x4E32CE0", VA = "0x4E32CE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B8")]
	[Address(RVA = "0x4E2DEC0", Offset = "0x4E2DEC0", VA = "0x4E2DEC0", Slot = "4")]
	public bool Equals(ShaderTagId other)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B9")]
	[Address(RVA = "0x4E31830", Offset = "0x4E31830", VA = "0x4E31830", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60010BA")]
	[Address(RVA = "0x4E31610", Offset = "0x4E31610", VA = "0x4E31610")]
	public static bool operator ==(ShaderTagId tag1, ShaderTagId tag2)
	{
		return default(bool);
	}

	[Token(Token = "0x60010BB")]
	[Address(RVA = "0x4E32D40", Offset = "0x4E32D40", VA = "0x4E32D40")]
	public static bool operator !=(ShaderTagId tag1, ShaderTagId tag2)
	{
		return default(bool);
	}
}
