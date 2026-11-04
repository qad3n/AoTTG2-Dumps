// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Function
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200001E")]
internal sealed class Function
{
	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x10")]
	internal readonly string _name;

	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x18")]
	internal readonly FunctionId _id;

	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x20")]
	internal readonly Type _result;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x28")]
	internal readonly bool _isValidateArguments;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x29")]
	internal readonly bool _isVariantArgumentList;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x2C")]
	internal readonly int _argumentCount;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x30")]
	internal readonly Type[] _parameters;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x0")]
	internal static string[] s_functionName;

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x24FED10", Offset = "0x24FD310", VA = "0x1824FED10")]
	internal Function(string name, FunctionId id, Type result, bool IsValidateArguments, bool IsVariantArgumentList, int argumentCount, Type a1, Type a2, Type a3)
	{
	}
}
