// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsForwardAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001E2")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Interface)]
public sealed class fsForwardAttribute : Attribute
{
	[Token(Token = "0x4000963")]
	[FieldOffset(Offset = "0x10")]
	public string MemberName;

	[Token(Token = "0x6001187")]
	[Address(RVA = "0x4D6DF20", Offset = "0x4D6DF20", VA = "0x4D6DF20")]
	public fsForwardAttribute(string memberName)
	{
	}
}
