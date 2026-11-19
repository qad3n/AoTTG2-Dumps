// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LocalKeywordSpace
// Update status: unchanged since the previous dump
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
	[Token(Token = "0x4000C94")]
	[FieldOffset(Offset = "0x0")]
	private readonly IntPtr m_KeywordSpace;

	[Token(Token = "0x170003CC")]
	public uint keywordCount
	{
		[Token(Token = "0x60017A0")]
		[Address(RVA = "0x6969190", Offset = "0x6968190", VA = "0x6969190")]
		get
		{
			return default(uint);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600179F")]
	[Address(RVA = "0x6969160", Offset = "0x6968160", VA = "0x6969160")]
	[UnityEngine.Bindings.FreeFunction("keywords::GetKeywordCount", HasExplicitThis = true)]
	private extern uint GetKeywordCount();

	[Token(Token = "0x60017A1")]
	[Address(RVA = "0x69691C0", Offset = "0x69681C0", VA = "0x69691C0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x60017A2")]
	[Address(RVA = "0x6969220", Offset = "0x6968220", VA = "0x6969220", Slot = "4")]
	public bool Equals(LocalKeywordSpace rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60017A3")]
	[Address(RVA = "0x6969110", Offset = "0x6968110", VA = "0x6969110")]
	public static bool operator ==(LocalKeywordSpace lhs, LocalKeywordSpace rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60017A4")]
	[Address(RVA = "0x6969150", Offset = "0x6968150", VA = "0x6969150", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
