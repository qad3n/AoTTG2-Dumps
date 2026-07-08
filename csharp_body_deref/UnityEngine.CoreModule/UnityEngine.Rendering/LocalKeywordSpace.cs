using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Rendering;

[Token(Token = "0x200031C")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Keywords/KeywordSpaceScriptBindings.h")]
public readonly struct LocalKeywordSpace : IEquatable<LocalKeywordSpace>
{
	[Token(Token = "0x40009E2")]
	[FieldOffset(Offset = "0x0")]
	private readonly IntPtr m_KeywordSpace;

	[Token(Token = "0x600111C")]
	[Address(RVA = "0x4B0E8D0", Offset = "0x4B0E8D0", VA = "0x4B0E8D0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x600111D")]
	[Address(RVA = "0x4B0E930", Offset = "0x4B0E930", VA = "0x4B0E930", Slot = "4")]
	public bool Equals(LocalKeywordSpace rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600111E")]
	[Address(RVA = "0x4B0E880", Offset = "0x4B0E880", VA = "0x4B0E880")]
	public static bool operator ==(LocalKeywordSpace lhs, LocalKeywordSpace rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600111F")]
	[Address(RVA = "0x4B0E8C0", Offset = "0x4B0E8C0", VA = "0x4B0E8C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
