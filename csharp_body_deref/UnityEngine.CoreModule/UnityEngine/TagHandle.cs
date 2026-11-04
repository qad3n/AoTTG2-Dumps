// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TagHandle
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20001B6")]
[UnityEngine.Bindings.StaticAccessor("GetTagManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/BaseClasses/TagManager.h")]
public struct TagHandle
{
	[Token(Token = "0x4000633")]
	[FieldOffset(Offset = "0x0")]
	private uint _tagIndex;

	[Token(Token = "0x6000E39")]
	[Address(RVA = "0x2F28D50", Offset = "0x2F27350", VA = "0x182F28D50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000E3A")]
	[Address(RVA = "0x2F28CA0", Offset = "0x2F272A0", VA = "0x182F28CA0")]
	private static string TagToString(uint tagIndex)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E3B")]
	[Address(RVA = "0x2F28C60", Offset = "0x2F27260", VA = "0x182F28C60")]
	private static extern void TagToString_Injected(uint tagIndex, out ManagedSpanWrapper ret);
}
