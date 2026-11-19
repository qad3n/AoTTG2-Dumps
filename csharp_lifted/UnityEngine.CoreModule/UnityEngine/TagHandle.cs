// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TagHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20001B7")]
[UnityEngine.Bindings.NativeHeader("Runtime/BaseClasses/TagManager.h")]
[UnityEngine.Bindings.StaticAccessor("GetTagManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
public struct TagHandle
{
	[Token(Token = "0x4000638")]
	[FieldOffset(Offset = "0x0")]
	private uint _tagIndex;

	[Token(Token = "0x6000E4B")]
	[Address(RVA = "0x691E820", Offset = "0x691D820", VA = "0x691E820", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x691E830", Offset = "0x691D830", VA = "0x691E830")]
	private static string TagToString(uint tagIndex)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E4D")]
	[Address(RVA = "0x691E900", Offset = "0x691D900", VA = "0x691E900")]
	private static extern void TagToString_Injected(uint tagIndex, out ManagedSpanWrapper ret);
}
