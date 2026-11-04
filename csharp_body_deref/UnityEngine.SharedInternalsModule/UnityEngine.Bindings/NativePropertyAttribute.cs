// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Bindings.NativePropertyAttribute
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x200000E")]
[VisibleToOtherModules]
[AttributeUsage(AttributeTargets.Property)]
internal class NativePropertyAttribute : NativeMethodAttribute
{
	[Token(Token = "0x1700000D")]
	public TargetType TargetType
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public NativePropertyAttribute()
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x2FF7230", Offset = "0x2FF5830", VA = "0x182FF7230")]
	public NativePropertyAttribute(string name)
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x2FF7240", Offset = "0x2FF5840", VA = "0x182FF7240")]
	public NativePropertyAttribute(string name, bool isFree, TargetType targetType)
	{
	}
}
