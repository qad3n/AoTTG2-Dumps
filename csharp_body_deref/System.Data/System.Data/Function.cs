// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Function
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000061")]
internal sealed class Function
{
	[Token(Token = "0x4000223")]
	[FieldOffset(Offset = "0x10")]
	internal readonly string _name;

	[Token(Token = "0x4000224")]
	[FieldOffset(Offset = "0x18")]
	internal readonly FunctionId _id;

	[Token(Token = "0x4000225")]
	[FieldOffset(Offset = "0x20")]
	internal readonly Type _result;

	[Token(Token = "0x4000226")]
	[FieldOffset(Offset = "0x28")]
	internal readonly bool _isValidateArguments;

	[Token(Token = "0x4000227")]
	[FieldOffset(Offset = "0x29")]
	internal readonly bool _isVariantArgumentList;

	[Token(Token = "0x4000228")]
	[FieldOffset(Offset = "0x2C")]
	internal readonly int _argumentCount;

	[Token(Token = "0x4000229")]
	[FieldOffset(Offset = "0x30")]
	internal readonly Type[] _parameters;

	[Token(Token = "0x400022A")]
	[FieldOffset(Offset = "0x0")]
	internal static string[] s_functionName;

	[Token(Token = "0x6000662")]
	[Address(RVA = "0x45B2A70", Offset = "0x45B2A70", VA = "0x45B2A70")]
	internal Function(string name, FunctionId id, Type result, bool IsValidateArguments, bool IsVariantArgumentList, int argumentCount, Type a1, Type a2, Type a3)
	{
	}
}
