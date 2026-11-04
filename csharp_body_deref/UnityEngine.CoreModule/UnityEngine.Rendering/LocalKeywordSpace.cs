// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LocalKeywordSpace
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003D7")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Keywords/KeywordSpaceScriptBindings.h")]
public readonly struct LocalKeywordSpace : IEquatable<LocalKeywordSpace>
{
	[Token(Token = "0x4000C96")]
	[FieldOffset(Offset = "0x0")]
	private readonly IntPtr m_KeywordSpace;

	[Token(Token = "0x170003C7")]
	public uint keywordCount
	{
		[Token(Token = "0x600178C")]
		[Address(RVA = "0x2F67B10", Offset = "0x2F66110", VA = "0x182F67B10")]
		get
		{
			return default(uint);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600178B")]
	[Address(RVA = "0x2F67B10", Offset = "0x2F66110", VA = "0x182F67B10")]
	[UnityEngine.Bindings.FreeFunction("keywords::GetKeywordCount", HasExplicitThis = true)]
	private extern uint GetKeywordCount();

	[Token(Token = "0x600178D")]
	[Address(RVA = "0x2F67A80", Offset = "0x2F66080", VA = "0x182F67A80", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x600178E")]
	[Address(RVA = "0xD147E0", Offset = "0xD12DE0", VA = "0x180D147E0", Slot = "4")]
	public bool Equals(LocalKeywordSpace rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600178F")]
	[Address(RVA = "0x2F67B50", Offset = "0x2F66150", VA = "0x182F67B50")]
	public static bool operator ==(LocalKeywordSpace lhs, LocalKeywordSpace rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001790")]
	[Address(RVA = "0x2ED9490", Offset = "0x2ED7A90", VA = "0x182ED9490", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
